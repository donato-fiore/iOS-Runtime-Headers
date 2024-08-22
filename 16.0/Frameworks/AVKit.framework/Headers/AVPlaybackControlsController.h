// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVPLAYBACKCONTROLSCONTROLLER_H
#define AVPLAYBACKCONTROLSCONTROLLER_H

@class UIViewPropertyAnimator, NSArray, NSString, AVTimeFormatter, NSTimer, NSNumber, NSUUID, UIAlertController;
@protocol AVTransportControlsViewDelegate, AVRoutePickerViewDelegate, AVVolumeControlsControllerDelegate, AVMediaSelectionMenuDelegate, AVControlOverflowButtonDelegate, AVPlayerViewControllerContentViewDelegate_Gen1, AVScrubbing, AVVolumeController;

#import <Foundation/Foundation.h>

#import "AVMediaSelectionMenuController.h"
#import "AVNowPlayingInfoController.h"
#import "AVObservationController.h"
#import "AVPictureInPictureController.h"
#import "AVPlaybackControlsView.h"
#import "AVMobilePlaybackRateMenuController.h"
#import "AVPlaybackSpeedCollection.h"
#import "AVPlayerController.h"
#import "AVPlayerViewController.h"
#import "AVRouteDetectorCoordinator.h"
#import "AVPlayerControllerTimeResolver.h"
#import "AVTurboModePlaybackControlsPlaceholderView.h"
#import "AVPlayerControllerVolumeAnimator.h"

@interface AVPlaybackControlsController : NSObject <AVTransportControlsViewDelegate, AVRoutePickerViewDelegate, AVVolumeControlsControllerDelegate, AVMediaSelectionMenuDelegate, AVControlOverflowButtonDelegate, AVPlayerViewControllerContentViewDelegate_Gen1, AVScrubbing>

 {
    id *_selectedPlaybackSpeedObservationToken;
}


@property (retain, nonatomic) id *AVRouteDetectorCoordinatorMultipleRoutesDetectedObserver; // ivar: _AVRouteDetectorCoordinatorMultipleRoutesDetectedObserver
@property (nonatomic) BOOL allowsEnteringFullScreen; // ivar: _allowsEnteringFullScreen
@property (nonatomic) BOOL canHidePlaybackControls; // ivar: _canHidePlaybackControls
@property (nonatomic) BOOL canIncludePlaybackControlsWhenInline; // ivar: _canIncludePlaybackControlsWhenInline
@property (nonatomic) BOOL canIncludeVideoGravityButton; // ivar: _canIncludeVideoGravityButton
@property (readonly, nonatomic) BOOL canShowLoadingIndicator;
@property (weak, nonatomic) UIViewPropertyAnimator *collapseExpandSliderAnimator; // ivar: _collapseExpandSliderAnimator
@property (copy, nonatomic) id *contentTransitionAction; // ivar: _contentTransitionAction
@property (nonatomic, getter=isCoveringWindow) BOOL coveringWindow; // ivar: _coveringWindow
@property (readonly, nonatomic) CGFloat currentTime;
@property (copy, nonatomic) NSArray *customControlItems; // ivar: _customControlItems
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) AVTimeFormatter *elapsedTimeFormatter; // ivar: _elapsedTimeFormatter
@property (nonatomic) BOOL entersFullScreenWhenPlaybackBegins; // ivar: _entersFullScreenWhenPlaybackBegins
@property (readonly, nonatomic) BOOL entersFullScreenWhenTapped;
@property (nonatomic) BOOL forcePlaybackControlsHidden; // ivar: _forcePlaybackControlsHidden
@property (readonly, nonatomic, getter=isFullScreen) BOOL fullScreen;
@property (nonatomic) BOOL hasBecomeReadyToPlay; // ivar: _hasBecomeReadyToPlay
@property (nonatomic) BOOL hasBegunObservingPotentiallyUnimplementedPlayerControllerProperties; // ivar: _hasBegunObservingPotentiallyUnimplementedPlayerControllerProperties
@property (nonatomic) BOOL hasCustomPlaybackControls; // ivar: _hasCustomPlaybackControls
@property (nonatomic) BOOL hasPlaybackBegunSincePlayerControllerBecameReadyToPlay; // ivar: _hasPlaybackBegunSincePlayerControllerBecameReadyToPlay
@property (nonatomic) BOOL hasSeekableLiveStreamingContent; // ivar: _hasSeekableLiveStreamingContent
@property (nonatomic) BOOL hasStartedUpdates; // ivar: _hasStartedUpdates
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isHidingItemsForTransition) BOOL hidingItemsForTransition; // ivar: _hidingItemsForTransition
@property (nonatomic) BOOL inlinePlaybackControlsAlwaysShowLargePlayButtonWhenPaused; // ivar: _inlinePlaybackControlsAlwaysShowLargePlayButtonWhenPaused
@property (weak, nonatomic) NSTimer *loadingIndicatorTimer; // ivar: _loadingIndicatorTimer
@property (nonatomic) CGFloat loadingIndicatorTimerDelay; // ivar: _loadingIndicatorTimerDelay
@property (readonly, nonatomic) CGFloat maximumTime;
@property (retain, nonatomic) AVMediaSelectionMenuController *mediaSelectionMenuController; // ivar: _mediaSelectionMenuController
@property (readonly, nonatomic) CGFloat minimumTime;
@property (nonatomic) BOOL multipleRoutesDetected; // ivar: _multipleRoutesDetected
@property (readonly, nonatomic) BOOL needsTimeResolver;
@property (readonly, nonatomic) AVNowPlayingInfoController *nowPlayingInfoControllerIfLoaded; // ivar: _nowPlayingInfoControllerIfLoaded
@property (readonly, nonatomic) AVObservationController *observationController; // ivar: _observationController
@property (retain, nonatomic) NSNumber *pendingOrientationChange; // ivar: _pendingOrientationChange
@property (nonatomic, getter=isPictureInPictureActive) BOOL pictureInPictureActive; // ivar: _pictureInPictureActive
@property (retain, nonatomic) AVPictureInPictureController *pictureInPictureController; // ivar: _pictureInPictureController
@property (copy, nonatomic) id *playButtonHandlerForLazyPlayerLoading; // ivar: _playButtonHandlerForLazyPlayerLoading
@property (readonly, nonatomic) BOOL playButtonsShowPauseGlyph;
@property (nonatomic) BOOL playbackControlsIncludeDisplayModeControls; // ivar: _playbackControlsIncludeDisplayModeControls
@property (nonatomic) BOOL playbackControlsIncludeStartContentTransitionButtons; // ivar: _playbackControlsIncludeStartContentTransitionButtons
@property (nonatomic) BOOL playbackControlsIncludeTransportControls; // ivar: _playbackControlsIncludeTransportControls
@property (nonatomic) BOOL playbackControlsIncludeVolumeControls; // ivar: _playbackControlsIncludeVolumeControls
@property (retain, nonatomic) AVObservationController *playbackControlsObservationController; // ivar: _playbackControlsObservationController
@property (retain, nonatomic) AVPlaybackControlsView *playbackControlsView; // ivar: _playbackControlsView
@property (retain, nonatomic) NSTimer *playbackControlsVisibilityTimer; // ivar: _playbackControlsVisibilityTimer
@property (retain, nonatomic) AVMobilePlaybackRateMenuController *playbackRateMenuController; // ivar: _playbackRateMenuController
@property (retain, nonatomic) AVPlaybackSpeedCollection *playbackSpeedCollection; // ivar: _playbackSpeedCollection
@property (nonatomic, getter=isPlaybackSuspendedForScrubbing) BOOL playbackSuspendedForScrubbing; // ivar: _playbackSuspendedForScrubbing
@property (nonatomic) CGRect playbackViewFrame; // ivar: _playbackViewFrame
@property (weak, nonatomic) AVPlayerController *playerController; // ivar: _playerController
@property (retain, nonatomic) NSUUID *playerMuteFadeAnimationID; // ivar: _playerMuteFadeAnimationID
@property (readonly, weak, nonatomic) AVPlayerViewController *playerViewController; // ivar: _playerViewController
@property (nonatomic) BOOL playerViewControllerHasInvalidViewControllerHierarchy; // ivar: _playerViewControllerHasInvalidViewControllerHierarchy
@property (nonatomic) BOOL playerViewControllerIsBeingTransitionedWithResizing; // ivar: _playerViewControllerIsBeingTransitionedWithResizing
@property (nonatomic) BOOL playerViewControllerIsPresentedFullScreen; // ivar: _playerViewControllerIsPresentedFullScreen
@property (nonatomic) BOOL playerViewControllerIsPresentingFullScreen; // ivar: _playerViewControllerIsPresentingFullScreen
@property (nonatomic, getter=isPopoverBeingPresented) BOOL popoverIsBeingPresented; // ivar: _popoverIsBeingPresented
@property (nonatomic) NSInteger preferredUnobscuredArea; // ivar: _preferredUnobscuredArea
@property (nonatomic) BOOL prefersMuted; // ivar: _prefersMuted
@property (readonly, nonatomic) BOOL prefersStatusBarHidden;
@property (readonly, nonatomic) BOOL prominentPlayButtonCanShowPauseGlyph;
@property (readonly, nonatomic) AVTimeFormatter *remainingTimeFormatter; // ivar: _remainingTimeFormatter
@property (nonatomic) BOOL requiresLinearPlayback; // ivar: _requiresLinearPlayback
@property (nonatomic, getter=isResumingUpdates) BOOL resumingUpdates; // ivar: _resumingUpdates
@property (retain, nonatomic) AVRouteDetectorCoordinator *routeDetectorCoordinator; // ivar: _routeDetectorCoordinator
@property (weak, nonatomic) UIAlertController *routePickerAlertController; // ivar: _routePickerAlertController
@property (nonatomic, getter=isScrubbingOrSeeking) BOOL scrubbingOrSeeking; // ivar: _scrubbingOrSeeking
@property (readonly, nonatomic, getter=isSeekingEnabled) BOOL seekingEnabled;
@property (readonly, nonatomic) BOOL shouldEnterFullScreenWhenPlaybackBegins;
@property (nonatomic) BOOL shouldIgnoreTimeResolverUpdates; // ivar: _shouldIgnoreTimeResolverUpdates
@property (nonatomic, getter=isShowingPlaybackControls) BOOL showingPlaybackControls; // ivar: _showingPlaybackControls
@property (nonatomic, getter=shouldShowVolumeControlInTransportBar) BOOL showingVolumeControlInTransportBar; // ivar: _showingVolumeControlInTransportBar
@property (nonatomic) BOOL showsDoneButtonWhenFullScreen; // ivar: _showsDoneButtonWhenFullScreen
@property (nonatomic) BOOL showsLoadingIndicator; // ivar: _showsLoadingIndicator
@property (readonly, nonatomic) BOOL showsMediaSelectionButton;
@property (nonatomic) BOOL showsMinimalPlaybackControlsWhenEmbeddedInline; // ivar: _showsMinimalPlaybackControlsWhenEmbeddedInline
@property (nonatomic) BOOL showsPictureInPictureButton; // ivar: _showsPictureInPictureButton
@property (nonatomic) BOOL showsPlaybackControls; // ivar: _showsPlaybackControls
@property (nonatomic) BOOL showsPlaybackSpeedButton; // ivar: _showsPlaybackSpeedButton
@property (readonly, nonatomic) BOOL showsProminentPlayButton;
@property (readonly, nonatomic) BOOL showsRoutePickerView;
@property (readonly, nonatomic) BOOL showsSkipButtons;
@property (readonly, nonatomic) BOOL showsStartContentTransitionButtons;
@property (nonatomic) BOOL showsTimecodes; // ivar: _showsTimecodes
@property (readonly, nonatomic) BOOL showsTransportControls;
@property (nonatomic) BOOL showsVideoGravityButton; // ivar: _showsVideoGravityButton
@property (nonatomic, getter=isStartLeftwardContentTransitionButtonEnabled) BOOL startLeftwardContentTransitionButtonEnabled; // ivar: _startLeftwardContentTransitionButtonEnabled
@property (nonatomic, getter=isStartRightwardContentTransitionButtonEnabled) BOOL startRightwardContentTransitionButtonEnabled; // ivar: _startRightwardContentTransitionButtonEnabled
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL tapGestureRecognizersCanReceiveTouches;
@property (readonly, nonatomic) CGFloat targetTime;
@property (nonatomic) NSInteger timeControlStatus; // ivar: _timeControlStatus
@property (retain, nonatomic) AVPlayerControllerTimeResolver *timeResolver; // ivar: _timeResolver
@property (copy, nonatomic) NSArray *transportBarCustomMenuItems; // ivar: _transportBarCustomMenuItems
@property (weak, nonatomic) AVTurboModePlaybackControlsPlaceholderView *turboModePlaybackControlsPlaceholderView; // ivar: _turboModePlaybackControlsPlaceholderView
@property (readonly, nonatomic) NSString *uniqueIdentifer; // ivar: _uniqueIdentifer
@property (readonly, nonatomic, getter=isUserInteracting) BOOL userInteracting;
@property (nonatomic) NSUInteger userInteractingCount; // ivar: _userInteractingCount
@property (nonatomic) NSInteger videoGravityButtonType; // ivar: _videoGravityButtonType
@property (nonatomic, getter=isVideoScaled) BOOL videoScaled; // ivar: _videoScaled
@property (retain, nonatomic) AVPlayerControllerVolumeAnimator *volumeAnimator; // ivar: _volumeAnimator
@property (retain, nonatomic) NSObject<AVVolumeController> *volumeController; // ivar: _volumeController
@property (nonatomic) BOOL volumeControlsCanShowSlider; // ivar: _volumeControlsCanShowSlider
@property (nonatomic) BOOL wantsExternalPlaybackButtonShown; // ivar: _wantsExternalPlaybackButtonShown
@property (retain, nonatomic) NSString *windowSceneSessionIdentifier; // ivar: _windowSceneSessionIdentifier


+(id)keyPathsForValuesAffectingCanShowLoadingIndicator;
+(id)keyPathsForValuesAffectingCurrentTime;
+(id)keyPathsForValuesAffectingFullScreen;
+(id)keyPathsForValuesAffectingMaximumTime;
+(id)keyPathsForValuesAffectingMinimumTime;
+(id)keyPathsForValuesAffectingNeedsTimeResolver;
+(id)keyPathsForValuesAffectingPlayButtonsShowPauseGlyph;
+(id)keyPathsForValuesAffectingProminentPlayButtonCanShowPauseGlyph;
+(id)keyPathsForValuesAffectingSeekingEnabled;
+(id)keyPathsForValuesAffectingShouldEnterFullScreenWhenPlaybackBegins;
+(id)keyPathsForValuesAffectingShowsMediaSelectionButton;
+(id)keyPathsForValuesAffectingShowsProminentPlayButton;
+(id)keyPathsForValuesAffectingShowsRoutePickerView;
+(id)keyPathsForValuesAffectingShowsSkipButtons;
+(id)keyPathsForValuesAffectingShowsStartContentTransitionButtons;
+(id)keyPathsForValuesAffectingShowsTransportControls;
-(BOOL)_prefersVolumeSliderExpandedAutomatically;
-(BOOL)_wantsRouteDetectionEnabled;
-(BOOL)playerViewControllerContentViewHasActiveTransition:(id)arg0 ;
-(BOOL)playerViewControllerContentViewIsBeingTransitionedFromFullScreen:(id)arg0 ;
-(BOOL)playerViewControllerContentViewShouldApplyAutomaticVideoGravity:(id)arg0 ;
-(id)_volumeButtonMicaPackageState;
-(id)initWithPlayerViewController:(id)arg0 ;
-(id)overflowMenuItemsForControlOverflowButton:(id)arg0 ;
-(id)playerViewControllerContentViewOverrideLayoutClass:(id)arg0 ;
-(id)volumeControlsController:(id)arg0 volumeButtonControl:(id)arg1 viewContainingVolumeSlider:(id)arg2 ;
-(struct CGSize )playerViewControllerContentViewContentDimensions:(id)arg0 ;
-(void)_autoHideControlsAfterDelay:(CGFloat)arg0 ;
-(void)_bindEnabledStateOfControls:(id)arg0 toKeyPath:(id)arg1 ;
-(void)_bindInclusionOfControlItems:(id)arg0 toKeyPath:(id)arg1 ;
-(void)_hideContextMenusIfPresented;
-(void)_observeBoolForKeyPath:(id)arg0 usingKeyValueObservationController:(id)arg1 observationHandler:(id)arg2 ;
-(void)_seekByTimeInterval:(CGFloat)arg0 toleranceBefore:(CGFloat)arg1 toleranceAfter:(CGFloat)arg2 ;
-(void)_showOrHideDisplayModeControls;
-(void)_startObservingForPlaybackViewUpdates;
-(void)_startObservingPotentiallyUnimplementedPlayerControllerProperties;
-(void)_updateContainerInclusion;
-(void)_updateControlInclusion;
-(void)_updateHasPlaybackBegunSincePlayerControllerBecameReadyToPlay:(BOOL)arg0 playing:(BOOL)arg1 userDidEndTappingProminentPlayButton:(BOOL)arg2 ;
-(void)_updateOrCreateTimeResolverIfNeeded;
-(void)_updatePlaybackControlsVisibilityWantsPlaybackControlsVisible:(BOOL)arg0 ;
-(void)_updatePlaybackControlsVisibleAndObservingUpdates;
-(void)_updatePlaybackSpeedControlInclusion;
-(void)_updateRouteDetectionEnabled;
-(void)_updateScrubberAndTimeLabels;
-(void)_updateSkipButtonsEnableLongPress;
-(void)_updateTransportBarCustomMenuItemsIfNeeded;
-(void)_updateVideoGravityButtonType;
-(void)_updateVolumeButtonGlyph;
-(void)_updateVolumeButtonInclusionAndPrefersVolumeSliderExpandedWithPreferredExpansion:(BOOL)arg0 ;
-(void)_updateVolumeControllerView;
-(void)_updateVolumeSliderValueWithSystemVolume:(float)arg0 animated:(BOOL)arg1 ;
-(void)beginChangingVolume;
-(void)beginHidingItemsForTransition;
-(void)beginScrubbing;
-(void)beginShowingItemsDueToIndirectUserInteraction;
-(void)beginUserInteraction;
-(void)dealloc;
-(void)endChangingVolume;
-(void)endHidingItemsForTransitionAndShowImmediately:(BOOL)arg0 ;
-(void)endScrubbing;
-(void)endShowingItemsDueToIndirectUserInteraction;
-(void)endUserInteraction;
-(void)flashPlaybackControlsWithDuration:(CGFloat)arg0 ;
-(void)flashVolumeControlsWithDuration:(CGFloat)arg0 ;
-(void)handleCurrentRouteSupportsVolumeControlChanged:(id)arg0 ;
-(void)handleVolumeChange:(id)arg0 ;
-(void)mediaSelectionMenuController:(id)arg0 didSelectOption:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(void)overflowButtonDidHideContextMenu:(id)arg0 ;
-(void)overflowButtonWillShowContextMenu:(id)arg0 ;
-(void)playbackControlsViewDidLoad:(id)arg0 ;
-(void)playbackSpeedButtonTapped:(id)arg0 ;
-(void)playerViewControllerContentViewDidChangeSize:(id)arg0 ;
-(void)playerViewControllerContentViewDidChangeVideoGravity:(id)arg0 ;
-(void)playerViewControllerContentViewDidLayoutSubviews:(id)arg0 ;
-(void)playerViewControllerContentViewDidMoveToSuperviewOrWindow:(id)arg0 ;
-(void)playerViewControllerContentViewDidUpdateScrollingStatus:(id)arg0 ;
-(void)playerViewControllerContentViewPlaybackContentContainerViewChanged:(id)arg0 ;
-(void)prominentPlayButtonTouchUpInside:(id)arg0 ;
-(void)routePickerViewDidEndPresentingRoutes:(id)arg0 ;
-(void)routePickerViewWillBeginPresentingRoutes:(id)arg0 ;
-(void)scrubToTime:(CGFloat)arg0 resolution:(CGFloat)arg1 ;
-(void)showPlaybackControls:(BOOL)arg0 immediately:(BOOL)arg1 ;
-(void)skipButtonForcePressChanged:(id)arg0 ;
-(void)skipButtonLongPressEnded:(id)arg0 ;
-(void)skipButtonLongPressTriggered:(id)arg0 ;
-(void)skipButtonTouchUpInside:(id)arg0 ;
-(void)startContentTransitionButtonTouchUpInside:(id)arg0 ;
-(void)startUpdatesIfNeeded;
-(void)toggleMuted;
-(void)togglePlaybackControlsVisibility;
-(void)transportControls:(id)arg0 scrubberDidBeginScrubbing:(id)arg1 ;
-(void)transportControls:(id)arg0 scrubberDidEndScrubbing:(id)arg1 ;
-(void)transportControls:(id)arg0 scrubberDidScrub:(id)arg1 ;
-(void)transportControlsNeedsLayoutIfNeeded:(id)arg0 ;
-(void)turboModePlaybackControlsPlaceholderViewDidLoad:(id)arg0 ;
-(void)updateVolumeSliderValue:(id)arg0 volumeButtonControl:(id)arg1 ;
-(void)volumeButtonLongPressTriggered:(id)arg0 ;
-(void)volumeButtonPanChanged:(id)arg0 ;
-(void)volumeButtonTapTriggered:(id)arg0 ;
-(void)volumeSliderValueDidChange:(id)arg0 ;


@end


#endif