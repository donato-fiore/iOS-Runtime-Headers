// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPCVOCALATTENUATIONLOWPOWERMODEPOLICY_H
#define MPCVOCALATTENUATIONLOWPOWERMODEPOLICY_H

@class NSString, NSProcessInfo;
@protocol ICEnvironmentMonitorObserver, MPCVocalAttenuationPolicy, OS_dispatch_queue, MPCVocalAttenuationPolicyDelegate;

#import <Foundation/Foundation.h>


@interface MPCVocalAttenuationLowPowerModePolicy : NSObject <ICEnvironmentMonitorObserver, MPCVocalAttenuationPolicy>



@property (retain, nonatomic) NSObject<OS_dispatch_queue> *calloutQueue; // ivar: _calloutQueue
@property (readonly, nonatomic) BOOL canBeReset;
@property (readonly, nonatomic) os_unfair_lock_s dataLock; // ivar: _dataLock
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<MPCVocalAttenuationPolicyDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=shouldDisableVocalAttenuation) BOOL disableVocalAttenuation; // ivar: _disableVocalAttenuation
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isLowPowerModeEnabled) BOOL lowPowerModeEnabled; // ivar: _lowPowerModeEnabled
@property (retain, nonatomic) NSProcessInfo *powerMonitor; // ivar: _powerMonitor
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger type; // ivar: _type


-(id)evaluation;
-(id)initWithCalloutQueue:(id)arg0 delegate:(id)arg1 ;
-(id)initWithPowerModeMonitor:(id)arg0 calloutQueue:(id)arg1 delegate:(id)arg2 ;
-(void)powerModeDidChange:(BOOL)arg0 ;
-(void)processInfoPowerStateDidChange:(id)arg0 ;
-(void)reset;
-(void)updateEvaluationWithReason:(id)arg0 ;


@end


#endif