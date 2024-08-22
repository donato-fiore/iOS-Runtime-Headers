// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TRIFETCHSINGLEROLLOUTNOTIFICATIONTASK_H
#define TRIFETCHSINGLEROLLOUTNOTIFICATIONTASK_H

@class TRIRolloutDeployment, NSString, NSArray, NSDate;
@protocol TRIRetryableTask, TRIMetricsProviding, TRITaskAttributing, TRITaskQueueStateProviding;


#import "TRIBaseTask.h"
#import "TRIRolloutTaskSupport.h"

@interface TRIFetchSingleRolloutNotificationTask : TRIBaseTask <TRIRetryableTask, TRIMetricsProviding>

 {
    TRIRolloutDeployment *_deployment;
    id<TRITaskAttributing> *_taskAttributing;
    TRIRolloutTaskSupport *_support;
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
@property BOOL wasDeferred; // ivar: wasDeferred


+(BOOL)supportsSecureCoding;
+(id)parseFromData:(id)arg0 ;
+(id)taskWithDeployment:(id)arg0 taskAttributing:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)requiredCapabilities;
-(id)_asPersistedTask;
-(id)dimensions;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDeployment:(id)arg0 taskAttributing:(id)arg1 ;
-(id)metrics;
-(id)runUsingContext:(id)arg0 withTaskQueue:(id)arg1 ;
-(id)serialize;
-(id)trialSystemTelemetry;
-(void)encodeWithCoder:(id)arg0 ;
-(void)runDequeueHandlerUsingContext:(id)arg0 ;
-(void)runEnqueueHandlerUsingContext:(id)arg0 ;


@end


#endif