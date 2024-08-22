// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPLSIMPLETASKSYNCSTEP_H
#define CPLSIMPLETASKSYNCSTEP_H



#import "CPLSyncStep.h"
#import "CPLEngineSyncTask.h"

@interface CPLSimpleTaskSyncStep : CPLSyncStep

@property (readonly, nonatomic) CPLEngineSyncTask *currentTask; // ivar: _currentTask
@property (readonly, nonatomic) Class taskClass; // ivar: _taskClass


-(BOOL)didFinishTask:(id)arg0 withError:(id)arg1 shouldStop:(*BOOL)arg2 ;
-(BOOL)launchNecessaryTasks;
-(id)descriptionForTasks;
-(id)initWithSyncManager:(id)arg0 syncSession:(id)arg1 taskClass:(Class)arg2 ;
-(id)newTask;
-(void)cancelAllTasks:(BOOL)arg0 ;
-(void)moveTasksToBackground;


@end


#endif