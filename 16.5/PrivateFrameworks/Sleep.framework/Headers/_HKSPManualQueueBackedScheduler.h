// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _HKSPMANUALQUEUEBACKEDSCHEDULER_H
#define _HKSPMANUALQUEUEBACKEDSCHEDULER_H

@class HKSPQueueBackedScheduler, NSMutableArray, NSString;
@protocol HKSPQueueBackedScheduler, OS_dispatch_queue;



@interface _HKSPManualQueueBackedScheduler : HKSPQueueBackedScheduler <HKSPQueueBackedScheduler>



@property (readonly, nonatomic) NSMutableArray *blocks; // ivar: _blocks
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isSuspended; // ivar: _isSuspended
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;


-(id)afterDelay:(CGFloat)arg0 performBlock:(id)arg1 ;
-(id)initWithScheduler:(id)arg0 queue:(id)arg1 ;
-(id)performCancelableBlock:(id)arg0 ;
-(void)performBlock:(id)arg0 ;
-(void)resume;
-(void)suspend;


@end


#endif