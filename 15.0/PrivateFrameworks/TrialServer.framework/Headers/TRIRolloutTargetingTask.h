// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TRIROLLOUTTARGETINGTASK_H
#define TRIROLLOUTTARGETINGTASK_H

@class NSString, NSArray, TRIRolloutDeployment, NSDate;
@protocol TRITask, TRIMetricsProviding, TRITaskAttributing, TRITaskQueueStateProviding;


#import "TRIBaseTask.h"
#import "TRIRolloutTaskSupport.h"

@interface TRIRolloutTargetingTask : TRIBaseTask <TRITask, TRIMetricsProviding>

 {
    TRIRolloutTaskSupport *_support;
    BOOL _includeDependencies;
    id<TRITaskAttributing> *_taskAttribution;
    NSUInteger _triggerEvent;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSArray *dependencies;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) TRIRolloutDeployment *rolloutDeployment;
@property (copy, nonatomic) NSDate *startTime;
@property (weak, nonatomic) NSObject<TRITaskQueueStateProviding> *stateProvider;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *tags;
@property (readonly, nonatomic) NSString *taskName;
@property (readonly, nonatomic) int taskType;


+(BOOL)supportsSecureCoding;
+(id)parseFromData:(id)arg0 ;
+(id)taskWithRolloutDeployment:(id)arg0 includeDependencies:(BOOL)arg1 taskAttribution:(id)arg2 triggerEvent:(NSUInteger)arg3 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_asPersistedTask;
-(id)_categoricalValueForTriggerEvent:(NSUInteger)arg0 ;
-(id)_runTaskUsingContext:(id)arg0 withTaskQueue:(id)arg1 rolloutTargeter:(id)arg2 error:(*id)arg3 ;
-(id)_systemCovariatesWithPaths:(id)arg0 ;
-(id)_taskResultWithStatus:(int)arg0 reportResults:(BOOL)arg1 nextTasks:(id)arg2 ;
-(id)dimensions;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRolloutDeployment:(id)arg0 includeDependencies:(BOOL)arg1 taskAttribution:(id)arg2 triggerEvent:(NSUInteger)arg3 ;
-(id)metrics;
-(id)runUsingContext:(id)arg0 withTaskQueue:(id)arg1 ;
-(id)serialize;
-(id)trialSystemTelemetry;
-(void)encodeWithCoder:(id)arg0 ;
-(void)runDequeueHandlerUsingContext:(id)arg0 ;
-(void)runEnqueueHandlerUsingContext:(id)arg0 ;


@end


#endif