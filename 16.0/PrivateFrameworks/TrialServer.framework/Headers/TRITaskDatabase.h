// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TRITASKDATABASE_H
#define TRITASKDATABASE_H

@protocol TRITaskPersisting, TRITaskSetProviding;

#import <Foundation/Foundation.h>

#import "TRIDatabase.h"

@interface TRITaskDatabase : NSObject <TRITaskPersisting>

 {
    TRIDatabase *_db;
    id<TRITaskSetProviding> *_taskSetProvider;
}




-(BOOL)_checkTaskId:(id)arg0 IsPresent:(*BOOL)arg1 transaction:(id)arg2 ;
-(BOOL)enumerateTasksWithTagsIntersectingTagSet:(id)arg0 block:(id)arg1 ;
-(BOOL)removeTaskWithId:(id)arg0 cleanupBlock:(id)arg1 ;
-(BOOL)updateTaskWithTaskId:(id)arg0 capabilities:(NSUInteger)arg1 task:(id)arg2 ;
-(BOOL)updateTaskWithTaskId:(id)arg0 startDate:(id)arg1 task:(id)arg2 ;
-(NSUInteger)count;
-(id)_tasksForQuery:(id)arg0 onPrep:(id)arg1 ;
-(id)addTask:(id)arg0 startTime:(id)arg1 tags:(id)arg2 dependencies:(id)arg3 error:(*id)arg4 ;
-(id)allTasks;
-(id)dependencyFreeTasksForAllowedCapabilities:(NSUInteger)arg0 dateForRunnability:(id)arg1 ;
-(id)dependencyFreeTasksForAllowedCapabilities:(NSUInteger)arg0 dateForRunnability:(id)arg1 taskType:(int)arg2 ;
-(id)directDependenciesOfTaskWithId:(id)arg0 ;
-(id)idForTask:(id)arg0 ;
-(id)init;
-(id)initWithDatabase:(id)arg0 taskSetProvider:(id)arg1 ;
-(id)taskIdsWithTag:(id)arg0 ;
-(id)tasksDependentOnTask:(id)arg0 ;
-(struct _PASDBTransactionCompletion_ )readTransactionWithFailableBlock:(id)arg0 ;
-(struct _PASDBTransactionCompletion_ )writeTransactionWithFailableBlock:(id)arg0 ;


@end


#endif