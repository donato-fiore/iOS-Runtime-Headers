// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXCURATEDLIBRARYUIVIEWCONTROLLER_H
#define PXCURATEDLIBRARYUIVIEWCONTROLLER_H

@class UIViewController, NSString, UIView, UIPanGestureRecognizer, PHPhotoLibrary, UIPinchGestureRecognizer, UITapGestureRecognizer;
@protocol PXActionManagerProvider, PXChangeObserver, PXCuratedLibraryActionPerformerDelegate, PXCuratedLibraryFooterControllerDelegate, PXCuratedLibrarySkimmingControllerDelegate, PXCuratedLibraryZoomLevelControlDelegate, PXGAXResponder, PXOneUpPresentationDelegate, PXPhotosPointerControllerDelegate, PXPhotosDragControllerDelegate, PXPhotosGlobalFooterViewDelegate, PXScrollViewControllerObserver, PXStatusViewDelegate, PXCuratedLibraryFilterTipControllerDelegate, PXSwipeSelectionManagerDelegate, PXTouchingUIGestureRecognizerDelegate, PXUserInterfaceFeatureViewController, UIGestureRecognizerDelegate, PXSplitViewControllerChangeObserver, PXPhotosViewDelegate;


#import "PXActionManager.h"
#import "PXChangeDirectionNumberFilter.h"
#import "PXGTransition.h"
#import "PXCuratedLibraryBarsController.h"
#import "PXCPLUIStatusProvider.h"
#import "PXPhotosDragController.h"
#import "PXCuratedLibraryFilterTipController.h"
#import "PXGView.h"
#import "PXProgrammaticNavigationRequest.h"
#import "PXMoviePresenter.h"
#import "PXAssetReference.h"
#import "PXPhotosPointerController.h"
#import "PXRelaxedScreenEdgePanGestureRecognizer.h"
#import "PXCuratedLibrarySecondaryToolbarController.h"
#import "PXCuratedLibrarySkimmingController.h"
#import "PXTouchingUIGestureRecognizer.h"
#import "PXCPLStatusController.h"
#import "PXSwipeSelectionManager.h"
#import "PXAssetSelectionUserActivityController.h"
#import "PXCuratedLibraryViewProvider.h"
#import "PXCuratedLibraryZoomLevelControl.h"
#import "PXCuratedLibraryZoomLevelPinchFilter.h"

@interface PXCuratedLibraryUIViewController : UIViewController <PXActionManagerProvider, PXChangeObserver, PXCuratedLibraryActionPerformerDelegate, PXCuratedLibraryFooterControllerDelegate, PXCuratedLibrarySkimmingControllerDelegate, PXCuratedLibraryZoomLevelControlDelegate, PXGAXResponder, PXOneUpPresentationDelegate, PXPhotosPointerControllerDelegate, PXPhotosDragControllerDelegate, PXPhotosGlobalFooterViewDelegate, PXScrollViewControllerObserver, PXStatusViewDelegate, PXCuratedLibraryFilterTipControllerDelegate, PXSwipeSelectionManagerDelegate, PXTouchingUIGestureRecognizerDelegate, PXUserInterfaceFeatureViewController, UIGestureRecognizerDelegate, PXSplitViewControllerChangeObserver>



@property (readonly, nonatomic) PXActionManager *assetActionManager;
@property (weak, nonatomic) NSObject<PXGAXResponder> *axNextResponder; // ivar: axNextResponder
@property (retain, nonatomic) PXChangeDirectionNumberFilter *backNavigationGestureDirectionFilter; // ivar: _backNavigationGestureDirectionFilter
@property (retain, nonatomic) PXGTransition *backNavigationTransition; // ivar: _backNavigationTransition
@property (readonly, nonatomic) PXCuratedLibraryBarsController *barsController; // ivar: _barsController
@property (retain, nonatomic) PXCPLUIStatusProvider *cplUIStatusProvider; // ivar: _cplUIStatusProvider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) PXPhotosDragController *dragController; // ivar: _dragController
@property (retain, nonatomic) PXPhotosDragController *emptyPlaceholderDragController; // ivar: _emptyPlaceholderDragController
@property (retain, nonatomic) UIView *emptyPlaceholderView; // ivar: _emptyPlaceholderView
@property (readonly, nonatomic) PXCuratedLibraryFilterTipController *filterTipController; // ivar: _filterTipController
@property (readonly, nonatomic) PXGView *gridView;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PXProgrammaticNavigationRequest *initialNavigationRequest; // ivar: _initialNavigationRequest
@property (nonatomic) BOOL isGridViewReady; // ivar: _isGridViewReady
@property (nonatomic) BOOL isInUnselectedTab; // ivar: _isInUnselectedTab
@property (retain, nonatomic) PXMoviePresenter *moviePresenter; // ivar: _moviePresenter
@property (retain, nonatomic) PXAssetReference *navigatedAssetReference; // ivar: _navigatedAssetReference
@property (readonly, nonatomic) UIPanGestureRecognizer *panGesture; // ivar: _panGesture
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary; // ivar: _photoLibrary
@property (weak, nonatomic) NSObject<PXPhotosViewDelegate> *photosViewDelegate; // ivar: _photosViewDelegate
@property (readonly, nonatomic) UIPinchGestureRecognizer *pinchGesture; // ivar: _pinchGesture
@property (readonly, nonatomic) PXPhotosPointerController *pointerController; // ivar: _pointerController
@property (readonly, nonatomic) UITapGestureRecognizer *pressGesture; // ivar: _pressGesture
@property (readonly, nonatomic) PXRelaxedScreenEdgePanGestureRecognizer *screenEdgePanGestureRecognizer; // ivar: _screenEdgePanGestureRecognizer
@property (readonly, nonatomic) PXCuratedLibrarySecondaryToolbarController *secondaryToolbarController; // ivar: _secondaryToolbarController
@property (readonly, nonatomic) PXCuratedLibrarySkimmingController *skimmingController; // ivar: _skimmingController
@property (readonly, nonatomic) PXTouchingUIGestureRecognizer *skimmingTouchGesture; // ivar: _skimmingTouchGesture
@property (retain, nonatomic) PXCPLStatusController *statusController; // ivar: _statusController
@property (readonly) Class superclass;
@property (readonly, nonatomic) PXSwipeSelectionManager *swipeSelectionManager; // ivar: _swipeSelectionManager
@property (readonly, nonatomic) UITapGestureRecognizer *tapGesture; // ivar: _tapGesture
@property (nonatomic) ? trackedScrollContext; // ivar: _trackedScrollContext
@property (readonly, nonatomic) PXAssetSelectionUserActivityController *userActivityController; // ivar: _userActivityController
@property (readonly, nonatomic) NSInteger userInterfaceFeature;
@property (readonly, nonatomic) PXCuratedLibraryViewProvider *viewProvider; // ivar: _viewProvider
@property (readonly, nonatomic) PXCuratedLibraryViewProvider *viewProviderIfLoaded;
@property (nonatomic) NSInteger zoomLevelBeforeBackNavigationTransition; // ivar: _zoomLevelBeforeBackNavigationTransition
@property (readonly, nonatomic) PXCuratedLibraryZoomLevelControl *zoomLevelControl; // ivar: _zoomLevelControl
@property (readonly, nonatomic) PXCuratedLibraryZoomLevelPinchFilter *zoomLevelPinchFilter; // ivar: _zoomLevelPinchFilter


-(BOOL)_actionPerformer:(id)arg0 presentViewController:(id)arg1 ;
-(BOOL)_handleGestureForFilterTipController;
-(BOOL)_handleTapOnTitleWithHitTestResult:(id)arg0 ;
-(BOOL)_handleTapToToggleChromeWithGestureRecognizer:(id)arg0 ;
-(BOOL)_handleTapWithHitTestResult:(id)arg0 rangeSelectionEnabled:(BOOL)arg1 ;
-(BOOL)_presentOneUpForAssetReference:(id)arg0 configurationHandler:(id)arg1 ;
-(BOOL)_scrollToNextSectionInDirection:(NSInteger)arg0 animated:(BOOL)arg1 ;
-(BOOL)_shouldExposeCursorAnimations;
-(BOOL)actionPerformer:(id)arg0 dismissViewController:(id)arg1 completionHandler:(id)arg2 ;
-(BOOL)actionPerformer:(id)arg0 transitionToViewController:(id)arg1 transitionType:(NSInteger)arg2 ;
-(BOOL)axGroup:(id)arg0 didRequestToPerformAction:(NSInteger)arg1 userInfo:(id)arg2 ;
-(BOOL)canBecomeFirstResponder;
-(BOOL)canPerformAction:(SEL)arg0 withSender:(id)arg1 ;
-(BOOL)dragController:(id)arg0 shouldResizeCancelledPreviewForAssetReference:(id)arg1 ;
-(BOOL)dragController:(id)arg0 shouldSelectRearrangedAssetReferences:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldBeRequiredToFailByGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)oneUpPresentation:(id)arg0 allowsActionsForContextMenuInteraction:(id)arg1 ;
-(BOOL)oneUpPresentation:(id)arg0 canStartPreviewingForContextMenuInteraction:(id)arg1 ;
-(BOOL)oneUpPresentationShouldPreventShowInAllPhotosAction:(id)arg0 ;
-(BOOL)pu_handleSecondTabTap;
-(BOOL)pu_scrollToInitialPositionAnimated:(BOOL)arg0 ;
-(BOOL)scrollViewControllerShouldScrollToTop:(id)arg0 ;
-(BOOL)swipeSelectionManager:(id)arg0 shouldAutomaticallyTransitionToMultiSelectModeAtPoint:(struct CGPoint )arg1 ;
-(BOOL)swipeSelectionManagerIsInMultiSelectMode:(id)arg0 ;
-(NSInteger)oneUpPresentationOrigin:(id)arg0 ;
-(NSInteger)pointerController:(id)arg0 interactionOptionsForRegionAtLocation:(struct CGPoint )arg1 inCoordinateSpace:(id)arg2 ;
-(NSInteger)preferredStatusBarStyle;
-(NSUInteger)routingOptionsForDestination:(id)arg0 ;
-(id)_assetCollectionReferenceForGroup:(id)arg0 ;
-(id)_bestHitTestResultForCursorAtLocation:(struct CGPoint )arg0 ;
-(id)_buttonHitTestResultAtPoint:(struct CGPoint )arg0 inCoordinateSpace:(id)arg1 ;
-(id)_createPreviewViewForAssetReference:(id)arg0 ;
-(id)_createPreviewViewForHitTestResult:(id)arg0 ;
-(id)_dominantAssetCollectionReferenceForSkimming;
-(id)_hitTestAssetReferenceAtLocation:(struct CGPoint )arg0 inCoordinateSpace:(id)arg1 ;
-(id)_hitTestResultAtLocation:(struct CGPoint )arg0 withPadding:(struct UIEdgeInsets )arg1 swipeSelectionManager:(id)arg2 ;
-(id)_initialAllPhotosContentFilterState;
-(id)_regionOfInterestForAssetReference:(id)arg0 image:(*id)arg1 ;
-(id)_scrollView;
-(id)_viewForEllipsisButtonAction;
-(id)assetCollectionReferenceForSkimmingSlideshow:(id)arg0 ;
-(id)assetCollectionReferenceToShowSkimmingHints:(id)arg0 ;
-(id)axContainingScrollViewForAXGroup:(id)arg0 ;
-(id)dragController:(id)arg0 draggableAssetReferenceAtLocation:(struct CGPoint )arg1 ;
-(id)dragController:(id)arg0 dropTargetAssetReferenceForLocation:(struct CGPoint )arg1 ;
-(id)dragController:(id)arg0 regionOfInterestForAssetReference:(id)arg1 image:(*id)arg2 ;
-(id)dragController:(id)arg0 scrollViewForAssetReference:(id)arg1 ;
-(id)dragControllerAssetReferenceForBeginningSession:(id)arg0 ;
-(id)dragControllerViewControllerForPresentation:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithPhotoLibrary:(id)arg0 ;
-(id)oneUpPresentation:(id)arg0 currentImageForAssetReference:(id)arg1 ;
-(id)oneUpPresentation:(id)arg0 regionOfInterestForAssetReference:(id)arg1 ;
-(id)oneUpPresentationActionManagerForPreviewing:(id)arg0 ;
-(id)oneUpPresentationDataSourceManager:(id)arg0 ;
-(id)oneUpPresentationHelperScrollView:(id)arg0 ;
-(id)oneUpPresentationInitialAssetReference:(id)arg0 ;
-(id)oneUpPresentationMediaProvider:(id)arg0 ;
-(id)passthroughViewsForTipForController:(id)arg0 ;
-(id)pointerController:(id)arg0 identifierForRegionAtLocation:(struct CGPoint )arg1 inCoordinateSpace:(id)arg2 ;
-(id)pointerController:(id)arg0 regionOfInterestForCursorAtLocation:(struct CGPoint )arg1 inCoordinateSpace:(id)arg2 ;
-(id)pointerController:(id)arg0 viewForCursorInteractionAtLocation:(struct CGPoint )arg1 inCoordinateSpace:(id)arg2 ;
-(id)preferredFocusEnvironments;
-(id)presentingViewControllerForFooterController:(id)arg0 ;
-(id)pu_debugCurrentlySelectedAssets;
-(id)px_diagnosticsItemProvidersForPoint:(struct CGPoint )arg0 inCoordinateSpace:(id)arg1 ;
-(id)px_navigationDestination;
-(id)swipeSelectionManager:(id)arg0 indexPathSetFromIndexPath:(struct PXSimpleIndexPath )arg1 toIndexPath:(struct PXSimpleIndexPath )arg2 ;
-(id)targetForAction:(SEL)arg0 withSender:(id)arg1 ;
-(id)viewControllerToPresentTipForController:(id)arg0 ;
-(id)viewToPresentTipForController:(id)arg0 ;
-(struct CGRect )_rectForEllipsisActionPerformerButton;
-(struct CGRect )anchorViewRectForController:(id)arg0 ;
-(struct PXSimpleIndexPath )_indexPathForAssetAtLocation:(struct CGPoint )arg0 withPadding:(struct UIEdgeInsets )arg1 forSwipeSelectionManager:(id)arg2 ;
-(struct PXSimpleIndexPath )swipeSelectionManager:(id)arg0 itemIndexPathAtLocation:(struct CGPoint )arg1 ;
-(struct PXSimpleIndexPath )swipeSelectionManager:(id)arg0 itemIndexPathClosestAboveLocation:(struct CGPoint )arg1 ;
-(struct PXSimpleIndexPath )swipeSelectionManager:(id)arg0 itemIndexPathClosestLeadingLocation:(struct CGPoint )arg1 ;
-(void)_addContentView:(id)arg0 ;
-(void)_conditionallyUpdateEmptyPlaceholder;
-(void)_createAnimationForSkimmingWithDuration:(CGFloat)arg0 indicatorsDidChangeVisibility:(BOOL)arg1 ;
-(void)_handleNavigationRequestConditionCompletionForNavigationRequest:(id)arg0 withAssetReference:(id)arg1 ;
-(void)_handlePan:(id)arg0 ;
-(void)_handlePinch:(id)arg0 ;
-(void)_handlePress:(id)arg0 ;
-(void)_handleScreenEdgePan:(id)arg0 ;
-(void)_handleScrollToRevealInfo:(id)arg0 inGroup:(id)arg1 ;
-(void)_handleShowAlternateUIForGroup:(id)arg0 ;
-(void)_handleShowDefaultUIForGroup:(id)arg0 ;
-(void)_handleTap:(id)arg0 ;
-(void)_handleTapWithHitTestResults:(id)arg0 tapGesture:(id)arg1 ;
-(void)_invalidateSecondaryToolbar;
-(void)_navigateToInitialScrollPositionForNavigationRequest:(id)arg0 ;
-(void)_navigateToRevealAssetForNavigationRequest:(id)arg0 ;
-(void)_prepareGestureRecognizers;
-(void)_presentOneUpForSingleSelectedAssetWithActivity:(NSUInteger)arg0 ;
-(void)_requestFocusUpdate;
-(void)_rescheduleNavigationRequest:(id)arg0 ;
-(void)_saveCurrentAllPhotosScrollPosition;
-(void)_scrollLibraryViewToInitialPositionWithCompletionHandler:(id)arg0 ;
-(void)_scrollToBottomAnimated:(BOOL)arg0 ;
-(void)_setAllPhotosContentFilterState:(id)arg0 ;
-(void)_setWantsOptionalChromeVisible:(BOOL)arg0 changeReason:(NSInteger)arg1 ;
-(void)_updateEmptyPlaceholder;
-(void)_updateSecondaryToolbar;
-(void)_updateSkimmingSlideshowEnabled;
-(void)_updateStatusBarStyle;
-(void)_updateTrackedScrollLevelIfNeeded;
-(void)assetCollectionActionPerformer:(id)arg0 playMovieForAssetCollection:(id)arg1 ;
-(void)axGroup:(id)arg0 didChange:(NSUInteger)arg1 userInfo:(id)arg2 ;
-(void)cancelSelectMode:(id)arg0 ;
-(void)curatedLibraryActionPerformer:(id)arg0 contentFilterStateChanged:(id)arg1 ;
-(void)curatedLibraryActionPerformer:(id)arg0 presentContextMenuActionsWithPerformers:(id)arg1 ;
-(void)curatedLibraryActionPerformer:(id)arg0 presentShareSheetWithSharingContext:(id)arg1 ;
-(void)dragController:(id)arg0 draggedAssetReferencesDidChange:(id)arg1 ;
-(void)dragController:(id)arg0 dropTargetAssetReferenceDidChange:(id)arg1 ;
-(void)dragController:(id)arg0 isDragSessionActiveDidChange:(BOOL)arg1 ;
-(void)footerControllerRevealFooter:(id)arg0 ;
-(void)navigateToDestination:(id)arg0 options:(NSUInteger)arg1 completionHandler:(id)arg2 ;
-(void)navigateToSegment:(id)arg0 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)oneUpPresentation:(id)arg0 scrollAssetReferenceToVisible:(id)arg1 ;
-(void)oneUpPresentation:(id)arg0 setHiddenAssetReferences:(id)arg1 ;
-(void)oneUpPresentation:(id)arg0 willEndPreviewingForContextMenuInteraction:(id)arg1 configuration:(id)arg2 ;
-(void)oneUpPresentation:(id)arg0 willStartPreviewingForContextMenuInteraction:(id)arg1 ;
-(void)openParentWithCommandUpArrow:(id)arg0 ;
-(void)openSelectionWithCommandDownArrow:(id)arg0 ;
-(void)photosGlobalFooterView:(id)arg0 presentViewController:(id)arg1 ;
-(void)pointerController:(id)arg0 didExitRegionWithRect:(struct CGRect )arg1 inCoordinateSpace:(id)arg2 ;
-(void)pointerController:(id)arg0 willEnterRegionWithRect:(struct CGRect )arg1 inCoordinateSpace:(id)arg2 ;
-(void)px_didTransitionBars;
-(void)px_navigateToStateAllowingTabSwitchingWithOptions:(NSUInteger)arg0 completionHandler:(id)arg1 ;
-(void)px_willTransitionBars;
-(void)scrollViewControllerDidScroll:(id)arg0 ;
-(void)scrollViewControllerWillBeginScrolling:(id)arg0 ;
-(void)scrollViewControllerWillEndScrolling:(id)arg0 withVelocity:(struct CGPoint )arg1 targetContentOffset:(struct CGPoint *)arg2 ;
-(void)skimmingController:(id)arg0 willHideSkimmingHintsForAssetCollectionReference:(id)arg1 animationDuration:(CGFloat)arg2 ;
-(void)skimmingController:(id)arg0 willShowSkimmingHintsForAssetCollectionReference:(id)arg1 animationDuration:(CGFloat)arg2 ;
-(void)skimmingController:(id)arg0 willStartSkimmingAssetCollectionReference:(id)arg1 animationDuration:(CGFloat)arg2 ;
-(void)skimmingControllerDidStopSkimming:(id)arg0 animationDuration:(CGFloat)arg1 ;
-(void)splitViewController:(id)arg0 willChangeSidebarVisibility:(BOOL)arg1 ;
-(void)statusView:(id)arg0 dismissViewController:(id)arg1 ;
-(void)statusView:(id)arg0 presentViewController:(id)arg1 ;
-(void)swipeSelectionManager:(id)arg0 extendSelectionInDirection:(NSUInteger)arg1 ;
-(void)swipeSelectionManagerAutomaticallyTransitionToMultiSelectMode:(id)arg0 ;
-(void)swipeSelectionManagerDidAutoScroll:(id)arg0 ;
-(void)toggleEditMode:(id)arg0 ;
-(void)toggleFilter:(id)arg0 ;
-(void)toggleViewMode:(id)arg0 ;
-(void)toggleViewer:(id)arg0 ;
-(void)touchingUIGestureRecognizerDidBeginTouching:(id)arg0 ;
-(void)touchingUIGestureRecognizerDidEndTouching:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)validateCommand:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewLayoutMarginsDidChange;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;
-(void)willPresentTipForController:(id)arg0 ;
-(void)zoomIn:(id)arg0 ;
-(void)zoomLevelControl:(id)arg0 didTapOnAlreadySelectedZoomLevel:(NSInteger)arg1 ;
-(void)zoomOut:(id)arg0 ;


@end


#endif