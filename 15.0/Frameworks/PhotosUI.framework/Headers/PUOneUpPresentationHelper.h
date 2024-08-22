// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUONEUPPRESENTATIONHELPER_H
#define PUONEUPPRESENTATIONHELPER_H

@class NSSet, UITapGestureRecognizer, NSString, PXAssetReference, PXPhotosDataSource, UIViewController;
@protocol PUPhotosPreviewPresentationControllerDelegate, UIGestureRecognizerDelegate, PUTilingViewTileSource, PUTilingViewTileTransitionDelegate, PUTilingViewTileUseDelegate, PUPinchedTileTrackerDelegate, PUTilingViewControllerTransitionEndPoint, PUOneUpPresentationHelperAssetDisplayDelegate, PUOneUpPresentationHelperDelegate;

#import <Foundation/Foundation.h>

#import "PUTilingView.h"
#import "PUOneUpViewController.h"
#import "PUChangeDirectionValueFilter.h"
#import "PUPinchedTileTracker.h"
#import "PUBrowsingSession.h"

@interface PUOneUpPresentationHelper : NSObject <PUPhotosPreviewPresentationControllerDelegate, UIGestureRecognizerDelegate, PUTilingViewTileSource, PUTilingViewTileTransitionDelegate, PUTilingViewTileUseDelegate, PUPinchedTileTrackerDelegate, PUTilingViewControllerTransitionEndPoint>

 {
    ? _delegateFlags;
    ? _assetDisplayDelegateFlags;
    ? _needsUpdateFlags;
    BOOL _isPresentingViewControllerAppearingWithIdleState;
}


@property (retain, nonatomic, setter=_setAssetReferencesDisplayedInTilingView:) NSSet *_assetReferencesDisplayedInTilingView; // ivar: __assetReferencesDisplayedInTilingView
@property (readonly, copy, nonatomic) id *_browsingSessionCreationBlock; // ivar: __browsingSessionCreationBlock
@property (weak, nonatomic, setter=_setDisappearingTilingView:) PUTilingView *_disappearingTilingView; // ivar: __disappearingTilingView
@property (nonatomic, setter=_setEndingPresentation:) BOOL _isEndingPresentation; // ivar: __isEndingPresentation
@property (nonatomic, setter=_setIsPerformingNonAnimatedPush:) BOOL _isPerformingNonAnimatedPush; // ivar: __isPerformingNonAnimatedPush
@property (retain, nonatomic, setter=_setLibraryChangePauseToken:) id *_libraryChangePauseToken; // ivar: __libraryChangePauseToken
@property (nonatomic, setter=_setNeedsUpdateAssetReferencesDisplayedInTilingView:) BOOL _needsUpdateAssetReferencesDisplayedInTilingView; // ivar: __needsUpdateAssetReferencesDisplayedInTilingView
@property (retain, nonatomic, setter=_setOneUpViewController:) PUOneUpViewController *_oneUpViewController; // ivar: __oneUpViewController
@property (retain, nonatomic, setter=_setPanDirectionValueFilter:) PUChangeDirectionValueFilter *_panDirectionValueFilter; // ivar: __panDirectionValueFilter
@property (retain, nonatomic, setter=_setPinchedTileTracker:) PUPinchedTileTracker *_pinchedTileTracker; // ivar: __pinchedTileTracker
@property (nonatomic, setter=_setPresentationEndTimeoutIdentifier:) NSInteger _presentationEndTimeoutIdentifier; // ivar: __presentationEndTimeoutIdentifier
@property (nonatomic) NSInteger _presentationOrigin; // ivar: __presentationOrigin
@property (nonatomic, setter=_setShouldPauseLibraryChanges:) BOOL _shouldPauseLibraryChanges; // ivar: __shouldPauseLibraryChanges
@property (nonatomic, setter=_setState:) NSInteger _state; // ivar: __state
@property (retain, nonatomic, setter=_setTapGestureRecognizer:) UITapGestureRecognizer *_tapGestureRecognizer; // ivar: __tapGestureRecognizer
@property (retain, nonatomic, setter=_setTilingView:) PUTilingView *_tilingView; // ivar: __tilingView
@property (retain, nonatomic, setter=_setTransitioningTilingView:) PUTilingView *_transitioningTilingView; // ivar: __transitioningTilingView
@property (weak, nonatomic) NSObject<PUOneUpPresentationHelperAssetDisplayDelegate> *assetDisplayDelegate; // ivar: _assetDisplayDelegate
@property (retain, nonatomic, setter=_setBrowsingSession:) PUBrowsingSession *browsingSession; // ivar: _browsingSession
@property (nonatomic) BOOL cachesScrubberView; // ivar: _cachesScrubberView
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PUOneUpPresentationHelperDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isOneUpPresented;
@property (readonly, nonatomic) PXAssetReference *lastViewedAssetReference;
@property (retain, nonatomic) PXPhotosDataSource *photosDataSource; // ivar: _photosDataSource
@property (readonly, weak, nonatomic) UIViewController *presentingViewController; // ivar: _presentingViewController
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger transitionType; // ivar: _transitionType
@property (copy, nonatomic) id *unlockDeviceHandler; // ivar: _unlockDeviceHandler
@property (copy, nonatomic) id *unlockDeviceStatus; // ivar: _unlockDeviceStatus


-(BOOL)_handleInteractivePresentationWithBlock:(id)arg0 ;
-(BOOL)_prepareDismissalForced:(BOOL)arg0 ;
-(BOOL)_shouldAutoplayOnNavigation;
-(BOOL)canDismissOneUpViewController;
-(BOOL)canPresentOneUpViewControllerAnimated:(BOOL)arg0 ;
-(BOOL)dismissOneUpViewControllerForced:(BOOL)arg0 animated:(BOOL)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)handlePresentingPanGestureRecognizer:(id)arg0 ;
-(BOOL)handlePresentingPinchGestureRecognizer:(id)arg0 ;
-(BOOL)shouldStartPreviewingSimultaneouslyWithGestureRecognizer:(id)arg0 ;
-(BOOL)tilingViewControllerTransitionUsesTransientTilingView:(id)arg0 ;
-(CGFloat)pinchedTiledTracker:(id)arg0 initialAspectRatioForTileWithLayoutInfo:(id)arg1 ;
-(NSInteger)_currentNavigationControllerOperation;
-(NSInteger)tilingViewControllerTransitionPreferredBarStyle:(id)arg0 ;
-(id)_createBrowsingSession;
-(id)_createOneUpViewControllerWithBrowsingSession:(id)arg0 options:(NSUInteger)arg1 activity:(NSUInteger)arg2 ;
-(id)_currentTilingViewControllerTransition;
-(id)_newCollapsedLayout;
-(id)_transitionHostingView;
-(id)browsingSessionCreateIfNeeded:(BOOL)arg0 ;
-(id)cameraPreviewTransitionDelegateWithSourceRect:(struct CGRect )arg0 sourceImage:(id)arg1 ;
-(id)init;
-(id)initWithBrowsingSessionCreationBlock:(id)arg0 ;
-(id)initWithPhotosDataSource:(id)arg0 ;
-(id)pinchedTiledTracker:(id)arg0 finalLayoutInfoForTileWithLayoutInfo:(id)arg1 ;
-(id)previewPresentationTransitioningDelegateForPosition:(struct CGPoint )arg0 inSourceView:(id)arg1 ;
-(id)previewViewControllerForItemAtIndexPath:(id)arg0 allowingActions:(BOOL)arg1 ;
-(id)tilingView:(id)arg0 dataSourceConverterForTransitionFromLayout:(id)arg1 toLayout:(id)arg2 ;
-(id)tilingView:(id)arg0 tileControllerWithIndexPath:(id)arg1 kind:(id)arg2 dataSource:(id)arg3 ;
-(id)tilingView:(id)arg0 tileTransitionCoordinatorForChangeFromFrame:(struct CGRect )arg1 toFrame:(struct CGRect )arg2 duration:(CGFloat)arg3 ;
-(id)tilingView:(id)arg0 tileTransitionCoordinatorForReattachedTileControllers:(id)arg1 context:(id)arg2 ;
-(id)tilingView:(id)arg0 tileTransitionCoordinatorForTransitionFromLayout:(id)arg1 toLayout:(id)arg2 withContext:(id)arg3 ;
-(id)tilingView:(id)arg0 tileTransitionCoordinatorForUpdateWithItems:(id)arg1 ;
-(id)tilingViewControllerTransition:(id)arg0 tilingViewToTransferToEndPoint:(id)arg1 ;
-(id)tilingViewControllerTransitionTilingViewHostView:(id)arg0 ;
-(void)_cleanUpAfterTilingViewTransitionAnimated:(BOOL)arg0 transitionAborted:(BOOL)arg1 ;
-(void)_cleanupOneUpViewControllerForDismissalIfNeeded;
-(void)_configureNavigationController:(id)arg0 ;
-(void)_didFinishTransitioningToOneUp;
-(void)_disappearingTilingView:(id)arg0 animationCompleted:(BOOL)arg1 ;
-(void)_ensureRegistrationWithPresentingViewController;
-(void)_handleTap:(id)arg0 ;
-(void)_handleTileControllerAnimationEnd;
-(void)_invalidateAssetReferencesDisplayedInTilingView;
-(void)_invalidatePresentationInfo;
-(void)_navigateToAssetAtIndexPath:(id)arg0 inBrowsingSession:(id)arg1 ;
-(void)_presentOneUpViewController:(id)arg0 animated:(BOOL)arg1 interactiveMode:(NSInteger)arg2 activity:(NSUInteger)arg3 completion:(id)arg4 ;
-(void)_presentationEndDidTimeOut:(NSInteger)arg0 ;
-(void)_updateAssetReferencesDisplayedInTilingView;
-(void)_updateLayout;
-(void)_updateLayout:(id)arg0 ;
-(void)_updatePresentationInfoIfNeeded;
-(void)_updateTapGestureRecognizer;
-(void)beginUsingBlackTheme;
-(void)cancelCommitTransitionForPreviewViewController:(id)arg0 completion:(id)arg1 ;
-(void)commitPreviewViewController:(id)arg0 ;
-(void)dealloc;
-(void)didDismissPreviewViewController:(id)arg0 committing:(BOOL)arg1 ;
-(void)interactiveTileTracker:(id)arg0 didStopTrackingTileController:(id)arg1 ;
-(void)interactiveTileTracker:(id)arg0 willStartTrackingTileController:(id)arg1 ;
-(void)photosPreviewPresentationController:(id)arg0 willPresentPreviewViewController:(id)arg1 ;
-(void)presentOneUpViewControllerAnimated:(BOOL)arg0 interactiveMode:(NSInteger)arg1 ;
-(void)presentOneUpViewControllerAnimated:(BOOL)arg0 interactiveMode:(NSInteger)arg1 activity:(NSUInteger)arg2 ;
-(void)presentOneUpViewControllerFromAssetAtIndexPath:(id)arg0 animated:(BOOL)arg1 interactiveMode:(NSInteger)arg2 activity:(NSUInteger)arg3 ;
-(void)presentingViewControllerScrollViewDidScroll:(id)arg0 ;
-(void)presentingViewControllerViewDidAppear:(BOOL)arg0 ;
-(void)presentingViewControllerViewDidDisappear:(BOOL)arg0 ;
-(void)presentingViewControllerViewWillAppear:(BOOL)arg0 ;
-(void)presentingViewControllerViewWillDisappear:(BOOL)arg0 ;
-(void)tilingView:(id)arg0 didStopUsingTileController:(id)arg1 ;
-(void)tilingView:(id)arg0 willStartUsingTileController:(id)arg1 ;
-(void)tilingViewControllerTransition:(id)arg0 abandonTilingView:(id)arg1 toEndPoint:(id)arg2 ;
-(void)tilingViewControllerTransition:(id)arg0 adoptTilingView:(id)arg1 fromEndPoint:(id)arg2 isCancelingTransition:(BOOL)arg3 animationSetupCompletionHandler:(id)arg4 ;
-(void)tilingViewControllerTransitionWasAborted:(id)arg0 ;
-(void)tilingViewDidEndAnimatingTileControllers:(id)arg0 ;
-(void)tilingViewDidUpdateTileControllers:(id)arg0 ;
-(void)willPresentPreviewViewController:(id)arg0 forLocation:(struct CGPoint )arg1 inSourceView:(id)arg2 ;


@end


#endif