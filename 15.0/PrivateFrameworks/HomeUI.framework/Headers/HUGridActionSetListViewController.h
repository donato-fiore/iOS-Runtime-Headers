// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUGRIDACTIONSETLISTVIEWCONTROLLER_H
#define HUGRIDACTIONSETLISTVIEWCONTROLLER_H

@class HFWallpaperSlice, NSString, UILabel;
@protocol HFItemManagerDelegate, HUGridActionSetListViewControllerDelegate;


#import "HUControllableItemCollectionViewController.h"
#import "HUGridActionSetItemManager.h"
#import "HUGridLayoutOptions.h"
#import "HUWallpaperView.h"

@interface HUGridActionSetListViewController : HUControllableItemCollectionViewController <HFItemManagerDelegate>



@property (readonly, nonatomic) HUGridActionSetItemManager *actionSetItemManager;
@property (weak, nonatomic) NSObject<HUGridActionSetListViewControllerDelegate> *actionSetListViewControllerDelegate; // ivar: _actionSetListViewControllerDelegate
@property (retain, nonatomic) HFWallpaperSlice *blurredWallpaperSlice;
@property (retain, nonatomic) HFWallpaperSlice *darkModeBlurredWallpaperSlice;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) HUGridLayoutOptions *layoutOptions;
@property (nonatomic) BOOL shouldAllowItemPresentation; // ivar: _shouldAllowItemPresentation
@property (readonly) Class superclass;
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (retain, nonatomic) HUWallpaperView *wallpaperView;


+(CGFloat)requiredHeightWithLayoutOptions:(id)arg0 numberOfItems:(NSUInteger)arg1 ;
+(NSUInteger)updateMode;
-(BOOL)_canShowWhileLocked;
-(BOOL)canReorderItemAtIndexPath:(id)arg0 ;
-(BOOL)collectionView:(id)arg0 canFocusItemAtIndexPath:(id)arg1 ;
-(BOOL)collectionView:(id)arg0 shouldHighlightItemAtIndexPath:(id)arg1 ;
-(BOOL)hasDetailsActionForPresentationCoordinator:(id)arg0 item:(id)arg1 ;
-(BOOL)presentationCoordinator:(id)arg0 shouldBeginPresentationWithContext:(id)arg1 ;
-(Class)cellClassForItem:(id)arg0 indexPath:(id)arg1 ;
-(NSInteger)_scrollDirectionForLayoutOptions:(id)arg0 ;
-(id)_detailsViewControllerForActionSetItem:(id)arg0 ;
-(id)_performTapActionForItem:(id)arg0 ;
-(id)detailsViewControllerForPresentationCoordinator:(id)arg0 item:(id)arg1 ;
-(id)init;
-(id)initWithRoom:(id)arg0 onlyShowFavorites:(BOOL)arg1 ;
-(id)itemManager:(id)arg0 futureToUpdateItems:(id)arg1 itemUpdateOptions:(id)arg2 ;
-(id)reorderableHomeKitItemListForSection:(NSInteger)arg0 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2 ;
-(void)_internalSetLayoutOptions:(id)arg0 ;
-(void)_updateLayoutScrollDirectionIfNeeded;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)configureCell:(id)arg0 forItem:(id)arg1 ;
-(void)diffableDataItemManager:(id)arg0 didUpdateItems:(id)arg1 addItems:(id)arg2 removeItems:(id)arg3 ;
-(void)itemManager:(id)arg0 didInsertItem:(id)arg1 atIndexPath:(id)arg2 ;
-(void)itemManager:(id)arg0 didRemoveItem:(id)arg1 atIndexPath:(id)arg2 ;
-(void)scrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint )arg1 targetContentOffset:(struct CGPoint *)arg2 ;
-(void)setReorderableHomeKitItemList:(id)arg0 forSection:(NSInteger)arg1 ;
-(void)viewDidLoad;


@end


#endif