// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TRIFETCHMULTIPLEEXPERIMENTNOTIFICATIONSTASK_H
#define TRIFETCHMULTIPLEEXPERIMENTNOTIFICATIONSTASK_H

@class NSMutableArray, NSDate, NSSet, NSString, NSArray;
@protocol TRIRetryableTask, TRIMetricsProviding, TRITaskAttributing, TRITaskQueueStateProviding;


#import "TRIBaseTask.h"

@interface TRIFetchMultipleExperimentNotificationsTask : TRIBaseTask <TRIRetryableTask, TRIMetricsProviding>

 {
    NSMutableArray *_metrics;
    NSMutableArray *_dimensions;
    NSMutableArray *_nextTasks;
    NSDate *_startingFetchDateOverride;
    BOOL _rollbacksOnly;
    id<TRITaskAttributing> *_taskAttributing;
    NSSet *_namespaceNames;
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
+(id)taskWithStartingFetchDateOverride:(id)arg0 namespaceNames:(id)arg1 taskAttributing:(id)arg2 rollbacksOnly:(BOOL)arg3 ;
-(BOOL)_checkIfAnyTreatmentPresent:(id)arg0 usingContext:(id)arg1 ;
-(BOOL)_processExperiment:(id)arg0 experimentDatabase:(id)arg1 namespaceDatabase:(id)arg2 taskQueue:(id)arg3 paths:(id)arg4 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)nextTaskCount;
-(NSUInteger)requiredCapabilities;
-(id)_asPersistedTask;
-(id)_getNextTaskForExperiment:(id)arg0 database:(id)arg1 taskQueue:(id)arg2 ;
-(id)_nameForNotificationType:(int)arg0 ;
-(id)dimensions;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStartingFetchDateOverride:(id)arg0 container:(int)arg1 team:(id)arg2 rollbacksOnly:(BOOL)arg3 withNamespaceNames:(id)arg4 ;
-(id)initWithStartingFetchDateOverride:(id)arg0 namespaceNames:(id)arg1 taskAttributing:(id)arg2 rollbacksOnly:(BOOL)arg3 ;
-(id)metrics;
-(id)runUsingContext:(id)arg0 withTaskQueue:(id)arg1 ;
-(id)serialize;
-(id)trialSystemTelemetry;
-(void)_addDimension:(id)arg0 ;
-(void)_addMetric:(id)arg0 ;
-(void)_addNextTask:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateStatusForNamespacesWithContext:(id)arg0 ;


@end


#endif