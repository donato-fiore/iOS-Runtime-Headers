// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TRIFETCHROLLOUTNOTIFICATIONLISTTASK_H
#define TRIFETCHROLLOUTNOTIFICATIONLISTTASK_H

@class NSMutableArray, NSDate, NSSet, NSString, NSArray;
@protocol TRIRetryableTask, TRIMetricsProviding, TRITaskAttributing, TRITaskQueueStateProviding;


#import "TRIBaseTask.h"

@interface TRIFetchRolloutNotificationListTask : TRIBaseTask <TRIRetryableTask, TRIMetricsProviding>

 {
    NSMutableArray *_metrics;
    NSMutableArray *_dimensions;
    NSMutableArray *_nextTasks;
    NSDate *_startingFetchDateOverride;
    NSSet *_namespaceNames;
    id<TRITaskAttributing> *_taskAttribution;
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
+(id)taskWithStartingFetchDateOverride:(id)arg0 namespaceNames:(id)arg1 taskAttribution:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)nextTaskCount;
-(NSUInteger)requiredCapabilities:(id)arg0 ;
-(id)_asPersistedTask;
-(id)dimensions;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStartingFetchDateOverride:(id)arg0 namespaceNames:(id)arg1 taskAttribution:(id)arg2 ;
-(id)metrics;
-(id)runUsingContext:(id)arg0 withTaskQueue:(id)arg1 ;
-(id)serialize;
-(id)trialSystemTelemetry;
-(void)_addDimension:(id)arg0 ;
-(void)_addMetric:(id)arg0 ;
-(void)_addNextTask:(id)arg0 ;
-(void)_processRolloutArtifact:(id)arg0 context:(id)arg1 taskQueue:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif