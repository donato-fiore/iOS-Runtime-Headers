// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TRIEXPERIMENTTASKSUPPORT_H
#define TRIEXPERIMENTTASKSUPPORT_H

@class _PASLock, TRIExperimentDeployment;
@protocol TRIMetricsProviding;

#import <Foundation/Foundation.h>


@interface TRIExperimentTaskSupport : NSObject <TRIMetricsProviding>

 {
    _PASLock *_lock;
}


@property (readonly, nonatomic) TRIExperimentDeployment *experimentDeployment; // ivar: _experimentDeployment


-(id)dimensions;
-(id)initWithExperimentDeployment:(id)arg0 ;
-(id)metrics;
-(id)tags;
-(id)trialSystemTelemetry;
-(void)addDimension:(id)arg0 ;
-(void)addMetric:(id)arg0 ;
-(void)mergeTelemetry:(id)arg0 ;
-(void)setIdentifyTelemetryAsV1Rollout:(BOOL)arg0 ;


@end


#endif