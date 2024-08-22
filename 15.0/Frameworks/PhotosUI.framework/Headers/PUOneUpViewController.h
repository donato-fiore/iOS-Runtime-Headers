// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUONEUPVIEWCONTROLLER_H
#define PUONEUPVIEWCONTROLLER_H

@class UIViewController, NSString, NSTimer, NSArray, NSMutableSet, PXFloatingCardPresentationController, UIViewController<PUAccessoryContentViewController>, CEKBadgeTextView, UIScrollView, NSUserActivity, TPKContent, TPKContentController, PXUserEventTracker;
@protocol PUViewControllerSpecChangeObserver, PUBrowsingViewModelChangeObserver, PUTilingViewTileSource, PUTilingViewTileTransitionDelegate, PUTilingViewScrollDelegate, UIScrollViewDelegate, PUOneUpTilingLayoutDelegate, PUInteractiveDismissalControllerDelegate, PUBarsControllerDelegate, PUOneUpBarsControllerDelegate, PUUserTransformTileViewControllerDelegate, PUPlayButtonTileViewControllerDelegate, PUBadgeTileViewControllerDelegate, PUDoubleTapZoomControllerDelegate, PUAccessoryVisibilityInteractionControllerDelegate, PHAirPlayControllerContentProvider, PUTilingViewTileUseDelegate, PUAccessoryTileViewControllerDelegate, PUOneUpAccessoryViewControllersManagerDelegate, PUOverOneUpPresentationSessionDelegate, PUOverOneUpPresentationSessionViewController, PUOneUpGestureRecognizerCoordinatorDelegate, PUOneUpAssetTransitionViewController, PUSyndicationAttributionTileViewControllerDelegate, PUAssetDisplayDescriptorNavigator, PXSettingsKeyObserver, PXDiagnosticsEnvironment, PUIrisImageTileViewControllerDelegate, PXPurgeableController, PXContextualNotificationDelegate, PUOneUpSuggestionsControllerDelegate, PUPreviewActionControllerDelegate, PUAssetActionPerformerDelegate, PXForcedDismissableViewController, PXGestureProviderDelegate, PULivePhotoVideoOverlayTileViewControllerDelegate, TPKContentControllerDelegate, PUPeopleTileDelegate, PXFloatingCardContainer, PXFloatingCardPresentationControllerDelegate, PUImageTileViewControllerPresentingDelegate, PUTilingViewControllerTransitionEndPoint, PUOneUpEventTracker, OS_dispatch_queue;


#import "PUOneUpAccessoryViewControllersManager.h"
#import "PUAccessoryVisibilityInteractionController.h"
#import "PUBrowsingBackgroundTileViewController.h"
#import "PUOneUpBarsController.h"
#import "PUAssetDisplayDescriptorNavigationRequest.h"
#import "PUDoubleTapZoomController.h"
#import "PUOneUpGestureRecognizerCoordinator.h"
#import "PUInteractivePinchDismissalController.h"
#import "PUInteractiveSwipeDismissalController.h"
#import "PUOneUpViewController.h"
#import "PUOverOneUpPresentationSession.h"
#import "PUParallaxComputer.h"
#import "PUReviewScreenBarsModel.h"
#import "PUReviewScreenControlBarTileViewController.h"
#import "PUReviewScreenScrubberBarTileViewController.h"
#import "PUReviewScreenTopBarTileViewController.h"
#import "PUOneUpViewControllerSpec.h"
#import "PUTilingView.h"
#import "PUAggregateDictionaryTracer.h"
#import "PUBrowsingOneUpVisibilityHelper.h"
#import "PUBrowsingSession.h"
#import "PULoadingIndicatorController.h"
#import "PUPreviewActionController.h"
#import "PUOneUpSuggestionsController.h"
#import "PUOneUpVisualImageAnalyzingController.h"

@interface PUOneUpViewController : UIViewController <PUViewControllerSpecChangeObserver, PUBrowsingViewModelChangeObserver, PUTilingViewTileSource, PUTilingViewTileTransitionDelegate, PUTilingViewScrollDelegate, UIScrollViewDelegate, PUOneUpTilingLayoutDelegate, PUInteractiveDismissalControllerDelegate, PUBarsControllerDelegate, PUOneUpBarsControllerDelegate, PUUserTransformTileViewControllerDelegate, PUPlayButtonTileViewControllerDelegate, PUBadgeTileViewControllerDelegate, PUDoubleTapZoomControllerDelegate, PUAccessoryVisibilityInteractionControllerDelegate, PHAirPlayControllerContentProvider, PUTilingViewTileUseDelegate, PUAccessoryTileViewControllerDelegate, PUOneUpAccessoryViewControllersManagerDelegate, PUOverOneUpPresentationSessionDelegate, PUOverOneUpPresentationSessionViewController, PUOneUpGestureRecognizerCoordinatorDelegate, PUOneUpAssetTransitionViewController, PUSyndicationAttributionTileViewControllerDelegate, PUAssetDisplayDescriptorNavigator, PXSettingsKeyObserver, PXDiagnosticsEnvironment, PUIrisImageTileViewControllerDelegate, PXPurgeableController, PXContextualNotificationDelegate, PUOneUpSuggestionsControllerDelegate, PUPreviewActionControllerDelegate, PUAssetActionPerformerDelegate, PXForcedDismissableViewController, PXGestureProviderDelegate, PULivePhotoVideoOverlayTileViewControllerDelegate, TPKContentControllerDelegate, PUPeopleTileDelegate, PXFloatingCardContainer, PXFloatingCardPresentationControllerDelegate, PUImageTileViewControllerPresentingDelegate, PUTilingViewControllerTransitionEndPoint>

 {
    ? _needsUpdateFlags;
    NSString *_scrubbingIdentifier;
    NSUInteger _actionTypeToPerformInViewDidAppear;
}


@property (readonly, nonatomic) PUOneUpAccessoryViewControllersManager *_accessoryViewControllersManager; // ivar: __accessoryViewControllersManager
@property (readonly, nonatomic) PUAccessoryVisibilityInteractionController *_accessoryVisibilityInteractionController; // ivar: __accessoryVisibilityInteractionController
@property (retain, nonatomic, setter=_setBackgroundTileViewController:) PUBrowsingBackgroundTileViewController *_backgroundTileViewController; // ivar: __backgroundTileViewController
@property (readonly, nonatomic) PUOneUpBarsController *_barsController; // ivar: __barsController
@property (retain, nonatomic, setter=_setChromeAutoHideTimer:) NSTimer *_chromeAutoHideTimer; // ivar: __chromeAutoHideTimer
@property (retain, nonatomic, setter=_setCurrentNavigationRequest:) PUAssetDisplayDescriptorNavigationRequest *_currentNavigationRequest; // ivar: __currentNavigationRequest
@property (nonatomic, setter=_setDidPlayCurrentLivePhoto:) BOOL _didPlayCurrentLivePhoto; // ivar: __didPlayCurrentLivePhoto
@property (readonly, nonatomic) PUDoubleTapZoomController *_doubleTapZoomController; // ivar: __doubleTapZoomController
@property (readonly, nonatomic) PUOneUpGestureRecognizerCoordinator *_gestureRecognizerCoordinator; // ivar: __gestureRecognizerCoordinator
@property (nonatomic, setter=_setHasShownRelevantTip:) BOOL _hasShownRelevantTip; // ivar: __hasShownRelevantTip
@property (retain, nonatomic, setter=_setHiddenTilesController:) NSArray *_hiddenTilesController; // ivar: __hiddenTilesController
@property (nonatomic, setter=_setInitialActivity:) NSUInteger _initialActivity; // ivar: __initialActivity
@property (readonly, nonatomic) PUInteractivePinchDismissalController *_interactivePinchDismissalController; // ivar: __interactivePinchDismissalController
@property (readonly, nonatomic) PUInteractiveSwipeDismissalController *_interactiveSwipeDismissalController; // ivar: __interactiveSwipeDismissalController
@property (nonatomic, setter=_setIrisPlaying:) BOOL _isIrisPlaying; // ivar: __isIrisPlaying
@property (readonly, nonatomic) BOOL _isPresentedForSecondScreen; // ivar: __isPresentedForSecondScreen
@property (nonatomic, setter=_setLayoutReferenceSize:) CGSize _layoutReferenceSize; // ivar: __layoutReferenceSize
@property (nonatomic, setter=_setLayoutSafeAreaInsets:) UIEdgeInsets _layoutSafeAreaInsets; // ivar: __layoutSafeAreaInsets
@property (weak, nonatomic, setter=_setMainOneUpForSecondScreenBrowser:) PUOneUpViewController *_mainOneUpForSecondScreenBrowser; // ivar: __mainOneUpForSecondScreenBrowser
@property (nonatomic, setter=_setNeedsUpdateAccessoryView:) BOOL _needsUpdateAccessoryView; // ivar: __needsUpdateAccessoryView
@property (nonatomic, setter=_setNeedsUpdateAudioState:) BOOL _needsUpdateAudioState; // ivar: __needsUpdateAudioState
@property (nonatomic, setter=_setNeedsUpdateBarsController:) BOOL _needsUpdateBarsController; // ivar: __needsUpdateBarsController
@property (nonatomic, setter=_setNeedsUpdateEditMode:) BOOL _needsUpdateEditMode; // ivar: __needsUpdateEditMode
@property (nonatomic, setter=_setNeedsUpdateLayout:) BOOL _needsUpdateLayout; // ivar: __needsUpdateLayout
@property (nonatomic, setter=_setNeedsUpdatePreferredContentSize:) BOOL _needsUpdatePreferredContentSize; // ivar: __needsUpdatePreferredContentSize
@property (nonatomic, setter=_setNeedsUpdatePreloadInsets:) BOOL _needsUpdatePreloadInsets; // ivar: __needsUpdatePreloadInsets
@property (nonatomic, setter=_setNeedsUpdateSpec:) BOOL _needsUpdateSpec; // ivar: __needsUpdateSpec
@property (nonatomic, setter=_setNeedsUpdateTipPopovers:) BOOL _needsUpdateTipsPopover; // ivar: __needsUpdateTipsPopover
@property (nonatomic, setter=_setNeedsUpdateUserActivity:) BOOL _needsUpdateUserActivity; // ivar: __needsUpdateUserActivity
@property (nonatomic, setter=_setNeedsUpdateVideoPlayer:) BOOL _needsUpdateVideoPlayer; // ivar: __needsUpdateVideoPlayer
@property (readonly, nonatomic) NSUInteger _options; // ivar: __options
@property (retain, nonatomic, setter=_setOverOneUpPresentationSession:) PUOverOneUpPresentationSession *_overOneUpPresentationSession; // ivar: __overOneUpPresentationSession
@property (readonly, nonatomic) PUParallaxComputer *_parallaxComputer; // ivar: __parallaxComputer
@property (nonatomic, setter=_setPendingViewTransitionSize:) CGSize _pendingViewTransitionSize; // ivar: __pendingViewTransitionSize
@property (readonly, nonatomic) BOOL _prefersCompactLayoutForSplitScreen; // ivar: __prefersCompactLayoutForSplitScreen
@property (nonatomic, setter=_setPrefersHomeIndicatorHidden:) BOOL _prefersHomeIndicatorHidden; // ivar: __prefersHomeIndicatorHidden
@property (nonatomic, setter=_setPreloadInsetsBasedOffViewWidth:) CGFloat _preloadInsetsBasedOffViewWidth; // ivar: __preloadInsetsBasedOffViewWidth
@property (retain, nonatomic, setter=_setReviewScreenBarsModel:) PUReviewScreenBarsModel *_reviewScreenBarsModel; // ivar: __reviewScreenBarsModel
@property (retain, nonatomic, setter=_setReviewScreenControlBarTileViewController:) PUReviewScreenControlBarTileViewController *_reviewScreenControlBarTileViewController; // ivar: __reviewScreenControlBarTileViewController
@property (retain, nonatomic, setter=_setReviewScreenScrubberBarTileViewController:) PUReviewScreenScrubberBarTileViewController *_reviewScreenScrubberBarTileViewController; // ivar: __reviewScreenScrubberBarTileViewController
@property (retain, nonatomic, setter=_setReviewScreenTopBarTileViewController:) PUReviewScreenTopBarTileViewController *_reviewScreenTopBarTileViewController; // ivar: __reviewScreenTopBarTileViewController
@property (retain, nonatomic, setter=_setSecondScreenBrowser:) PUOneUpViewController *_secondScreenBrowser; // ivar: __secondScreenBrowser
@property (nonatomic, setter=_setShouldDisableTransitionsUntilAppeared:) BOOL _shouldDisableTransitionsUntilAppeared; // ivar: __shouldDisableTransitionsUntilAppeared
@property (nonatomic, setter=_setShouldShowAccessoryAfterUnlock:) BOOL _shouldShowAccessoryAfterUnlock; // ivar: __shouldShowAccessoryAfterUnlock
@property (nonatomic, setter=_setShouldShowInfoButtonTip:) BOOL _shouldShowInfoButtonTip; // ivar: __shouldShowInfoButtonTip
@property (nonatomic, setter=_setShouldShowLivePhotoEffectTip:) BOOL _shouldShowLivePhotoEffectTip; // ivar: __shouldShowLivePhotoEffectTip
@property (nonatomic, setter=_setShouldShowSyndicatedPhotoTip:) BOOL _shouldShowSydicatedPhotoTip; // ivar: __shouldShowSydicatedPhotoTip
@property (readonly, nonatomic) PUOneUpViewControllerSpec *_spec; // ivar: __spec
@property (nonatomic, setter=_setSuppressBackdropColorSettings:) BOOL _suppressColorSettings; // ivar: __suppressColorSettings
@property (retain, nonatomic, setter=_setTileKindsToHide:) NSArray *_tileKindsToHide; // ivar: __tileKindsToHide
@property (retain, nonatomic, setter=_setTilingView:) PUTilingView *_tilingView; // ivar: __tilingView
@property (nonatomic, setter=_setWindowInterfaceOrientation:) NSInteger _windowInterfaceOrientation; // ivar: __windowInterfaceOrientation
@property (readonly, nonatomic) NSMutableSet *activeVideoTileControllers; // ivar: _activeVideoTileControllers
@property (readonly, nonatomic) PUAggregateDictionaryTracer *aggregateDictionaryTracer; // ivar: _aggregateDictionaryTracer
@property (nonatomic, setter=setAllowsPreviewActions:) BOOL allowsPreviewActions; // ivar: _allowsPreviewActions
@property (nonatomic) int appearState; // ivar: _appearState
@property (nonatomic) BOOL appearanceTransitionAnimationsDisabled; // ivar: _appearanceTransitionAnimationsDisabled
@property (retain, nonatomic) PUBrowsingOneUpVisibilityHelper *browsingOneUpVisibilityHelper; // ivar: _browsingOneUpVisibilityHelper
@property (readonly, nonatomic) PUBrowsingSession *browsingSession; // ivar: _browsingSession
@property (retain, nonatomic) PXFloatingCardPresentationController *cardPresentationController; // ivar: cardPresentationController
@property (weak, nonatomic) UIViewController<PUAccessoryContentViewController> *currentFloatingInfoPanelAccessoryViewController; // ivar: _currentFloatingInfoPanelAccessoryViewController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger detailsBecameVisibleSignPost; // ivar: _detailsBecameVisibleSignPost
@property (readonly, nonatomic) NSObject<PUOneUpEventTracker> *eventTracker; // ivar: _eventTracker
@property (readonly) NSUInteger hash;
@property (nonatomic, setter=setPresentedForPreview:) BOOL isPresentedForPreview; // ivar: _isPresentedForPreview
@property (readonly, nonatomic) PULoadingIndicatorController *loadingIndicatorController; // ivar: _loadingIndicatorController
@property (retain, nonatomic) CEKBadgeTextView *originalBadgeView; // ivar: _originalBadgeView
@property (readonly, nonatomic) PUOneUpBarsController *ppt_barsController;
@property (readonly, nonatomic) UIViewController *ppt_currentAccessoryViewController;
@property (readonly, nonatomic) UIScrollView *ppt_mainScrollView;
@property (readonly, nonatomic) PUOverOneUpPresentationSession *ppt_overOneUpPresentationSession;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *preheatAssetsQueue; // ivar: _preheatAssetsQueue
@property (readonly, nonatomic) NSInteger presentationOrigin; // ivar: _presentationOrigin
@property (readonly, nonatomic) PUPreviewActionController *previewActionController; // ivar: _previewActionController
@property (retain, nonatomic) NSUserActivity *siriActionActivity; // ivar: _siriActionActivity
@property (readonly, nonatomic) PUOneUpSuggestionsController *suggestionController; // ivar: _suggestionController
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *textsToHighlightForSpotlight; // ivar: _textsToHighlightForSpotlight
@property (retain, nonatomic) TPKContent *tipContent; // ivar: _tipContent
@property (retain, nonatomic) TPKContentController *tipContentController; // ivar: _tipContentController
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *tipKitQueue; // ivar: _tipKitQueue
@property (copy, nonatomic) id *unlockDeviceHandler; // ivar: _unlockDeviceHandler
@property (copy, nonatomic) id *unlockDeviceStatus; // ivar: _unlockDeviceStatus
@property (readonly, nonatomic) PXUserEventTracker *userEventTracker; // ivar: _userEventTracker
@property (readonly, nonatomic) BOOL videoTilesCanPlayVideo;
@property (readonly, nonatomic) PUOneUpVisualImageAnalyzingController *visualImageAnalyzingController; // ivar: _visualImageAnalyzingController


-(BOOL)_allowsShowingVisualIntelligenceForAsset:(id)arg0 ;
-(BOOL)_canAdvertiseKeyCommands;
-(BOOL)_canAttemptNavigationToAssetDisplayDescriptor:(id)arg0 ;
-(BOOL)_canShowWhileLocked;
-(BOOL)_isAccessoryAvailableForCurrentAsset;
-(BOOL)_isAccessoryVisible;
-(BOOL)_isAssetEligibleForTip:(id)arg0 ;
-(BOOL)_isCameraDetailsAccessory;
-(BOOL)_isCurrentAssetAndInEditModeForAssetReference:(id)arg0 ;
-(BOOL)_isDrivingScrubbing;
-(BOOL)_isLayoutAffectedBySpecChange:(id)arg0 ;
-(BOOL)_isLocationFromProvider:(id)arg0 overTileOfKind:(id)arg1 ;
-(BOOL)_isLocationFromProviderInAccessoryArea:(id)arg0 ;
-(BOOL)_isLocationFromProviderOverControl:(id)arg0 ;
-(BOOL)_isLocationFromProviderOverSyndicationAttributionPill:(id)arg0 ;
-(BOOL)_isLocationFromProviderOverText:(id)arg0 ;
-(BOOL)_isLocationFromProviderOverVisualSearch:(id)arg0 ;
-(BOOL)_isSecondScreenBrowserVisible;
-(BOOL)_isTipPopoverVisible;
-(BOOL)_needsUpdate;
-(BOOL)_performActionForType:(NSUInteger)arg0 validateOnly:(BOOL)arg1 ;
-(BOOL)_prefersFloatingiPadInfoPanel;
-(BOOL)_requireUnlockedDeviceForAccessoryView;
-(BOOL)_shouldMakeChromeVisibleWhenVideoPlayerPlaysToEndTime:(id)arg0 ;
-(BOOL)_shouldUseGlobalAccessoryViewVisibility;
-(BOOL)_visualImageHasActiveTextSelectionFromProvider:(id)arg0 ;
-(BOOL)accessoryTileViewControllerShouldUseSquareImageWhenShowingAccessoryView:(id)arg0 ;
-(BOOL)accessoryTileViewControllerWillHideNavigationBarWhenShowingAccessoryView:(id)arg0 ;
-(BOOL)accessoryTileViewControllerWillHideToolbarWhenShowingAccessoryView:(id)arg0 ;
-(BOOL)accessoryVisibilityInteractionController:(id)arg0 canBeginAtLocationFromProvider:(id)arg1 ;
-(BOOL)accessoryVisibilityInteractionController:(id)arg0 isLocationFromProviderInAccessoryContent:(id)arg1 ;
-(BOOL)assetActionPerformer:(id)arg0 dismissViewController:(id)arg1 completionHandler:(id)arg2 ;
-(BOOL)assetActionPerformer:(id)arg0 presentViewController:(id)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(BOOL)canPerformAction:(SEL)arg0 withSender:(id)arg1 ;
-(BOOL)contextualNotification:(id)arg0 shouldPassthroughPoint:(struct CGPoint )arg1 inCoordinateSpace:(id)arg2 ;
-(BOOL)doubleTapZoomController:(id)arg0 canDoubleTapBeginAtLocationFromProvider:(id)arg1 ;
-(BOOL)imageTileViewControllerShouldShowVisualIntelligenceOverlay:(id)arg0 ;
-(BOOL)interactiveDismissalController:(id)arg0 canBeginDismissalAtLocationFromProvider:(id)arg1 ;
-(BOOL)layout:(id)arg0 disableInitialZoomToFillForItemAtIndexPath:(id)arg1 ;
-(BOOL)layout:(id)arg0 isShowingInfoPanelForItemAtIndexPath:(id)arg1 ;
-(BOOL)layout:(id)arg0 shouldMovePeopleRowForItemAtIndexPath:(id)arg1 ;
-(BOOL)layout:(id)arg0 shouldMoveProgressIndicatorForItemAtIndexPath:(id)arg1 ;
-(BOOL)layout:(id)arg0 shouldScaleToFitSafeInsetsForItemAtIndexPath:(id)arg1 ;
-(BOOL)layout:(id)arg0 shouldShowAccessoryForItemAtIndexPath:(id)arg1 ;
-(BOOL)layout:(id)arg0 shouldShowAttributionViewForItemAtIndexPath:(id)arg1 ;
-(BOOL)layout:(id)arg0 shouldShowBufferingIndicatorForItemAtIndexPath:(id)arg1 ;
-(BOOL)layout:(id)arg0 shouldShowPeopleRowForItemAtIndexPath:(id)arg1 ;
-(BOOL)layout:(id)arg0 shouldShowPlayButtonForItemAtIndexPath:(id)arg1 ;
-(BOOL)layout:(id)arg0 shouldShowVideoPlaceholderForItemAtIndexPath:(id)arg1 ;
-(BOOL)layout:(id)arg0 shouldUseSquareImageInAccessoryForItemAtIndexPath:(id)arg1 ;
-(BOOL)layoutShouldShowReviewScreenScrubberBar:(id)arg0 ;
-(BOOL)livePhotoVideoPlaybackTileViewControllerCanBeginPlaying:(id)arg0 locationProvider:(id)arg1 ;
-(BOOL)oneUpAccessoryViewControllersManager:(id)arg0 preventInternalFileRadarActionForAssetReference:(id)arg1 ;
-(BOOL)oneUpAccessoryViewControllersManager:(id)arg0 preventRevealInMomentActionForAssetReference:(id)arg1 ;
-(BOOL)oneUpAccessoryViewControllersManagerRequestAccessoryDismissal:(id)arg0 ;
-(BOOL)oneUpBarsController:(id)arg0 canShowCommentsForAsset:(id)arg1 ;
-(BOOL)oneUpBarsController:(id)arg0 canShowOriginalForAsset:(id)arg1 ;
-(BOOL)oneUpBarsController:(id)arg0 isAccessoryAvailableForAssetReference:(id)arg1 ;
-(BOOL)oneUpBarsController:(id)arg0 shouldEnableShowOriginalForAsset:(id)arg1 ;
-(BOOL)oneUpBarsController:(id)arg0 shouldHideNavigationBarWhenShowingAccessoryViewForAssetReference:(id)arg1 ;
-(BOOL)oneUpBarsController:(id)arg0 shouldHideStatusBarWhenShowingAccessoryViewForAssetReference:(id)arg1 ;
-(BOOL)oneUpBarsController:(id)arg0 shouldHideToolbarWhenShowingAccessoryViewForAssetReference:(id)arg1 ;
-(BOOL)oneUpBarsController:(id)arg0 shouldTapBeginAtLocationFromProvider:(id)arg1 ;
-(BOOL)oneUpBarsControllerDismissPresentedViewController:(id)arg0 ;
-(BOOL)oneUpBarsControllerShouldAnimateViewControllerPresentation:(id)arg0 ;
-(BOOL)oneUpGestureRecgonizerCoordinator:(id)arg0 shouldAllowIrisGestureAtLocationFromProvider:(id)arg1 ;
-(BOOL)oneUpSuggestionsController:(id)arg0 canShowSuggestionForAssetReference:(id)arg1 ;
-(BOOL)overOneUpPresentationSessionPresentingViewControllerIsReady:(id)arg0 ;
-(BOOL)playButtonTileViewControllerShouldShowPauseButton:(id)arg0 ;
-(BOOL)playButtonTileViewControllerShouldShowPlayButtonWhileActivated:(id)arg0 ;
-(BOOL)prefersHomeIndicatorAutoHidden;
-(BOOL)prefersStatusBarHidden;
-(BOOL)prepareForDismissingForced:(BOOL)arg0 ;
-(BOOL)previewActionControllerPreventRevealInMomentAction:(id)arg0 ;
-(BOOL)pu_shouldOptOutFromChromelessBars;
-(BOOL)pu_wantsNavigationBarVisible;
-(BOOL)pu_wantsTabBarVisible;
-(BOOL)pu_wantsToolbarVisible;
-(BOOL)px_canPerformZoomTransitionWithDetailViewController:(id)arg0 ;
-(BOOL)px_determinesPreferredStatusBarHidden;
-(BOOL)tilingViewCanBypass20069585Check:(id)arg0 ;
-(BOOL)userTransformTileViewController:(id)arg0 shouldReceiveTouchAtLocationFromProvider:(id)arg1 ;
-(BOOL)wantsContentVisibleAfterUnregisteringWithAirPlayController:(id)arg0 ;
-(BOOL)wantsSpotlightStyling;
-(CGFloat)alphaForReviewScreenBarsInLayout:(id)arg0 ;
-(CGFloat)layout:(id)arg0 aspectRatioForItemAtIndexPath:(id)arg1 ;
-(CGFloat)layout:(id)arg0 minimumItemHeightNeededInAccessoryForItemAtIndexPath:(id)arg1 ;
-(CGFloat)layout:(id)arg0 minimumVisibleAccessoryHeightForItemAtIndexPath:(id)arg1 ;
-(CGFloat)layout:(id)arg0 minimumVisibleContentHeightForItemAtIndexPath:(id)arg1 ;
-(CGFloat)playButtonTileViewController:(id)arg0 delayForButtonAnimation:(BOOL)arg1 ;
-(CGFloat)px_HDRFocus;
-(CGFloat)px_imageModulationIntensity;
-(NSInteger)_accessoryContentKindForAsset:(id)arg0 ;
-(NSInteger)_accessoryContentKindForCurrentAsset;
-(NSInteger)preferredAnimationForContextualNotification:(id)arg0 ;
-(NSInteger)preferredStatusBarUpdateAnimation;
-(NSInteger)pu_preferredBarStyle;
-(NSUInteger)routingOptionsForDestination:(id)arg0 ;
-(id)_assetDisplayDescriptorForAsset:(id)arg0 ;
-(id)_assetReferenceAtIndexPath:(id)arg0 layout:(id)arg1 ;
-(id)_assetViewModelAtIndexPath:(id)arg0 layout:(id)arg1 ;
-(id)_assetsToPrefetch;
-(id)_assetsToPrefetchUsingDataSource:(id)arg0 startingAt:(id)arg1 count:(NSInteger)arg2 reverseDirection:(BOOL)arg3 ;
-(id)_contentTileControllerForAssetReference:(id)arg0 ;
-(id)_currentAccessoryViewController;
-(id)_currentAssetViewModel;
-(id)_currentContentTileController;
-(id)_currentPlaceholderSnapshotViewForTileController:(id)arg0 ;
-(id)_leadingContentTileController;
-(id)_newOneUpLayout;
-(id)_trailingContentTileController;
-(id)_videoPlayerAtIndexPath:(id)arg0 layout:(id)arg1 ;
-(id)accessoryTileViewControllerAccessoryViewController:(id)arg0 ;
-(id)accessoryTileViewControllerHostViewController:(id)arg0 ;
-(id)accessoryTileViewControllerViewHostingGestureRecognizers:(id)arg0 ;
-(id)accessoryVisibilityInteractionControllerViewHostingGestureRecognizers:(id)arg0 ;
-(id)additionalContextMenuActionsForAttributionTileViewController:(id)arg0 ;
-(id)barsController:(id)arg0 delegateForGestureRecognizer:(id)arg1 ;
-(id)barsControllerViewController:(id)arg0 ;
-(id)barsControllerViewHostingGestureRecognizers:(id)arg0 ;
-(id)contentController:(id)arg0 clientContextMapForKeys:(id)arg1 ;
-(id)contentController:(id)arg0 contentView:(id)arg1 iconForCustomizationID:(NSInteger)arg2 ;
-(id)contentScrollView;
-(id)contentViewControllerForAirPlayController:(id)arg0 ;
-(id)createAssetTransitionInfo;
-(id)doubleTapZoomController:(id)arg0 delegateForGestureRecognizer:(id)arg1 ;
-(id)doubleTapZoomControllerTilingView:(id)arg0 ;
-(id)doubleTapZoomControllerViewHostingGestureRecognizers:(id)arg0 ;
-(id)imageTileViewControllerPresentingViewController:(id)arg0 ;
-(id)initWithBrowsingSession:(id)arg0 ;
-(id)initWithBrowsingSession:(id)arg0 options:(NSUInteger)arg1 ;
-(id)initWithBrowsingSession:(id)arg0 options:(NSUInteger)arg1 initialActivity:(NSUInteger)arg2 ;
-(id)initWithBrowsingSession:(id)arg0 options:(NSUInteger)arg1 initialActivity:(NSUInteger)arg2 presentationOrigin:(NSInteger)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)interactiveDismissalControllerDesignatedTileController:(id)arg0 ;
-(id)interactiveDismissalControllerTilingView:(id)arg0 ;
-(id)interactiveDismissalControllerViewController:(id)arg0 ;
-(id)interactiveDismissalControllerViewHostingGestureRecognizers:(id)arg0 ;
-(id)irisImageTileViewController:(id)arg0 delegateForGestureRecognizer:(id)arg1 ;
-(id)irisImageTileViewControllerViewHostingGestureRecognizers:(id)arg0 ;
-(id)keyCommands;
-(id)layout:(id)arg0 modelTileTransformForItemAtIndexPath:(id)arg1 ;
-(id)livePhotoVideoPlaybackTileViewControllerCurrentImage:(id)arg0 ;
-(id)livePhotoVideoPlaybackTileViewControllerDisplayTileTransform:(id)arg0 ;
-(id)oneUpGestureRecognizerCoordinatorViewHostingTouchingGesture:(id)arg0 ;
-(id)overOneUpPresentationSessionBrowserViewModel:(id)arg0 ;
-(id)overOneUpPresentationSessionCreateIfNeeded:(BOOL)arg0 ;
-(id)overOneUpPresentationSessionCurrentTileController:(id)arg0 ;
-(id)overOneUpPresentationSessionTilingView:(id)arg0 ;
-(id)overOneUpPresentationSessionViewController:(id)arg0 ;
-(id)preferredContainerViewForContextualNotification:(id)arg0 ;
-(id)pu_debugCurrentAsset;
-(id)pu_debugCurrentViewModel;
-(id)pu_debugRows;
-(id)px_diagnosticsItemProvidersForPoint:(struct CGPoint )arg0 inCoordinateSpace:(id)arg1 ;
-(id)px_endPointForTransition:(id)arg0 ;
-(id)tilingView:(id)arg0 dataSourceConverterForTransitionFromLayout:(id)arg1 toLayout:(id)arg2 ;
-(id)tilingView:(id)arg0 scrollInfoWithLayout:(id)arg1 ;
-(id)tilingView:(id)arg0 tileControllerWithIndexPath:(id)arg1 kind:(id)arg2 dataSource:(id)arg3 ;
-(id)tilingView:(id)arg0 tileTransitionCoordinatorForChangeFromFrame:(struct CGRect )arg1 toFrame:(struct CGRect )arg2 duration:(CGFloat)arg3 ;
-(id)tilingView:(id)arg0 tileTransitionCoordinatorForLayoutInvalidationContext:(id)arg1 ;
-(id)tilingView:(id)arg0 tileTransitionCoordinatorForReattachedTileControllers:(id)arg1 context:(id)arg2 ;
-(id)tilingView:(id)arg0 tileTransitionCoordinatorForTransitionFromLayout:(id)arg1 toLayout:(id)arg2 withContext:(id)arg3 ;
-(id)tilingViewControllerTransition:(id)arg0 tilingViewToTransferToEndPoint:(id)arg1 ;
-(id)tilingViewControllerTransitionTilingViewHostView:(id)arg0 ;
-(id)userTransformTileViewControllerPresentingImageTileView:(id)arg0 ;
-(id)userTransformTileViewControllerSpotlightTextsToHighlight:(id)arg0 ;
-(struct CGImage *)livePhotoVideoPlaybackTileViewControllerCurrentGainMapImage:(id)arg0 outGainMapAvailable:(*BOOL)arg1 outGainMapValue:(*float)arg2 ;
-(struct CGPoint )layout:(id)arg0 accessoryOffsetForItemAtIndexPath:(id)arg1 ;
-(struct CGPoint )layout:(id)arg0 contentOffsetForItemAtIndexPath:(id)arg1 ;
-(struct CGPoint )tilingView:(id)arg0 initialVisibleOriginWithLayout:(id)arg1 ;
-(struct CGPoint )tilingView:(id)arg0 targetVisibleOriginForProposedVisibleOrigin:(struct CGPoint )arg1 withLayout:(id)arg2 ;
-(struct CGRect )_currentAssetRect;
-(struct CGRect )_currentFrameForTileController:(id)arg0 ;
-(struct CGRect )contextualNotification:(id)arg0 containingFrameInCoordinateSpace:(id)arg1 ;
-(struct CGRect )gestureProviderCurrentAssetRect:(id)arg0 ;
-(struct CGRect )layout:(id)arg0 bestSquareRectForItemAtIndexPath:(id)arg1 ;
-(struct CGRect )ppt_scrollableBoundsForTesting;
-(struct CGSize )layout:(id)arg0 assetExplorerReviewScreenBadgeSizeForItemAtIndexPath:(id)arg1 ;
-(struct CGSize )layout:(id)arg0 badgeSizeForItemAtIndexPath:(id)arg1 contentWidth:(CGFloat)arg2 ;
-(struct CGSize )layout:(id)arg0 loadingIndicatorSizeForItemAtIndexPath:(id)arg1 ;
-(void)_abandonTileController:(id)arg0 ;
-(void)_arrowKey:(id)arg0 ;
-(void)_beginShowingOriginal;
-(void)_browsingVideoPlayerDidPlayToEndTime:(id)arg0 ;
-(void)_cancelTimedChromeAutoHide;
-(void)_chromeAutoHideTimerFired:(id)arg0 ;
-(void)_configureAdoptedTileController:(id)arg0 ;
-(void)_didEndTransition;
-(void)_dimFloatingInfoPanelAnimated:(BOOL)arg0 ;
-(void)_dismissFloatingInfoPanelAnimated:(BOOL)arg0 ;
-(void)_dismissTipPopoverAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)_dynamicallyLinkInfoPanel;
-(void)_editAdjust:(id)arg0 ;
-(void)_editCrop:(id)arg0 ;
-(void)_editFilter:(id)arg0 ;
-(void)_endShowingOriginal;
-(void)_fixAssetViewModelTileTransformIfNecessary:(id)arg0 ;
-(void)_handleTipSuggestedActionCompletedWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)_handleTouchGesture:(id)arg0 ;
-(void)_hideChromeOnPlayButtonTapWithItemIsNowPlaying:(BOOL)arg0 buttonIsOverlayed:(BOOL)arg1 ;
-(void)_hideOverlays;
-(void)_invalidateAccessoryView;
-(void)_invalidateAudioState;
-(void)_invalidateBarsControllers;
-(void)_invalidateEditMode;
-(void)_invalidateInfoPanelLayoutAnimated:(BOOL)arg0 ;
-(void)_invalidateLayout;
-(void)_invalidatePreferredContentSize;
-(void)_invalidatePreloadInsets;
-(void)_invalidateSpec;
-(void)_invalidateSuggestionController;
-(void)_invalidateTipPopovers;
-(void)_invalidateUserActivity;
-(void)_invalidateVideoPlayer;
-(void)_notifyTileIsReadyWithTimeOut:(CGFloat)arg0 completionHandler:(id)arg1 ;
-(void)_performNavigationToAssetDisplayDescriptor:(id)arg0 beforeDate:(id)arg1 completionHandler:(id)arg2 ;
-(void)_preheatAdjacentAssetsForPhotosDetailsContext;
-(void)_preheatInfoPanelDynamicLinking;
-(void)_presentAlertForUnplayableAssetReference:(id)arg0 ;
-(void)_presentDetailsIndicator;
-(void)_presentFloatingInfoPanelAnimated:(BOOL)arg0 ;
-(void)_presentPopOverFromOneUpPresentationSession:(id)arg0 animated:(BOOL)arg1 ;
-(void)_presentTipPopovers:(id)arg0 content:(id)arg1 animated:(BOOL)arg2 ;
-(void)_scheduleTimedChromeAutoHide;
-(void)_sendBMDiscoverabilitySignalForEvent:(id)arg0 ;
-(void)_setAccessoryVisible:(BOOL)arg0 ;
-(void)_setNeedsUpdate;
-(void)_toggleAccessoryVisibility;
-(void)_toggleCommentsVisibility;
-(void)_toggleDetailsVisibility;
-(void)_unhideOverlays;
-(void)_updateAccessoryViewIfNeeded;
-(void)_updateActiveVideoTilesCanDisplayVideo;
-(void)_updateAudioStateIfNeeded;
-(void)_updateBackgroundTileViewController;
-(void)_updateBarsControllerIfNeeded;
-(void)_updateEditModeIfNeeded;
-(void)_updateFloatingInfoPanel;
-(void)_updateIfNeeded;
-(void)_updateLayout:(id)arg0 ;
-(void)_updateLayoutIfNeeded;
-(void)_updateLayoutReferenceSize;
-(void)_updatePreferredContentSizeIfNeeded;
-(void)_updatePrefersHomeIndicatorHidden;
-(void)_updatePreloadInsetsIfNeeded;
-(void)_updateReviewScreenBars;
-(void)_updateSpecIfNeeded;
-(void)_updateSuggestionControllerIfNeeded;
-(void)_updateTipPopoversIfNeeded;
-(void)_updateUserActivityIfNeeded;
-(void)_updateVideoPlayerIfNeeded;
-(void)_updateViewModelWithCurrentScrollPosition;
-(void)_updateWindowInterfaceOrientation;
-(void)_willBeginTransition;
-(void)accessoryVisibilityInteractionController:(id)arg0 setAccessoryVisible:(BOOL)arg1 changeReason:(NSInteger)arg2 ;
-(void)accessoryVisibilityInteractionControllerDidEnd:(id)arg0 ;
-(void)addAssetsToAlbum:(id)arg0 ;
-(void)airPlayControllerScreenAvailabilityChanged:(id)arg0 ;
-(void)autoEnhanceAssets:(id)arg0 ;
-(void)badgeVisibilityDidChange:(id)arg0 ;
-(void)barsControllerContentGuideInsetsDidChange:(id)arg0 ;
-(void)contentController:(id)arg0 contentDidBecomeAvailable:(id)arg1 animated:(BOOL)arg2 ;
-(void)contentController:(id)arg0 didFinishWithContent:(id)arg1 animated:(BOOL)arg2 ;
-(void)contextualNotificationWasTapped:(id)arg0 ;
-(void)copy:(id)arg0 ;
-(void)createPreviewActionControllerForManagerIfNeeded:(id)arg0 withPresentingViewController:(id)arg1 ;
-(void)dealloc;
-(void)deleteAssets:(id)arg0 ;
-(void)dismissPresentedViewController:(id)arg0 presentMenuWithCompletion:(id)arg1 ;
-(void)duplicateAssets:(id)arg0 ;
-(void)favoriteAssets:(id)arg0 ;
-(void)gestureProvider:(id)arg0 didTriggerEvent:(NSInteger)arg1 ;
-(void)hideAssets:(id)arg0 ;
-(void)interactiveDismissalControllerChangedIsHandlingDismissalInteraction:(id)arg0 ;
-(void)irisImageTileViewControllerDidBeginHinting:(id)arg0 ;
-(void)irisImageTileViewControllerDidBeginPlaying:(id)arg0 ;
-(void)irisImageTileViewControllerDidEndPlaying:(id)arg0 ;
-(void)irisImageTileViewControllerDidEndVitality:(id)arg0 ;
-(void)livePhotoVideoPlaybackTileViewControllerDidEndPlaying:(id)arg0 ;
-(void)livePhotoVideoPlaybackTileViewControllerWillBeginPlaying:(id)arg0 ;
-(void)loadView;
-(void)navigateToAssetDisplayDescriptor:(id)arg0 beforeDate:(id)arg1 completionHandler:(id)arg2 ;
-(void)navigateToDestination:(id)arg0 options:(NSUInteger)arg1 completionHandler:(id)arg2 ;
-(void)oneUpAccessoryViewControllersManagerInvalidateAccessoryLayout:(id)arg0 ;
-(void)oneUpAssetTransition:(id)arg0 animateTransitionWithContext:(id)arg1 duration:(CGFloat)arg2 completion:(id)arg3 ;
-(void)oneUpAssetTransition:(id)arg0 requestTransitionContextWithCompletion:(id)arg1 ;
// -(void)oneUpAssetTransition:(id)arg0 requestTransitionContextWithCompletion:(id)arg1 options:(unk)arg2  ;
-(void)oneUpAssetTransitionDidEnd:(id)arg0 ;
-(void)oneUpAssetTransitionWillBegin:(id)arg0 ;
-(void)oneUpBarsController:(id)arg0 didTapPlayPauseButton:(BOOL)arg1 ;
-(void)oneUpBarsController:(id)arg0 willExecuteActionPerformer:(id)arg1 ;
-(void)oneUpBarsControllerDidBeginShowingOriginal:(id)arg0 ;
-(void)oneUpBarsControllerDidChangeShowingPlayPauseButton:(id)arg0 ;
-(void)oneUpBarsControllerDidEndShowingOriginal:(id)arg0 ;
-(void)oneUpBarsControllerDidTapTitle:(id)arg0 ;
-(void)oneUpBarsControllerToggleCommentsVisibility:(id)arg0 ;
-(void)oneUpBarsControllerToggleDetailsVisibility:(id)arg0 ;
-(void)overOneUpPresentationSession:(id)arg0 didPresent:(id)arg1 ;
-(void)overOneUpPresentationSessionDidFinish:(id)arg0 ;
-(void)playButtonTileViewControllerDidTapButton:(id)arg0 ;
-(void)ppt_notifyWhenFullQualityIsDisplayedWithTimeout:(CGFloat)arg0 handler:(id)arg1 ;
-(void)ppt_playCurrentLivePhotoWithCompletionHandler:(id)arg0 ;
-(void)ppt_toggleAccessoryView;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg0 ;
-(void)presentErrorFromLoadingIndicator:(id)arg0 ;
-(void)presentErrorFromVideoPlaybackAttempt:(id)arg0 ;
-(void)presentPeopleViewController:(id)arg0 ;
-(void)presentationController:(id)arg0 dismissTappedForViewController:(id)arg1 ;
-(void)printAssets:(id)arg0 ;
-(void)purgeIfPossible;
-(void)pushPeopleViewController:(id)arg0 ;
-(void)restoreAssets:(id)arg0 ;
-(void)restoreAssetsWithoutConfirmation:(id)arg0 ;
-(void)rotateAssetsClockwise:(id)arg0 ;
-(void)rotateAssetsCounterclockwise:(id)arg0 ;
-(void)scrollViewDidEndDecelerating:(id)arg0 ;
-(void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)scrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint )arg1 targetContentOffset:(struct CGPoint *)arg2 ;
-(void)settings:(id)arg0 changedValueForKey:(id)arg1 ;
-(void)shareAssets:(id)arg0 ;
-(void)suggestionBecameAvailable:(id)arg0 ;
-(void)tilingViewControllerTransition:(id)arg0 abandonTilingView:(id)arg1 toEndPoint:(id)arg2 ;
-(void)tilingViewControllerTransition:(id)arg0 adoptTilingView:(id)arg1 fromEndPoint:(id)arg2 isCancelingTransition:(BOOL)arg3 animationSetupCompletionHandler:(id)arg4 ;
-(void)toggleEditor:(id)arg0 ;
-(void)toggleInspector:(id)arg0 ;
-(void)togglePlayback:(id)arg0 ;
-(void)toggleViewer:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)trashAssets:(id)arg0 ;
-(void)trashAssetsWithoutConfirmation:(id)arg0 ;
-(void)userTransformTileViewController:(id)arg0 didChangeIsUserInteracting:(BOOL)arg1 ;
-(void)userTransformTileViewController:(id)arg0 didChangeModelTileTransform:(id)arg1 ;
-(void)validateCommand:(id)arg0 ;
-(void)viewControllerSpec:(id)arg0 didChange:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewDidMoveToWindow:(id)arg0 shouldAppearOrDisappear:(BOOL)arg1 ;
-(void)viewModel:(id)arg0 didChange:(id)arg1 ;
-(void)viewSafeAreaInsetsDidChange;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif