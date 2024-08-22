// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPCVOCALATTENUATIONPERFORMANCEPOLICY_H
#define MPCVOCALATTENUATIONPERFORMANCEPOLICY_H

@protocol MPCVocalAttenuationPolicy, OS_dispatch_queue, MPCVocalAttenuationPolicyDelegate;

#import <Foundation/Foundation.h>


@interface MPCVocalAttenuationPerformancePolicy : NSObject <MPCVocalAttenuationPolicy>



@property (retain, nonatomic) NSObject<OS_dispatch_queue> *calloutQueue; // ivar: _calloutQueue
@property (readonly, nonatomic) BOOL canBeReset;
@property (nonatomic) int currentNumberOfGlitches; // ivar: _currentNumberOfGlitches
@property (readonly, nonatomic) os_unfair_lock_s dataLock; // ivar: _dataLock
@property (readonly, weak, nonatomic) NSObject<MPCVocalAttenuationPolicyDelegate> *delegate; // ivar: _delegate
@property (nonatomic, getter=shouldDisableVocalAttenuation) BOOL disableVocalAttenuation; // ivar: _disableVocalAttenuation
@property (nonatomic) int glitchesThreshold; // ivar: _glitchesThreshold
@property (nonatomic) CGFloat performanceLimit; // ivar: _performanceLimit
@property (nonatomic) CGFloat timeOfFirstGlitch; // ivar: _timeOfFirstGlitch
@property (nonatomic) CGFloat timeThreshold; // ivar: _timeThreshold
@property (readonly, nonatomic) NSInteger type; // ivar: _type


-(id)evaluation;
-(id)initWithPerformanceLimit:(CGFloat)arg0 calloutQueue:(id)arg1 delegate:(id)arg2 ;
-(void)processSample:(CGFloat)arg0 ;
-(void)reset;
-(void)updateEvaluationWithReason:(id)arg0 ;


@end


#endif