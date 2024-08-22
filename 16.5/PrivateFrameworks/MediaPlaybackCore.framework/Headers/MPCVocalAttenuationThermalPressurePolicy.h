// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPCVOCALATTENUATIONTHERMALPRESSUREPOLICY_H
#define MPCVOCALATTENUATIONTHERMALPRESSUREPOLICY_H

@class NSString, ICEnvironmentMonitor;
@protocol ICEnvironmentMonitorObserver, MPCVocalAttenuationPolicy, OS_dispatch_queue, MPCVocalAttenuationPolicyDelegate;

#import <Foundation/Foundation.h>


@interface MPCVocalAttenuationThermalPressurePolicy : NSObject <ICEnvironmentMonitorObserver, MPCVocalAttenuationPolicy>



@property (retain, nonatomic) NSObject<OS_dispatch_queue> *calloutQueue; // ivar: _calloutQueue
@property (readonly, nonatomic) BOOL canBeReset;
@property (nonatomic) NSInteger currentThermalLevel; // ivar: _currentThermalLevel
@property (nonatomic) NSInteger cutoffThermalLevel; // ivar: _cutoffThermalLevel
@property (readonly, nonatomic) os_unfair_lock_s dataLock; // ivar: _dataLock
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<MPCVocalAttenuationPolicyDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=shouldDisableVocalAttenuation) BOOL disableVocalAttenuation; // ivar: _disableVocalAttenuation
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger reenablementThermalLevel; // ivar: _reenablementThermalLevel
@property (readonly) Class superclass;
@property (retain, nonatomic) ICEnvironmentMonitor *thermalMonitor; // ivar: _thermalMonitor
@property (readonly, nonatomic) NSInteger type; // ivar: _type


-(id)evaluation;
-(id)initWithCalloutQueue:(id)arg0 delegate:(id)arg1 ;
-(id)initWithThermalMonitor:(id)arg0 calloutQueue:(id)arg1 delegate:(id)arg2 ;
-(void)environmentMonitorDidChangeThermalLevel:(id)arg0 ;
-(void)reset;
-(void)thermalStateDidChange:(NSInteger)arg0 ;
-(void)updateEvaluationWithReason:(id)arg0 ;


@end


#endif