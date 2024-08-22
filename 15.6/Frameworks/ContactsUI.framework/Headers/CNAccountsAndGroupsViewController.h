// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNACCOUNTSANDGROUPSVIEWCONTROLLER_H
#define CNACCOUNTSANDGROUPSVIEWCONTROLLER_H

@class UIViewController, UICollectionView, NSString, UICollectionViewDiffableDataSource, _UIDiffableDataSourceOutlineSectionController, UIButton;
@protocol UICollectionViewDelegate, CNAccountsAndGroupsViewControllerDelegate;


#import "CNAccountsAndGroupsDataSource.h"

@interface CNAccountsAndGroupsViewController : UIViewController <UICollectionViewDelegate>



@property (retain) UICollectionView *collectionView; // ivar: _collectionView
@property (retain, nonatomic) CNAccountsAndGroupsDataSource *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CNAccountsAndGroupsViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain) UICollectionViewDiffableDataSource *diffableDataSource; // ivar: _diffableDataSource
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL needsReload; // ivar: _needsReload
@property (retain) _UIDiffableDataSourceOutlineSectionController *sectionController; // ivar: _sectionController
@property (retain) UIButton *showAllButton; // ivar: _showAllButton
@property (readonly) Class superclass;
@property (nonatomic) BOOL tableViewNeedsReloadAfterResume; // ivar: _tableViewNeedsReloadAfterResume


-(BOOL)collectionView:(id)arg0 shouldSelectItemAtIndexPath:(id)arg1 ;
-(id)doneButtonItem;
-(id)groupsStyle;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)layout;
-(void)applicationDidResume;
-(void)configureDataSource;
-(void)contactStoreDidChange:(id)arg0 ;
-(void)contentSizeCategoryDidChange:(id)arg0 ;
-(void)dealloc;
-(void)done:(id)arg0 ;
-(void)reloadData;
-(void)resetShowButtonFont;
-(void)toggleSelectionOfItem:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif