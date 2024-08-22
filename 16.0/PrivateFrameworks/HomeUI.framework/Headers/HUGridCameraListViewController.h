// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUGRIDCAMERALISTVIEWCONTROLLER_H
#define HUGRIDCAMERALISTVIEWCONTROLLER_H

@class HFWallpaperSlice, NSString;
@protocol HUCameraControllerDelegate, HUHomeKitObjectPresenting;


#import "HUControllableItemCollectionViewController.h"
#import "HUCameraController.h"
#import "HUGridCameraItemManager.h"
#import "HUGridLayoutOptions.h"
#import "HUWallpaperView_legacy.h"

@interface HUGridCameraListViewController : HUControllableItemCollectionViewController <HUCameraControllerDelegate, HUHomeKitObjectPresenting>

 {
    BOOL _useCustomDragAndDrop;
}


@property (retain, nonatomic) HFWallpaperSlice *blurredWallpaperSlice;
@property (retain, nonatomic) HUCameraController *cameraController; // ivar: _cameraController
@property (readonly, nonatomic) HUGridCameraItemManager *cameraItemManager;
@property (retain, nonatomic) HFWallpaperSlice *darkModeBlurredWallpaperSlice; // ivar: _darkModeBlurredWallpaperSlice
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) HUGridLayoutOptions *layoutOptions;
@property (retain, nonatomic) HUWallpaperView_legacy *legacyWallpaperView;
@property (readonly) Class superclass;


+(CGFloat)requiredHeightWithLayoutOptions:(id)arg0 numberOfItems:(NSUInteger)arg1 ;
+(NSUInteger)updateMode;
-(BOOL)canReorderItemAtIndexPath:(id)arg0 ;
-(BOOL)collectionView:(id)arg0 shouldHighlightItemAtIndexPath:(id)arg1 ;
-(BOOL)hasDetailsActionForPresentationCoordinator:(id)arg0 item:(id)arg1 ;
-(BOOL)presentationCoordinator:(id)arg0 shouldBeginInteractivePresentationWithTouchLocation:(struct CGPoint )arg1 view:(id)arg2 ;
-(BOOL)useCustomDragAndDrop;
-(Class)cellClassForItem:(id)arg0 indexPath:(id)arg1 ;
-(NSInteger)_scrollDirectionForLayoutOptions:(id)arg0 ;
-(id)_detailsViewControllerForCameraItem:(id)arg0 ;
-(id)_presentCameraItem:(id)arg0 forFuture:(id)arg1 animated:(BOOL)arg2 ;
-(id)_presentCameraPlayerViewControllerForCameraItem:(id)arg0 forCameraClip:(id)arg1 animated:(BOOL)arg2 ;
-(id)_presentCameraPlayerViewControllerForCameraItem:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 animated:(BOOL)arg3 ;
-(id)_presentCameraPlayerViewControllerForCameraItem:(id)arg0 withConfiguration:(id)arg1 ;
-(id)_presentDetailsViewControllerForCameraItem:(id)arg0 animated:(BOOL)arg1 ;
-(id)_sourceViewForPresentingCameraItem:(id)arg0 ;
-(id)customContextualMenuItemsForItem:(id)arg0 ;
-(id)detailsViewControllerForCameraItem:(id)arg0 ;
-(id)detailsViewControllerForPresentationCoordinator:(id)arg0 item:(id)arg1 ;
-(id)hu_preloadContent;
-(id)init;
-(id)initWithRoom:(id)arg0 onlyShowFavorites:(BOOL)arg1 ;
-(id)itemManager:(id)arg0 futureToUpdateItems:(id)arg1 itemUpdateOptions:(id)arg2 ;
-(id)presentCameraItem:(id)arg0 forCameraClip:(id)arg1 animated:(BOOL)arg2 ;
-(id)presentCameraItem:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 animated:(BOOL)arg3 ;
-(id)presentCameraProfile:(id)arg0 forCameraClip:(id)arg1 animated:(BOOL)arg2 ;
-(id)presentCameraProfile:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 animated:(BOOL)arg3 ;
-(id)presentHomeKitObject:(id)arg0 destination:(NSUInteger)arg1 animated:(BOOL)arg2 ;
-(id)reorderableItemListForSection:(NSInteger)arg0 ;
-(id)targetViewForDismissingCameraProfile:(id)arg0 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2 ;
-(struct CGSize )preferredContentSizeForCollectionViewContentSize:(struct CGSize )arg0 ;
-(void)_internalSetLayoutOptions:(id)arg0 ;
-(void)_logInteractionEventOfType:(NSUInteger)arg0 withItem:(id)arg1 ;
-(void)_setCamerasEnabled:(BOOL)arg0 forCells:(id)arg1 ;
-(void)_showCameraViewerForSelectedMenuItem;
-(void)_updateLayoutScrollDirectionIfNeeded;
-(void)collectionView:(id)arg0 didEndDisplayingCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)configureCell:(id)arg0 forItem:(id)arg1 ;
-(void)didDismissCameraController:(id)arg0 ForProfile:(id)arg1 ;
-(void)diffableDataItemManager:(id)arg0 didUpdateItems:(id)arg1 addItems:(id)arg2 removeItems:(id)arg3 ;
-(void)itemManager:(id)arg0 didInsertItem:(id)arg1 atIndexPath:(id)arg2 ;
-(void)scrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint )arg1 targetContentOffset:(struct CGPoint *)arg2 ;
-(void)setReorderableItemList:(id)arg0 forSection:(NSInteger)arg1 ;
-(void)setUseCustomDragAndDrop:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif