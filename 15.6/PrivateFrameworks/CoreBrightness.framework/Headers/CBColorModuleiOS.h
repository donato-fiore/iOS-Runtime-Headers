// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CBCOLORMODULEIOS_H
#define CBCOLORMODULEIOS_H

@class NSMutableArray, NSMutableDictionary, NSString;
@protocol CBContainerProtocol, CBHIDServiceProtocol, NightShiftSupportProtocol, CBStatusInfoProtocol, OS_dispatch_source, CBBrightnessProxy;


#import "CBContainer.h"
#import "CBColorFilter.h"
#import "CBCEModule.h"

@interface CBColorModuleiOS : CBContainer <CBContainerProtocol, CBHIDServiceProtocol, NightShiftSupportProtocol, CBStatusInfoProtocol>

 {
    NSMutableArray *_relevantServices;
    NSObject<OS_dispatch_source> *_rampTimer;
    NSMutableDictionary *_properties;
    ? _colorStruct;
    BOOL _fadeInProgress;
    BOOL _endRamp;
    ? _reportContext;
    BOOL _displayOn;
    unsigned int _backlightService;
    NSMutableArray *_alsServices;
    NSMutableDictionary *_alsNodes;
    NSMutableArray *_filters;
    NSMutableDictionary *_pendingALSSamples;
    int _NSamples;
    NSObject<OS_dispatch_source> *_timeoutTimer;
    BOOL _firstALSEventArrived;
    float _firstSampleTimeoutValue;
    BOOL _allALSEventsArrived;
    BOOL _forceColorUpdate;
    BOOL _potentiallyBustedALS;
    BOOL _continueWithFewerALSs;
    BOOL _sensorOverridden;
    ? _overrideColorSample;
    float _preStrobeDimPeriod;
    BOOL _dropALSColorSamples;
    CBColorFilter *_colorFilter;
    CBCEModule *_ceModule;
    unsigned int _ceModelID;
    int _registeredColorALSCount;
    BOOL _aggregatedConfigApplied;
    NSInteger _analyticsPeriodicSender;
    BOOL _colorEffectsEnabled;
    BOOL _ammoliteEnabledStatus;
    id<CBBrightnessProxy> *_brightnessControl;
    BOOL _enableMitigations;
    NSMutableArray *_modules;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger moduleType; // ivar: _moduleType
@property (readonly) Class superclass;


-(BOOL)BLRCCTRangePropertyHandler:(id)arg0 ;
-(BOOL)BLRCCTTargetPropertyHandler:(id)arg0 ;
-(BOOL)BLRFactorPropertyHandler:(id)arg0 ;
-(BOOL)CAAABSensorOverridePropertyHandler:(id)arg0 ;
-(BOOL)CAEnabledPropertyHandler:(id)arg0 ;
-(BOOL)CAFadesEnabledHandler:(id)arg0 ;
-(BOOL)CAFixedStrengthPropertyHandler:(id)arg0 ;
-(BOOL)CALabShiftPropertyHandler:(id)arg0 ;
-(BOOL)CAModeMappingHandler:(id)arg0 ;
-(BOOL)CAStrengthPropertyHandler:(id)arg0 ;
-(BOOL)CAStrengthRampPeriodTweakPropertyHandler:(id)arg0 ;
-(BOOL)CAWeakestColorAdaptationModeAnimatedPropertyHandler:(id)arg0 ;
-(BOOL)CAWeakestColorAdaptationModePropertyHandler:(id)arg0 ;
-(BOOL)CEEnablePropertyHandler:(id)arg0 key:(id)arg1 ;
-(BOOL)CEOverridePropertyHandler:(id)arg0 key:(id)arg1 ;
-(BOOL)CoreBrightnessFeaturesDisabledPropertyHandler:(id)arg0 ;
-(BOOL)addHIDServiceClient:(struct __IOHIDServiceClient *)arg0 ;
-(BOOL)ammolitePropertyHandler:(id)arg0 key:(id)arg1 ;
-(BOOL)applyAggregatedConfigPropertyHandler:(id)arg0 ;
-(BOOL)applyPendingSamples;
-(BOOL)carryLogCommentHandler:(id)arg0 ;
-(BOOL)carryLogCommitHandler:(id)arg0 ;
-(BOOL)carryLogEnabledHandler:(id)arg0 ;
-(BOOL)colorFilterModeHandler:(id)arg0 ;
-(BOOL)colorRampPeriodOverrideHandler:(id)arg0 ;
-(BOOL)convertNSData:(id)arg0 toUint32:(*unsigned int)arg1 ;
-(BOOL)displayBrightnessFactorPropertyHandler:(id)arg0 ;
-(BOOL)handleHIDEvent:(struct __IOHIDEvent *)arg0 from:(struct __IOHIDServiceClient *)arg1 ;
-(BOOL)parseAdaptationModeMappingArray:(id)arg0 strengths:(*float)arg1 strengthNum:(int)arg2 ;
-(BOOL)parseAdaptationModeMappingDictionary:(id)arg0 strengths:(*float)arg1 strengthNum:(int)arg2 ;
-(BOOL)preStrobeDimPeriodPropertyHandler:(id)arg0 ;
-(BOOL)preStrobePropertyHandler:(id)arg0 ;
-(BOOL)removeHIDServiceClient:(struct __IOHIDServiceClient *)arg0 ;
-(BOOL)serializedAggregatedConfigPropertyHandler:(id)arg0 ;
-(BOOL)setProperty:(id)arg0 forKey:(id)arg1 ;
-(BOOL)setPropertyInternal:(id)arg0 forKey:(id)arg1 ;
-(BOOL)start;
-(BOOL)startNewTimerWithFreq:(float)arg0 ;
-(BOOL)ttRestrictionHandler:(id)arg0 ;
-(BOOL)ttRestrictionReload;
-(id)copyIdentifiers;
-(id)copyLocalAggregatedConfig;
-(id)copyPreferenceForKey:(id)arg0 user:(id)arg1 ;
-(id)copyPreferencesForKey:(id)arg0 ;
-(id)copyPropertyForKey:(id)arg0 ;
-(id)copyPropertyInternalForKey:(id)arg0 ;
-(id)getRegistryIDForHIDServiceClient:(struct __IOHIDServiceClient *)arg0 ;
-(id)init;
-(id)initWithBacklight:(unsigned int)arg0 andModuleType:(NSUInteger)arg1 ;
-(id)initWithBacklight:(unsigned int)arg0 andModuleType:(NSUInteger)arg1 andBrightnessControl:(id)arg2 ;
-(id)newAdaptationModeMappingArray:(*float)arg0 strengthNum:(int)arg1 ;
-(id)newAdaptationModeMappingDictionary:(*float)arg0 strengthNum:(int)arg1 ;
-(id)newAggregatedConfigFromSerializedConfig:(id)arg0 ;
-(id)newArrayFromDoubles:(*CGFloat)arg0 size:(int)arg1 ;
-(id)newArrayFromIntegers:(*int)arg0 size:(int)arg1 ;
-(int)getPid:(struct __IOHIDServiceClient *)arg0 ;
-(int)getVid:(struct __IOHIDServiceClient *)arg0 ;
-(void)BLRFactorUpdate:(float)arg0 ;
-(void)BLRFactorUpdate:(float)arg0 withPeriod:(float)arg1 shouldForceUpdate:(BOOL)arg2 ;
-(void)CAStrengthUpdate:(float)arg0 withPeriod:(float)arg1 ;
-(void)activateColorAdaptation;
-(void)applyAggregatedConfig:(BOOL)arg0 ;
-(void)armFirstALSSampleTimer;
-(void)cancelFirstSampleTimeout;
-(void)colorRampRoutine:(struct ? *)arg0 ;
-(void)commitPowerLogReport:(struct ColorReport *)arg0 ;
-(void)dealloc;
-(void)debugPrintColorSampleAsRGB:(id)arg0 ;
-(void)displayBrightnessFactorUpdate:(float)arg0 ;
-(void)enableMitigations:(BOOL)arg0 ;
-(void)filterInitialize;
-(void)firstALSSampleTimeout;
-(void)handleALSEvent:(id)arg0 ;
-(void)handleDisplayBrightnessFactorZero:(id)arg0 ;
-(void)handleFilterNotificationForKey:(id)arg0 withProperty:(id)arg1 ;
-(void)handleHIDEventInternal:(struct __IOHIDEvent *)arg0 from:(struct __IOHIDServiceClient *)arg1 ;
-(void)handleNotificationForKey:(id)arg0 withProperty:(id)arg1 ;
-(void)initColorStruct;
-(void)inputAmbientColorSample:(struct ? *)arg0 force:(BOOL)arg1 trust:(BOOL)arg2 ;
-(void)loadBacklightProperties;
-(void)processColorSample:(id)arg0 forceUpdate:(BOOL)arg1 ;
-(void)reportCommitWithStop:(BOOL)arg0 ;
-(void)reportInitialize;
-(void)reportResetTimerWithStop:(BOOL)arg0 ;
-(void)reportToCoreAnlytics:(struct ColorReport *)arg0 ;
-(void)sendNotificationForKey:(id)arg0 andValue:(id)arg1 ;
-(void)setNightShiftFactorDictionary:(id)arg0 ;
-(void)setPreference:(id)arg0 forKey:(id)arg1 user:(id)arg2 ;
-(void)setPreferences:(id)arg0 forKey:(id)arg1 ;
-(void)stop;
-(void)timerRoutine:(id)arg0 ;
-(void)updateActivity;
-(void)updateAvailability;


@end


#endif