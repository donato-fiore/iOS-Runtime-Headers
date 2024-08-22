// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PFPRIORITYQUEUEEXTENSION_H
#define PFPRIORITYQUEUEEXTENSION_H

@class NSArray, NSMutableArray;
@protocol PFPriorityEnqueuing;


#import "PFDispatchQueueExtension.h"
#import "PFDispatchQueue.h"
#import "PFSerialQueue.h"

@interface PFPriorityQueueExtension : PFDispatchQueueExtension <PFPriorityEnqueuing>

 {
    PFDispatchQueue *_executionQueue;
    PFDispatchQueue *_serializer;
    NSUInteger _lastScheduledPriority;
    NSArray *_priorityLevels;
    NSMutableArray *_emptyNotifications;
    *NSUInteger _scheduledCount;
    PFSerialQueue *_schedulingQueue;
    NSUInteger _qosBlockCount;
    BOOL _queueSuspended;
    NSUInteger _schedulingSuspendCount;
    BOOL _performsConcurrentScheduling;
}




-(NSUInteger)schedulingLimitForPriorityLevel:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithPriorityLevels:(NSUInteger)arg0 concurrentScheduling:(BOOL)arg1 ;
-(id)queue:(id)arg0 receivedDispatchAsync:(id)arg1 ;
-(void)_scheduleBlock:(id)arg0 ;
-(void)_scheduleNextBlock;
-(void)dealloc;
-(void)enqueueEmptyNotification:(id)arg0 ;
-(void)enqueueWithPriority:(NSUInteger)arg0 block:(id)arg1 ;
-(void)enqueueWithPriority:(NSUInteger)arg0 qos:(unsigned int)arg1 block:(id)arg2 ;
-(void)installOnQueue:(id)arg0 ;
-(void)queue:(id)arg0 didExecute:(id)arg1 ;
-(void)queue:(id)arg0 skippedExecuting:(id)arg1 ;
-(void)queueDidSuspend:(id)arg0 ;
-(void)queueWillResume:(id)arg0 ;
-(void)resumeScheduling;
-(void)suspendScheduling;


@end


#endif