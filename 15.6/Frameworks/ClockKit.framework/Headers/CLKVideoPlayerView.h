// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CLKVIDEOPLAYERVIEW_H
#define CLKVIDEOPLAYERVIEW_H

@class UIView, AVQueuePlayer, AVPlayerItem, NSURL, AVAsset, NSValue;
@protocol CLKVideoPlayerViewDelegate;


#import "_CLKPlayerView.h"

@interface CLKVideoPlayerView : UIView {
    _CLKPlayerView *_playerView;
    AVQueuePlayer *_player;
    AVPlayerItem *_playerItem;
    AVPlayerItem *_observedItem;
    AVPlayerItem *_queuedItem;
    NSURL *_assetURL;
    AVAsset *_asset;
    id *_periodicTimeObserver;
    ? _willBeginPlayingTime;
    UIView *_pausedView;
    NSUInteger _servicingRequest;
    NSValue *_seekRequested;
    ? _seekWithTolerance;
    BOOL _playRequested;
    BOOL _prerollRequested;
    BOOL _isExpectingPreroll;
}


@property (weak, nonatomic) NSObject<CLKVideoPlayerViewDelegate> *delegate; // ivar: _delegate
@property (nonatomic) NSInteger gravityResize; // ivar: _gravityResize
@property (nonatomic) BOOL pausedViewEnabled; // ivar: _pausedViewEnabled
@property (readonly, nonatomic) AVQueuePlayer *player;
@property (readonly, nonatomic) BOOL playing; // ivar: _playing


+(void)_prewarm;
-(BOOL)_readyToPerformRequest;
-(BOOL)isPlaybackReady;
-(id)_createPlayerItemForVideoURL:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_handleDidPlayToEndTime:(id)arg0 ;
-(void)_hidePausedView;
-(void)_observePlayerItem:(id)arg0 ;
-(void)_pause;
-(void)_performNextRequest;
-(void)_periodicTimeObserverChanged:(struct ? )arg0 ;
-(void)_play;
-(void)_preroll;
-(void)_seekToTime:(struct ? )arg0 ;
-(void)_showPausedView;
-(void)_stopObservingPlayerItem;
-(void)dealloc;
-(void)expectPreroll;
-(void)layoutSubviews;
-(void)loadVideo:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)pause;
-(void)play;
-(void)prepareNextQueuedVideo;
-(void)preroll;
-(void)queueVideo:(id)arg0 ;
-(void)resetRequestState;
-(void)seekToTime:(struct ? )arg0 ;
-(void)seekToTime:(struct ? )arg0 tolerance:(struct ? )arg1 ;


@end


#endif