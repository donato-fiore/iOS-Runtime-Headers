// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OKVIDEOPLAYERCONTROLLER_H
#define OKVIDEOPLAYERCONTROLLER_H

@class AVPlayer, AVPlayerItem, AVPlayerLayer;
@protocol OS_dispatch_queue, OKVideoControllerDelegate, OS_dispatch_semaphore;

#import <Foundation/Foundation.h>


@interface OKVideoPlayerController : NSObject {
    NSObject<OS_dispatch_queue> *_videoPlayerControllerSerialQueue;
    id *_timeObserver;
    ? _delegateFlags;
}


@property (readonly, nonatomic) NSUInteger bufferingState; // ivar: _bufferingState
@property (nonatomic) CGFloat currentTime;
@property (nonatomic) NSObject<OKVideoControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) CGFloat duration;
@property (nonatomic) BOOL isReady; // ivar: _isReady
@property (retain, nonatomic) AVPlayer *player; // ivar: _player
@property (nonatomic) AVPlayerItem *playerItem; // ivar: _playerItem
@property (readonly, retain, nonatomic) AVPlayerLayer *playerLayer; // ivar: _playerLayer
@property (nonatomic) NSUInteger readyState; // ivar: _readyState
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *seekToTimeSemaphore; // ivar: _seekToTimeSemaphore
@property (readonly, nonatomic) NSUInteger state; // ivar: _state
@property (nonatomic) float volume;


-(id)description;
-(id)initWithPlayerLayer:(id)arg0 ;
-(void)_cancelSeeking;
-(void)_playerItemDidReachEndNotification:(id)arg0 ;
-(void)_playerItemFailedToPlayToEndNotification:(id)arg0 ;
-(void)_setupPlayer;
-(void)_updateBufferingStateWithState:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)pause;
-(void)play;
-(void)playPlayerItem:(id)arg0 ;
-(void)stop;


@end


#endif