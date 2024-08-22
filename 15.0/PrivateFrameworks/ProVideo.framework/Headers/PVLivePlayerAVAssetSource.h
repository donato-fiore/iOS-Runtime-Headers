// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PVLIVEPLAYERAVASSETSOURCE_H
#define PVLIVEPLAYERAVASSETSOURCE_H

@class AVQueuePlayer, AVPlayerLooper, NSArray, AVAsset, NSString;
@protocol AVPlayerItemOutputPullDelegate, PVLivePlayerSource, OS_dispatch_queue, OS_dispatch_semaphore;

#import <Foundation/Foundation.h>

#import "PVFrameSet.h"

@interface PVLivePlayerAVAssetSource : NSObject <AVPlayerItemOutputPullDelegate, PVLivePlayerSource>

 {
    AVQueuePlayer *_playerQueue;
    AVPlayerLooper *_playerLooper;
    NSArray *_playerItemOutputs;
    int _currentPlayerItemOutput;
    ? _currentPlayerItemRange;
    PVFrameSet *_cacheImageFrameSet;
    *HGSynchronizable _cacheLock;
    ? _assetDuration;
    float _assetRate;
    ? _videoTrackRange;
    float _videoTrackFrameRate;
    ? _videoTrackFrameDelta;
    ? _videoTrackDimensions;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSObject<OS_dispatch_semaphore> *_playbackReadyCondVar;
    NSObject<OS_dispatch_semaphore> *_outputReadyCondVar;
}


@property (readonly, nonatomic) AVAsset *asset; // ivar: _asset
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL loopPlayback; // ivar: loopPlayback
@property (nonatomic) BOOL repeatFrames; // ivar: repeatFrames
@property int status; // ivar: status
@property (readonly) Class superclass;


-(id)imageBufferForHostTime:(CGFloat)arg0 ;
-(id)initWithAVAsset:(id)arg0 ;
-(struct ? )itemTimeForHostTime:(CGFloat)arg0 ;
-(struct __CVBuffer *)_copyPixelBufferForHostTime:(CGFloat)arg0 ;
-(struct __CVBuffer *)_copyPixelBufferForTime:(struct ? )arg0 ;
-(void)dealloc;
-(void)finishReading;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)outputMediaDataWillChange:(id)arg0 ;
-(void)outputSequenceWasFlushed:(id)arg0 ;
-(void)pause;
-(void)play;
-(void)playerItemDidPlayToEnd:(id)arg0 ;
-(void)playerItemFailedToPlayToEnd:(id)arg0 ;
-(void)playerItemPlaybackStalled:(id)arg0 ;
-(void)playerItemTimeJumped:(id)arg0 ;
-(void)seekToTime:(struct ? )arg0 ;
-(void)setMuted:(BOOL)arg0 ;
-(void)setupPlayer;
-(void)startObservers;
-(void)stopObservers;


@end


#endif