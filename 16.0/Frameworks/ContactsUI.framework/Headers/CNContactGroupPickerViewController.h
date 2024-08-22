// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNCONTACTGROUPPICKERVIEWCONTROLLER_H
#define CNCONTACTGROUPPICKERVIEWCONTROLLER_H

@class UIViewController, UICollectionView, NSString, UICollectionViewDiffableDataSource, _UIDiffableDataSourceOutlineSectionController, NSArray;
@protocol UICollectionViewDelegate, CNContactGroupPickerViewControllerDelegate;


#import "CNAccountsAndGroupsDataSource.h"

@interface CNContactGroupPickerViewController : UIViewController <UICollectionViewDelegate>



@property (retain, nonatomic) CNAccountsAndGroupsDataSource *accountsAndGroupsDataSource; // ivar: _accountsAndGroupsDataSource
@property (retain, nonatomic) UICollectionView *collectionView; // ivar: _collectionView
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CNContactGroupPickerViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UICollectionViewDiffableDataSource *diffableDataSource; // ivar: _diffableDataSource
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _UIDiffableDataSourceOutlineSectionController *sectionController; // ivar: _sectionController
@property (retain, nonatomic) NSArray *sourceAccountExternalIdentifiers; // ivar: _sourceAccountExternalIdentifiers
@property (readonly) Class superclass;


+(id)os_log;
-(BOOL)collectionView:(id)arg0 shouldHighlightItemAtIndexPath:(id)arg1 ;
-(BOOL)collectionView:(id)arg0 shouldSelectItemAtIndexPath:(id)arg1 ;
-(BOOL)isValidGroupAtIndexPath:(id)arg0 ;
-(id)accessoryTintColorForStateEnabled:(BOOL)arg0 ;
-(id)cellAccessoriesForItem:(id)arg0 enabled:(BOOL)arg1 ;
-(id)initWithContactStore:(id)arg0 ;
-(id)initWithContactStore:(id)arg0 sourceAccountExternalIdentifiers:(id)arg1 ;
-(struct NSDirectionalEdgeInsets )bottomSeparatorInsetsForIndexPath:(id)arg0 configuration:(id)arg1 ;
-(void)_updateContentUnavailableConfigurationUsingState:(id)arg0 ;
-(void)cancel:(id)arg0 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)reloadData;
-(void)setupCollectionView;
-(void)setupDiffableDataSource;
-(void)setupNavigationButtons;
-(void)viewDidLoad;


@end


#endif