// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSKANIMATEDGIFCONTROLLER_H
#define TSKANIMATEDGIFCONTROLLER_H

@class NSArray, NSMutableSet, NSString;
@protocol TSKLayerMediaPlayerController, TSKMediaPlayerControllerDelegate, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface TSKAnimatedGIFController : NSObject <TSKLayerMediaPlayerController>

 {
    id<TSKMediaPlayerControllerDelegate> *_delegate;
    *CGImageSource _imageSource;
    NSArray *_frames;
    NSMutableSet *_layers;
    float _rateBeforeScrubbing;
    NSUInteger _scrubbingCount;
    os_unfair_lock_s _timebaseLock;
    *OpaqueCMTimebase _timebase;
    NSObject<OS_dispatch_source> *_timebaseTimerSource;
    ? _timebaseStartTime;
    ? _timebaseEndTime;
    NSInteger _timebaseRepeatMode;
    NSMutableSet *_observationTokens;
    BOOL _playing;
    BOOL _fastForwarding;
    BOOL _fastReversing;
    float _volume;
    CGFloat _startTime;
    CGFloat _endTime;
    NSInteger _repeatMode;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) *CGImage imageForCurrentTime;
@property (readonly) Class superclass;


+(BOOL)canInitWithDataType:(id)arg0 ;
-(BOOL)canFastForward;
-(BOOL)canFastReverse;
-(BOOL)canPlay;
-(BOOL)hasCurrentTime;
-(BOOL)hasNewImageForTime:(CGFloat)arg0 sinceTime:(CGFloat)arg1 ;
-(BOOL)isFastForwarding;
-(BOOL)isFastReversing;
-(BOOL)isPlaying;
-(BOOL)isScrubbing;
-(CGFloat)absoluteCurrentTime;
-(CGFloat)absoluteDuration;
-(CGFloat)currentTime;
-(CGFloat)duration;
-(CGFloat)endTime;
-(CGFloat)remainingTime;
-(CGFloat)startTime;
-(CGFloat)timeForHostTime:(CGFloat)arg0 ;
-(NSInteger)repeatMode;
-(float)rate;
-(float)volume;
-(id)addPeriodicTimeObserverForInterval:(CGFloat)arg0 block:(id)arg1 ;
-(id)delegate;
-(id)initWithData:(id)arg0 delegate:(id)arg1 ;
-(id)initWithImageSource:(struct CGImageSource *)arg0 delegate:(id)arg1 ;
-(id)newLayer;
-(id)p_frameAtTime:(CGFloat)arg0 fromIndex:(NSUInteger)arg1 frameIndex:(*NSUInteger)arg2 ;
-(struct ? )p_timebaseTimeForHostTime:(struct ? )arg0 rate:(CGFloat)arg1 updatedRate:(*CGFloat)arg2 anchorTime:(struct ? *)arg3 ;
-(struct CGImage *)imageForTime:(CGFloat)arg0 ;
-(void)addLayer:(id)arg0 ;
-(void)addObservationToken:(id)arg0 ;
-(void)beginScrubbing;
-(void)cancelPendingSeeks;
-(void)dealloc;
-(void)endScrubbing;
-(void)p_prepareFrames;
-(void)p_setAbsoluteCurrentTime:(CGFloat)arg0 ;
-(void)p_setRate:(float)arg0 ;
-(void)p_timebaseTimeDidChangeToStartOrEndTime;
-(void)p_updateLayers;
-(void)p_updateTimebaseTimerSourceNextFireTime;
-(void)removeLayer:(id)arg0 ;
-(void)removeObservationToken:(id)arg0 ;
-(void)removePeriodicTimeObserver:(id)arg0 ;
-(void)scrubToTime:(CGFloat)arg0 withTolerance:(CGFloat)arg1 ;
-(void)scrubToTime:(CGFloat)arg0 withTolerance:(CGFloat)arg1 completionHandler:(id)arg2 ;
-(void)seekBackwardByOneFrame;
-(void)seekForwardByOneFrame;
-(void)seekToBeginning;
-(void)seekToEnd;
-(void)setEndTime:(CGFloat)arg0 ;
-(void)setFastForwarding:(BOOL)arg0 ;
-(void)setFastReversing:(BOOL)arg0 ;
-(void)setPlaying:(BOOL)arg0 ;
-(void)setRate:(float)arg0 ;
-(void)setRepeatMode:(NSInteger)arg0 ;
-(void)setStartTime:(CGFloat)arg0 ;
-(void)setVolume:(float)arg0 ;
-(void)setVolume:(float)arg0 rampDuration:(CGFloat)arg1 ;
-(void)stopSynchronously;
-(void)teardown;


@end


#endif