// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TRIMAKEDEFAULTTASK_H
#define TRIMAKEDEFAULTTASK_H

@class TRIMetric, NSString, NSArray, NSDate;
@protocol TRIRetryableTask, TRITaskQueueStateProviding;


#import "TRIActivateTreatmentBaseTask.h"

@interface TRIMakeDefaultTask : TRIActivateTreatmentBaseTask <TRIRetryableTask>

 {
    TRIMetric *_treatmentMetric;
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
+(id)taskWithExperiment:(id)arg0 treatmentId:(id)arg1 taskAttributing:(id)arg2 ;
-(NSUInteger)requiredCapabilities:(id)arg0 ;
-(id)_asPersistedTask;
-(id)_nextTasksForRunStatus:(int)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)metrics;
-(id)runTaskUsingContext:(id)arg0 experiment:(id)arg1 ;
-(id)serialize;
-(int)makeDefaultForNamespace:(id)arg0 experiment:(id)arg1 context:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif