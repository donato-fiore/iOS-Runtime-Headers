// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXMEMORIESFEEDUIVIEWCONTROLLER_H
#define PXMEMORIESFEEDUIVIEWCONTROLLER_H

@class UIViewController, _UIContentUnavailableView, UIBarButtonItem, NSString, UIScrollView;
@protocol UIContextMenuInteractionDelegate, PXReusableObjectPoolDelegate, PXChangeObserver, UIGestureRecognizerDelegate, PXAssetCollectionActionPerformerDelegate, PXScrollViewControllerObserver, PXUIViewControllerZoomTransitionEndPoint, PXTilingControllerZoomAnimationCoordinatorDelegate, PXSectionedDataSourceManagerObserver, UIPopoverPresentationControllerDelegate, PXMemoriesFeedViewControllerHelperDelegate, PXMemoriesOnboardingViewControllerDelegate, PXMemoriesUITileSourceDelegate, PXUserInterfaceFeatureViewController, PXSettingsKeyObserver;


#import "PXPhotoAnalysisStatusController.h"
#import "PXMemoriesFeedViewControllerHelper.h"
#import "PXMemoriesOnboardingUIViewController.h"
#import "PXUIScrollViewController.h"
#import "PXPhotosDetailsContext.h"
#import "PXUITapGestureRecognizer.h"
#import "PXBasicUIViewTileAnimator.h"
#import "PXMemoriesUITileSource.h"
#import "PXTouchingUIGestureRecognizer.h"
#import "PXMemoriesFeedDataSourceManager.h"
#import "PXSectionedDataSource.h"

@interface PXMemoriesFeedUIViewController : UIViewController <UIContextMenuInteractionDelegate, PXReusableObjectPoolDelegate, PXChangeObserver, UIGestureRecognizerDelegate, PXAssetCollectionActionPerformerDelegate, PXScrollViewControllerObserver, PXUIViewControllerZoomTransitionEndPoint, PXTilingControllerZoomAnimationCoordinatorDelegate, PXSectionedDataSourceManagerObserver, UIPopoverPresentationControllerDelegate, PXMemoriesFeedViewControllerHelperDelegate, PXMemoriesOnboardingViewControllerDelegate, PXMemoriesUITileSourceDelegate, PXUserInterfaceFeatureViewController, PXSettingsKeyObserver>

 {
    BOOL _isInitialized;
    ? _needsUpdateFlags;
    BOOL _hasAppeared;
}


@property (retain, nonatomic, setter=_setContentUnavailableView:) _UIContentUnavailableView *_contentUnavailableView; // ivar: __contentUnavailableView
@property (readonly, nonatomic) PXPhotoAnalysisStatusController *_graphStatusController; // ivar: __graphStatusController
@property (readonly, nonatomic) PXMemoriesFeedViewControllerHelper *_helper; // ivar: __helper
@property (readonly, nonatomic) NSUInteger _memoriesStyle; // ivar: __memoriesStyle
@property (retain, nonatomic, setter=_setOnboardingViewController:) PXMemoriesOnboardingUIViewController *_onboardingViewController; // ivar: __onboardingViewController
@property (readonly, nonatomic) UIBarButtonItem *_refreshBarButtonItem; // ivar: __refreshBarButtonItem
@property (readonly, nonatomic) PXUIScrollViewController *_scrollViewController; // ivar: __scrollViewController
@property (retain, nonatomic, setter=_setSelectedItemDetailsContext:) PXPhotosDetailsContext *_selectedItemDetailsContext; // ivar: __selectedItemDetailsContext
@property (readonly, nonatomic) PXUITapGestureRecognizer *_tapRecognizer; // ivar: __tapRecognizer
@property (readonly, nonatomic) PXBasicUIViewTileAnimator *_tileAnimator; // ivar: __tileAnimator
@property (readonly, nonatomic) PXMemoriesUITileSource *_tileSource; // ivar: __tileSource
@property (readonly, nonatomic) PXTouchingUIGestureRecognizer *_touchRecognizer; // ivar: __touchRecognizer
@property (readonly, nonatomic) PXMemoriesFeedDataSourceManager *dataSourceManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL keepsSourceRegionOfInterestContent;
@property (readonly, nonatomic) PXSectionedDataSource *ppt_memoriesDataSource;
@property (readonly, nonatomic) UIScrollView *ppt_scrollView;
@property (retain, nonatomic, setter=setScrollTargetMemoryUUID:) NSString *scrollTargetMemoryUUID; // ivar: _scrollTargetMemoryUUID
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger userInterfaceFeature;


+(void)_setCurrentFeedViewController:(id)arg0 ;
-(BOOL)_needsUpdate;
-(BOOL)actionPerformer:(id)arg0 dismissViewController:(id)arg1 completionHandler:(id)arg2 ;
-(BOOL)actionPerformer:(id)arg0 presentViewController:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)memoriesFeedViewControllerHelperFeedIsVisible:(id)arg0 ;
-(BOOL)pu_scrollToInitialPositionAnimated:(BOOL)arg0 ;
-(BOOL)px_canPerformZoomTransitionWithDetailViewController:(id)arg0 ;
-(id)_memoryObjectReferenceForPhotosDetailsContext:(id)arg0 ;
-(id)_memoryTileViewForLocation:(struct CGPoint )arg0 ;
-(id)_photosDetailsContextForMemoryObjectReference:(id)arg0 ;
-(id)_previewActionMenusForInteraction:(id)arg0 ;
-(id)_showMemoryDetailsForContext:(id)arg0 animated:(BOOL)arg1 ;
-(id)_sourceViewForMemoryActionsController;
-(id)_suppressionContexts;
-(id)contextMenuInteraction:(id)arg0 configurationForMenuAtLocation:(struct CGPoint )arg1 ;
-(id)contextMenuInteraction:(id)arg0 previewForHighlightingMenuWithConfiguration:(id)arg1 ;
-(id)init;
-(id)initWithMemoriesStyle:(NSUInteger)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)memoriesFeedViewControllerHelperReloadedTileKindsOnObjectChanged:(id)arg0 ;
-(id)memoriesTileSource:(id)arg0 memoryToPreheatForIndexPath:(struct PXSimpleIndexPath )arg1 ;
-(id)preferredFocusEnvironments;
-(id)px_diagnosticsItemProvidersForPoint:(struct CGPoint )arg0 inCoordinateSpace:(id)arg1 ;
-(id)px_endPointForTransition:(id)arg0 ;
-(id)regionOfInterestForTransition:(id)arg0 ;
-(id)showDetailsForMemoryWithLocalIdentifier:(id)arg0 ;
-(id)zoomAnimationCoordinatorForZoomTransition:(id)arg0 ;
-(struct PXSimpleIndexPath )_memoryIndexPathForViewController:(id)arg0 ;
-(void)_applicationDidEnterBackground:(id)arg0 ;
-(void)_applicationWillEnterForeground:(id)arg0 ;
-(void)_handleScrollViewTap:(id)arg0 ;
-(void)_handleSpecChange;
-(void)_handleTouch:(id)arg0 ;
-(void)_invalidateContentUnavailablePlaceholder;
-(void)_invalidateNavigationItem;
-(void)_navigateToMemoryAtSectionObjectReference:(id)arg0 ;
-(void)_navigateToMemoryAtSectionObjectReference:(id)arg0 willPresentHandler:(id)arg1 ;
-(void)_preloadFontSpecs;
-(void)_refreshBarButtonItemAction:(id)arg0 ;
-(void)_setNeedsUpdate;
-(void)_startRefreshWithCompletion:(id)arg0 ;
-(void)_updateBarAppearance;
-(void)_updateContentUnavailablePlaceholderIfNeeded;
-(void)_updateIfNeeded;
-(void)_updateNavigationItemIfNeeded;
-(void)_updateScrollViewControllerContentInset;
-(void)contextMenuInteraction:(id)arg0 willPerformPreviewActionForMenuWithConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)dealloc;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)memoriesOnboardingViewControllerDidTapContinueButton:(id)arg0 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)playMiroMovieWithMemoryUUID:(id)arg0 ;
-(void)popoverPresentationControllerDidDismissPopover:(id)arg0 ;
-(void)ppt_navigateToLatestInteractiveMemoryWithWillPresentHandler:(id)arg0 ;
-(void)ppt_navigateToLatestMemoryAnimated:(BOOL)arg0 ;
-(void)ppt_navigateToMemoryWithReference:(id)arg0 animated:(BOOL)arg1 ;
-(void)ppt_revealMemoryWithReference:(id)arg0 animated:(BOOL)arg1 ;
-(void)prepareForInteractiveTransition:(id)arg0 ;
-(void)prepareForPopoverPresentation:(id)arg0 ;
-(void)pressesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)revealMostRecentMemoryAnimated:(BOOL)arg0 ;
-(void)scrollViewControllerWillBeginScrolling:(id)arg0 ;
-(void)scrollViewControllerWillLayoutSubviews:(id)arg0 ;
-(void)settings:(id)arg0 changedValueForKey:(id)arg1 ;
-(void)tilingControllerZoomAnimationCoordinator:(id)arg0 enumerateTilesToAnimateInLayerWithType:(NSInteger)arg1 layout:(id)arg2 zoomAnimationContext:(id)arg3 usingBlock:(id)arg4 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif