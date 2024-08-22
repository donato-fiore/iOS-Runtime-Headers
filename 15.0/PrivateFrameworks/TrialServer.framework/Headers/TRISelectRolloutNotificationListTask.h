// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TRISELECTROLLOUTNOTIFICATIONLISTTASK_H
#define TRISELECTROLLOUTNOTIFICATIONLISTTASK_H

@class NSMutableArray, _PASLock, NSString, NSArray, NSSet, NSDate;
@protocol TRIRetryableTask, TRIMetricsProviding, TRITaskAttributing, TRITaskQueueStateProviding;


#import "TRIBaseTask.h"

@interface TRISelectRolloutNotificationListTask : TRIBaseTask <TRIRetryableTask, TRIMetricsProviding>

 {
    NSMutableArray *_nextTasks;
    id<TRITaskAttributing> *_taskAttribution;
    _PASLock *_lock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSArray *dependencies;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSSet *namespaceNames; // ivar: _namespaceNames
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
+(id)taskWithNamespaceNames:(id)arg0 taskAttribution:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)nextTaskCount;
-(NSUInteger)requiredCapabilities;
-(id)_asPersistedTask;
-(id)dimensions;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNamespaceNames:(id)arg0 taskAttribution:(id)arg1 ;
-(id)metrics;
-(id)runUsingContext:(id)arg0 withTaskQueue:(id)arg1 ;
-(id)serialize;
-(id)trialSystemTelemetry;
-(struct ? )_processRolloutArtifact:(id)arg0 rolloutsProcessed:(id)arg1 remainingNamespaces:(id)arg2 targeter:(id)arg3 context:(id)arg4 taskQueue:(id)arg5 ;
-(void)_addDimension:(id)arg0 ;
-(void)_addMetric:(id)arg0 ;
-(void)_addNextTask:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif