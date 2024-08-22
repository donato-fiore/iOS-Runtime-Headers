// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TRIROLLOUTTASKSUPPORT_H
#define TRIROLLOUTTASKSUPPORT_H

@class _PASLock, TRIRolloutDeployment;
@protocol TRIMetricsProviding;

#import <Foundation/Foundation.h>


@interface TRIRolloutTaskSupport : NSObject <TRIMetricsProviding>

 {
    _PASLock *_lock;
}


@property (readonly, nonatomic) TRIRolloutDeployment *rolloutDeployment; // ivar: _rolloutDeployment


-(id)dimensions;
-(id)initWithRolloutDeployment:(id)arg0 ;
-(id)metrics;
-(id)tags;
-(id)trialSystemTelemetry;
-(void)addDimension:(id)arg0 ;
-(void)addMetric:(id)arg0 ;
-(void)mergeTelemetry:(id)arg0 ;


@end


#endif