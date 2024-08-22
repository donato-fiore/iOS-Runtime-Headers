// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PFLIMITEDCONCURRENCYSLOTQUEUE_H
#define PFLIMITEDCONCURRENCYSLOTQUEUE_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PFLimitedConcurrencyQueueClass.h"

@interface PFLimitedConcurrencySlotQueue : NSObject {
    uint8_t _blockCount;
    NSObject<OS_dispatch_queue> *_slotQueue;
}


@property (readonly, weak) PFLimitedConcurrencyQueueClass *concurrentQueue; // ivar: _concurrentQueue
@property (readonly) NSUInteger slotIndex; // ivar: _slotIndex


+(id)currentSlotQueue;
-(NSUInteger)decrementSlotUseCount;
-(NSUInteger)incrementSlotUseCount;
-(NSUInteger)slotUseCount;
-(char *)label;
-(id)initWithConcurrentQueue:(id)arg0 targetQueue:(id)arg1 slotIndex:(NSUInteger)arg2 ;
-(void)dispatchAsync:(id)arg0 ;
-(void)dispatchAsyncWithQOS:(unsigned int)arg0 block:(id)arg1 ;
-(void)resume;
-(void)suspend;


@end


#endif