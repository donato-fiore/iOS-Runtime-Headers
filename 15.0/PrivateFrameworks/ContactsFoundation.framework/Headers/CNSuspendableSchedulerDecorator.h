// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNSUSPENDABLESCHEDULERDECORATOR_H
#define CNSUSPENDABLESCHEDULERDECORATOR_H

@class NSString, NSConditionLock;
@protocol CNScheduler;

#import <Foundation/Foundation.h>

#import "CNQueue.h"

@interface CNSuspendableSchedulerDecorator : NSObject <CNScheduler>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSConditionLock *lock; // ivar: _lock
@property (readonly, nonatomic) CNQueue *queue; // ivar: _queue
@property (readonly, nonatomic) NSObject<CNScheduler> *scheduler; // ivar: _scheduler
@property (readonly) Class superclass;
@property (readonly) CGFloat timestamp;


+(id)resumedSchedulerWithScheduler:(id)arg0 ;
+(id)suspendedSchedulerWithScheduler:(id)arg0 ;
// -(id)_nts_enqueueCancelableBlock:(id)arg0 qualityOfService:(unk)arg1  ;
-(id)afterDelay:(CGFloat)arg0 performBlock:(id)arg1 ;
// -(id)afterDelay:(CGFloat)arg0 performBlock:(id)arg1 qualityOfService:(unk)arg2  ;
-(id)initWithScheduler:(id)arg0 ;
-(id)performCancelableBlock:(id)arg0 ;
// -(id)performCancelableBlock:(id)arg0 qualityOfService:(unk)arg1  ;
-(void)_performFirstQueuedTask;
-(void)performBlock:(id)arg0 ;
// -(void)performBlock:(id)arg0 qualityOfService:(unk)arg1  ;
-(void)resume;
-(void)suspend;


@end


#endif