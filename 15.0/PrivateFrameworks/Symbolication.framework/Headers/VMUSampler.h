// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VMUSAMPLER_H
#define VMUSAMPLER_H

@class NSString, NSMapTable, NSConditionLock, NSMutableArray, NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "VMUProcessDescription.h"

@interface VMUSampler : NSObject {
    NSUInteger _options;
    int _pid;
    unsigned int _task;
    BOOL _needTaskPortDealloc;
    BOOL _recordThreadStates;
    BOOL _sampling;
    unsigned int _numberOfCopiedBacktraces;
    NSString *_processName;
    VMUProcessDescription *_processDescription;
    _CSTypeRef _symbolicator;
    unsigned int _suspensionToken;
    *sampling_context_t _samplingContext;
    NSMapTable *_lastThreadBacktraceMap;
    *unsigned int _previousThreadList;
    unsigned int _mainThread;
    unsigned int _previousThreadCount;
    unsigned int _maxPreviousThreadCount;
    CGFloat _tbRate;
    CGFloat _tbInterval;
    NSConditionLock *_stateLock;
    CGFloat _interval;
    CGFloat _timeLimit;
    unsigned int _sampleLimit;
    unsigned int _numberOfSamples;
    NSMutableArray *_samples;
    BOOL _stacksFixed;
    id *_delegate;
    CGFloat _timeSpentSampling;
    unsigned int _dispatchThreadSoftLimit;
    unsigned int _dispatchThreadSoftLimitCount;
    unsigned int _dispatchThreadHardLimit;
    unsigned int _dispatchThreadHardLimitCount;
    NSMutableDictionary *_threadPortToNameMap;
    NSMutableDictionary *_dispatchQueueSerialNumToNameMap;
}




+(id)sampleAllThreadsOfPID:(int)arg0 ;
+(id)sampleAllThreadsOfTask:(unsigned int)arg0 ;
+(id)sampleAllThreadsOfTask:(unsigned int)arg0 symbolicate:(BOOL)arg1 ;
+(void)initialize;
-(BOOL)start;
-(BOOL)stop;
-(BOOL)waitUntilDone;
-(CGFloat)samplingInterval;
-(CGFloat)timeLimit;
-(NSUInteger)recordSampleTo:(id)arg0 beginTime:(CGFloat)arg1 endTime:(CGFloat)arg2 thread:(unsigned int)arg3 recordFramePointers:(BOOL)arg4 clearMemoryCache:(BOOL)arg5 ;
-(id)delegate;
-(id)dispatchQueueNameForSerialNumber:(NSUInteger)arg0 ;
-(id)dispatchQueueNameForSerialNumber:(NSUInteger)arg0 returnedConcurrentFlag:(*BOOL)arg1 returnedThreadId:(*NSUInteger)arg2 ;
-(id)initWithPID:(int)arg0 ;
-(id)initWithPID:(int)arg0 options:(NSUInteger)arg1 ;
-(id)initWithPID:(int)arg0 orTask:(unsigned int)arg1 options:(NSUInteger)arg2 ;
-(id)initWithPID:(int)arg0 task:(unsigned int)arg1 processName:(id)arg2 is64Bit:(BOOL)arg3 options:(NSUInteger)arg4 ;
-(id)initWithTask:(unsigned int)arg0 ;
-(id)initWithTask:(unsigned int)arg0 options:(NSUInteger)arg1 ;
-(id)outputString;
-(id)sampleAllThreadsOnce;
-(id)sampleAllThreadsOnceWithFramePointers:(BOOL)arg0 ;
-(id)sampleThread:(unsigned int)arg0 ;
-(id)samples;
-(id)stopSamplingAndReturnCallNode;
-(id)threadDescriptionStringForBacktrace:(id)arg0 returnedAddress:(*NSUInteger)arg1 ;
-(id)threadNameForThread:(unsigned int)arg0 ;
-(id)threadNameForThread:(unsigned int)arg0 returnedThreadId:(*NSUInteger)arg1 returnedDispatchQueueSerialNum:(*NSUInteger)arg2 ;
-(int)pid;
-(struct _CSTypeRef )symbolicator;
-(unsigned int)mainThread;
-(unsigned int)sampleCount;
-(unsigned int)sampleLimit;
-(void)_checkDispatchThreadLimits;
-(void)_fixupStacks:(id)arg0 ;
-(void)_runSamplingThread;
-(void)dealloc;
-(void)flushData;
-(void)forceStop;
-(void)initializeSamplingContextWithOptions:(int)arg0 ;
-(void)preloadSymbols;
-(void)sampleForDuration:(unsigned int)arg0 interval:(unsigned int)arg1 ;
-(void)setDelegate:(id)arg0 ;
-(void)setRecordThreadStates:(BOOL)arg0 ;
-(void)setSampleLimit:(unsigned int)arg0 ;
-(void)setSamplingInterval:(CGFloat)arg0 ;
-(void)setTimeLimit:(CGFloat)arg0 ;
-(void)stopSampling;
-(void)writeOutput:(id)arg0 append:(BOOL)arg1 ;


@end


#endif