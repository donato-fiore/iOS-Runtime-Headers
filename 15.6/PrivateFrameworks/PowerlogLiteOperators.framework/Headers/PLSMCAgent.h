// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLSMCAGENT_H
#define PLSMCAGENT_H

@class PLAgent, PLEntryNotificationOperatorComposition, PLTimer, NSMutableDictionary, NSDictionary, NSDate, PLEntry, PLStateTrackingComposition;



@interface PLSMCAgent : PLAgent

@property (retain) PLEntryNotificationOperatorComposition *focalAppSwitch; // ivar: _focalAppSwitch
@property (retain) PLTimer *focalSwitchFilterTimer; // ivar: _focalSwitchFilterTimer
@property (retain) NSMutableDictionary *lastAccumCycleCountDict; // ivar: _lastAccumCycleCountDict
@property (retain) NSMutableDictionary *lastAccumValueDict; // ivar: _lastAccumValueDict
@property (retain) NSDictionary *lastAccumlatedKeysSample; // ivar: _lastAccumlatedKeysSample
@property (retain) NSDictionary *lastAccumlatedKeysSampleCA; // ivar: _lastAccumlatedKeysSampleCA
@property (retain) NSDate *lastFocalSampleDate; // ivar: _lastFocalSampleDate
@property (retain) NSDictionary *lastPowerAccumlatedSample; // ivar: _lastPowerAccumlatedSample
@property (retain) NSDictionary *lastPowerAccumlatedSampleCA; // ivar: _lastPowerAccumlatedSampleCA
@property (retain) PLEntry *lastThermalInstantEntry; // ivar: _lastThermalInstantEntry
@property (retain) PLEntryNotificationOperatorComposition *sbc; // ivar: _sbc
@property *? smcConnection; // ivar: _smcConnection
@property (retain) PLStateTrackingComposition *stateTracker; // ivar: _stateTracker
@property (retain) PLTimer *thermalAggregationTimer; // ivar: _thermalAggregationTimer
@property (retain) PLTimer *thermalLoggingTimer; // ivar: _thermalLoggingTimer
@property (retain) PLTimer *thermalMonitorTimer; // ivar: _thermalMonitorTimer


+(BOOL)supportsThermalSMC;
+(id)channelValueDiffKey:(id)arg0 ;
+(id)channelValueKey:(id)arg0 ;
+(id)cycleCountKey:(id)arg0 ;
+(id)entryAggregateDefinitions;
+(id)entryEventBackwardDefinitionAccumulatedKeys;
+(id)entryEventBackwardDefinitionPowerAccumulatedKeys;
+(id)entryEventBackwardDefinitions;
+(id)entryEventForwardDefinitions;
+(id)entryEventIntervalDefinitions;
+(id)entryEventNoneDefinitions;
+(id)entryEventPointDefinitionThermalInstantKeys;
+(id)entryEventPointDefinitionThermalKeys;
+(id)entryEventPointDefinitions;
+(id)variantKey:(id)arg0 ;
+(void)load;
-(BOOL)SMCKeyExists:(id)arg0 ;
-(BOOL)accumSupported;
-(BOOL)anyVirtualTemperatureAboveThreshold;
-(BOOL)readKeyViaOSAccum:(id)arg0 toOutput:(struct ? *)arg1 ;
-(BOOL)sampleKey:(struct ? *)arg0 forKey:(unsigned int)arg1 ;
-(CGFloat)round:(CGFloat)arg0 toSignificantFigures:(int)arg1 ;
-(id)accumulatedKeys;
-(id)getAccumEntryFromSample:(id)arg0 lastSample:(id)arg1 withEntryKey:(id)arg2 withDate:(id)arg3 ;
-(id)init;
-(id)powerAccumulatedKeys;
-(id)readKey:(id)arg0 ;
-(id)resetAccumulatedKeys:(id)arg0 ;
-(id)sampleAccumulatedKeys:(id)arg0 ;
-(id)thermalAggregationKeys;
-(id)thermalInstantKeys;
-(id)thermalKeys;
-(id)virtualTemperatureKeys;
-(struct SMCAccumChannelInfo *)getChannelInfo:(unsigned int)arg0 ;
-(void)dealloc;
-(void)handleStateChangeForSMCStats;
-(void)initOperatorDependancies;
-(void)log;
-(void)logAccumKeysToCA:(id)arg0 withLastSample:(id)arg1 andDate:(id)arg2 ;
-(void)logAccumulatedKeysToPowerlog:(BOOL)arg0 ToCoreAnalytics:(BOOL)arg1 withDate:(id)arg2 isWake:(BOOL)arg3 ;
-(void)logEventPointThermalKeys;
-(void)logThermalAggregationKeysToCA;
-(void)logThermalInstantAndAccumlatedKeys;
-(void)virtualTemperatureMonitorCallback;


@end


#endif