// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VECSCHEDULINGMANAGER_H
#define VECSCHEDULINGMANAGER_H

@class NSMapTable;
@protocol OS_dispatch_queue, OS_dispatch_group;

#import <Foundation/Foundation.h>


@interface VECSchedulingManager : NSObject {
    NSUInteger _batchSize;
    int _suspendCount;
    NSObject<OS_dispatch_queue> *_isolationQueue;
    NSObject<OS_dispatch_group> *_suspendGroup;
    NSMapTable *_lookupTable;
    NSObject<OS_dispatch_queue>" _queue;
    NSMutableArray" _taskLIFO;
    NSInteger _runingTaskCount;
    BOOL _isFIFO;
}




+(id)concurrentScheduler;
+(id)concurrentSchedulerWithBatchSize:(NSUInteger)arg0 ;
+(id)serialScheduler;
+(id)sharedConcurrentScheduler;
+(id)sharedSerialScheduler;
-(NSUInteger)_priorityIndexWithPriority:(NSUInteger)arg0 ;
-(id)description;
-(id)init;
-(int)postSchedulingRequest:(id)arg0 withPriority:(NSUInteger)arg1 ;
-(int)processTaskWithPriority:(NSUInteger)arg0 taskHandler:(id)arg1 ;
-(void)_processNextBatch;
-(void)cancelAllSchedulingRequests;
-(void)cancelSchedulingRequestWithID:(int)arg0 ;
-(void)deregisterRequest:(int)arg0 ;
-(void)registerRequest:(id)arg0 ;
-(void)resume;
-(void)setIsFIFO:(BOOL)arg0 ;
-(void)suspend;


@end


#endif