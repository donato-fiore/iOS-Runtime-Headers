// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNCONTACTCONTAINERPICKERVIEWCONTROLLER_H
#define CNCONTACTCONTAINERPICKERVIEWCONTROLLER_H

@class UIViewController, UICollectionView, NSArray, UICollectionViewDiffableDataSource, NSString;
@protocol UICollectionViewDelegate, CNContactContainerPickerViewControllerDelegate;


#import "CNAccountsAndGroupsDataSource.h"
#import "CNContactViewCache.h"

@interface CNContactContainerPickerViewController : UIViewController <UICollectionViewDelegate>



@property (retain, nonatomic) CNAccountsAndGroupsDataSource *accountsDataSource; // ivar: _accountsDataSource
@property (retain, nonatomic) UICollectionView *collectionView; // ivar: _collectionView
@property (retain, nonatomic) CNContactViewCache *contactViewCache; // ivar: _contactViewCache
@property (retain, nonatomic) NSArray *containers; // ivar: _containers
@property (retain, nonatomic) UICollectionViewDiffableDataSource *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CNContactContainerPickerViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *items; // ivar: _items
@property (retain, nonatomic) NSArray *selectedContainerIdentifiers; // ivar: _selectedContainerIdentifiers
@property (readonly) Class superclass;


+(id)os_log;
-(BOOL)collectionView:(id)arg0 shouldDeselectItemAtIndexPath:(id)arg1 ;
-(BOOL)collectionView:(id)arg0 shouldSelectItemAtIndexPath:(id)arg1 ;
-(id)allAccounts;
-(id)currentSnapshot;
-(id)dataSourceWithCellRegistration:(id)arg0 ;
-(id)initWithContactViewCache:(id)arg0 selectedContainerIdentifiers:(id)arg1 ;
-(id)writableContainersForAccount:(id)arg0 ;
-(void)collectionView:(id)arg0 didDeselectItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)discoverContainers;
-(void)reloadData;
-(void)setupCollectionView;
-(void)setupDiffableDataSource;
-(void)setupDoneButton;
-(void)viewDidLoad;


@end


#endif