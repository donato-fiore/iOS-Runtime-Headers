// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DTKPKPERFAGGREGATOR_H
#define DTKPKPERFAGGREGATOR_H

@class NSString;
@protocol DTKPKtraceAggregator, DTKPConfiguration;

#import <Foundation/Foundation.h>

#import "DVTStreamManager.h"
#import "DVTQueueBasedTimer.h"

@interface DTKPKperfAggregator : NSObject <DTKPKtraceAggregator>

 {
    id<DTKPConfiguration> *_config;
    DVTStreamManager *_manager;
    DVTQueueBasedTimer *_timer;
    BOOL _usingTimer;
    *kperf_buf _kperfBuffer;
    BOOL _kperfSample;
    BOOL _hasUsedKperf;
    NSUInteger _dataPulledSize;
    NSUInteger _numberOfPulls;
    time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>> _startTime;
    time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>> _endTime;
    NSUInteger _callbackCalledCount;
    NSUInteger _callbackNotificationCount;
    recursive_mutex _lock;
    NSUInteger _id;
}


@property (copy) id *callback; // ivar: _callback
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_ktraceTeardown:(*id)arg0 ;
-(id)_getKernelBufferLocked:(*BOOL)arg0 error:(*id)arg1 ;
-(id)_getKperfKernelBufferLocked:(*BOOL)arg0 error:(*id)arg1 ;
-(id)_kdebugReadWithMoreLocked:(*BOOL)arg0 error:(*id)arg1 ;
-(id)_kernelCallbackInit;
-(id)_kernelCallbackStart;
-(id)initWithConfig:(id)arg0 ;
-(id)pause;
-(id)resume;
-(id)start;
-(id)stop;
-(id)swapOutCurrentDatastream:(*id)arg0 ;
-(int)_flushDataFromKernel:(unsigned int)arg0 more:(*BOOL)arg1 error:(*id)arg2 ;
-(unsigned int)_kernelCallbackImpl;
-(void)_kernelCallbackError;
-(void)_kernelCallbackNotifyCallblock:(unsigned int)arg0 ;
-(void)_kernelCallbackStop;
-(void)_releaseKernelResources;
-(void)_reportCallbackStats;
-(void)_reportStats;
-(void)_reportTimeStats;
-(void)_resetStats;


@end


#endif