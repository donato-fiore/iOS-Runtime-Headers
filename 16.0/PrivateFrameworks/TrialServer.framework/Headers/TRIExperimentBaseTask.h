// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TRIEXPERIMENTBASETASK_H
#define TRIEXPERIMENTBASETASK_H

@class _PASLock, TRIExperimentDeployment;
@protocol TRIMetricsProviding;


#import "TRIBaseTask.h"

@interface TRIExperimentBaseTask : TRIBaseTask <TRIMetricsProviding>

 {
    _PASLock *_lock;
}


@property (readonly, nonatomic) TRIExperimentDeployment *experiment; // ivar: _experiment


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)containerForFirstNamespaceInExperimentWithContext:(id)arg0 ;
-(id)description;
-(id)dimensions;
-(id)initWithExperiment:(id)arg0 ;
-(id)metrics;
-(id)nextTasksForRunStatus:(int)arg0 ;
-(id)tags;
-(id)trialSystemTelemetry;
-(void)addDimension:(id)arg0 ;
-(void)addMetric:(id)arg0 ;
-(void)logAsRollout:(BOOL)arg0 ;
-(void)mergeTelemetry:(id)arg0 ;


@end


#endif