// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VNCONTROLLEDCAPACITYTASKSQUEUE_H
#define VNCONTROLLEDCAPACITYTASKSQUEUE_H

@protocol OS_dispatch_queue, OS_dispatch_semaphore;

#import <Foundation/Foundation.h>


@interface VNControlledCapacityTasksQueue : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSInteger _maximumTasksCount;
    NSObject<OS_dispatch_semaphore> *_semaphore;
}


@property NSInteger maximumTasksCount;


+(NSInteger)tasksTimeout;
+(void)setTasksTimeout:(NSInteger)arg0 ;
-(BOOL)currentQueueIsSynchronizationQueue;
-(BOOL)dispatchGroupWait:(id)arg0 error:(*id)arg1 ;
-(id)description;
-(id)initWithDispatchQueueLabel:(id)arg0 maximumTasksCount:(NSInteger)arg1 ;
-(void)dispatchGroupAsyncByPreservingQueueCapacity:(id)arg0 block:(id)arg1 ;
-(void)dispatchReportBlockCompletion;
-(void)dispatchSyncByPreservingQueueCapacity:(id)arg0 ;


@end


#endif