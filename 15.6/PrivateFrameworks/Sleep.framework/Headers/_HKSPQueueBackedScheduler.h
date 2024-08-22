// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _HKSPQUEUEBACKEDSCHEDULER_H
#define _HKSPQUEUEBACKEDSCHEDULER_H

@class NSString;
@protocol HKSPQueueBackedScheduler, OS_dispatch_queue, NAScheduler;

#import <Foundation/Foundation.h>


@interface _HKSPQueueBackedScheduler : NSObject <HKSPQueueBackedScheduler>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly, nonatomic) NSObject<NAScheduler> *scheduler; // ivar: _scheduler
@property (readonly) Class superclass;


-(id)afterDelay:(CGFloat)arg0 performBlock:(id)arg1 ;
-(id)initWithQueue:(id)arg0 ;
-(id)initWithScheduler:(id)arg0 queue:(id)arg1 ;
-(id)performCancelableBlock:(id)arg0 ;
-(void)performBlock:(id)arg0 ;


@end


#endif