// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVPLAYERVIEWCONTROLLER_H
#define AVPLAYERVIEWCONTROLLER_H

@class UIViewController, NSDictionary, UIPopoverPresentationController, NSValue, NSTimer, NSMutableDictionary, UIWindow, NSArray, UIView, AVPlayer, NSString, UIHoverGestureRecognizer, UIPanGestureRecognizer;
@protocol AVPictureInPictureControllerDelegate, UIGestureRecognizerDelegate, UIPopoverPresentationControllerDelegate, AVFullScreenViewControllerDelegate, AVTransitionControllerDelegate, AVPictureInPictureContentSource, AVContentOverlayViewDelegate, AVPlaybackRateCollectionDelegate, AVPlayerControllerDelegate, AVPlaybackControlsViewVisibilityDelegate, AVPlayerViewControllerContentTransitioning_NewsOnly, AVPlayerViewControllerDelegate;


#import "AVSecondScreenConnection.h"
#import "AVPictureInPictureController.h"
#import "AVTransitionController.h"
#import "AVPlaybackControlsController.h"
#import "AVPlayerView.h"
#import "AVPlayerViewControllerContentView.h"
#import "AVPlayerViewControllerCustomControlsView.h"
#import "AVContentOverlayView.h"
#import "AVBehaviorStorage.h"
#import "AVObservationController.h"
#import "AVFullScreenViewController.h"
#import "AVPlaybackRateCollection.h"
#import "AVPlayerController.h"
#import "__AVPlayerLayerView.h"
#import "AVPresentationContext.h"
#import "AVPlayerControllerVolumeAnimator.h"

@interface AVPlayerViewController : UIViewController <AVPictureInPictureControllerDelegate, UIGestureRecognizerDelegate, UIPopoverPresentationControllerDelegate, AVFullScreenViewControllerDelegate, AVTransitionControllerDelegate, AVPictureInPictureContentSource, AVContentOverlayViewDelegate, AVPlaybackRateCollectionDelegate, AVPlayerControllerDelegate, AVPlaybackControlsViewVisibilityDelegate>

 {
    BOOL _playerShouldAutoplay;
    BOOL _showsPlaybackControls;
    BOOL _requiresLinearPlayback;
    NSInteger _videoGravity;
    BOOL _allowsPictureInPicturePlayback;
    BOOL _hasClientSetVideoGravity;
    BOOL _canShowPictureInPictureButton;
    NSDictionary *_pixelBufferAttributes;
    BOOL _canDisplayContentInDetachedWindow;
    BOOL _canPausePlaybackWhenExitingPictureInPicture;
    BOOL _disallowsAutomaticPictureInPictureStart;
    BOOL _canStartPictureInPictureAutomaticallyWhenEnteringBackground;
    AVSecondScreenConnection *_secondScreenConnection;
    AVPictureInPictureController *_pictureInPictureController;
    UIPopoverPresentationController *_mediaSelectionPopoverPresentationController;
    AVTransitionController *_transitionController;
    AVPlaybackControlsController *_playbackControlsController;
    AVPlayerView *_playerViewControllerView;
    AVPlayerViewControllerContentView *_playerViewControllerContentView;
    NSValue *_overrideLayoutMarginsWhenEmbeddedInline;
    CGAffineTransform _overrideTransformForProminentPlayButton;
    BOOL _canToggleVideoGravityWhenEmbeddedInline;
    BOOL _playbackControlsShouldControlSystemVolume;
    AVPlayerViewControllerCustomControlsView *_customControlsView;
    NSTimer *_scrubGestureMomentumTimer;
    BOOL _scrubGestureIsActive;
    float _defaultLinearPlaybackRate;
}


@property (readonly, nonatomic) AVContentOverlayView *_actualContentOverlayView; // ivar: __actualContentOverlayView
@property (readonly, nonatomic) AVBehaviorStorage *_behaviorStorage; // ivar: __behaviorStorage
@property (nonatomic) BOOL _hasBegunObservation; // ivar: __hasBegunObservation
@property (nonatomic, setter=_setInlinePlaybackControlsAlwaysShowLargePlayButtonWhenPaused:) BOOL _inlinePlaybackControlsAlwaysShowLargePlayButtonWhenPaused;
@property (readonly, nonatomic) NSMutableDictionary *_localizedDiscoverabilityTitleForKeyCommandLocalizationKey; // ivar: __localizedDiscoverabilityTitleForKeyCommandLocalizationKey
@property (nonatomic, setter=_setNumberOfTrackedUserInteractions:) NSInteger _numberOfTrackedUserInteractions; // ivar: __numberOfTrackedUserInteractions
@property (readonly, nonatomic) AVObservationController *_observationController; // ivar: __observationController
@property (readonly, nonatomic) AVObservationController *_pipActivitySessionObservationController; // ivar: __pipActivitySessionObservationController
@property (readonly, nonatomic) NSMutableDictionary *_targetVideoGravitiesForLayoutClass; // ivar: __targetVideoGravitiesForLayoutClass
@property (readonly, nonatomic) AVTransitionController *_transitionController;
@property (readonly, nonatomic) NSInteger activeContentTransitionType;
@property (nonatomic) BOOL allowsEnteringFullScreen;
@property (nonatomic) BOOL allowsPictureInPicturePlayback;
@property (readonly, nonatomic, getter=isAudioOnlyContent) BOOL audioOnlyContent;
@property (readonly, nonatomic) BOOL avkit_isVisible;
@property (readonly, nonatomic) CGRect avkit_videoRectInWindow;
@property (readonly, nonatomic) UIWindow *avkit_window;
@property (readonly, nonatomic) NSArray *behaviors;
@property (readonly, nonatomic) BOOL canControlPlayback;
@property (nonatomic) BOOL canDisplayContentInDetachedWindow;
@property (nonatomic) BOOL canHidePlaybackControls; // ivar: _canHidePlaybackControls
@property (nonatomic) BOOL canIncludePlaybackControlsWhenInline; // ivar: _canIncludePlaybackControlsWhenInline
@property (nonatomic) BOOL canPausePlaybackWhenExitingFullScreen; // ivar: _canPausePlaybackWhenExitingFullScreen
@property (nonatomic) BOOL canPausePlaybackWhenExitingPictureInPicture;
@property (nonatomic) BOOL canShowPictureInPictureButton;
@property (nonatomic) BOOL canStartPictureInPictureAutomaticallyFromInline; // ivar: _canStartPictureInPictureAutomaticallyFromInline
@property (nonatomic) BOOL canStartPictureInPictureAutomaticallyWhenEnteringBackground;
@property (nonatomic) BOOL canToggleVideoGravityWhenEmbeddedInline;
@property (readonly, nonatomic) UIView *contentOverlayView;
@property (readonly, nonatomic, getter=isContentTransitionInteractive) BOOL contentTransitionInteractive;
@property (weak, nonatomic) NSObject<AVPlayerViewControllerContentTransitioning_NewsOnly> *contentTransitioningDelegate;
@property (readonly, nonatomic) UIView *contentTransitioningOverlayView;
@property (readonly, nonatomic) AVPlayer *contentTransitioningPlayer;
@property (readonly, nonatomic) AVPlayerViewControllerContentView *contentView;
@property (retain, nonatomic) UIView *customContentTransitioningInfoPanel;
@property (copy, nonatomic) NSArray *customControlItems; // ivar: _customControlItems
@property (readonly, nonatomic) AVPlayerViewControllerCustomControlsView *customControlsView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) CGFloat defaultPlaybackRate; // ivar: _defaultPlaybackRate
@property (weak, nonatomic) NSObject<AVPlayerViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *dismissForPIPStartAfterPresentationHandler; // ivar: _dismissForPIPStartAfterPresentationHandler
@property (nonatomic) BOOL entersFullScreenWhenPlaybackBegins; // ivar: _entersFullScreenWhenPlaybackBegins
@property (nonatomic) BOOL entersFullScreenWhenTapped;
@property (nonatomic) BOOL exitsFullScreenWhenPlaybackEnds; // ivar: _exitsFullScreenWhenPlaybackEnds
@property (copy, nonatomic) id *finishPreparingForInteractiveDismissalHandler; // ivar: _finishPreparingForInteractiveDismissalHandler
@property (readonly, weak, nonatomic) UIViewController *fullScreenViewController;
@property (readonly, nonatomic) AVFullScreenViewController *fullScreenViewController;
@property (readonly, nonatomic) BOOL hasActiveTransition;
@property (readonly, nonatomic) BOOL hasCustomPlaybackControls;
@property (nonatomic) BOOL hasPerformedInitialSetup; // ivar: _hasPerformedInitialSetup
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIHoverGestureRecognizer *hoverGestureRecognizer; // ivar: _hoverGestureRecognizer
@property (nonatomic, getter=isHoveringOverPlaybackControl) BOOL hoveringOverPlaybackControl; // ivar: _hoveringOverPlaybackControl
@property (readonly, nonatomic) UIView *iAdPrerollView;
@property (copy, nonatomic) id *interactiveDismissalCompletionHandler; // ivar: _interactiveDismissalCompletionHandler
@property (retain, nonatomic) NSValue *overrideLayoutMarginsWhenEmbeddedInline;
@property (copy, nonatomic) NSString *overrideParentApplicationDisplayIdentifier; // ivar: _overrideParentApplicationDisplayIdentifier
@property (nonatomic) NSUInteger overrideRouteSharingPolicy; // ivar: _overrideRouteSharingPolicy
@property (copy, nonatomic) NSString *overrideRoutingContextUID; // ivar: _overrideRoutingContextUID
@property (nonatomic) CGAffineTransform overrideTransformForProminentPlayButton;
@property (copy, nonatomic) id *pendingRestoreUserInterfaceForPictureInPictureStopHandler; // ivar: _pendingRestoreUserInterfaceForPictureInPictureStopHandler
@property (readonly, nonatomic, getter=isPictureInPictureActive) BOOL pictureInPictureActive; // ivar: _pictureInPictureActive
@property (copy, nonatomic) NSString *pictureInPictureActivitySessionIdentifier; // ivar: _pictureInPictureActivitySessionIdentifier
@property (readonly, nonatomic, getter=isPictureInPicturePossible) BOOL pictureInPicturePossible;
@property (readonly, nonatomic, getter=isPictureInPictureSuspended) BOOL pictureInPictureSuspended;
@property (readonly, nonatomic) BOOL pictureInPictureWasStartedWhenEnteringBackground;
@property (copy, nonatomic) NSDictionary *pixelBufferAttributes;
@property (copy, nonatomic) id *playButtonHandlerForLazyPlayerLoading;
@property (readonly, nonatomic) AVPlaybackControlsController *playbackControlsController;
@property (nonatomic) BOOL playbackControlsIncludeDisplayModeControls;
@property (nonatomic) BOOL playbackControlsIncludeTransportControls;
@property (nonatomic) BOOL playbackControlsIncludeVolumeControls; // ivar: _playbackControlsIncludeVolumeControls
@property (nonatomic) BOOL playbackControlsShouldControlSystemVolume;
@property (retain, nonatomic) AVPlaybackRateCollection *playbackRateCollection; // ivar: _playbackRateCollection
@property (retain, nonatomic) AVPlayer *player; // ivar: _player
@property (retain, nonatomic) AVPlayerController *playerController; // ivar: _playerController
@property (retain, nonatomic) __AVPlayerLayerView *playerLayerView; // ivar: _playerLayerView
@property (nonatomic) NSInteger preferredUnobscuredArea;
@property (readonly, nonatomic) AVPresentationContext *presentationContext;
@property (readonly, nonatomic, getter=isPresentedFullScreen) BOOL presentedFullScreen;
@property (readonly, nonatomic, getter=isPresentingDetachedFullScreen) BOOL presentingDetachedFullScreen;
@property (readonly, nonatomic, getter=isPresentingFullScreenFromInline) BOOL presentingFullScreenFromInline;
@property (readonly, nonatomic, getter=isPresentingFullWindow) BOOL presentingFullWindow;
@property (nonatomic, getter=isReadyForDisplay) BOOL readyForDisplay; // ivar: _readyForDisplay
@property (nonatomic) BOOL requiresImmediateAssetInspection; // ivar: _requiresImmediateAssetInspection
@property (nonatomic) BOOL requiresLinearPlayback;
@property (retain, nonatomic) UIPanGestureRecognizer *scrubGestureRecognizer; // ivar: _scrubGestureRecognizer
@property (nonatomic) CGSize secondScreenConnectionDisplaySize; // ivar: _secondScreenConnectionDisplaySize
@property (nonatomic) BOOL shouldUseNetworkingResourcesForLiveStreamingWhilePaused; // ivar: _shouldUseNetworkingResourcesForLiveStreamingWhilePaused
@property (nonatomic) BOOL showsExitFullScreenButton;
@property (nonatomic) BOOL showsMinimalPlaybackControlsWhenEmbeddedInline;
@property (nonatomic) BOOL showsPlaybackControls;
@property (nonatomic) BOOL showsTimecodes; // ivar: _showsTimecodes
@property (nonatomic, getter=isStartNextContentTransitionButtonEnabled) BOOL startNextContentTransitionButtonEnabled;
@property (nonatomic, getter=isStartPreviousContentTransitionButtonEnabled) BOOL startPreviousContentTransitionButtonEnabled;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *transportBarCustomMenuItems;
@property (nonatomic) BOOL updatesNowPlayingInfoCenter; // ivar: _updatesNowPlayingInfoCenter
@property (nonatomic) CGRect videoBounds; // ivar: _videoBounds
@property (readonly, nonatomic) CGFloat videoDisplayScale;
@property (readonly, nonatomic) CGSize videoDisplaySize;
@property (copy, nonatomic) NSString *videoGravity;
@property (readonly, nonatomic) UIViewController *viewControllerForFullScreenPresentation;
@property (retain, nonatomic) AVPlayerControllerVolumeAnimator *volumeAnimator; // ivar: _volumeAnimator
@property (nonatomic) BOOL volumeControlsCanShowSlider;
@property (nonatomic) BOOL wantsDetachedFullscreenPresentation; // ivar: _wantsDetachedFullscreenPresentation
@property (nonatomic) BOOL wasInitializedUsingWebKitSPI; // ivar: _wasInitializedUsingWebKitSPI


+(id)keyPathsForValuesAffectingPictureInPictureActive;
+(id)keyPathsForValuesAffectingPictureInPicturePossible;
+(id)keyPathsForValuesAffectingPictureInPictureSuspended;
+(id)keyPathsForValuesAffectingPictureInPictureWasStartedWhenEnteringBackground;
+(id)keyPathsForValuesAffectingPixelBufferAttributes;
+(id)keyPathsForValuesAffectingTransportBarCustomMenuItems;
+(id)keyPathsForValuesAffectingVideoDisplaySize;
+(id)keyPathsForValuesAffectingVideoGravity;
-(BOOL)_canEnterFullScreen;
-(BOOL)_delegateRespondsTo:(SEL)arg0 ;
-(BOOL)_hoverGestureRecognizer:(id)arg0 hasCursorOverView:(id)arg1 ;
-(BOOL)_isDescendantOfRootViewController;
-(BOOL)_isTrackingUserInteraction;
-(BOOL)_isTrackingUserInteractionWithInteractiveView;
-(BOOL)_isTransitioningToOrFromFullScreen;
-(BOOL)_isUnsupportedContent;
-(BOOL)_modalPresentationStyleIsFullScreen;
-(BOOL)_requiresCustomPresentationController;
-(BOOL)_shouldPausePlaybackWhenExitingFullscreen;
-(BOOL)_shouldShowPictureInPictureButton;
-(BOOL)avkit_isEffectivelyFullScreen;
-(BOOL)avkit_wantsManagedSecondScreenPlayback;
-(BOOL)canBecomeFirstResponder;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)modalPresentationCapturesStatusBarAppearance;
-(BOOL)playerControllerCanRestorePlaybackRateAfterAudioSessionDeactivation:(id)arg0 ;
-(BOOL)prefersHomeIndicatorAutoHidden;
-(BOOL)prefersStatusBarHidden;
-(BOOL)prefersStatusBarHiddenForFullScreenViewController:(id)arg0 ;
-(BOOL)transitionController:(id)arg0 gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(BOOL)transitionControllerCanBeginInteractiveDismissalTransition:(id)arg0 ;
-(BOOL)transitionControllerCanBeginInteractivePresentationTransition:(id)arg0 ;
-(CGFloat)_applyNonlinearScaleToScrubGestureVelocity:(CGFloat)arg0 ;
-(CGFloat)_seekDistanceForScrubGestureWithVelocity:(CGFloat)arg0 ;
-(NSInteger)_preferredModalPresentationStyle;
-(NSInteger)adaptivePresentationStyleForPresentationController:(id)arg0 ;
-(NSInteger)avkit_contentSourceType;
-(NSInteger)preferredInterfaceOrientationForPresentation;
-(NSInteger)preferredStatusBarStyle;
-(NSInteger)preferredStatusStyleForFullScreenViewController:(id)arg0 ;
-(NSInteger)preferredWhitePointAdaptivityStyle;
-(id)_activeViewControllerForContentView;
-(id)_avkitPreferredTransitioningDelegate;
-(id)_newsWidgetPlayerBehaviorContext;
-(id)_newsWidgetPlayerLegacyBehavior;
-(id)_presentationControllerForPresentedController:(id)arg0 presentingController:(id)arg1 sourceController:(id)arg2 ;
-(id)avkit_makePlayerControllerIfNeeded:(id)arg0 ;
-(id)avkit_pictureInPictureViewController;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithPlayerLayerView:(id)arg0 ;
-(id)interactiveContentOverlayView;
-(id)keyCommandResponderForFullScreenViewController:(id)arg0 ;
-(id)keyCommands;
-(id)playbackContainerViewForFullScreenViewController:(id)arg0 ;
-(id)transitionController:(id)arg0 configurationForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 ;
-(id)transitionController:(id)arg0 targetViewForDismissingViewController:(id)arg1 ;
-(id)transitionControllerBackgroundViewBackgroundColor:(id)arg0 ;
-(id)transitionControllerPresentedViewBackgroundColor:(id)arg0 ;
-(id)transitioningDelegate;
-(id)viewForFullScreenViewController:(id)arg0 ;
-(void)_addObservers;
-(void)_avkitDidCompletePresentationTransition;
-(void)_avkitWillCompletePresentationTransition;
-(void)_beginTrackingUserInteraction;
-(void)_contentViewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;
-(void)_createPictureInPictureControllerIfNeeded;
-(void)_endScrubGestureIfActive;
-(void)_endTrackingUserInteraction;
-(void)_ensureBehaviorStorage;
-(void)_handleDoubleDoubleTapGesture:(id)arg0 ;
-(void)_handleDoubleTapGesture:(id)arg0 ;
-(void)_handleExitFullScreenKeyCommand:(id)arg0 ;
-(void)_handleFastForwardKeyPressedCommand:(id)arg0 ;
-(void)_handleFastForwardKeyReleasedCommand:(id)arg0 ;
-(void)_handleGoToBeginningKeyCommand:(id)arg0 ;
-(void)_handleHoverGestureRecognizer:(id)arg0 ;
-(void)_handlePlayPauseKeyCommand:(id)arg0 ;
-(void)_handleRewindKeyPressedCommand:(id)arg0 ;
-(void)_handleRewindKeyReleasedCommand:(id)arg0 ;
-(void)_handleScrubInteruptionGestureRecognizer:(id)arg0 ;
-(void)_handleScrubbingGestureRecognizer:(id)arg0 ;
-(void)_handleShowNextFrameKeyCommand:(id)arg0 ;
-(void)_handleShowPreviousFrameKeyCommand:(id)arg0 ;
-(void)_handleSingleTapGesture:(id)arg0 ;
-(void)_handleSkipAhead15SecondsKeyCommand:(id)arg0 ;
-(void)_handleSkipBack15SecondsKeyCommand:(id)arg0 ;
-(void)_handleUserInteractionObservationRecognizer:(id)arg0 ;
-(void)_handleVolumeDownKeyPressedCommand:(id)arg0 ;
-(void)_handleVolumeDownKeyReleasedCommand:(id)arg0 ;
-(void)_handleVolumeUpKeyPressedCommand:(id)arg0 ;
-(void)_handleVolumeUpKeyReleasedCommand:(id)arg0 ;
-(void)_loadObservationControllerIfNeeded;
-(void)_mediaSelectionDoneButtonTapped:(id)arg0 ;
-(void)_notifyOfMetricsCollectionEvent:(NSInteger)arg0 ;
-(void)_seekForScrubGestureWithVelocity:(CGFloat)arg0 ;
-(void)_togglePictureInPicture;
-(void)_transitionFromFullScreenAnimated:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)_transitionFromFullScreenAnimated:(BOOL)arg0 interactive:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)_transitionFromFullScreenWithReason:(NSInteger)arg0 animated:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)_transitionFromInlineToDetachedFullScreenPresentationAnimated:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)_transitionFromInlineToFullScreenPresentationAnimated:(BOOL)arg0 interactive:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)_transitionToAttachedFullScreenAnimated:(BOOL)arg0 interactive:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)_transitionToDetachedFullScreenCompletionHandler:(id)arg0 ;
-(void)_transitionToFullScreenAnimated:(BOOL)arg0 interactive:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)_updateAudioOnlyIndicatorView;
-(void)_updateContentOverlayViewSuperview;
-(void)_updateCustomControlsViewSuperViewIfNeeded;
-(void)_updateDefaultLinearPlaybackRateIfNeeded;
-(void)_updateDefaultPlaybackRateIfNeeded;
-(void)_updateExternalPlaybackIndicatorView;
-(void)_updatePiPControllerCanStartAutomaticallyWhenEnteringBackground;
-(void)_updatePlaybackControlsCanHideStateIfNeeded;
-(void)_updatePlaybackControlsController;
-(void)_updateSelectedPlaybackRateIfNeeded;
-(void)_updateSelectedPlaybackRateIfPlayerControllerRateChanges;
-(void)_updateUnsupportedContentIndicatorView;
-(void)activeContentViewDidChange;
-(void)addBehavior:(id)arg0 ;
-(void)avkit_beginReducingResourcesForPictureInPictureViewController:(id)arg0 playerController:(id)arg1 ;
-(void)avkit_endReducingResourcesForPictureInPictureViewController:(id)arg0 playerController:(id)arg1 ;
-(void)avkit_startRoutingVideoToPictureInPictureViewController:(id)arg0 ;
-(void)avkit_stopRoutingVideoToPictureInPictureViewController:(id)arg0 ;
-(void)avkit_willBeginStoppingPictureInPictureForPictureInPictureViewController:(id)arg0 ;
-(void)contentOverlayViewDidAddOrRemoveSubview:(id)arg0 ;
-(void)dealloc;
-(void)didMoveToParentViewController:(id)arg0 ;
-(void)doneButtonTapped:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)enterAutoplayPhase;
-(void)enterFullScreenAnimated:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)enterFullScreenWithCompletion:(id)arg0 ;
-(void)exitAutoplayPhase;
-(void)exitFullScreenAnimated:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)exitFullScreenWithCompletion:(id)arg0 ;
-(void)exitFullscreen:(id)arg0 ;
-(void)flashAutoplayControls;
-(void)flashPlaybackControlsWithDuration:(CGFloat)arg0 ;
-(void)fullScreenButtonTapped:(id)arg0 ;
-(void)fullScreenViewController:(id)arg0 viewWillTransitionToSize:(struct CGSize )arg1 coordinator:(id)arg2 ;
-(void)fullScreenViewControllerWillBeginFullScreenPresentation:(id)arg0 ;
-(void)fullScreenViewControllerWillEndFullScreenPresentation:(id)arg0 ;
-(void)loadView;
-(void)mediaSelectionButtonTapped:(id)arg0 ;
-(void)performInitialSetup;
-(void)performInitialSetupIfNeededAndPossible;
-(void)pictureInPictureButtonTapped:(id)arg0 ;
-(void)pictureInPictureController:(id)arg0 failedToStartPictureInPictureWithError:(id)arg1 ;
-(void)pictureInPictureController:(id)arg0 restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(id)arg1 ;
-(void)pictureInPictureControllerDidStartPictureInPicture:(id)arg0 ;
-(void)pictureInPictureControllerDidStopPictureInPicture:(id)arg0 ;
-(void)pictureInPictureControllerWillStartPictureInPicture:(id)arg0 ;
-(void)pictureInPictureControllerWillStopPictureInPicture:(id)arg0 ;
-(void)playbackControlsView:(id)arg0 animateAlongsideVisibilityAnimationsWithAnimationCoordinator:(id)arg1 appearingViews:(id)arg2 disappearingViews:(id)arg3 ;
-(void)playbackControlsViewNeedsUpdateStatusBarAppearance:(id)arg0 ;
-(void)playbackRateCollection:(id)arg0 selectedPlaybackRateDidChangeTo:(id)arg1 ;
-(void)popoverPresentationControllerDidDismissPopover:(id)arg0 ;
-(void)prepareForPopoverPresentation:(id)arg0 ;
-(void)removeBehavior:(id)arg0 ;
-(void)setView:(id)arg0 ;
-(void)setWebKitOverrideRouteSharingPolicy:(NSUInteger)arg0 routingContextUID:(id)arg1 ;
-(void)showFullScreenPresentationFromView:(id)arg0 completion:(id)arg1 ;
-(void)startContentTransition:(NSInteger)arg0 ;
-(void)startPictureInPicture;
-(void)stopPictureInPicture;
-(void)toggleMuted:(id)arg0 ;
-(void)togglePlayback:(id)arg0 ;
-(void)transitionController:(id)arg0 animationProgressDidChange:(float)arg1 ;
-(void)transitionController:(id)arg0 prepareForFinishingInteractiveTransition:(id)arg1 ;
-(void)transitionController:(id)arg0 transitionWillComplete:(BOOL)arg1 continueBlock:(id)arg2 ;
-(void)transitionController:(id)arg0 willBeginDismissingViewController:(id)arg1 ;
-(void)transitionController:(id)arg0 willBeginPresentingViewController:(id)arg1 ;
-(void)transitionControllerBeginInteractiveDismissalTransition:(id)arg0 ;
-(void)transitionControllerBeginInteractivePresentationTransition:(id)arg0 ;
-(void)updateVideoBounds;
-(void)videoGravityButtonTapped:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewDidMoveToWindow:(id)arg0 shouldAppearOrDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif