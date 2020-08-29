#include<iostream>
using namespace std;
int sort(int arr[5]);
int main()
{
	int arr[5];

	for (int i = 0; i < 5; ++i)
	{
		cout << "Enter number: ";
		cin >> arr[i];
	}
	sort(arr);
	cout << endl;
	system("pause");
}
int sort(int arr[5])
{
	int temp;
	for (int i = 1; i<5; ++i)
	{
		for (int j = 0; j<(5 - i); ++j)
			if (arr[j]<arr[j + 1]) //ass k >.......des k <.....
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}

	}
	cout << endl;
	cout << "The numbers after Bubble Sorting (descending order) are: \n";
	for (int i = 0; i<5; ++i)
	{
		cout << " " << arr[i];
	}
	return 0;
}
