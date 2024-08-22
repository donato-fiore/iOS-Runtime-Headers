// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLQUEUEDISPATCHER_H
#define PLQUEUEDISPATCHER_H

@protocol OS_dispatch_queue, OS_dispatch_workloop;

#import <Foundation/Foundation.h>


@interface PLQueueDispatcher : NSObject {
    NSObject<OS_dispatch_queue> *_userInitiatedQueue;
    NSObject<OS_dispatch_queue> *_utilityQueue;
    NSObject<OS_dispatch_queue> *_backgroundQueue;
    NSObject<OS_dispatch_queue> *_sharedUtilityQueue;
    NSObject<OS_dispatch_queue> *_sharedBackgroundQueue;
    NSObject<OS_dispatch_workloop> *_sharedWorkloop;
}




+(id)debugDescriptionOfEnqueuedBlocksOnQueue:(id)arg0 ;
+(id)sharedQueueDispatcher;
+(void)configureListTrackingForDispatchQueue:(id)arg0 ;
+(void)reportBlockDequeuedOnQueue:(id)arg0 ;
// +(void)reportBlockEnqueued:(id)arg0 onQueue:(unk)arg1 forLibrary:(id)arg2  ;
-(id)_queuesTrackingBlocks;
-(id)debugDescription;
-(id)init;
-(id)queueForCurrentQoS;
-(id)sharedBackgroundQueue;
-(id)sharedUtilityQueue;
-(void)_handleUnexpectedQoSClass:(unsigned int)arg0 ;
// -(void)async:(id)arg0 identifyingBlock:(unk)arg1 library:(id)arg2  ;
// -(void)sync:(id)arg0 identifyingBlock:(unk)arg1 library:(id)arg2  ;


@end


#endif