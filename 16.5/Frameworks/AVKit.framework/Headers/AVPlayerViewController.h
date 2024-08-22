// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVPLAYERVIEWCONTROLLER_H
#define AVPLAYERVIEWCONTROLLER_H

@class UIViewController, NSDictionary, VKCImageAnalysis, UIPopoverPresentationController, UIView, NSValue, NSTimer, UITapGestureRecognizer, UIPinchGestureRecognizer, NSMutableDictionary, UIWindow, NSArray, AVPlayer, NSString, UIHoverGestureRecognizer, UIPanGestureRecognizer;
@protocol AVPictureInPictureControllerDelegate, UIGestureRecognizerDelegate, UIPopoverPresentationControllerDelegate, AVFullScreenViewControllerDelegate, AVTransitionControllerDelegate, AVPictureInPictureContentSource, AVContentOverlayViewDelegate, AVPlaybackSpeedCollectionDelegate, AVScrollingObserverDelegate, AVPlayerViewControllerContentViewDelegate, AVScrubbingGestureControllerDelegate, AVInterstitialControllerDelegateManager, AVPlayerControllerDelegate, AVVideoFrameVisualAnalyzerDelegate, AVVisualAnalysisViewDelegate, AVMobileChromelessControlsViewControllerDelegate, AVPlaybackControlsViewVisibilityDelegate, AVVolumeController, AVPlayerViewControllerContentTransitioning_NewsOnly, AVPlayerViewControllerDelegate;


#import "AVRoutingConfiguration.h"
#import "AVMobileFullscreenController.h"
#import "AVSecondScreenContentViewConnection.h"
#import "AVNowPlayingInfoController.h"
#import "AVPictureInPictureController.h"
#import "AVTransitionController.h"
#import "AVPlaybackControlsController.h"
#import "AVVideoFrameVisualAnalyzer.h"
#import "AVScrubbingGestureController.h"
#import "AVPlayerView.h"
#import "AVPlayerViewControllerContentView.h"
#import "AVMobileControlsViewController.h"
#import "AVPlayerViewControllerCustomControlsView.h"
#import "AVCenterTapGestureRecognizer.h"
#import "AVContentOverlayView.h"
#import "AVBehaviorStorage.h"
#import "AVObservationController.h"
#import "AVVisualAnalysisView.h"
#import "AVFullScreenViewController.h"
#import "AVPlaybackRateCollection.h"
#import "AVPlaybackSpeedCollection.h"
#import "AVPlayerController.h"
#import "__AVPlayerLayerView.h"
#import "AVPresentationContext.h"
#import "AVPlaybackSpeed.h"
#import "AVPlayerControllerVolumeAnimator.h"

@interface AVPlayerViewController : UIViewController <AVPictureInPictureControllerDelegate, UIGestureRecognizerDelegate, UIPopoverPresentationControllerDelegate, AVFullScreenViewControllerDelegate, AVTransitionControllerDelegate, AVPictureInPictureContentSource, AVContentOverlayViewDelegate, AVPlaybackSpeedCollectionDelegate, AVScrollingObserverDelegate, AVPlayerViewControllerContentViewDelegate, AVScrubbingGestureControllerDelegate, AVInterstitialControllerDelegateManager, AVPlayerControllerDelegate, AVVideoFrameVisualAnalyzerDelegate, AVVisualAnalysisViewDelegate, AVMobileChromelessControlsViewControllerDelegate, AVPlaybackControlsViewVisibilityDelegate>

 {
    BOOL _playerShouldAutoplay;
    BOOL _showsPlaybackControls;
    BOOL _actuallyRequiresLinearPlayback;
    NSInteger _videoGravity;
    BOOL _allowsPictureInPicturePlayback;
    BOOL _hasClientSetVideoGravity;
    BOOL _canShowPictureInPictureButton;
    NSDictionary *_pixelBufferAttributes;
    BOOL _canDisplayContentInDetachedWindow;
    BOOL _canPausePlaybackWhenExitingPictureInPicture;
    BOOL _disallowsAutomaticPictureInPictureStart;
    BOOL _canStartPictureInPictureAutomaticallyWhenEnteringBackground;
    BOOL _pipStartingOrActive;
    BOOL _fullscreenTransitionInProgress;
    BOOL _presentationTransitionInProgress;
    BOOL _playbackControlsIncludeTransportControls;
    BOOL _playbackControlsIncludeDisplayModeControls;
    BOOL _playbackControlsIncludeVolumeControls;
    BOOL _playbackBeganAfterPlayerControllerBecameReadyToPlay;
    AVRoutingConfiguration *_routingConfiguration;
    VKCImageAnalysis *_currentInternalImageAnalysis;
    AVMobileFullscreenController *_fullscreenController;
    AVSecondScreenContentViewConnection *_secondScreenConnection;
    AVNowPlayingInfoController *_nowPlayingInfoController;
    AVPictureInPictureController *_pictureInPictureController;
    UIPopoverPresentationController *_mediaSelectionPopoverPresentationController;
    AVTransitionController *_transitionController;
    AVPlaybackControlsController *_playbackControlsController;
    id<AVVolumeController> *_volumeController;
    AVVideoFrameVisualAnalyzer *_videoFrameVisualAnalyzer;
    AVScrubbingGestureController *_scrubbingGestureController;
    AVPlayerView *_playerViewControllerView;
    AVPlayerViewControllerContentView *_playerViewControllerContentView;
    AVMobileControlsViewController *_controlsViewController;
    AVPlayerViewControllerCustomControlsView *_customControlsView;
    UIView *_contentOverlayView;
    NSValue *_overrideLayoutMarginsWhenEmbeddedInline;
    CGAffineTransform _overrideTransformForProminentPlayButton;
    BOOL _canToggleVideoGravityWhenEmbeddedInline;
    BOOL _playbackControlsShouldControlSystemVolume;
    NSTimer *_scrubGestureMomentumTimer;
    BOOL _scrubGestureIsActive;
    float _defaultLinearPlaybackRate;
    BOOL _currentPrefersStatusBarHidden;
    AVCenterTapGestureRecognizer *_tapThroughGestureRecognizer;
    UITapGestureRecognizer *_singleTapGestureRecognizer;
    UITapGestureRecognizer *_doubleTapGestureRecognizer;
    UITapGestureRecognizer *_doubleTapTwoFingersGestureRecognizer;
    UIPinchGestureRecognizer *_videoGravityPinchGestureRecognizer;
    BOOL _controlsViewControllerHasBeenSetUp;
    BOOL _playerLayerViewObservationsHasBeenSetup;
    NSInteger _playerViewControllerAnimated;
}


@property (readonly, nonatomic) AVContentOverlayView *_actualContentOverlayView; // ivar: __actualContentOverlayView
@property (readonly, nonatomic) AVBehaviorStorage *_behaviorStorage; // ivar: __behaviorStorage
@property (nonatomic) BOOL _hasBegunObservation; // ivar: __hasBegunObservation
@property (nonatomic, setter=_setInlinePlaybackControlsAlwaysShowLargePlayButtonWhenPaused:) BOOL _inlinePlaybackControlsAlwaysShowLargePlayButtonWhenPaused;
@property (readonly, nonatomic) NSMutableDictionary *_localizedDiscoverabilityTitleForKeyCommandLocalizationKey; // ivar: __localizedDiscoverabilityTitleForKeyCommandLocalizationKey
@property (nonatomic, setter=_setNumberOfTrackedUserInteractions:) NSInteger _numberOfTrackedUserInteractions; // ivar: __numberOfTrackedUserInteractions
@property (readonly, nonatomic) AVObservationController *_observationController; // ivar: _observationController
@property (readonly, nonatomic) AVObservationController *_pipActivitySessionObservationController; // ivar: __pipActivitySessionObservationController
@property (readonly, nonatomic) NSMutableDictionary *_targetVideoGravitiesForLayoutClass; // ivar: __targetVideoGravitiesForLayoutClass
@property (readonly, nonatomic) AVTransitionController *_transitionController;
@property (readonly, nonatomic) NSInteger activeContentTransitionType;
@property (nonatomic) BOOL actuallyRequiresLinearPlayback;
@property (nonatomic) BOOL allowsEnteringFullScreen; // ivar: _allowsEnteringFullScreen
@property (nonatomic) BOOL allowsPictureInPicturePlayback;
@property (nonatomic) BOOL allowsVideoFrameAnalysis; // ivar: _allowsVideoFrameAnalysis
@property (readonly, nonatomic) BOOL analysisInteractionInProgress;
@property (retain, nonatomic) AVVisualAnalysisView *analysisView; // ivar: _analysisView
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
@property (readonly, nonatomic) AVMobileControlsViewController *controlsViewController;
@property (readonly, nonatomic) AVMobileControlsViewController *controlsViewController;
@property (retain, nonatomic) UIView *customContentTransitioningInfoPanel;
@property (copy, nonatomic) NSArray *customControlItems; // ivar: _customControlItems
@property (readonly, nonatomic) AVPlayerViewControllerCustomControlsView *customControlsView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) CGFloat defaultPlaybackRate;
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
@property (retain, nonatomic) VKCImageAnalysis *imageAnalysis; // ivar: _imageAnalysis
@property (copy, nonatomic) id *interactiveDismissalCompletionHandler; // ivar: _interactiveDismissalCompletionHandler
@property (nonatomic) BOOL isUpdatingSecondScreenConnectionReadyToConnect; // ivar: _isUpdatingSecondScreenConnectionReadyToConnect
@property (nonatomic) UIEdgeInsets legibleContentInsets; // ivar: _legibleContentInsets
@property (retain, nonatomic) NSValue *overrideLayoutMarginsWhenEmbeddedInline;
@property (copy, nonatomic) NSString *overrideParentApplicationDisplayIdentifier; // ivar: _overrideParentApplicationDisplayIdentifier
@property (nonatomic) CGAffineTransform overrideTransformForProminentPlayButton;
@property (copy, nonatomic) id *pendingRestoreUserInterfaceForPictureInPictureStopHandler; // ivar: _pendingRestoreUserInterfaceForPictureInPictureStopHandler
@property (readonly, nonatomic, getter=isPictureInPictureActive) BOOL pictureInPictureActive;
@property (copy, nonatomic) NSString *pictureInPictureActivitySessionIdentifier; // ivar: _pictureInPictureActivitySessionIdentifier
@property (readonly, nonatomic, getter=isPictureInPicturePossible) BOOL pictureInPicturePossible;
@property (readonly, nonatomic, getter=isPictureInPictureSuspended) BOOL pictureInPictureSuspended;
@property (readonly, nonatomic) BOOL pictureInPictureWasStartedWhenEnteringBackground;
@property (copy, nonatomic) NSDictionary *pixelBufferAttributes;
@property (copy, nonatomic) id *playButtonHandlerForLazyPlayerLoading;
@property (readonly, nonatomic) AVPlaybackControlsController *playbackControlsController;
@property (nonatomic) BOOL playbackControlsIncludeDisplayModeControls;
@property (nonatomic) BOOL playbackControlsIncludeTransportControls;
@property (nonatomic) BOOL playbackControlsIncludeVolumeControls;
@property (nonatomic) BOOL playbackControlsShouldControlSystemVolume;
@property (retain, nonatomic) AVPlaybackRateCollection *playbackRateCollection;
@property (retain, nonatomic) AVPlaybackSpeedCollection *playbackSpeedCollection; // ivar: _playbackSpeedCollection
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
@property (nonatomic) BOOL requiresLinearPlayback; // ivar: _requiresLinearPlayback
@property (retain, nonatomic) UIPanGestureRecognizer *scrubGestureRecognizer; // ivar: _scrubGestureRecognizer
@property (nonatomic) CGSize secondScreenConnectionDisplaySize; // ivar: _secondScreenConnectionDisplaySize
@property (readonly, nonatomic) AVPlaybackSpeed *selectedSpeed;
@property (nonatomic) BOOL shouldUseNetworkingResourcesForLiveStreamingWhilePaused; // ivar: _shouldUseNetworkingResourcesForLiveStreamingWhilePaused
@property (nonatomic) BOOL showsAnalysisButtonIfAvailable; // ivar: _showsAnalysisButtonIfAvailable
@property (nonatomic) BOOL showsExitFullScreenButton;
@property (nonatomic) BOOL showsMinimalPlaybackControlsWhenEmbeddedInline;
@property (nonatomic) BOOL showsPlaybackControls;
@property (nonatomic) BOOL showsTimecodes; // ivar: _showsTimecodes
@property (copy, nonatomic) NSArray *speeds;
@property (nonatomic, getter=isStartNextContentTransitionButtonEnabled) BOOL startNextContentTransitionButtonEnabled;
@property (nonatomic, getter=isStartPreviousContentTransitionButtonEnabled) BOOL startPreviousContentTransitionButtonEnabled;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *transportBarCustomMenuItems; // ivar: _transportBarCustomMenuItems
@property (nonatomic) BOOL updatesNowPlayingInfoCenter; // ivar: _updatesNowPlayingInfoCenter
@property (nonatomic) CGRect videoBounds; // ivar: _videoBounds
@property (readonly, nonatomic) CGFloat videoDisplayScale;
@property (readonly, nonatomic) CGSize videoDisplaySize;
@property (copy, nonatomic) NSString *videoGravity;
@property (readonly, nonatomic) UIViewController *viewControllerForFullScreenPresentation;
@property (retain, nonatomic) AVPlayerControllerVolumeAnimator *volumeAnimator; // ivar: _volumeAnimator
@property (nonatomic) BOOL volumeControlsCanShowSlider;
@property (nonatomic) BOOL wantsDetachedFullscreenPresentation; // ivar: _wantsDetachedFullscreenPresentation
@property (nonatomic) BOOL wantsVideoFrameAnalysis;
@property (nonatomic) BOOL wasInitializedUsingWebKitSPI; // ivar: _wasInitializedUsingWebKitSPI


+(BOOL)usesSecondGenerationControls;
+(id)keyPathsForValuesAffectingAnalysisInteractionInProgress;
+(id)keyPathsForValuesAffectingPictureInPictureActive;
+(id)keyPathsForValuesAffectingPictureInPicturePossible;
+(id)keyPathsForValuesAffectingPictureInPictureSuspended;
+(id)keyPathsForValuesAffectingPictureInPictureWasStartedWhenEnteringBackground;
+(id)keyPathsForValuesAffectingPixelBufferAttributes;
+(id)keyPathsForValuesAffectingSelectedSpeed;
+(id)keyPathsForValuesAffectingSpeeds;
+(id)keyPathsForValuesAffectingTransportBarCustomMenuItems;
+(id)keyPathsForValuesAffectingVideoDisplaySize;
+(id)keyPathsForValuesAffectingVideoGravity;
+(id)keyPathsForValuesAffectingWantsVideoFrameAnalysis;
+(void)setUsesSecondGenerationControls:(BOOL)arg0 ;
-(BOOL)_canEnterFullScreen;
-(BOOL)_delegateRespondsTo:(SEL)arg0 ;
-(BOOL)_hoverGestureRecognizer:(id)arg0 hasCursorOverView:(id)arg1 ;
-(BOOL)_isDescendantOfRootViewController;
-(BOOL)_isReadyToConnectSynchronousChecks;
-(BOOL)_isTrackingUserInteraction;
-(BOOL)_isTrackingUserInteractionWithInteractiveView;
-(BOOL)_isTransitioningToOrFromFullScreen;
-(BOOL)_isUnsupportedContent;
-(BOOL)_modalPresentationStyleIsFullScreen;
-(BOOL)_secondGenerationControlsEnabled;
-(BOOL)_shouldEnterFullScreenAfterPlaybackBegins;
-(BOOL)_shouldPausePlaybackWhenExitingFullscreen;
-(BOOL)_shouldShowPictureInPictureButton;
-(BOOL)_wantsNowPlayingInfoCenter;
-(BOOL)avkit_isEffectivelyFullScreen;
-(BOOL)avkit_wantsManagedSecondScreenPlayback;
-(BOOL)canBecomeFirstResponder;
-(BOOL)gestureRecognizer:(id)arg0 shouldBeRequiredToFailByGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)modalPresentationCapturesStatusBarAppearance;
-(BOOL)playerControllerCanRestorePlaybackRateAfterAudioSessionDeactivation:(id)arg0 ;
-(BOOL)playerViewControllerContentViewIsPlayingOnSecondScreen:(id)arg0 ;
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
-(NSInteger)preferredStatusBarStyle;
-(NSInteger)preferredStatusStyleForFullScreenViewController:(id)arg0 ;
-(NSInteger)preferredWhitePointAdaptivityStyle;
-(id)_activeViewControllerForContentView;
-(id)_avkitPreferredTransitioningDelegate;
-(id)_chromeControlsViewController;
-(id)_newsWidgetPlayerBehaviorContext;
-(id)_newsWidgetPlayerLegacyBehavior;
-(id)_volumeController;
-(id)avkit_makePlayerControllerIfNeeded:(id)arg0 ;
-(id)avkit_pictureInPictureViewController;
-(id)controlsViewController:(id)arg0 displayNameForMediaSelectionOption:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithPlayerLayerView:(id)arg0 ;
-(id)interactiveContentOverlayView;
-(id)keyCommandResponderForFullScreenViewController:(id)arg0 ;
-(id)keyCommands;
-(id)playbackContainerViewForFullScreenViewController:(id)arg0 ;
-(id)scrubGestureConfigurationSettings;
-(id)scrubbingGestureConfigurationForGestureController:(id)arg0 ;
-(id)transitionController:(id)arg0 configurationForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 ;
-(id)transitionController:(id)arg0 targetViewForDismissingViewController:(id)arg1 ;
-(id)transitionControllerBackgroundViewBackgroundColor:(id)arg0 ;
-(id)transitionControllerPresentedViewBackgroundColor:(id)arg0 ;
-(id)transitioningDelegate;
-(id)viewForFullScreenViewController:(id)arg0 ;
-(struct UIEdgeInsets )playerViewControllerContentViewEdgeInsetsForLetterboxedVideo:(id)arg0 ;
-(void)_addObservers;
-(void)_beginScrubGestureIfNeeded;
-(void)_beginTrackingUserInteraction;
-(void)_contentViewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;
-(void)_createPictureInPictureControllerIfNeeded;
-(void)_didBeginPlayingOnSecondScreen;
-(void)_didEndPlayingOnSecondScreen;
-(void)_endScrubGestureIfActive;
-(void)_endTrackingUserInteraction;
-(void)_ensureBehaviorStorage;
-(void)_enterFullScreenWhenPlayingIfNeeded;
-(void)_handleDoubleTapGesture:(id)arg0 ;
-(void)_handleDoubleTapTwoFingersGesture:(id)arg0 ;
-(void)_handleExitFullScreenKeyCommand:(id)arg0 ;
-(void)_handleFastForwardKeyPressedCommand:(id)arg0 ;
-(void)_handleFastForwardKeyReleasedCommand:(id)arg0 ;
-(void)_handleGoToBeginningKeyCommand:(id)arg0 ;
-(void)_handleHoverGestureRecognizer:(id)arg0 ;
-(void)_handlePlayPauseKeyCommand:(id)arg0 ;
-(void)_handlePlaybackToggleNotificationForMetricsCollectionEvent;
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
-(void)_handleVideoGravityPinchGesture:(id)arg0 ;
-(void)_handleVolumeDownKeyPressedCommand:(id)arg0 ;
-(void)_handleVolumeDownKeyReleasedCommand:(id)arg0 ;
-(void)_handleVolumeUpKeyPressedCommand:(id)arg0 ;
-(void)_handleVolumeUpKeyReleasedCommand:(id)arg0 ;
-(void)_mediaSelectionDoneButtonTapped:(id)arg0 ;
-(void)_notifyOfMetricsCollectionEvent:(NSInteger)arg0 ;
-(void)_playPauseButtonWasPressedEvent:(id)arg0 ;
-(void)_resetVisualAnalysisViewSelectionIfNeeded;
-(void)_seekForScrubGestureWithVelocity:(CGFloat)arg0 ;
-(void)_setSecondScreenConnectionReadyToConnect:(BOOL)arg0 ;
-(void)_setUpSecondScreenConnectionIfNeeded;
-(void)_startPlayerLayerViewObservationsIfNeeded;
-(void)_togglePictureInPicture;
-(void)_togglePlaybackForCenterTapGesture:(id)arg0 ;
-(void)_transitionFromDetachedFullScreenPresentationToInlineAnimated:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)_transitionFromFullScreenAnimated:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)_transitionFromFullScreenAnimated:(BOOL)arg0 interactive:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)_transitionFromFullScreenPresentationToInlineAnimated:(BOOL)arg0 interactive:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)_transitionFromFullScreenWithReason:(NSInteger)arg0 animated:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)_transitionToAttachedFullScreenAnimated:(BOOL)arg0 interactive:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)_transitionToDetachedFullScreenCompletionHandler:(id)arg0 ;
-(void)_transitionToFullScreenAnimated:(BOOL)arg0 interactive:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)_updateActivePlaybackSpeedIfNeeded;
-(void)_updateActuallyRequiresLinearPlayback;
-(void)_updateAudioOnlyIndicatorView;
-(void)_updateContentOverlayViewSuperview;
-(void)_updateContentViewEdgeInsetsForLetterboxedContent;
-(void)_updateCustomControlsViewStateWithVisibleControlsSet:(NSUInteger)arg0 ;
-(void)_updateCustomControlsViewSuperViewIfNeeded;
-(void)_updateDefaultLinearPlaybackRateIfNeeded;
-(void)_updateDefaultPlaybackRateIfNeeded;
-(void)_updateExternalPlaybackIndicatorView;
-(void)_updateIncludedControls;
-(void)_updateNowPlayingInfoController;
-(void)_updatePiPControllerCanStartAutomaticallyWhenEnteringBackground;
-(void)_updatePlaybackBeganAfterPlayerControllerBecameReadyToPlayIfNeeded;
-(void)_updatePlaybackControlsCanHideStateIfNeeded;
-(void)_updatePlaybackControlsState;
-(void)_updateSecondScreenConnectionPlayingState;
-(void)_updateSecondScreenConnectionReadyToConnect;
-(void)_updateSelectedPlaybackSpeedIfPlayerControllerRateChanges;
-(void)_updateUnsupportedContentIndicatorView;
-(void)_updateViewControllerPreferencesIfNeeded;
-(void)_updateVolumeController;
-(void)_volumeButtonWasPressedEvent:(id)arg0 ;
-(void)activeContentViewDidChange;
-(void)addBehavior:(id)arg0 ;
-(void)avkit_beginReducingResourcesForPictureInPictureViewController:(id)arg0 playerController:(id)arg1 ;
-(void)avkit_endReducingResourcesForPictureInPictureViewController:(id)arg0 playerController:(id)arg1 ;
-(void)avkit_startRoutingVideoToPictureInPictureViewController:(id)arg0 ;
-(void)avkit_stopRoutingVideoToPictureInPictureViewController:(id)arg0 ;
-(void)avkit_willBeginStoppingPictureInPictureForPictureInPictureViewController:(id)arg0 ;
-(void)chromlessControlsViewControllerDidPressLiveTextButton:(id)arg0 ;
-(void)contentOverlayViewDidAddOrRemoveSubview:(id)arg0 ;
-(void)controlsViewController:(id)arg0 didBeginUpdatingVisibleControlsTo:(NSUInteger)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)controlsViewController:(id)arg0 willBeginUpdatingVisibleControlsTo:(NSUInteger)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)controlsViewControllerDidUpdateLayoutGuides:(id)arg0 ;
-(void)dealloc;
-(void)didMoveToParentViewController:(id)arg0 ;
-(void)didPresentInterstitialGroup:(id)arg0 ;
-(void)doneButtonTapped:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)enterAutoplayPhase;
-(void)enterFullScreen:(id)arg0 ;
-(void)enterFullScreenAnimated:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)enterFullScreenWithCompletion:(id)arg0 ;
-(void)exitAutoplayPhase;
-(void)exitFullScreenAnimated:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)exitFullScreenWithCompletion:(id)arg0 ;
-(void)exitFullscreen:(id)arg0 ;
-(void)flashAutoplayControls;
-(void)flashPlaybackControlsWithDuration:(CGFloat)arg0 ;
-(void)fullScreenViewController:(id)arg0 viewWillTransitionToSize:(struct CGSize )arg1 coordinator:(id)arg2 ;
-(void)fullScreenViewControllerDidAttachContentView:(id)arg0 ;
-(void)fullScreenViewControllerWillAttachContentView:(id)arg0 ;
-(void)fullScreenViewControllerWillBeginFullScreenPresentation:(id)arg0 ;
-(void)fullScreenViewControllerWillEndFullScreenPresentation:(id)arg0 ;
-(void)loadView;
-(void)mediaSelectionButtonTapped:(id)arg0 ;
-(void)performInitialSetupIfNeededAndPossible;
-(void)pictureInPictureButtonTapped:(id)arg0 ;
-(void)pictureInPictureController:(id)arg0 failedToStartPictureInPictureWithError:(id)arg1 ;
-(void)pictureInPictureController:(id)arg0 restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(id)arg1 ;
-(void)pictureInPictureControllerDidStartPictureInPicture:(id)arg0 ;
-(void)pictureInPictureControllerDidStopPictureInPicture:(id)arg0 ;
-(void)pictureInPictureControllerWillStartPictureInPicture:(id)arg0 ;
-(void)pictureInPictureControllerWillStopPictureInPicture:(id)arg0 ;
-(void)playbackControlsView:(id)arg0 animateAlongsideVisibilityAnimationsWithAnimationCoordinator:(id)arg1 appearingViews:(id)arg2 disappearingViews:(id)arg3 ;
-(void)playbackControlsViewDidToggleControlsVisibility:(id)arg0 ;
-(void)playbackControlsViewNeedsUpdateStatusBarAppearance:(id)arg0 ;
-(void)playbackSpeedCollection:(id)arg0 selectedPlaybackSpeedDidChangeTo:(id)arg1 ;
-(void)playerControllerDidCompleteInspection:(id)arg0 ;
-(void)playerViewControllerContentView:(id)arg0 didMoveToWindow:(id)arg1 ;
-(void)popoverPresentationControllerDidDismissPopover:(id)arg0 ;
-(void)prepareForPopoverPresentation:(id)arg0 ;
-(void)removeBehavior:(id)arg0 ;
-(void)scrollingObserverDidChangeScrollingState:(id)arg0 ;
-(void)selectSpeed:(id)arg0 ;
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
-(void)videoFrameVisualAnalyzerDidFinishAnalyzingVideoFrame:(id)arg0 withAnalysis:(id)arg1 ;
-(void)videoFrameVisualAnalyzerFailedAnalyzingVideoFrame:(id)arg0 withError:(id)arg1 ;
-(void)videoGravityButtonTapped:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewDidMoveToWindow:(id)arg0 shouldAppearOrDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;
-(void)visualAnalysisView:(id)arg0 didToggleAnalysisButtonVisibilityToVisible:(BOOL)arg1 ;
-(void)visualAnalysisView:(id)arg0 prepareForCalloutAction:(SEL)arg1 completion:(id)arg2 ;
-(void)visualAnalysisViewDidBeginInteraction:(BOOL)arg0 ;
-(void)visualAnalysisViewDidPressAnalysisButton:(id)arg0 ;
-(void)willPresentInterstitialGroup:(id)arg0 ;


@end


#endif