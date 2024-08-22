// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef LPSTREAMINGVIDEOVIEW_H
#define LPSTREAMINGVIDEOVIEW_H

@class AVQueuePlayer, AVPlayerLooper, AVPlayerLayer;


#import "LPVideoView.h"

@interface LPStreamingVideoView : LPVideoView {
    AVQueuePlayer *_player;
    AVPlayerLooper *_looper;
    AVPlayerLayer *_playerLayer;
    id *_readyForDisplayCallback;
    BOOL _hasCreatedVideoPlayerView;
    BOOL _isWaitingToRetryAfterFailingToPlay;
    unsigned int _playbackRetryCountWithoutSuccess;
    BOOL _desiredPlayingState;
    float _desiredVolume;
}




-(BOOL)isMuted;
-(BOOL)releaseDecodingResourcesIfInactive;
-(BOOL)shouldAutoPlay;
-(BOOL)shouldShowMuteButton;
-(BOOL)usesCustomFullScreenImplementation;
-(BOOL)usesSharedAudioSession;
-(CGFloat)volume;
-(id)createFullScreenVideoViewController;
-(id)createVideoPlayerView;
-(id)initWithHost:(id)arg0 video:(id)arg1 style:(id)arg2 posterFrame:(id)arg3 posterFrameStyle:(id)arg4 configuration:(id)arg5 ;
-(void)beginLoadingMediaForPreroll;
-(void)createPlayerIfNeeded;
-(void)createPlayerItemAdjustedForLoopingWithAsset:(id)arg0 completionHandler:(id)arg1 ;
-(void)dealloc;
-(void)destroyPlayer;
-(void)didFailToPlay;
-(void)fullScreenVideoDidPresent;
-(void)fullScreenVideoWillDismiss;
-(void)layoutComponentView;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)prepareForDisplayWithCompletionHandler:(id)arg0 ;
-(void)resetToPlaceholderView;
-(void)setMuted:(BOOL)arg0 ;
-(void)setPlaying:(BOOL)arg0 ;
-(void)setVolume:(CGFloat)arg0 ;


@end


#endif