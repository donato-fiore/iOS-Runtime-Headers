// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXPHOTOSUIVIEWCONTROLLER_H
#define PXPHOTOSUIVIEWCONTROLLER_H

@class UIViewController, UIView, UIContextMenuInteraction, NSString, NSSet;
@protocol PXActionManagerProvider, PXAssetsActionReceiver, PXChangeObserver, PXPhotosContentControllerDelegate, PXScrollViewControllerObserver, PXStatusViewDelegate, PXSplitViewControllerChangeObserver, PXUserInterfaceFeatureViewController, PXPhotosBarsControllerDelegate, _PXPhotosGridContainerDelegate, PXPhotosGridStackTransitionEndpoint, UIViewControllerInteractiveTransitioning, PXPhotosViewEventTracker, PXGridPresentationBarsUpdateDelegate;


#import "PXActionManager.h"
#import "PXAssetReference.h"
#import "PXPhotosBarsController.h"
#import "PXPhotosViewConfiguration.h"
#import "PXPhotosContentController.h"
#import "PXPhotosDragController.h"
#import "PXPhotosViewUIInteraction.h"
#import "PXProgrammaticNavigationRequest.h"
#import "PXPhotosGridPlaceholderStatusController.h"
#import "PXAssetSelectionUserActivityController.h"
#import "PXPhotosViewModel.h"

@interface PXPhotosUIViewController : UIViewController <PXActionManagerProvider, PXAssetsActionReceiver, PXChangeObserver, PXPhotosContentControllerDelegate, PXScrollViewControllerObserver, PXStatusViewDelegate, PXSplitViewControllerChangeObserver, PXUserInterfaceFeatureViewController, PXPhotosBarsControllerDelegate, _PXPhotosGridContainerDelegate, PXPhotosGridStackTransitionEndpoint>



@property (retain, nonatomic) UIView *alternateContentView; // ivar: _alternateContentView
@property (readonly, nonatomic) PXActionManager *assetActionManager;
@property (readonly, nonatomic) PXAssetReference *assetReferenceForCurrentScrollPosition;
@property (readonly, nonatomic) PXPhotosBarsController *barsController; // ivar: _barsController
@property (readonly, copy, nonatomic) PXPhotosViewConfiguration *configuration; // ivar: _configuration
@property (weak, nonatomic) UIViewController *containerViewController; // ivar: _containerViewController
@property (readonly, nonatomic) PXPhotosContentController *contentController; // ivar: _contentController
@property (readonly, nonatomic) UIContextMenuInteraction *contextMenuInteraction;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<UIViewControllerInteractiveTransitioning> *edgeSwipeDismissalInteraction;
@property (readonly, nonatomic) PXPhotosDragController *emptyPlaceholderDragController; // ivar: _emptyPlaceholderDragController
@property (retain, nonatomic) UIView *emptyPlaceholderView; // ivar: _emptyPlaceholderView
@property (readonly, nonatomic) NSObject<PXPhotosViewEventTracker> *eventTracker;
@property (weak, nonatomic) NSObject<PXGridPresentationBarsUpdateDelegate> *gridPresentationBarsUpdateDelegate; // ivar: _gridPresentationBarsUpdateDelegate
@property (nonatomic) BOOL hasScrolledToInitialPosition; // ivar: _hasScrolledToInitialPosition
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSSet *hiddenAssetReferences;
@property (nonatomic) BOOL hidesNavbar;
@property (nonatomic) BOOL hidesToolbar;
@property (readonly, nonatomic) PXPhotosViewUIInteraction *interaction;
@property (readonly, nonatomic) BOOL isScrolledToTop;
@property (retain, nonatomic) PXProgrammaticNavigationRequest *pendingInitialNavigationRequest; // ivar: _pendingInitialNavigationRequest
@property (retain, nonatomic) PXPhotosGridPlaceholderStatusController *placeholderStatusController; // ivar: _placeholderStatusController
@property (nonatomic) BOOL shouldAlwaysRespectToolbarActionPlacementPreference;
@property (nonatomic, getter=isShowingInitialLoadingPlaceholder) BOOL showingInitialLoadPlaceholder; // ivar: _showingInitialLoadPlaceholder
@property (readonly) Class superclass;
@property (readonly, nonatomic) PXAssetSelectionUserActivityController *userActivityController; // ivar: _userActivityController
@property (readonly, nonatomic) NSInteger userInterfaceFeature;
@property (readonly, nonatomic) PXPhotosViewModel *viewModel;


-(?)regionOfInterestForAssetReference:(?)arg0 imageshouldSnapshotPlaceholder;
-(?)regionOfInterestForAssetReferenceimage;
-(BOOL)_scrollToBottomAnimated:(BOOL)arg0 ;
-(BOOL)canBecomeFirstResponder;
-(BOOL)canPerformAction:(SEL)arg0 withSender:(id)arg1 ;
-(BOOL)photosContentController:(id)arg0 presentViewController:(id)arg1 ;
-(BOOL)photosContentController:(id)arg0 pushViewController:(id)arg1 ;
-(BOOL)pu_handleSecondTabTap;
-(BOOL)pu_scrollToInitialPositionAnimated:(BOOL)arg0 ;
-(BOOL)pu_shouldOptOutFromChromelessBars;
-(BOOL)px_determinesPreferredStatusBarStyle;
-(NSUInteger)routingOptionsForDestination:(id)arg0 ;
-(id)currentDataSource;
-(id)gridView;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)preferredFocusEnvironments;
-(id)presentingViewControllerForContentController:(id)arg0 ;
-(id)pu_debugCurrentlySelectedAssets;
-(id)px_diagnosticsItemProvidersForPoint:(struct CGPoint )arg0 inCoordinateSpace:(id)arg1 ;
-(id)px_navigationDestination;
-(id)regionOfInterestForAssetReference:(id)arg0 ;
-(id)regionOfInterestForTransitioningAssetReference:(id)arg0 ;
-(id)scrollView;
-(id)targetForAction:(SEL)arg0 withSender:(id)arg1 ;
-(struct UIEdgeInsets )px_layoutMargins;
-(void)_dismissOnInternalRequest;
-(void)_presentOneUpForSingleSelectedAssetWithActivity:(NSUInteger)arg0 ;
-(void)_requestFocusUpdate;
-(void)_scrollToInitialPositionIfNecessary;
-(void)_updateBackButtonBehavior;
-(void)_updateEmptyBehaviorIfNeeded;
-(void)_updateEmptyPlaceholder;
-(void)_updateEmptyPlaceholderLayout;
-(void)_updateSubviewsOrdering;
-(void)_waitForAvailabilityOfAsset:(id)arg0 completionHandler:(id)arg1 ;
-(void)_waitUntilOneUpPresentationCanStartAnimated:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)addAssetsToAlbum:(id)arg0 ;
-(void)cancelSelectMode:(id)arg0 ;
-(void)containerView:(id)arg0 willMoveToWindow:(id)arg1 ;
-(void)deselectAll:(id)arg0 ;
-(void)dismissPresentedViewControllerForContentController:(id)arg0 ;
-(void)ensureSwipeDismissalInteraction;
-(void)invalidateHeaderView;
-(void)loadView;
-(void)navigateToAsset:(id)arg0 inAssetContainer:(id)arg1 revealInOneUp:(BOOL)arg2 animated:(BOOL)arg3 completionHandler:(id)arg4 ;
-(void)navigateToDestination:(id)arg0 options:(NSUInteger)arg1 completionHandler:(id)arg2 ;
-(void)needsUpdateForContentController:(id)arg0 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)openSelectionWithCommandDownArrow:(id)arg0 ;
-(void)paste:(id)arg0 ;
-(void)photosBarsControllerDidUpdateBars:(id)arg0 ;
-(void)photosBarsControllerDidUpdateNavigationItemAppearance:(id)arg0 ;
-(void)ppt_navigateToAsset:(id)arg0 inAssetContainer:(id)arg1 revealInOneUp:(BOOL)arg2 completionHandler:(id)arg3 ;
-(void)px_didTransitionBars;
-(void)px_willTransitionBars;
-(void)scrollToCenterAssetReference:(id)arg0 completion:(id)arg1 ;
-(void)scrollToRevealAssetReference:(id)arg0 completion:(id)arg1 ;
-(void)scrollViewControllerDidScroll:(id)arg0 ;
-(void)scrollViewControllerWillEndScrolling:(id)arg0 withVelocity:(struct CGPoint )arg1 targetContentOffset:(struct CGPoint *)arg2 ;
-(void)selectAll:(id)arg0 ;
-(void)setTitle:(id)arg0 ;
-(void)splitViewController:(id)arg0 didChangeSidebarVisibility:(BOOL)arg1 ;
-(void)statusView:(id)arg0 dismissViewController:(id)arg1 ;
-(void)statusView:(id)arg0 presentViewController:(id)arg1 ;
-(void)toggleEditMode:(id)arg0 ;
-(void)toggleFilter:(id)arg0 ;
-(void)toggleViewMode:(id)arg0 ;
-(void)toggleViewer:(id)arg0 ;
-(void)validateCommand:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;
-(void)willTransitionToTraitCollection:(id)arg0 withTransitionCoordinator:(id)arg1 ;
-(void)zoomIn:(id)arg0 ;
-(void)zoomOut:(id)arg0 ;


@end


#endif