// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CBAODSTATE_H
#define CBAODSTATE_H

@class NSUserDefaults, SWSystemActivityAssertion, NSMutableArray;
@protocol OS_os_log;

#import <Foundation/Foundation.h>


@interface CBAODState : NSObject {
    NSUserDefaults *_defaults;
    NSObject<OS_os_log> *_logHandle;
    SWSystemActivityAssertion *_systemActivityAssertion;
}


@property NSUInteger AODState; // ivar: _AODState
@property NSUInteger AODStateExternal; // ivar: _AODStateExternal
@property NSUInteger AODTransitionProfile; // ivar: _AODTransitionProfile
@property float AODTransitionProfileEaseInOut_K; // ivar: _AODTransitionProfileEaseInOut_K
@property float AODTransitionProfileSpring_damping; // ivar: _AODTransitionProfileSpring_damping
@property float AODTransitionProfileSpring_mass; // ivar: _AODTransitionProfileSpring_mass
@property float AODTransitionProfileSpring_stiffness; // ivar: _AODTransitionProfileSpring_stiffness
@property float AODTransitionProfileSpring_velocity; // ivar: _AODTransitionProfileSpring_velocity
@property float AODTransitionTargetAlgoOptimised_dimmingThreshold; // ivar: _AODTransitionTargetAlgoOptimised_dimmingThreshold
@property (readonly) ? curve; // ivar: _curve
@property (readonly) ? darkerCurve; // ivar: _darkerCurve
@property (nonatomic) BOOL enableAODLiveON; // ivar: _enableAODLiveON
@property (readonly) float maxAODNits;
@property (readonly) float minAODNits;
@property float nitsCap; // ivar: _nitsCap
@property float pullALSUpdatePeriod; // ivar: _pullALSUpdatePeriod
@property (readonly) NSMutableArray *thresholdsAPDeltaPBrightenBuckets; // ivar: _thresholdsAPDeltaPBrightenBuckets
@property (readonly) NSMutableArray *thresholdsAPDeltaPDimBuckets; // ivar: _thresholdsAPDeltaPDimBuckets
@property (readonly) NSMutableArray *thresholdsAPLuxBuckets; // ivar: _thresholdsAPLuxBuckets
@property (readonly) NSMutableArray *thresholdsDeltaPBrightenBuckets; // ivar: _thresholdsDeltaPBrightenBuckets
@property (readonly) NSMutableArray *thresholdsDeltaPDimBuckets; // ivar: _thresholdsDeltaPDimBuckets
@property (readonly) NSMutableArray *thresholdsLuxBuckets; // ivar: _thresholdsLuxBuckets
@property float whitepointDeltaThreshold; // ivar: _whitepointDeltaThreshold
@property float whitepointTransitionLength; // ivar: _whitepointTransitionLength
@property float whitepointTransitionLengthLowLux; // ivar: _whitepointTransitionLengthLowLux
@property float whitepointTransitionLengthLuxThreshold; // ivar: _whitepointTransitionLengthLuxThreshold


+(id)sharedInstance;
-(BOOL)handleAODCurveUpdate:(id)arg0 ;
-(BOOL)handleAODDarkerCurveUpdate:(id)arg0 ;
-(BOOL)isAODActive;
-(BOOL)setProperty:(id)arg0 forKey:(id)arg1 ;
-(id)copyNumberFromPrefsForKey:(id)arg0 ;
-(id)init;
-(void)acquirePowerAssertion;
-(void)checkBootArgsConfiguration;
-(void)checkDefaultsConfiguration;
-(void)dealloc;
-(void)logAODCurve:(struct ? )arg0 name:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)releasePowerAssertion;


@end


#endif