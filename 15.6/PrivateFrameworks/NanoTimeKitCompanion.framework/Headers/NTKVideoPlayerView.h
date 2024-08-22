// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKVIDEOPLAYERVIEW_H
#define NTKVIDEOPLAYERVIEW_H

@class UIView, UIImageView, CLKVideoPlayerView, NSString;
@protocol CLKVideoPlayerViewDelegate, NTKVideoPlayerFaceViewDelegate;


#import "NTKTaskScheduler.h"
#import "NTKVideoPlayerDataSource.h"

@interface NTKVideoPlayerView : UIView <CLKVideoPlayerViewDelegate>

 {
    NTKTaskScheduler *_taskScheduler;
    UIView *_curtainView;
    UIView *_posterContainerView;
    UIImageView *_posterImageView;
    CLKVideoPlayerView *_videoPlayerView;
    UIEdgeInsets _videoPlayerEdgeInsets;
    NSInteger _currentDataMode;
    NSUInteger _prerollState;
    BOOL _videoPlayerInViewHierarchy;
    BOOL _isHandlingTapGesture;
    BOOL _paused;
    BOOL _frozen;
    BOOL _slow;
    BOOL _orbing;
}


@property (retain, nonatomic) NTKVideoPlayerDataSource *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<NTKVideoPlayerFaceViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat fadeAnimationDuration; // ivar: _fadeAnimationDuration
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isPausedViewEnabled) BOOL pausedViewEnabled; // ivar: _pausedViewEnabled
@property (nonatomic) NSUInteger playerBehavior; // ivar: _playerBehavior
@property (nonatomic) BOOL shouldApplyVideoInsetToPosterImage; // ivar: _shouldApplyVideoInsetToPosterImage
@property (readonly) Class superclass;


-(BOOL)_shouldChangeVideoOnTap;
-(BOOL)_shouldChangeVideoOnWake;
-(BOOL)_shouldPause;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)videoPlayerView;
-(void)_advanceListingForEvent:(NSUInteger)arg0 ;
-(void)_cancelScheduledPreroll;
-(void)_createCurtainView;
-(void)_createPosterImageView;
-(void)_createVideoPlayerViewIfNeeded;
-(void)_fadeFromCurtainViewIfVisible;
-(void)_fadeFromPosterImageAndCurtainViewIfVisible;
-(void)_fadeFromPosterImageIfVisible:(id)arg0 ;
-(void)_fadeToCurtainView:(id)arg0 ;
-(void)_fadeToPosterImage;
-(void)_handleScreenWake;
-(void)_hideCurtainView;
-(void)_hidePosterImageView;
-(void)_loadCurrentListing;
-(void)_loadVideoPlayerView;
-(void)_mediaServicesWereReset:(id)arg0 ;
-(void)_pause;
-(void)_play;
-(void)_playIfNotPaused;
-(void)_playNextVideoForEvent:(NSUInteger)arg0 animated:(BOOL)arg1 ;
-(void)_prerollVideo;
-(void)_queueSubsequentListingIfSupported;
-(void)_resetVideoPlayer;
-(void)_rewindLoadedVideoToBeginning;
-(void)_schedulePreroll;
-(void)_showCurtainView;
-(void)_showPosterImageView;
-(void)_unloadVideoPlayerView;
-(void)_updatePauseState;
-(void)applyDataMode:(NSInteger)arg0 comingFromDataMode:(NSInteger)arg1 ;
-(void)applyFrozen:(BOOL)arg0 ;
-(void)applyOrbing:(BOOL)arg0 ;
-(void)applySlow:(BOOL)arg0 ;
-(void)dealloc;
-(void)didAddSubview:(id)arg0 ;
-(void)faceLibraryWasDismissed;
-(void)handleOrdinaryScreenWake;
-(void)handleScreenOff;
-(void)handleStyleDidChange;
-(void)handleWristRaiseScreenWake;
-(void)layoutSubviews;
-(void)setPosterImage:(id)arg0 ;
-(void)setVideoPlayerInset:(struct UIEdgeInsets )arg0 ;
-(void)setVideoPlayerResizeGravity:(NSInteger)arg0 ;
-(void)setVideoPlayerTransform:(struct CGAffineTransform )arg0 ;
-(void)transitionToEditing;
-(void)videoPlayerView:(id)arg0 didFinishPrerolling:(BOOL)arg1 ;
-(void)videoPlayerViewDidBeginPlaying:(id)arg0 ;
-(void)videoPlayerViewDidBeginPlayingQueuedVideo:(id)arg0 ;
-(void)videoPlayerViewDidPauseAfterPlayingVideoToEnd:(id)arg0 ;
-(void)videoPlayerViewWasTapped;


@end


#endif