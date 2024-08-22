// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TRISCHEDULEFETCHEXPERIMENTNOTIFICATIONSTASK_H
#define TRISCHEDULEFETCHEXPERIMENTNOTIFICATIONSTASK_H

@class NSMutableArray, TRIDownloadOptions, NSString, NSArray, NSDate;
@protocol TRITask, TRITaskQueueStateProviding;


#import "TRIBaseTask.h"

@interface TRIScheduleFetchExperimentNotificationsTask : TRIBaseTask <TRITask>

 {
    BOOL _rollbacksOnly;
    NSMutableArray *_nextTasks;
    TRIDownloadOptions *_options;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSArray *dependencies;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSDate *startTime;
@property (weak, nonatomic) NSObject<TRITaskQueueStateProviding> *stateProvider;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *tags;
@property (readonly, nonatomic) NSString *taskName;
@property (readonly, nonatomic) int taskType;


+(BOOL)supportsSecureCoding;
+(id)parseFromData:(id)arg0 ;
+(id)taskWithRollbacksOnly:(BOOL)arg0 downloadOptions:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_asPersistedTask;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRollbacksOnly:(BOOL)arg0 downloadOptions:(id)arg1 ;
-(id)nextTasksForRunStatus:(int)arg0 ;
-(id)runUsingContext:(id)arg0 withTaskQueue:(id)arg1 ;
-(id)serialize;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif