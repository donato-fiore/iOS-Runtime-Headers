// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TRITARGETINGTASK_H
#define TRITARGETINGTASK_H

@class NSString, NSArray, TRIExperimentDeployment, NSDate;
@protocol TRIMetricsProviding, TRIRetryableTask, TRITaskAttributing, TRITaskQueueStateProviding;


#import "TRIBaseTask.h"
#import "TRIExperimentTaskSupport.h"

@interface TRITargetingTask : TRIBaseTask <TRIMetricsProviding, TRIRetryableTask>

 {
    TRIExperimentTaskSupport *_support;
    BOOL _includeDependencies;
    id<TRITaskAttributing> *_taskAttributing;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSArray *dependencies;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) TRIExperimentDeployment *experiment;
@property (readonly) NSUInteger hash;
@property (nonatomic) int retryCount; // ivar: retryCount
@property (copy, nonatomic) NSDate *startTime;
@property (weak, nonatomic) NSObject<TRITaskQueueStateProviding> *stateProvider;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *tags;
@property (readonly, nonatomic) NSString *taskName;
@property (readonly, nonatomic) int taskType;
@property BOOL wasDeferred; // ivar: wasDeferred


+(BOOL)supportsSecureCoding;
+(id)parseFromData:(id)arg0 ;
+(id)taskWithExperiment:(id)arg0 includeDependencies:(BOOL)arg1 taskAttribution:(id)arg2 ;
+(id)taskWithExperiment:(id)arg0 taskAttribution:(id)arg1 ;
-(BOOL)_isRolloutV1For1PWithExperimentRecord:(id)arg0 context:(id)arg1 ;
-(BOOL)getTreatment:(*id)arg0 forExperiment:(id)arg1 isServerSideExperiment:(BOOL)arg2 paths:(id)arg3 error:(*id)arg4 ;
-(BOOL)getTreatment:(*id)arg0 forExperiment:(id)arg1 isServerSideExperiment:(BOOL)arg2 systemCovariates:(id)arg3 userCovariates:(id)arg4 error:(*id)arg5 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)validateSystemCovariates:(id)arg0 experiment:(id)arg1 error:(*id)arg2 ;
-(id)_asPersistedTask;
-(id)_targetingErrorWithExperiment:(id)arg0 errorType:(id)arg1 ;
-(id)_targetingErrorWithExperiment:(id)arg0 errorType:(id)arg1 details:(id)arg2 ;
-(id)dimensions;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithExperiment:(id)arg0 includeDependencies:(BOOL)arg1 taskAttribution:(id)arg2 ;
-(id)metrics;
-(id)runTaskUsingContext:(id)arg0 withTaskQueue:(id)arg1 systemCovariates:(id)arg2 userCovariates:(id)arg3 error:(*id)arg4 ;
-(id)runUsingContext:(id)arg0 withTaskQueue:(id)arg1 ;
-(id)serialize;
-(id)systemCovariatesWithPaths:(id)arg0 ;
-(id)trialSystemTelemetry;
-(void)encodeWithCoder:(id)arg0 ;
-(void)runDequeueHandlerUsingContext:(id)arg0 ;
-(void)runEnqueueHandlerUsingContext:(id)arg0 ;


@end


#endif