// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNCOALESCINGSCHEDULERDECORATOR_H
#define CNCOALESCINGSCHEDULERDECORATOR_H

@class NSString;
@protocol CNScheduler;

#import <Foundation/Foundation.h>

#import "CNStack.h"

@interface CNCoalescingSchedulerDecorator : NSObject <CNScheduler>



@property (readonly, nonatomic) CGFloat coalescingWindow; // ivar: _coalescingWindow
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) CNStack *delayedBlocks; // ivar: _delayedBlocks
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<CNScheduler> *scheduler; // ivar: _scheduler
@property (nonatomic) NSUInteger state; // ivar: _state
@property (readonly) Class superclass;
@property (readonly) CGFloat timestamp;


-(NSUInteger)getAndIncrementState;
-(id)afterDelay:(CGFloat)arg0 performBlock:(id)arg1 ;
// -(id)afterDelay:(CGFloat)arg0 performBlock:(id)arg1 qualityOfService:(unk)arg2  ;
-(id)initWithScheduler:(id)arg0 coalescingWindow:(CGFloat)arg1 ;
-(id)performCancelableBlock:(id)arg0 ;
// -(id)performCancelableBlock:(id)arg0 qualityOfService:(unk)arg1  ;
-(void)flushDelayedBlock;
-(void)performBlock:(id)arg0 ;
// -(void)performBlock:(id)arg0 qualityOfService:(unk)arg1  ;
-(void)removeDelayedBlock:(id)arg0 ;


@end


#endif