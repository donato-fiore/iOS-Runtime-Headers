// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VUIBACKGROUNDMEDIACONTROLLER_H
#define VUIBACKGROUNDMEDIACONTROLLER_H

@class VUIImageProxy, VUIImageView, AVPlayerViewController, NSString, NSTimer, NSArray, NSNumber, UIViewController, NSDate, TVPPlayer, NSLayoutConstraint, TVPVideoView, TVPStateMachine;
@protocol AVPlayerViewControllerDelegate, VUIBackgroundMediaPlayback;


#import "VUIBaseViewController.h"
#import "VUIMediaInfo.h"
#import "VUIMediaInfoFetchController.h"

@interface VUIBackgroundMediaController : VUIBaseViewController <AVPlayerViewControllerDelegate, VUIBackgroundMediaPlayback>



@property (retain, nonatomic) VUIImageProxy *alphaImageProxy; // ivar: _alphaImageProxy
@property (retain, nonatomic) VUIImageView *alphaProxyImageView; // ivar: _alphaProxyImageView
@property (nonatomic) BOOL animateImageChange; // ivar: _animateImageChange
@property (nonatomic) BOOL animateVideoChange; // ivar: _animateVideoChange
@property (nonatomic, getter=isAutomaticPlaybackStart) BOOL automaticPlaybackStart; // ivar: _automaticPlaybackStart
@property (nonatomic, getter=isAutomaticPlaybackStop) BOOL automaticPlaybackStop; // ivar: _automaticPlaybackStop
@property (retain, nonatomic) AVPlayerViewController *avPlayerViewController; // ivar: _avPlayerViewController
@property (nonatomic) float backgroundVolume; // ivar: _backgroundVolume
@property (readonly, nonatomic, getter=isBackgrounded) BOOL backgrounded;
@property (nonatomic) BOOL clearPreviousImageBeforeLoading; // ivar: _clearPreviousImageBeforeLoading
@property (readonly, copy, nonatomic) VUIMediaInfo *currentMediaInfo;
@property (nonatomic) NSUInteger deactivationReasons; // ivar: _deactivationReasons
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didAVPlayerControllerEnterFullscreen; // ivar: _didAVPlayerControllerEnterFullscreen
@property (nonatomic) BOOL didWeCreatePlayer; // ivar: _didWeCreatePlayer
@property (readonly, nonatomic, getter=isForeground) BOOL foreground;
@property (nonatomic) float foregroundVolume; // ivar: _foregroundVolume
@property (nonatomic) float fullscreenTransitionVolumeAnimationChanges; // ivar: _fullscreenTransitionVolumeAnimationChanges
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat imageAnimationDuration; // ivar: _imageAnimationDuration
@property (nonatomic) NSUInteger imageAnimationOptions; // ivar: _imageAnimationOptions
@property (nonatomic) NSUInteger imageContentMode; // ivar: _imageContentMode
@property (weak, nonatomic) NSTimer *imageDelayTimer; // ivar: _imageDelayTimer
@property (nonatomic) NSUInteger imageSwappingAnimationType; // ivar: _imageSwappingAnimationType
@property (nonatomic) CGFloat imageTransitionAnimationDuration; // ivar: _imageTransitionAnimationDuration
@property (nonatomic) CGFloat imageTransitionInterval; // ivar: _imageTransitionInterval
@property (nonatomic) CGFloat imageVideoTransitionAnimationDuration; // ivar: _imageVideoTransitionAnimationDuration
@property (nonatomic) UIEdgeInsets legibleContentInsets; // ivar: _legibleContentInsets
@property (retain, nonatomic) VUIMediaInfoFetchController *mediaInfoFetchController; // ivar: _mediaInfoFetchController
@property (nonatomic) NSUInteger mediaInfoIndex; // ivar: _mediaInfoIndex
@property (copy, nonatomic) NSArray *mediaInfos;
@property (nonatomic) BOOL mutePlaybackInBackground; // ivar: _mutePlaybackInBackground
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) NSUInteger numberOfVolumeIncrements; // ivar: _numberOfVolumeIncrements
@property (nonatomic) BOOL observingPictureInPictureActive; // ivar: _observingPictureInPictureActive
@property (weak, nonatomic) NSTimer *pauseStateTimeoutTimer; // ivar: _pauseStateTimeoutTimer
@property (retain, nonatomic) NSNumber *pendingAnimated; // ivar: _pendingAnimated
@property (retain, nonatomic) VUIMediaInfo *pendingMediaInfo; // ivar: _pendingMediaInfo
@property (nonatomic) NSUInteger pendingMediaInfoDirection; // ivar: _pendingMediaInfoDirection
@property (retain, nonatomic) UIViewController *playbackContainerController; // ivar: _playbackContainerController
@property (weak, nonatomic) NSTimer *playbackDelayTimer; // ivar: _playbackDelayTimer
@property (nonatomic, getter=isPlaybackEnabled) BOOL playbackEnabled; // ivar: _playbackEnabled
@property (retain, nonatomic) NSDate *playbackLoadingStartDate; // ivar: _playbackLoadingStartDate
@property (weak, nonatomic) NSTimer *playbackLoadingTimer; // ivar: _playbackLoadingTimer
@property (nonatomic) CGFloat playbackStartDelay; // ivar: _playbackStartDelay
@property (nonatomic) CGFloat playbackStopDelay; // ivar: _playbackStopDelay
@property (nonatomic) NSUInteger playbackStopDelayReasons; // ivar: _playbackStopDelayReasons
@property (retain, nonatomic) TVPPlayer *player; // ivar: _player
@property (nonatomic) BOOL popWhenPlayerStops; // ivar: _popWhenPlayerStops
@property (retain, nonatomic) NSLayoutConstraint *proxyImageCenterXConstraint; // ivar: _proxyImageCenterXConstraint
@property (retain, nonatomic) NSLayoutConstraint *proxyImageCenterYConstraint; // ivar: _proxyImageCenterYConstraint
@property (retain, nonatomic) NSLayoutConstraint *proxyImageHeightConstraint; // ivar: _proxyImageHeightConstraint
@property (retain, nonatomic) VUIImageView *proxyImageView; // ivar: _proxyImageView
@property (retain, nonatomic) NSLayoutConstraint *proxyImageWidthConstraint; // ivar: _proxyImageWidthConstraint
@property (retain, nonatomic) TVPVideoView *secondaryVideoView; // ivar: _secondaryVideoView
@property (nonatomic) BOOL shouldAnimateOverlayView; // ivar: _shouldAnimateOverlayView
@property (nonatomic, getter=shouldPauseAtEnd) BOOL shouldPauseAtEnd; // ivar: _shouldPauseAtEnd
@property (nonatomic) BOOL shouldPlayAfterAppBecomesActive; // ivar: _shouldPlayAfterAppBecomesActive
@property (nonatomic) BOOL shouldShowFullScreenButton; // ivar: _shouldShowFullScreenButton
@property (nonatomic, getter=shouldShowImageAndStopAfterPausingAtEnd) BOOL shouldShowImageAndStopAfterPausingAtEnd; // ivar: _shouldShowImageAndStopAfterPausingAtEnd
@property (nonatomic) BOOL showsPlaybackControlsInForeground; // ivar: _showsPlaybackControlsInForeground
@property (nonatomic) BOOL showsVideoControls; // ivar: _showsVideoControls
@property (nonatomic) NSUInteger state; // ivar: _state
@property (retain, nonatomic) TVPStateMachine *stateMachine; // ivar: _stateMachine
@property (nonatomic, getter=shouldStopPlayerWhenExitingFullScreen) BOOL stopPlayerWhenExitingFullScreen; // ivar: _stopPlayerWhenExitingFullScreen
@property (nonatomic, getter=shouldStopPlayerWhenViewDisappears) BOOL stopPlayerWhenViewDisappears; // ivar: _stopPlayerWhenViewDisappears
@property (nonatomic, getter=shouldStopWhenAnotherMediaControllerStarts) BOOL stopWhenAnotherMediaControllerStarts; // ivar: _stopWhenAnotherMediaControllerStarts
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *titleForLogging; // ivar: _titleForLogging
@property (nonatomic, getter=shouldUseForegroundAudioSessionInBackgroundMode) BOOL useForegroundAudioSessionInBackgroundMode; // ivar: _useForegroundAudioSessionInBackgroundMode
@property (retain, nonatomic) NSString *videoGravity; // ivar: _videoGravity
@property (nonatomic) NSUInteger videoSwappingAnimationType; // ivar: _videoSwappingAnimationType
@property (nonatomic) CGFloat volumeTransitionAnimationDuration; // ivar: _volumeTransitionAnimationDuration
@property (nonatomic) NSUInteger vpafPlaybackStartReason; // ivar: _vpafPlaybackStartReason
@property (nonatomic) NSUInteger vpafPlaybackStopReason; // ivar: _vpafPlaybackStopReason


-(BOOL)_canPause;
-(BOOL)_currentMediaInfoContentMatchesMediaInfo:(id)arg0 ;
-(BOOL)_currentMediaInfoImagesMatchesNewMediaInfoImage:(id)arg0 ;
-(BOOL)_hasSecondaryView;
-(BOOL)_mediaInfo:(id)arg0 contentMatchesMediaInfo:(id)arg1 ;
-(BOOL)_shouldPausePlaybackDueToDeactivationReasons;
-(BOOL)_shouldShowSecondaryView;
-(CGFloat)_computedPlaybackDelayInterval;
-(NSUInteger)_flippedDirection:(NSUInteger)arg0 isRTL:(BOOL)arg1 ;
-(id)createTransitionImageViewAtIndex:(NSUInteger)arg0 oldView:(id)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)notificationObject;
-(struct CGRect )_playbackContainerViewFrame:(BOOL)arg0 hasSecondaryVideoView:(BOOL)arg1 ;
-(struct CGRect )_secondaryVideoViewFrame:(BOOL)arg0 ;
-(void)_addAlphaProxyImageViewIfNeeded;
-(void)_addContentViewIfNeeded;
-(void)_addOverlayViewAnimatedIfNeeded:(BOOL)arg0 dismissAfter:(CGFloat)arg1 ;
-(void)_addPlaybackViewControllerForPlayback:(BOOL)arg0 ;
-(void)_addProxyImageView:(id)arg0 ;
-(void)_animateTransitionFromView:(id)arg0 toView:(id)arg1 duration:(CGFloat)arg2 direction:(NSUInteger)arg3 completion:(id)arg4 ;
-(void)_applicationDidRemoveDeactivationReason:(id)arg0 ;
-(void)_applicationWillAddDeactivationReason:(id)arg0 ;
-(void)_cleanUpEverything;
-(void)_cleanUpEverythingPlaybackRelated;
-(void)_cleanUpPlaybackTimers;
-(void)_configureAudioSession;
-(void)_configureAudioSessionForState:(id)arg0 ;
-(void)_constrainToView:(id)arg0 ;
-(void)_didPlayMediaItemToEnd:(id)arg0 ;
-(void)_handleApplicationDidBecomeActiveNotification:(id)arg0 ;
-(void)_handleApplicationDidEnterBackgroundNotification:(id)arg0 ;
-(void)_handleApplicationWillResignActiveNotification:(id)arg0 ;
-(void)_handleViewWillDisappear;
-(void)_loadImage:(id)arg0 ;
-(void)_mediaControllerStartedPlayback:(id)arg0 ;
-(void)_performPlayerVolumeAnimatedUpdate:(BOOL)arg0 ;
-(void)_playbackErrorDidOccur:(id)arg0 ;
-(void)_playbackStateChanged:(id)arg0 ;
-(void)_recordBgAutoPlayMediaEvent;
-(void)_registerForApplicationStateNotifications;
-(void)_registerPlayerNotifications;
-(void)_registerStateMachineHandlers;
-(void)_removeOverlayView:(id)arg0 animated:(BOOL)arg1 ;
-(void)_removePlaybackViewController;
-(void)_removeProxyImageView;
-(void)_showPlaybackIfPossible;
-(void)_stateDidChangeFromState:(id)arg0 toState:(id)arg1 onEvent:(id)arg2 context:(id)arg3 userInfo:(id)arg4 ;
-(void)_swapActiveMedia:(BOOL)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)_transitionToNewImage:(id)arg0 animated:(BOOL)arg1 direction:(NSUInteger)arg2 completion:(id)arg3 ;
-(void)_unregisterPlayerNotifications;
-(void)_updateAVPlayerViewControllerWithAVPlayerForPlayer:(id)arg0 ;
-(void)_updateCurrentPlaybackViewFrameForPlaybackInBackground:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)_updatePlayerMuteStateForBackgroundPlaybackWithReason:(id)arg0 ;
-(void)_updatePlayerVolume:(id)arg0 ;
-(void)_updateVideoPlayerLegibleContentInsets;
-(void)_updateWithMediaInfo:(id)arg0 withDirection:(NSUInteger)arg1 imageVideoSwapBehavior:(NSUInteger)arg2 animated:(BOOL)arg3 ;
-(void)appendMediaInfos:(id)arg0 ;
-(void)dealloc;
-(void)loadAlphaImageProxy;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)pause;
-(void)play;
-(void)playerViewController:(id)arg0 willEndFullScreenPresentationWithAnimationCoordinator:(id)arg1 ;
-(void)removeMediaInfoAtIndex:(NSUInteger)arg0 ;
-(void)setControlsVisible:(BOOL)arg0 ;
-(void)setMediaInfo:(id)arg0 atIndex:(NSUInteger)arg1 animated:(BOOL)arg2 ;
-(void)showAlphaImage:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)stop;
-(void)transitionToForeground:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)transitionToForeground:(BOOL)arg0 withPlaybackControls:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)transitionToForeground:(BOOL)arg0 withPlaybackControls:(BOOL)arg1 fullScreenPlayer:(BOOL)arg2 animated:(BOOL)arg3 ;
-(void)transitionToFullScreenAnimated:(BOOL)arg0 ;
-(void)updateFrames;
-(void)vui_viewDidLayoutSubviews;
-(void)vui_viewDidLoad;
-(void)vui_viewWillDisappear:(BOOL)arg0 ;


@end


#endif