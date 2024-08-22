// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVTSERIALTASKSCHEDULER_H
#define AVTSERIALTASKSCHEDULER_H

@class NSMutableArray, NSString;
@protocol AVTTaskScheduler, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AVTSerialTaskScheduler : NSObject <AVTTaskScheduler>



@property (readonly, nonatomic) NSMutableArray *backlogTasks; // ivar: _backlogTasks
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger order; // ivar: _order
@property (readonly, nonatomic) NSMutableArray *priorityTasks; // ivar: _priorityTasks
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *stateLock; // ivar: _stateLock
@property (readonly) Class superclass;


+(id)fifoScheduler;
+(id)fifoSchedulerWithEnvironment:(id)arg0 ;
+(id)lifoScheduler;
+(id)lifoSchedulerWithEnvironment:(id)arg0 ;
+(id)nextTaskToRunForPriorityTasks:(SEL)arg0 backlogTasks:(id)arg1 order:(id)arg2 ;
-(id)initWithEnvironment:(id)arg0 order:(NSInteger)arg1 ;
-(void)cancelAllTasks;
-(void)cancelTask:(id)arg0 ;
-(void)didCompleteTask:(id)arg0 ;
-(void)lowerTaskPriority:(id)arg0 ;
-(void)performStateWork:(id)arg0 ;
-(void)scheduleTask:(id)arg0 ;
-(void)startTask:(id)arg0 ;


@end


#endif