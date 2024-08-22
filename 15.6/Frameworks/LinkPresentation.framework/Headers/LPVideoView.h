// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef LPVIDEOVIEW_H
#define LPVIDEOVIEW_H

@class UIView, UIImageView, CATextLayer, UIGestureRecognizer, NSString;
@protocol CALayerDelegate, UIGestureRecognizerDelegate, LPInProcessMediaPlayable, LPComponentMediaPlayable;


#import "LPComponentView.h"
#import "LPVideoViewStyle.h"
#import "LPImage.h"
#import "LPImageViewStyle.h"
#import "LPVideoViewConfiguration.h"
#import "LPFullScreenVideoController.h"
#import "LPVideo.h"

@interface LPVideoView : LPComponentView <CALayerDelegate, UIGestureRecognizerDelegate, LPInProcessMediaPlayable, LPComponentMediaPlayable>

 {
    LPVideoViewStyle *_style;
    LPImage *_posterFrame;
    LPImageViewStyle *_posterFrameStyle;
    LPVideoViewConfiguration *_configuration;
    UIView *_playButtonContainerView;
    UIView *_playButtonView;
    UIView *_muteButtonContainerView;
    UIImageView *_muteButtonView;
    UIImageView *_unmuteButtonView;
    UIView *_videoPlaceholderView;
    UIView *_visualEffectView;
    UIView *_pulsingLoadView;
    UIView *_containerView;
    CATextLayer *_debugIndicator;
    UIGestureRecognizer *_tapRecognizer;
    UIGestureRecognizer *_playButtonTapRecognizer;
    LPFullScreenVideoController *_fullScreenController;
    BOOL _playing;
    BOOL _hasBuilt;
    BOOL _wasPlayingOrWaitingToPlayWhenUnparented;
    BOOL _wasPlayingWhenSuspended;
    BOOL _showingPlayButton;
    BOOL _waitingForPlaybackDueToAutoPlay;
    NSUInteger _lastInteractionTimestamp;
    NSUInteger _playbackWatchdogTimerID;
}


@property (nonatomic, getter=isActive) BOOL active;
@property (nonatomic) BOOL allowsUserInteractionWithVideoPlayer; // ivar: _allowsUserInteractionWithVideoPlayer
@property (readonly, copy, nonatomic) LPVideoViewConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isFullScreen) BOOL fullScreen; // ivar: _fullScreen
@property (nonatomic) BOOL hasEverPlayed; // ivar: _hasEverPlayed
@property (readonly, nonatomic) BOOL hasMuteControl;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger lastInteractionTimestamp;
@property (readonly, nonatomic) unsigned int loggingID; // ivar: _loggingID
@property (nonatomic, getter=isMuted) BOOL muted;
@property (readonly, nonatomic) UIView *playbackView; // ivar: _playbackView
@property (nonatomic, getter=isPlaying) BOOL playing;
@property (readonly, nonatomic) BOOL shouldAutoPlay;
@property (readonly, nonatomic) BOOL shouldShowMuteButton;
@property (readonly, nonatomic) BOOL shouldUnmuteWhenUserAdjustsVolume;
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGFloat unobscuredAreaFraction;
@property (readonly, nonatomic) BOOL usesSharedAudioSession; // ivar: _usesSharedAudioSession
@property (readonly, nonatomic) LPVideo *video; // ivar: _video
@property (nonatomic) CGFloat volume; // ivar: _volume
@property (nonatomic, getter=isWaitingForPlayback) BOOL waitingForPlayback; // ivar: _waitingForPlayback


-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)isParented;
-(BOOL)shouldAllowHighlightToRecognizeSimultaneouslyWithGesture:(id)arg0 ;
-(BOOL)usesCustomFullScreenImplementation;
-(id)_createPosterFrameView;
-(id)_createPulsingLoadIndicator;
-(id)createFullScreenVideoViewController;
-(id)createVideoPlayerView;
-(id)initWithHost:(id)arg0 ;
-(id)initWithHost:(id)arg0 video:(id)arg1 style:(id)arg2 posterFrame:(id)arg3 posterFrameStyle:(id)arg4 configuration:(id)arg5 ;
-(id)playable;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_buildVideoPlaceholderView;
-(void)_muteButtonHighlightLongPressRecognized:(id)arg0 ;
-(void)_muteButtonTapRecognized:(id)arg0 ;
-(void)_startPlaybackWatchdogTimer;
-(void)_swapVideoPlaceholderForVideoForAutoPlay:(BOOL)arg0 ;
-(void)applicationDidEnterBackground:(id)arg0 ;
-(void)applicationWillEnterForeground:(id)arg0 ;
-(void)beginLoadingMediaForPreroll;
-(void)buildSubviewsIfNeeded;
-(void)componentViewDidMoveToWindow;
-(void)dealloc;
-(void)destroyFullScreenViewController;
-(void)didChangeMutedState:(BOOL)arg0 ;
-(void)didChangePlayingState:(BOOL)arg0 ;
-(void)didEncounterPlaybackError;
-(void)didEncounterPossiblyTransientPlaybackError;
-(void)enterCustomFullScreen;
-(void)enterFullScreen;
-(void)fadeInMuteButton;
-(void)fullScreenVideoDidDismiss;
-(void)fullScreenVideoDidPresent;
-(void)fullScreenVideoWillDismiss;
-(void)hideMuteButton;
-(void)hidePlayButtonAnimated:(BOOL)arg0 ;
-(void)layoutComponentView;
-(void)prepareForDisplayWithCompletionHandler:(id)arg0 ;
-(void)recreateFullScreenViewControllerIfNeeded;
-(void)removePlaceholderViews;
-(void)resetPlaybackState;
-(void)resetToPlaceholderView;
-(void)showMuteButton;
-(void)showPlayButtonAnimated:(BOOL)arg0 ;
-(void)swapVideoPlaceholderForPlaybackIfNeeded;
-(void)tapRecognized:(id)arg0 ;
-(void)updateMuteButton;
-(void)updatePlayButtonVisibility;
-(void)userInteractedWithVideoView;


@end


#endif