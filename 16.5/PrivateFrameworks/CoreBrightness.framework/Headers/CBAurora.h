// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CBAURORA_H
#define CBAURORA_H

@protocol OS_os_log, OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "CBDisplayModuleiOS.h"
#import "CBFrameStats.h"

@interface CBAurora : NSObject {
    NSObject<OS_os_log> *_log;
    *__Display _display;
    CBDisplayModuleiOS *_displayModule;
    NSObject<OS_dispatch_queue> *_queue;
    CBFrameStats *_frameStats;
    NSObject<OS_dispatch_source> *_apceTimer;
    BOOL _isMonitoring;
    float _lastFrameInfoReceivedTimestamp;
    float _lastRampTargetScaler;
    float _minimumReactionNitsDelta;
    float _luxActivationThreshold;
    float _luxExitThreshold;
    float _luxSaturationThreshold;
    float _nitsMinimum;
    float _nitsMaximum;
    float _minimumScaler;
    float _maximumScaler;
    float _apceSamplingRate;
    float _rampTimeSecondsPerStop;
    float _rampUpTapPointAPCEMinimum;
    float _rampUpTapPointAPCEMaximum;
    float _rampDownTapPointAPCEMinimum;
    float _rampDownTapPointAPCEMaximum;
    float _maximumEnergyConsumption;
    float _currentEnergyConsumption;
    BOOL _edrHeadroomRestorePending;
    ? _gracePeriod;
    ? _rtplc;
    ? _entryConditions;
    ? _cpms;
}


@property (nonatomic, setter=setAODIsOn:) BOOL aodIsOn; // ivar: _aodIsOn
@property (nonatomic) BOOL autoBrightnessIsEnabled; // ivar: _autoBrightnessIsEnabled
@property (nonatomic, setter=setCLTMCap:) float cltmCap; // ivar: _cltmCap
@property float currentEDRHeadroom; // ivar: _currentEDRHeadroom
@property (nonatomic) float currentEDRHeadroomRequest; // ivar: _currentEDRHeadroomRequest
@property float currentNits; // ivar: _currentNits
@property (readonly) float currentPreAuroraNits;
@property (nonatomic) float currentScaler; // ivar: _currentScaler
@property (nonatomic) BOOL displayIsOn; // ivar: _displayIsOn
@property (readonly) BOOL isActive;
@property (readonly) BOOL isBoostingBrightness;
@property (nonatomic) BOOL isEnabled; // ivar: _isEnabled
@property (nonatomic) BOOL lowPowerModeIsEnabled; // ivar: _lowPowerModeIsEnabled
@property (nonatomic) float lux; // ivar: _lux
@property BOOL rampInProgress; // ivar: _rampInProgress
@property (nonatomic, setter=setUPOCap:) float upoCap; // ivar: _upoCap


-(BOOL)energyConsumptionExceeded;
-(BOOL)entryConditionsSatisfied;
-(float)calculateCurrentLuxTargetScaler;
-(float)calculateCurrentRampDownTargetForAPCE:(float)arg0 ;
-(float)calculateCurrentRampUpTargetForAPCE:(float)arg0 ;
-(float)calculateEnergyConsumptionCap;
-(float)calculateLuxTargetScaler:(float)arg0 ;
-(float)calculateNumberOfStopsForCurrentScaler:(float)arg0 andRequestedScaler:(float)arg1 ;
-(float)calculateRampDownTargetForNits:(float)arg0 andAPCE:(float)arg1 ;
-(float)calculateRampTargetForNits:(float)arg0 andAPCE:(float)arg1 withTapPointAPCEMinimum:(float)arg2 andTapPointAPCEMaximum:(float)arg3 ;
-(float)calculateRampTargetScalerForNits:(float)arg0 ;
-(float)calculateRampTimeForCurrentScaler:(float)arg0 andRequestedScaler:(float)arg1 ;
-(float)calculateRampUpTargetForNits:(float)arg0 andAPCE:(float)arg1 ;
-(float)clampScaler:(float)arg0 ;
-(float)convertScalerToNits:(float)arg0 ;
-(id)initWithQueue:(id)arg0 andDisplay:(struct __Display *)arg1 andDisplayModule:(id)arg2 ;
-(void)dealloc;
-(void)enter;
-(void)evaluateEntryConditions;
-(void)exit;
-(void)initializeMembers;
-(void)processAPCESample;
-(void)rampTo:(float)arg0 ;
-(void)restoreEDRHeadroom;
-(void)sendEDRHeadroomRequest:(float)arg0 ;
-(void)setCPMSActivationThreshold:(float)arg0 ;
-(void)setPropertyForKey:(id)arg0 withValue:(id)arg1 ;
-(void)setRampTimeSecondsPerStop:(float)arg0 ;
-(void)startMonitoring;
-(void)stopMonitoring;


@end


#endif