// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVTCOALESCINGINVERTINGTASKSCHEDULER_H
#define AVTCOALESCINGINVERTINGTASKSCHEDULER_H

@class NSString, NSMutableArray;
@protocol AVTTaskScheduler, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AVTCoalescingInvertingTaskScheduler : NSObject <AVTTaskScheduler>



@property (readonly, nonatomic) NSObject<AVTTaskScheduler> *backingScheduler; // ivar: _backingScheduler
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *coalescingQueue; // ivar: _coalescingQueue
@property (readonly, nonatomic) CGFloat coalesingDelay; // ivar: _coalesingDelay
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *stateLock; // ivar: _stateLock
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSMutableArray *tasks; // ivar: _tasks


-(id)initWithBackingScheduler:(id)arg0 coalescingQueue:(id)arg1 delay:(CGFloat)arg2 environment:(id)arg3 ;
-(void)cancelAllTasks;
-(void)cancelTask:(id)arg0 ;
-(void)lowerTaskPriority:(id)arg0 ;
-(void)performStateWork:(id)arg0 ;
-(void)scheduleTask:(id)arg0 ;
-(void)startTasksFrom:(id)arg0 ;


@end


#endif