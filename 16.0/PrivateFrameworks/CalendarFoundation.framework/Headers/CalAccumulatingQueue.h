// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CALACCUMULATINGQUEUE_H
#define CALACCUMULATINGQUEUE_H

@class NSMutableSet, NSMutableDictionary;
@protocol OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface CalAccumulatingQueue : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    id *_block;
    id *_throttleBlock;
    CGFloat _delay;
    NSMutableSet *_tags;
    NSMutableDictionary *_context;
    BOOL _executionPending;
    NSUInteger _pendingPopTime;
    NSObject<OS_dispatch_source> *_pendingExecutionTimer;
}




// -(id)_initWithQueue:(id)arg0 andBlock:(id)arg1 delay:(unk)arg2 throttle:(CGFloat)arg3  ;
-(id)initWithQueue:(id)arg0 andBlock:(id)arg1 ;
// -(id)initWithQueue:(id)arg0 andBlock:(id)arg1 delay:(unk)arg2  ;
// -(id)initWithQueue:(id)arg0 andBlock:(id)arg1 throttle:(unk)arg2  ;
-(void)_callTargetBlockAndReset;
-(void)_cancelPendingTimer;
-(void)_executeBlockWithThrottleBlock;
-(void)_executeBlockWithoutThrottleBlock;
-(void)_scheduleTimerWithDelay:(CGFloat)arg0 ;
-(void)executeBlock;
-(void)updateTags:(id)arg0 ;
-(void)updateTags:(id)arg0 withContext:(id)arg1 ;
-(void)updateTagsAndExecuteBlock:(id)arg0 ;
-(void)updateTagsAndExecuteBlock:(id)arg0 withContext:(id)arg1 ;


@end


#endif