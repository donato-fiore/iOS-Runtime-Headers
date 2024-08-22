// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TRIFETCHEXPERIMENTTASK_H
#define TRIFETCHEXPERIMENTTASK_H

@class TRITrialSystemTelemetry, NSString, NSArray, NSDate;
@protocol TRIRetryableTask, TRIMetricsProviding, TRITaskAttributing, TRITaskQueueStateProviding;


#import "TRIExperimentBaseTask.h"

@interface TRIFetchExperimentTask : TRIExperimentBaseTask <TRIRetryableTask, TRIMetricsProviding>

 {
    id<TRITaskAttributing> *_taskAttributing;
    TRITrialSystemTelemetry *_trialSystemTelemetry;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSArray *dependencies;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) int retryCount; // ivar: retryCount
@property (copy, nonatomic) NSDate *startTime;
@property (weak, nonatomic) NSObject<TRITaskQueueStateProviding> *stateProvider;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *tags;
@property (readonly, nonatomic) NSString *taskName;
@property (readonly, nonatomic) int taskType;
@property (nonatomic) BOOL wasDeferred; // ivar: wasDeferred


+(BOOL)supportsSecureCoding;
+(id)parseFromData:(id)arg0 ;
+(id)taskWithExperimentDeployment:(id)arg0 taskAttributing:(id)arg1 ;
-(NSUInteger)requiredCapabilities:(id)arg0 ;
-(id)_asPersistedTask;
-(id)_nextTasksForRunStatus:(int)arg0 ;
-(id)dimensions;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithExperimentDeployment:(id)arg0 taskAttributing:(id)arg1 ;
-(id)metrics;
-(id)runUsingContext:(id)arg0 withTaskQueue:(id)arg1 ;
-(id)serialize;
-(id)trialSystemTelemetry;
-(void)encodeWithCoder:(id)arg0 ;
-(void)runDequeueHandlerUsingContext:(id)arg0 ;
-(void)runEnqueueHandlerUsingContext:(id)arg0 ;


@end


#endif