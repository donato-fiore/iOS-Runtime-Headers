// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CUTDEFERREDTASKQUEUE_H
#define CUTDEFERREDTASKQUEUE_H

@class NSNumber, NSMutableArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CUTDeferredTaskQueue : NSObject

@property (readonly, nonatomic) NSNumber *capacity; // ivar: _capacity
@property (readonly, nonatomic) id *originalBlock; // ivar: _originalBlock
@property (readonly, nonatomic) NSMutableArray *pendingDispatchBlocks; // ivar: _pendingDispatchBlocks
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


-(id)initWithCapacity:(NSInteger)arg0 queue:(id)arg1 block:(id)arg2 ;
-(id)initWithNumberCapacity:(id)arg0 queue:(id)arg1 block:(id)arg2 ;
-(id)initWithQueue:(id)arg0 block:(id)arg1 ;
-(void)cancelPendingExecutions;
-(void)enqueueExecutionWithTarget:(id)arg0 afterDelay:(CGFloat)arg1 ;


@end


#endif