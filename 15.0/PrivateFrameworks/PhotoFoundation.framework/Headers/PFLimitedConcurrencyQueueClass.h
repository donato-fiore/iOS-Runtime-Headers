// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PFLIMITEDCONCURRENCYQUEUECLASS_H
#define PFLIMITEDCONCURRENCYQUEUECLASS_H

@class NSMutableArray;


#import "PFConcurrentQueueClass.h"
#import "PFSerialQueue.h"

@interface PFLimitedConcurrencyQueueClass : PFConcurrentQueueClass {
    NSMutableArray *_slotQueues;
    NSUInteger _concurrencyLimit;
    PFSerialQueue *_serializer;
    NSMutableArray *_availableSlots;
    BOOL _usesBarrierBlocks;
    NSUInteger _suspendCount;
}




-(NSUInteger)concurrencyLimit;
-(id)_allocateOneSlotQueue;
-(id)_extensionsForTargetingQueue;
-(id)checkoutAvailableSlot;
-(void)_allocateAllSlotQueues;
-(void)_setupConcurrencyLimit:(NSUInteger)arg0 ;
-(void)dispatchAfter:(NSUInteger)arg0 block:(id)arg1 ;
-(void)dispatchAsync:(id)arg0 ;
-(void)dispatchAsyncWithQOS:(unsigned int)arg0 block:(id)arg1 ;
-(void)dispatchBarrierAsync:(id)arg0 ;
-(void)dispatchBarrierAsyncWithQOS:(unsigned int)arg0 block:(id)arg1 ;
-(void)dispatchBarrierSync:(id)arg0 ;
-(void)dispatchGroup:(id)arg0 async:(id)arg1 ;
-(void)dispatchGroup:(id)arg0 notify:(id)arg1 ;
-(void)dispatchSync:(id)arg0 ;
-(void)dropOneSlotQueue;
-(void)enqueueDelayedDrop;
-(void)resume;
-(void)slotQueueMightBeUnused:(id)arg0 ;
-(void)suspend;


@end


#endif