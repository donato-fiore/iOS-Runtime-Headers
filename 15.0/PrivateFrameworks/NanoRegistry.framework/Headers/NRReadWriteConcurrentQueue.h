// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NRREADWRITECONCURRENTQUEUE_H
#define NRREADWRITECONCURRENTQUEUE_H

@class NSMutableArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface NRReadWriteConcurrentQueue : NSObject {
    NSMutableArray *_readerQueues;
    NSObject<OS_dispatch_queue> *_writerQueue;
    NSInteger _nextReader;
    BOOL _suspended;
    NSMutableArray *_suspendedReadRequests;
    NSMutableArray *_suspendedWriteRequests;
    os_unfair_lock_s _lock;
}




-(id)initWithNumberOfReaders:(NSUInteger)arg0 ;
// -(void)enqueueReadWithBlock:(id)arg0 bypassSuspend:(unk)arg1  ;
// -(void)enqueueReadWithBlock:(id)arg0 bypassSuspend:(unk)arg1 async:(BOOL)arg2  ;
// -(void)enqueueReadWithBlockAsync:(id)arg0 bypassSuspend:(unk)arg1  ;
// -(void)enqueueWriteWithBlockAsync:(id)arg0 bypassSuspend:(unk)arg1  ;
-(void)invalidate;
-(void)resume;
-(void)suspend;


@end


#endif