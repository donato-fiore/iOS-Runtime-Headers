// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VUIBACKGROUNDMEDIACONTROLLER_H
#define VUIBACKGROUNDMEDIACONTROLLER_H

@class VUIImageProxy, VUIImageView, AVPlayerViewController, NSString, NSTimer, TVPPlaylist, UIViewController, NSDate, TVPPlayer, TVPVideoView, TVPStateMachine;


#import "VUIBaseViewController.h"
#import "VUIMediaInfo.h"

@interface VUIBackgroundMediaController : VUIBaseViewController

@property (retain, nonatomic) VUIImageProxy *alphaImageProxy; // ivar: _alphaImageProxy
@property (retain, nonatomic) VUIImageView *alphaProxyImageView; // ivar: _alphaProxyImageView
@property (nonatomic) BOOL animateImageChange; // ivar: _animateImageChange
@property (nonatomic, getter=isAutomaticPlaybackStart) BOOL automaticPlaybackStart; // ivar: _automaticPlaybackStart
@property (nonatomic, getter=isAutomaticPlaybackStop) BOOL automaticPlaybackStop; // ivar: _automaticPlaybackStop
@property (retain, nonatomic) AVPlayerViewController *avPlayerViewController; // ivar: _avPlayerViewController
@property (readonly, nonatomic, getter=isBackgrounded) BOOL backgrounded;
@property (nonatomic) BOOL clearPreviousImageBeforeLoading; // ivar: _clearPreviousImageBeforeLoading
@property (retain, nonatomic) VUIImageProxy *currentImageProxy; // ivar: _currentImageProxy
@property (nonatomic) NSUInteger deactivationReasons; // ivar: _deactivationReasons
@property (nonatomic) BOOL didWeCreatePlayer; // ivar: _didWeCreatePlayer
@property (nonatomic, getter=isForeground) BOOL foreground; // ivar: _foreground
@property (nonatomic) CGFloat imageAnimationDuration; // ivar: _imageAnimationDuration
@property (nonatomic) NSUInteger imageAnimationOptions; // ivar: _imageAnimationOptions
@property (nonatomic) CGFloat imageTransitionInterval; // ivar: _imageTransitionInterval
@property (copy, nonatomic) VUIMediaInfo *mediaInfo; // ivar: _mediaInfo
@property (nonatomic) BOOL mutePlaybackInBackground; // ivar: _mutePlaybackInBackground
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) BOOL observingPictureInPictureActive; // ivar: _observingPictureInPictureActive
@property (weak, nonatomic) NSTimer *pauseStateTimeoutTimer; // ivar: _pauseStateTimeoutTimer
@property (retain, nonatomic) VUIImageProxy *pendingImageProxy; // ivar: _pendingImageProxy
@property (retain, nonatomic) TVPPlaylist *pendingPlaylist; // ivar: _pendingPlaylist
@property (retain, nonatomic) UIViewController *playbackContainerController; // ivar: _playbackContainerController
@property (nonatomic, getter=isPlaybackEnabled) BOOL playbackEnabled; // ivar: _playbackEnabled
@property (retain, nonatomic) NSDate *playbackLoadingStartDate; // ivar: _playbackLoadingStartDate
@property (weak, nonatomic) NSTimer *playbackLoadingTimer; // ivar: _playbackLoadingTimer
@property (nonatomic) CGFloat playbackStopDelay; // ivar: _playbackStopDelay
@property (nonatomic) NSUInteger playbackStopDelayReasons; // ivar: _playbackStopDelayReasons
@property (retain, nonatomic) TVPPlayer *player; // ivar: _player
@property (nonatomic, getter=isPlayerReadyToBePlayed) BOOL playerReadyToBePlayed; // ivar: _playerReadyToBePlayed
@property (nonatomic) BOOL popWhenPlayerStops; // ivar: _popWhenPlayerStops
@property (retain, nonatomic) VUIImageView *proxyImageView; // ivar: _proxyImageView
@property (retain, nonatomic) TVPVideoView *secondaryVideoView; // ivar: _secondaryVideoView
@property (nonatomic) BOOL shouldAnimateOverlayView; // ivar: _shouldAnimateOverlayView
@property (nonatomic) BOOL shouldPlayAfterAppBecomesActive; // ivar: _shouldPlayAfterAppBecomesActive
@property (nonatomic) BOOL showsVideoControls; // ivar: _showsVideoControls
@property (nonatomic) NSUInteger state; // ivar: _state
@property (retain, nonatomic) TVPStateMachine *stateMachine; // ivar: _stateMachine
@property (nonatomic, getter=shouldStopPlayerWhenViewDisappears) BOOL stopPlayerWhenViewDisappears; // ivar: _stopPlayerWhenViewDisappears
@property (nonatomic, getter=shouldStopWhenAnotherMediaControllerStarts) BOOL stopWhenAnotherMediaControllerStarts; // ivar: _stopWhenAnotherMediaControllerStarts
@property (copy, nonatomic) NSString *titleForLogging; // ivar: _titleForLogging
@property (nonatomic) NSUInteger videoSwappingAnimationType; // ivar: _videoSwappingAnimationType
@property (nonatomic) NSUInteger vpafPlaybackStartReason; // ivar: _vpafPlaybackStartReason
@property (nonatomic) NSUInteger vpafPlaybackStopReason; // ivar: _vpafPlaybackStopReason


-(BOOL)_canPause;
-(BOOL)_hasSecondaryView;
-(BOOL)_shouldPausePlaybackDueToDeactivationReasons;
-(BOOL)_shouldShowSecondaryView;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(struct CGRect )_playbackContainerViewFrame:(BOOL)arg0 hasSecondaryVideoView:(BOOL)arg1 ;
-(struct CGRect )_secondaryVideoViewFrame:(BOOL)arg0 ;
-(void)_addAlphaProxyImageViewIfNeeded;
-(void)_addContentViewIfNeeded;
-(void)_addOverlayViewAnimatedIfNeeded:(BOOL)arg0 dismissAfter:(CGFloat)arg1 ;
-(void)_addPlaybackViewControllerForPlayback:(BOOL)arg0 ;
-(void)_addProxyImageView;
-(void)_applicationDidRemoveDeactivationReason:(id)arg0 ;
-(void)_applicationWillAddDeactivationReason:(id)arg0 ;
-(void)_cleanUpEverything;
-(void)_cleanUpEverythingPlaybackRelated;
-(void)_delayLoadImage:(id)arg0 ;
-(void)_didPlayMediaItemToEnd:(id)arg0 ;
-(void)_handleApplicationDidBecomeActiveNotification:(id)arg0 ;
-(void)_handleApplicationDidEnterBackgroundNotification:(id)arg0 ;
-(void)_handleApplicationWillResignActiveNotification:(id)arg0 ;
-(void)_handleViewWillDisappear;
-(void)_mediaControllerStartedPlayback:(id)arg0 ;
-(void)_playbackErrorDidOccur:(id)arg0 ;
-(void)_playbackStateChanged:(id)arg0 ;
-(void)_recordBgAutoPlayMediaEvent;
-(void)_registerForApplicationStateNotifications;
-(void)_registerPlayerNotifications;
-(void)_registerStateMachineHandlers;
-(void)_removeOverlayView:(id)arg0 animated:(BOOL)arg1 ;
-(void)_removePlaybackViewController;
-(void)_removeProxyImageView;
-(void)_setImageProxies:(id)arg0 ;
-(void)_setPlaylist:(id)arg0 ;
-(void)_stateDidChangeFromState:(id)arg0 toState:(id)arg1 onEvent:(id)arg2 context:(id)arg3 userInfo:(id)arg4 ;
-(void)_swapActiveMedia:(BOOL)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)_unregisterPlayerNotifications;
-(void)_updateAVPlayerViewControllerWithAVPlayerForPlayer:(id)arg0 ;
-(void)_updateCurrentPlaybackViewFrameForPlaybackInBackground:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)_updateMediaInfo;
-(void)_updatePlayerMuteStateForBackgroundPlaybackWithReason:(id)arg0 ;
-(void)dealloc;
-(void)loadAlphaImageProxy;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)pause;
-(void)play;
-(void)showAlphaImage:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)stop;
-(void)transitionToForeground:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)updateFrames;
-(void)vui_viewDidLayoutSubviews;
-(void)vui_viewDidLoad;
-(void)vui_viewWillDisappear:(BOOL)arg0 ;


@end


#endif