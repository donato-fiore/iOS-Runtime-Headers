// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TRIPOSTUPGRADECLEANUPTASK_H
#define TRIPOSTUPGRADECLEANUPTASK_H

@class NSMutableSet, NSString, NSArray, NSDate;
@protocol TRITask, TRITaskQueueStateProviding;


#import "TRIBaseTask.h"

@interface TRIPostUpgradeCleanupTask : TRIBaseTask <TRITask>

 {
    NSMutableSet *_invalidExperimentDeployments;
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
+(id)task;
-(BOOL)_activeRolloutIsCompatible:(id)arg0 upgradeNCVs:(id)arg1 downloadNCVs:(id)arg2 ;
-(BOOL)_removePromotionsUsingPaths:(id)arg0 ;
-(BOOL)_validateDynamicNamespaceRolloutsWithDatabase:(id)arg0 usingPaths:(id)arg1 ;
-(BOOL)_validateExperimentDescriptorsWithNamespaceCompatibilityVersions:(id)arg0 database:(id)arg1 ;
-(BOOL)_validateRolloutDescriptorsWithNamespaceCompatibilityVersions:(id)arg0 usingPaths:(id)arg1 ;
-(BOOL)_validateRolloutNamespaceNCVs:(id)arg0 downloadNCVs:(id)arg1 rolloutDatabase:(id)arg2 ;
-(id)_asPersistedTask;
-(id)_nextTasksForRunStatus:(int)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)runUsingContext:(id)arg0 withTaskQueue:(id)arg1 ;
-(id)serialize;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif