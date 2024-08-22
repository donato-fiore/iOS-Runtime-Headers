// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PFDISPATCHQUEUESTATISTICSEXTENSION_H
#define PFDISPATCHQUEUESTATISTICSEXTENSION_H



#import "PFDispatchQueueExtension.h"

@interface PFDispatchQueueStatisticsExtension : PFDispatchQueueExtension {
    uint8_t _enqueuedCount;
    uint8_t _maxEnqueuedCount;
    uint8_t _executingCount;
    uint8_t _completedCount;
    uint8_t _executionTime;
    uint8_t _maxExecutionTime;
    uint8_t _maxWaitTime;
    uint8_t _totalWaitTime;
    NSUInteger _maxEnqueuedCountTrigger;
    NSUInteger _maxExecutionTimeTrigger;
    NSUInteger _maxWaitTimeTrigger;
    NSUInteger _lastLogTime;
}




-(BOOL)_shouldLog;
-(BOOL)_updateMaximum:(*uint8_t)arg0 value:(NSUInteger)arg1 ;
-(Class)blockInfoClass;
-(NSUInteger)completedCount;
-(NSUInteger)enqueuedCount;
-(NSUInteger)executingCount;
-(NSUInteger)executionTime;
-(NSUInteger)maxEnqueuedCount;
-(NSUInteger)maxExecutionTime;
-(NSUInteger)maxWaitTime;
-(NSUInteger)totalWaitTime;
-(id)description;
-(id)init;
-(id)newBlockInfo;
-(void)blockCompletedAfterWait:(NSUInteger)arg0 executionTime:(NSUInteger)arg1 queue:(id)arg2 ;
-(void)blockEnqueued:(id)arg0 ;
-(void)installOnQueue:(id)arg0 ;
-(void)maxEnqueuedCountIncreased:(id)arg0 ;
-(void)maxExecutionTimeIncreased:(id)arg0 ;
-(void)maxWaitTimeIncreased:(id)arg0 ;
-(void)queue:(id)arg0 didDequeue:(id)arg1 skipExecution:(id)arg2 ;
-(void)queue:(id)arg0 didExecute:(id)arg1 ;
-(void)queue:(id)arg0 skippedExecuting:(id)arg1 ;
-(void)queue:(id)arg0 willEnqueueAsync:(id)arg1 when:(id)arg2 ;
-(void)queue:(id)arg0 willEnqueueSync:(id)arg1 ;
-(void)queue:(id)arg0 willExecute:(id)arg1 ;


@end


#endif