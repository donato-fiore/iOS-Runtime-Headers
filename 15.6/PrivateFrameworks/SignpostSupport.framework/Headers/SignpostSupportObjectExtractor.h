// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SIGNPOSTSUPPORTOBJECTEXTRACTOR_H
#define SIGNPOSTSUPPORTOBJECTEXTRACTOR_H

@class OSLogEventLiveStream, NSUUID;
@protocol OS_dispatch_semaphore, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SignpostIntervalBuilder.h"
#import "SignpostSupportObjectFilter.h"
#import "SignpostSupportPIDFilter.h"
#import "SignpostSupportExactProcessNameFilter.h"
#import "SignpostSupportSubsystemCategoryFilter.h"
#import "SignpostSupportUniquePIDFilter.h"

@interface SignpostSupportObjectExtractor : NSObject

@property (copy, nonatomic) id *_intervalEndHandler; // ivar: __intervalEndHandler
@property (retain, nonatomic) OSLogEventLiveStream *_liveStream; // ivar: __liveStream
@property (nonatomic) NSUInteger _notificationTimeout; // ivar: __notificationTimeout
@property BOOL _shouldStopProcessing; // ivar: __shouldStopProcessing
@property (copy, nonatomic) id *_stopProcessingBlock; // ivar: __stopProcessingBlock
@property (copy, nonatomic) id *animationIntervalCompletionProcessingBlock; // ivar: _animationIntervalCompletionProcessingBlock
@property (copy, nonatomic) id *beginEventProcessingBlock; // ivar: _beginEventProcessingBlock
@property (nonatomic) BOOL buildAnimationCompositeIntervalTimelines;
@property (readonly, nonatomic) NSObject<OS_dispatch_semaphore> *completionSemaphore; // ivar: _completionSemaphore
@property (retain, nonatomic) NSUUID *currentBootUUID; // ivar: _currentBootUUID
@property (copy, nonatomic) id *deviceRebootProcessingBlock; // ivar: _deviceRebootProcessingBlock
@property (copy, nonatomic) id *emitEventProcessingBlock; // ivar: _emitEventProcessingBlock
@property (copy, nonatomic) id *endEventProcessingBlock; // ivar: _endEventProcessingBlock
@property (readonly, nonatomic) SignpostIntervalBuilder *intervalBuilder; // ivar: _intervalBuilder
@property (copy, nonatomic) id *intervalCompletionProcessingBlock; // ivar: _intervalCompletionProcessingBlock
@property (copy, nonatomic) id *logMessageProcessingBlock; // ivar: _logMessageProcessingBlock
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *notificationProcessingQueue; // ivar: _notificationProcessingQueue
@property (retain, nonatomic) SignpostSupportObjectFilter *objectFilter; // ivar: _objectFilter
@property (retain, nonatomic) SignpostSupportPIDFilter *pidFilter; // ivar: _pidFilter
@property (retain, nonatomic) SignpostSupportExactProcessNameFilter *processNameFilter; // ivar: _processNameFilter
@property (nonatomic) NSUInteger processedEventCount; // ivar: _processedEventCount
@property (copy, nonatomic) id *processingCompletionBlock; // ivar: _processingCompletionBlock
@property (copy, nonatomic) id *repeatedBeginEventProcessingBlock; // ivar: _repeatedBeginEventProcessingBlock
@property (nonatomic) BOOL skipAnimationStateTrackingOptimization; // ivar: _skipAnimationStateTrackingOptimization
@property (retain, nonatomic) SignpostSupportSubsystemCategoryFilter *subsystemCategoryFilter; // ivar: _subsystemCategoryFilter
@property (readonly, nonatomic) NSObject<OS_dispatch_semaphore> *syncSem; // ivar: _syncSem
@property (copy, nonatomic) id *timedOutBeginEventProcessingBlock; // ivar: _timedOutBeginEventProcessingBlock
@property (retain, nonatomic) SignpostSupportUniquePIDFilter *uniquePidFilter; // ivar: _uniquePidFilter
@property (copy, nonatomic) id *unmatchedEndEventProcessingBlock; // ivar: _unmatchedEndEventProcessingBlock


-(BOOL)_eventPassesFilters:(id)arg0 ;
-(BOOL)_eventPassesWithPid:(int)arg0 uniquePid:(NSUInteger)arg1 processName:(id)arg2 subsystem:(id)arg3 category:(id)arg4 ;
-(BOOL)_generateIntervalFromEnd:(id)arg0 shouldReport:(BOOL)arg1 ;
-(BOOL)_hasNonObjectFilters;
-(BOOL)_hasProcessingBlock;
-(BOOL)_hasSignpostProcessingBlock;
-(BOOL)_isTrackingIntervals;
-(BOOL)_processSignpostEvent:(id)arg0 shouldReport:(BOOL)arg1 ;
-(BOOL)_processSignpostSupportLogMessage:(id)arg0 ;
-(BOOL)_shouldBuildEventWithPid:(int)arg0 uniquePid:(NSUInteger)arg1 processName:(id)arg2 subsystem:(id)arg3 category:(id)arg4 shouldReport:(*BOOL)arg5 ;
-(BOOL)_shouldProcessEvent:(id)arg0 shouldReport:(*BOOL)arg1 ;
-(BOOL)processSerializedObjectsFromData:(id)arg0 errorOut:(*id)arg1 ;
-(BOOL)processSerializedObjectsFromSignpostFile:(id)arg0 errorOut:(*id)arg1 ;
-(id)_loggingSupportStreamPredicateFromFiltersWithForLiveStreaming:(BOOL)arg0 ;
-(id)init;
-(void)_processingCompleted:(id)arg0 ;
-(void)dealloc;
-(void)finishProcessingSerializedData;
-(void)stopProcessing;


@end


#endif