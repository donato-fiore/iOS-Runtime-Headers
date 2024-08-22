// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVTORDEREDINDEXBASEDTASKSCHEDULER_H
#define AVTORDEREDINDEXBASEDTASKSCHEDULER_H

@class NSString, NSMutableDictionary, NSMutableArray;
@protocol AVTIndexBasedTaskScheduler, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AVTOrderedIndexBasedTaskScheduler : NSObject <AVTIndexBasedTaskScheduler>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSMutableDictionary *readyTasks; // ivar: _readyTasks
@property (readonly, nonatomic) NSMutableDictionary *scheduledTasks; // ivar: _scheduledTasks
@property (readonly, nonatomic) NSMutableArray *scheduledTasksOrder; // ivar: _scheduledTasksOrder
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *stateLock; // ivar: _stateLock
@property (readonly) Class superclass;


+(id)indexesForReadyTasksToRunGivenScheduledTasks:(id)arg0 order:(id)arg1 readyTasks:(id)arg2 readyRowIndex:(id)arg3 ;
+(id)rowBaseIndexForIndex:(id)arg0 ;
-(id)initWithEnvironment:(id)arg0 ;
-(void)cancelAllTasks;
-(void)cancelTask:(id)arg0 ;
-(void)performStateWork:(id)arg0 ;
// -(void)scheduleTask:(id)arg0 forIndex:(unk)arg1  ;
// -(void)taskReady:(id)arg0 forIndex:(unk)arg1  ;


@end


#endif