// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUDASHBOARDSECTIONLISTVIEWCONTROLLER_H
#define HUDASHBOARDSECTIONLISTVIEWCONTROLLER_H

@protocol HFHomeObserver, HUCollectionLayoutManagerDelegate;


#import "HUItemCollectionViewController.h"

@interface HUDashboardSectionListViewController : HUItemCollectionViewController <HFHomeObserver, HUCollectionLayoutManagerDelegate>

 {
    ? dashboardContext;
    ? $__lazy_storage_$_layoutManager;
}




-(BOOL)collectionView:(id)arg0 canMoveItemAtIndexPath:(id)arg1 ;
-(BOOL)shouldShowHeaderForSection:(id)arg0 ;
-(Class)cellClassForItem:(id)arg0 indexPath:(id)arg1 ;
-(id)displayedItemsInSection:(id)arg0 ;
-(id)initUsingCompositionalLayoutWithItemManager:(id)arg0 ;
-(id)initWithContext:(id)arg0 ;
-(id)initWithItemManager:(id)arg0 collectionViewLayout:(id)arg1 ;
-(id)layoutSectionForSection:(NSInteger)arg0 layoutEnvironment:(id)arg1 ;
-(void)_cancel;
-(void)_done;
-(void)configureCell:(id)arg0 forItem:(id)arg1 ;
-(void)didReorderItemWithSortedItemsBySectionID:(id)arg0 ;
-(void)home:(id)arg0 didUpdateApplicationDataForRoom:(id)arg1 ;
-(void)homeDidUpdateApplicationData:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif