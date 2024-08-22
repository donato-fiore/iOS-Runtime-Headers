// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TRIDEACTIVATETREATMENTTASK_H
#define TRIDEACTIVATETREATMENTTASK_H

@class NSString, NSArray, NSDate;
@protocol TRIRetryableTask, TRITaskQueueStateProviding;


#import "TRIExperimentBaseTask.h"

@interface TRIDeactivateTreatmentTask : TRIExperimentBaseTask <TRIRetryableTask>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSArray *dependencies;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL failOnUnrecognizedExperiment; // ivar: _failOnUnrecognizedExperiment
@property (readonly) NSUInteger hash;
@property (nonatomic) int retryCount; // ivar: retryCount
@property (copy, nonatomic) NSDate *startTime; // ivar: _startTime
@property (weak, nonatomic) NSObject<TRITaskQueueStateProviding> *stateProvider;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *tags;
@property (readonly, nonatomic) NSString *taskName;
@property (readonly, nonatomic) int taskType;
@property (nonatomic) NSUInteger triggerEvent; // ivar: _triggerEvent
@property (nonatomic) BOOL wasDeferred; // ivar: wasDeferred


+(BOOL)supportsSecureCoding;
+(id)parseFromData:(id)arg0 ;
+(id)taskWithExperimentId:(id)arg0 failOnUnrecognizedExperiment:(BOOL)arg1 ;
+(id)taskWithExperimentId:(id)arg0 startTime:(id)arg1 failOnUnrecognizedExperiment:(BOOL)arg2 triggerEvent:(NSUInteger)arg3 ;
-(BOOL)_notifyUpdatedShadowEvaluationWithExperimentRecord:(id)arg0 context:(id)arg1 ;
-(BOOL)_purgeRolloutLayerIfNecessaryWithRecord:(id)arg0 fromAppContainer:(id)arg1 paths:(id)arg2 ;
-(NSUInteger)requiredCapabilities;
-(id)_asPersistedTask;
-(id)_categoricalValueForTriggerEvent:(NSUInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)runUsingContext:(id)arg0 withTaskQueue:(id)arg1 ;
-(id)serialize;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif