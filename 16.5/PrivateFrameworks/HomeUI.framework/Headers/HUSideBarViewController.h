// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUSIDEBARVIEWCONTROLLER_H
#define HUSIDEBARVIEWCONTROLLER_H

@class UIView, NSString, HMHome;
@protocol UICollectionViewDelegate, UIViewControllerTransitioningDelegate, UICollectionViewDropDelegate, HFItemManagerDelegate, HFHomeObserver, HUSideBarDelegate;


#import "HUItemCollectionViewController.h"
#import "HUSideBarItemManager.h"

@interface HUSideBarViewController : HUItemCollectionViewController <UICollectionViewDelegate, UIViewControllerTransitioningDelegate, UICollectionViewDropDelegate, HFItemManagerDelegate, HFHomeObserver>



@property (retain, nonatomic) UIView *blurView; // ivar: _blurView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL hideRoomSection; // ivar: _hideRoomSection
@property (retain, nonatomic) HMHome *home; // ivar: _home
@property (retain, nonatomic) HUSideBarItemManager *itemManager;
@property (nonatomic) BOOL shouldUseDashboardEffects; // ivar: _shouldUseDashboardEffects
@property (weak, nonatomic) NSObject<HUSideBarDelegate> *sideBarDelegate; // ivar: _sideBarDelegate
@property (readonly) Class superclass;


-(BOOL)collectionView:(id)arg0 canMoveItemAtIndexPath:(id)arg1 ;
-(Class)cellClassForItem:(id)arg0 indexPath:(id)arg1 ;
-(NSInteger)preferredStatusBarStyle;
-(id)collectionView:(id)arg0 dropSessionDidUpdate:(id)arg1 withDestinationIndexPath:(id)arg2 ;
-(id)collectionView:(id)arg0 targetIndexPathForMoveOfItemFromOriginalIndexPath:(id)arg1 atCurrentIndexPath:(id)arg2 toProposedIndexPath:(id)arg3 ;
-(id)collectionView:(id)arg0 viewForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)initWithDelegate:(id)arg0 forHome:(id)arg1 ;
-(void)_selectItemAtIndexPath:(id)arg0 ;
-(void)_sendSideBarInteractionEventForItem:(id)arg0 ;
-(void)_updateAppearance;
-(void)_updateBlurView;
-(void)_updateNavigationBar;
-(void)_updateShouldUseDashboardEffects;
-(void)_updateSplitViewSeparator;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 moveItemAtIndexPath:(id)arg1 toIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg0 performDropWithCoordinator:(id)arg1 ;
-(void)configureCell:(id)arg0 forItem:(id)arg1 ;
-(void)didReorderItemWithSortedItemsBySectionID:(id)arg0 ;
-(void)diffableDataItemManager:(id)arg0 didUpdateItems:(id)arg1 addItems:(id)arg2 removeItems:(id)arg3 ;
-(void)home:(id)arg0 didAddAccessory:(id)arg1 ;
-(void)home:(id)arg0 didRemoveAccessory:(id)arg1 ;
-(void)homeDidUpdateApplicationData:(id)arg0 ;
-(void)homeDidUpdateToROAR:(id)arg0 ;
-(void)refreshSideBarSelection;
-(void)switchToDiscover;
-(void)switchToSelectedHome:(id)arg0 ;
-(void)updateSelectionToItem:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif