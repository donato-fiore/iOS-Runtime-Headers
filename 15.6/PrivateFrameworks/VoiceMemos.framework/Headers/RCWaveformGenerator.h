// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RCWAVEFORMGENERATOR_H
#define RCWAVEFORMGENERATOR_H

@class NSHashTable, NSMutableArray, AVAudioFile, NSError;
@protocol OS_dispatch_semaphore, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface RCWaveformGenerator : NSObject {
    NSObject<OS_dispatch_semaphore> *_digestPausedSemaphore;
    NSObject<OS_dispatch_queue> *_queue;
    CGFloat _totalDigestedTime;
    CGFloat _totalFlushedTime;
    NSHashTable *_weakObservers;
    NSMutableArray *_internalFinishedLoadingBlockUUIDs;
    NSMutableArray *_internalFinishedLoadingBlocks;
    AVAudioFile *_activeAudioFile;
    PowerMeter _samplePowerMeter;
    BOOL _isSampleRateKnown;
    vector<float, std::allocator<float> > _powerLevelBuffer;
    float _powerLevelBufferLastPushedValue;
    NSUInteger _powerLevelsConsumedSinceLastFlush;
    NSUInteger _framesConsumedSinceLastFlush;
    NSInteger _framesNeededForNextDB;
    NSInteger _framesNeededForNextFlush;
    NSError *_loadingError;
    NSUInteger _pauseCount;
}


@property (nonatomic) BOOL canceled; // ivar: _canceled
@property (readonly, nonatomic) BOOL finished;
@property (readonly, nonatomic) BOOL idle;
@property (readonly, nonatomic) BOOL loadable;
@property (nonatomic) NSInteger overviewUnitsPerSecond; // ivar: _overviewUnitsPerSecond
@property (nonatomic) BOOL paused;
@property (readonly, nonatomic) CGFloat segmentFlushInterval; // ivar: _segmentFlushInterval
@property (readonly, nonatomic) NSInteger state; // ivar: _state


-(BOOL)_appendAveragePowerLevelsByDigestingWaveformSegments:(id)arg0 ;
-(BOOL)_appendPowerMeterValuesFromDataInAudioFile:(id)arg0 progressBlock:(id)arg1 ;
-(BOOL)appendAveragePowerLevel:(float)arg0 ;
-(BOOL)appendAveragePowerLevelsByDigestingAudioPCMBuffer:(id)arg0 ;
-(BOOL)appendAveragePowerLevelsByDigestingContentsOfAudioFileURL:(id)arg0 progressBlock:(id)arg1 ;
-(BOOL)appendAveragePowerLevelsByDigestingSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;
-(BOOL)appendAveragePowerLevelsByDigestingWaveform:(id)arg0 ;
-(BOOL)appendAveragePowerLevelsByDigestingWaveformSegments:(id)arg0 ;
-(id)init;
-(id)initWithSamplingParametersFromGenerator:(id)arg0 ;
-(id)initWithSegmentFlushInterval:(CGFloat)arg0 ;
-(id)synchronouslyApproximateWaveformForAVContentURL:(id)arg0 byReadingCurrentFileAheadTimeRange:(struct ? )arg1 ;
-(void)_appendAveragePowerLevel:(float)arg0 ;
-(void)_appendAveragePowerLevelsByDigestingTimeRange:(struct ? )arg0 inAudioFile:(id)arg1 ;
-(void)_appendPowerMeterValuesFromAudioPCMBuffer:(id)arg0 ;
-(void)_appendPowerMeterValuesFromSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;
-(void)_onQueue_appendAveragePowerLevelsByDigestingTimeRange:(struct ? )arg0 inAudioFile:(id)arg1 ;
-(void)_onQueue_appendPowerMeterValuesFromRawAudioData:(*void)arg0 frameCount:(NSInteger)arg1 format:(struct AudioStreamBasicDescription *)arg2 isPredigest:(BOOL)arg3 ;
-(void)_onQueue_appendSegment:(id)arg0 ;
-(void)_onQueue_digestAveragePowerLevel:(float)arg0 ;
-(void)_onQueue_flushRemainingData;
-(void)_onQueue_flushWaveformSegment:(id)arg0 ;
-(void)_onQueue_flushWithNextSegmentWithEndTime:(CGFloat)arg0 isPredigest:(BOOL)arg1 ;
-(void)_onQueue_performInternalFinishedLoadingBlocksAndFinishObservers;
// -(void)_onQueue_performLoadingFinishedBlock:(id)arg0 internalBlockUUID:(unk)arg1 isTimeout:(id)arg2  ;
-(void)_onQueue_performObserversBlock:(id)arg0 ;
-(void)_onQueue_pushAveragePowerLevel:(float)arg0 ;
-(void)addSegmentOutputObserver:(id)arg0 ;
-(void)async_finishLoadingByTerminating:(BOOL)arg0 loadingFinishedBlockTimeout:(NSUInteger)arg1 loadingFinishedBlock:(id)arg2 ;
-(void)beginLoading;
-(void)finishLoadingWithCompletionTimeout:(NSUInteger)arg0 completionBlock:(id)arg1 ;
-(void)flushPendingCapturedSampleBuffers;
-(void)removeSegmentOutputObserver:(id)arg0 ;
-(void)terminateLoadingImmediately;


@end


#endif