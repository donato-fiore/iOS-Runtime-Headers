// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLBATTERYAGENT_H
#define PLBATTERYAGENT_H

@class PLAgent, PLTimer, PLXPCListenerOperatorComposition, PLXPCResponderOperatorComposition, PLEntryNotificationOperatorComposition, PLSemaphore, PLIOKitOperatorComposition, PLCFNotificationOperatorComposition, NSDate, NSString, NSNumber, PLEntry, NSDictionary, PLMonotonicTimer, PLNSNotificationOperatorComposition, NSMutableArray;
@protocol ACCConnectionInfoDelegateProtocol;



@interface PLBatteryAgent : PLAgent <ACCConnectionInfoDelegateProtocol>



@property *__IOHIDManager BTMmanager; // ivar: _BTMmanager
@property CGFloat EABatteryLevel; // ivar: _EABatteryLevel
@property (retain) PLTimer *EABatteryTimer; // ivar: _EABatteryTimer
@property CGFloat EAEnergyDrained; // ivar: _EAEnergyDrained
@property (retain) PLXPCListenerOperatorComposition *UPOStepperListener; // ivar: _UPOStepperListener
@property BOOL allowGasGaugeRead; // ivar: _allowGasGaugeRead
@property (retain) PLXPCResponderOperatorComposition *batteryConfigResponder; // ivar: _batteryConfigResponder
@property (retain) PLXPCResponderOperatorComposition *batteryDischargeCurrentResponder; // ivar: _batteryDischargeCurrentResponder
@property (retain) PLXPCResponderOperatorComposition *batteryInfoResponder; // ivar: _batteryInfoResponder
@property (retain) PLEntryNotificationOperatorComposition *batteryLevelChanged; // ivar: _batteryLevelChanged
@property CGFloat batteryLevelPercent; // ivar: _batteryLevelPercent
@property (retain) PLXPCResponderOperatorComposition *batteryShutdownDataResponder; // ivar: _batteryShutdownDataResponder
@property (retain) PLXPCResponderOperatorComposition *batteryTemperatureResponder; // ivar: _batteryTemperatureResponder
@property (retain) PLXPCResponderOperatorComposition *batteryUPOStepperResponder; // ivar: _batteryUPOStepperResponder
@property (retain) PLXPCListenerOperatorComposition *bdcAMAListener; // ivar: _bdcAMAListener
@property (readonly) PLEntryNotificationOperatorComposition *canSleepEntryNotifications; // ivar: _canSleepEntryNotifications
@property (retain) PLSemaphore *canSleepSemaphore; // ivar: _canSleepSemaphore
@property (retain) PLIOKitOperatorComposition *chargerIOService; // ivar: _chargerIOService
@property (retain) PLCFNotificationOperatorComposition *cpmsDebugNotification; // ivar: _cpmsDebugNotification
@property NSInteger csmFailureCount; // ivar: _csmFailureCount
@property CGFloat csmFlushInterval; // ivar: _csmFlushInterval
@property (retain) PLCFNotificationOperatorComposition *csmFlushNotification; // ivar: _csmFlushNotification
@property (retain) NSDate *csmLastFlushMonotonicDate; // ivar: _csmLastFlushMonotonicDate
@property (retain) PLCFNotificationOperatorComposition *csmOverrideNotification; // ivar: _csmOverrideNotification
@property BOOL csmOverrideValue; // ivar: _csmOverrideValue
@property NSInteger csmTotalCount; // ivar: _csmTotalCount
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSNumber *deviceIsPluggedIn; // ivar: _deviceIsPluggedIn
@property (retain) PLTimer *eaBatteryConnectCountTimer; // ivar: _eaBatteryConnectCountTimer
@property (retain) PLEntry *entryChargingOld; // ivar: _entryChargingOld
@property (readonly) NSString *entryKeyEABattery; // ivar: _entryKeyEABattery
@property (readonly) NSString *entryKeyEAPencilStats; // ivar: _entryKeyEAPencilStats
@property *ggcontext gasGagueConnection; // ivar: _gasGagueConnection
@property int gasGaugeConsecutiveEmptyEntriesCount; // ivar: _gasGaugeConsecutiveEmptyEntriesCount
@property (retain) PLTimer *gasGaugeTimer; // ivar: _gasGaugeTimer
@property (readonly) NSUInteger hash;
@property BOOL inPenaltyBox; // ivar: _inPenaltyBox
@property (readonly) PLIOKitOperatorComposition *ioAccessoryManager; // ivar: _ioAccessoryManager
@property (readonly) PLIOKitOperatorComposition *iokitPPM; // ivar: _iokitPPM
@property (readonly) PLIOKitOperatorComposition *iokitPowerSource; // ivar: _iokitPowerSource
@property BOOL isFirstTimeCheckingPingPong; // ivar: _isFirstTimeCheckingPingPong
@property BOOL isPingPongCharging; // ivar: _isPingPongCharging
@property (retain) PLEntry *lastBatteryConfigEntry; // ivar: _lastBatteryConfigEntry
@property (retain) PLEntry *lastChargerEntry; // ivar: _lastChargerEntry
@property (retain) NSNumber *lastDOD0; // ivar: _lastDOD0
@property (retain) NSDate *lastEABatteryConnectedTime; // ivar: _lastEABatteryConnectedTime
@property (retain) NSDate *lastGasGaugeLogTime; // ivar: _lastGasGaugeLogTime
@property (retain) NSDictionary *lastITMiscStatus; // ivar: _lastITMiscStatus
@property (retain) NSDate *lastTimeChargingInfoUpdated; // ivar: _lastTimeChargingInfoUpdated
@property (retain) NSDate *lastTimeInPenaltyBox; // ivar: _lastTimeInPenaltyBox
@property (retain) NSDate *lastTimePenaltyBoxIntervalUpdated; // ivar: _lastTimePenaltyBoxIntervalUpdated
@property int lastUILevel; // ivar: _lastUILevel
@property (retain) NSNumber *lastkIOPSAppleBatteryCaseCumulativeCurrentKey; // ivar: _lastkIOPSAppleBatteryCaseCumulativeCurrentKey
@property BOOL lifetimeDataLogged; // ivar: _lifetimeDataLogged
@property int lifetimeMaxRa; // ivar: _lifetimeMaxRa
@property (retain) PLIOKitOperatorComposition *magsafeIOService; // ivar: _magsafeIOService
@property (retain) NSNumber *mitigatedUPOCount; // ivar: _mitigatedUPOCount
@property (retain) PLXPCListenerOperatorComposition *mobileChargeModeListener; // ivar: _mobileChargeModeListener
@property (retain) PLTimer *periodicAggdTimer; // ivar: _periodicAggdTimer
@property NSInteger ppmEventLoggingCount; // ivar: _ppmEventLoggingCount
@property (retain) PLTimer *ppmEventThresholdTimer; // ivar: _ppmEventThresholdTimer
@property int presentBatteryHealthMetric; // ivar: _presentBatteryHealthMetric
@property int presentChemicalWeightedRa; // ivar: _presentChemicalWeightedRa
@property int presentMaxRa; // ivar: _presentMaxRa
@property int presentOCV; // ivar: _presentOCV
@property int presentOCVCount; // ivar: _presentOCVCount
@property int presentPeakPerformanceCapacity; // ivar: _presentPeakPerformanceCapacity
@property int presentQmaxUpdateDisqualified; // ivar: _presentQmaxUpdateDisqualified
@property int presentRaUpdateDisqualified; // ivar: _presentRaUpdateDisqualified
@property int presentTimeSinceLastOCV; // ivar: _presentTimeSinceLastOCV
@property int presentWeightedRa; // ivar: _presentWeightedRa
@property (retain) NSNumber *prevBatteryCellDisconnectCount; // ivar: _prevBatteryCellDisconnectCount
@property int prevChargingState; // ivar: _prevChargingState
@property int prevConnectedState; // ivar: _prevConnectedState
@property (retain) NSNumber *prevGGResetCount; // ivar: _prevGGResetCount
@property int previousCurrentAccumulator; // ivar: _previousCurrentAccumulator
@property int previousCurrentAccumulatorCount; // ivar: _previousCurrentAccumulatorCount
@property (retain) NSDate *previousCurrentAccumulatorDate; // ivar: _previousCurrentAccumulatorDate
@property int priIOAccessoryPowerMode; // ivar: _priIOAccessoryPowerMode
@property CGFloat rawBatteryVoltageVolt; // ivar: _rawBatteryVoltageVolt
@property BOOL rejudgeBattery; // ivar: _rejudgeBattery
@property BOOL shouldLogEABatteryConfig; // ivar: _shouldLogEABatteryConfig
@property BOOL shouldQueryForAccessory; // ivar: _shouldQueryForAccessory
@property (retain) PLMonotonicTimer *significantBatteryChangeTimer; // ivar: _significantBatteryChangeTimer
@property (retain) PLXPCListenerOperatorComposition *smartChargingListener; // ivar: _smartChargingListener
@property (readonly) Class superclass;
@property (retain) PLNSNotificationOperatorComposition *thermalMonitorListener; // ivar: _thermalMonitorListener
@property (retain) NSMutableArray *trackedAccessories; // ivar: _trackedAccessories
@property (readonly) PLEntryNotificationOperatorComposition *wakeEntryNotifications; // ivar: _wakeEntryNotifications
@property (retain) PLTimer *xFlagsRetryTimer; // ivar: _xFlagsRetryTimer


+(BOOL)hasChargingInfoLogging;
+(BOOL)hasExternalAccessory;
+(BOOL)hasLightning;
+(BOOL)hasWirelessCharger;
+(BOOL)shouldLogBTM;
+(BOOL)shouldLogCPMS;
+(BOOL)shouldLogPPMDebugDetail;
+(BOOL)supportsAccConnectionLogging;
+(BOOL)supportsSmartCharging;
+(BOOL)supportsxFlags;
+(id)connectStateStringToEnum:(id)arg0 ;
+(id)defaults;
+(id)entryAggregateDefinitionUILevel;
+(id)entryAggregateDefinitions;
+(id)entryEventBackwardDefinitionAdapter;
+(id)entryEventBackwardDefinitionBTM;
+(id)entryEventBackwardDefinitionBattery;
+(id)entryEventBackwardDefinitionBatteryUI;
+(id)entryEventBackwardDefinitionChargingHeatMapA;
+(id)entryEventBackwardDefinitionChargingHeatMapB;
+(id)entryEventBackwardDefinitionCurrentAccumulator;
+(id)entryEventBackwardDefinitionDischargingHeatMap;
+(id)entryEventBackwardDefinitionEABattery;
+(id)entryEventBackwardDefinitionKioskMode;
+(id)entryEventBackwardDefinitions;
+(id)entryEventForwardDefinitionCalibration0;
+(id)entryEventForwardDefinitionEAPencil;
+(id)entryEventForwardDefinitionEAPencilCharging;
+(id)entryEventForwardDefinitionExternalCharger;
+(id)entryEventForwardDefinitionIOPMUBootLPMLog;
+(id)entryEventForwardDefinitionLightningConnectorStatus;
+(id)entryEventForwardDefinitionMitigationState;
+(id)entryEventForwardDefinitionMobileChargeMode;
+(id)entryEventForwardDefinitionSmartCharging;
+(id)entryEventForwardDefinitionUPOStepper;
+(id)entryEventForwardDefinitionUSBCCharging;
+(id)entryEventForwardDefinitions;
+(id)entryEventIntervalDefinitionGasGauge;
+(id)entryEventIntervalDefinitions;
+(id)entryEventNoneDefinitionBatteryConfig;
+(id)entryEventNoneDefinitionUserType;
+(id)entryEventNoneDefinitions;
+(id)entryEventPointDefinitionBatterySample;
+(id)entryEventPointDefinitionBatteryShutdown;
+(id)entryEventPointDefinitionBatteryUILogging;
+(id)entryEventPointDefinitionCPMSClientState;
+(id)entryEventPointDefinitionCPMSControlState;
+(id)entryEventPointDefinitionChargingInfo;
+(id)entryEventPointDefinitionEABatteryConfig;
+(id)entryEventPointDefinitionEAPencil;
+(id)entryEventPointDefinitionGasGaugeReconnect;
+(id)entryEventPointDefinitionPPMClientMetrics;
+(id)entryEventPointDefinitionPPMDebug;
+(id)entryEventPointDefinitionUPOStepper;
+(id)entryEventPointDefinitions;
+(void)load;
-(BOOL)batterySerialChanged:(id)arg0 ;
-(BOOL)checkForPenaltyBox:(id)arg0 ;
-(BOOL)driverActive:(id)arg0 ;
-(BOOL)gasGaugeOpenAndStartLogging;
-(BOOL)gasGaugeStopLoggingAndClose;
-(BOOL)givePluggedInFreePass;
-(BOOL)hasAppleSmartBattery;
-(BOOL)isEABatteryConnectedNow;
-(BOOL)isEAPencilConnectedNow;
-(BOOL)isUPOEntry:(id)arg0 ;
-(BOOL)modifiedExternalChargerEntry:(id)arg0 ;
-(BOOL)shouldLogCPMSSnapshotWithReason:(unsigned char)arg0 withTrigger:(NSInteger)arg1 ;
-(BOOL)shouldWaitForLifetimeDataWithRawData:(id)arg0 ;
-(NSInteger)xFlags;
-(id)batteryEEEECode:(id)arg0 ;
-(id)createTimerForEABatteryCountLogging;
-(id)dataFromHexString:(id)arg0 ;
-(id)getBaseIdentifierFromDevice:(id)arg0 ;
-(id)getBatteryCalibration0Data;
-(id)getBatteryShutdownData;
-(id)getIOPSDevices;
-(id)getMitigatedUPOCountDefault;
-(id)getPPMDebugData;
-(id)getUPOStepperData;
-(id)init;
-(id)isOriginalBattery;
-(id)logEventBackwardBatteryWithRawData:(id)arg0 ;
-(id)lowBatteryLogPath;
-(id)lowBatteryLogString;
-(id)overrideBatteryData:(id)arg0 withPath:(id)arg1 ;
-(id)parseBatterySerialNumber:(id)arg0 ;
-(id)parseITMiscStatusCounters:(id)arg0 ;
-(id)parseLowVoltageResidencyCounters:(id)arg0 ;
-(id)parseRawRaTableData:(id)arg0 ;
-(id)parseRawSafetyFaultCounter:(id)arg0 ;
-(id)parseTimeAtHighSoc:(id)arg0 ;
-(id)parseTimeAtHighSocHex:(id)arg0 ;
-(id)presentMaxRaFromRawData:(id)arg0 ;
-(id)weekOfManufacture:(id)arg0 ;
-(int)batteryLifetimeUPOCount;
-(int)calculateChargingState:(id)arg0 ;
-(int)calculateConnectedState:(id)arg0 ;
-(int)deviceType;
-(int)getBatteryHealthServiceFlags;
-(int)getBatteryHealthServiceState;
-(int)getBatteryMaximumCapacityPercent;
-(int)getMitigationDefaults;
-(void)accessoryConnected:(id)arg0 ;
-(void)accessoryConnectionEventNotification:(id)arg0 ;
-(void)accessoryDisconnectEventNotification:(id)arg0 ;
-(void)accessoryDisconnected:(id)arg0 ;
-(void)accountGaugePowerFromCurrentAccumulatorEntry:(id)arg0 ;
-(void)addPowerMeasurementToAccounting:(CGFloat)arg0 withStartDate:(id)arg1 withEndDate:(id)arg2 ;
-(void)aggdTimerFired;
-(void)cancelEALogging;
-(void)checkChargingInfoChange:(id)arg0 ;
-(void)dealloc;
-(void)detectEAPencilConnectionWithNotification:(id)arg0 ;
-(void)fakeLogEntry:(id)arg0 ;
-(void)flushCSMToAggdAtDate:(id)arg0 ;
-(void)gasGaugeRead;
-(void)handleBDCAMALogging:(id)arg0 ;
-(void)handleMitigationStateCallback:(int)arg0 ;
-(void)handlePPMCallback;
-(void)handleSBC;
-(void)initOperatorDependancies;
-(void)initSmartChargingLogging;
-(void)log;
-(void)logAdapterInfo:(id)arg0 ;
-(void)logBTM;
-(void)logBaselineToAggD:(id)arg0 ;
-(void)logBaselineToCA:(id)arg0 ;
-(void)logBatteryConfigToAggd:(id)arg0 ;
-(void)logBatteryConfigToCA:(id)arg0 ;
-(void)logBatteryShutdownToCA:(id)arg0 ;
-(void)logCPMSSnapshotWithTrigger:(NSInteger)arg0 ;
-(void)logChargingParametersToAggd:(id)arg0 ;
-(void)logChargingTimeToAggd:(CGFloat)arg0 ;
-(void)logCurrentAccumulatorWithRawData:(id)arg0 ;
-(void)logEABatteryConfig:(id)arg0 ;
-(void)logEABatteryConfigToCA:(id)arg0 ;
-(void)logEABatteryConnectedEventToAnalyticsIgnoreLastLogTimestamp:(BOOL)arg0 ;
-(void)logEABatteryConnectedTimeToAnalyticsWithEAConnectionState:(BOOL)arg0 ;
-(void)logEABatteryStatistics;
-(void)logEventBackwardBattery;
-(void)logEventBackwardHeatMap;
-(void)logEventBackwardHeatMapCallback:(id)arg0 andHeatMapType:(NSInteger)arg1 ;
-(void)logEventBackwardKioskMode;
-(void)logEventBackwardKioskModeCallback:(id)arg0 ;
-(void)logEventForwardCalibration0withData:(id)arg0 ;
-(void)logEventForwardLPEM;
-(void)logEventForwardMitigationStateWithState:(NSUInteger)arg0 userDisabled:(BOOL)arg1 ;
-(void)logEventForwardMobileChargeMode:(id)arg0 ;
-(void)logEventForwardSmartChargingWithPayload:(id)arg0 ;
-(void)logEventForwardUPOStepperWithPayload:(id)arg0 ;
-(void)logEventIntervalGasGauge;
-(void)logEventNoneBatteryConfigCycleCountData;
-(void)logEventNoneBatteryConfigWithRawData:(id)arg0 ;
-(void)logEventNoneUserType;
-(void)logEventPointBatteryShutdown;
-(void)logEventPointChargingInfoWithChargingData:(id)arg0 ;
-(void)logEventPointUPOStepper;
-(void)logFedDetails:(id)arg0 ;
-(void)logKioskModeEntryToAggd:(id)arg0 ;
-(void)logKioskModeEntryToCA:(id)arg0 ;
-(void)logPPMDebug;
-(void)logPenaltyBoxDurationToAggd:(CGFloat)arg0 ;
-(void)logWatchdogDebugDumpToCA:(id)arg0 ;
-(void)populateClientEntry:(id)arg0 withBudget:(id)arg1 withTemplate:(id)arg2 ;
-(void)pushFCCDataToCoreAnalytics;
-(void)pushLowVoltageResidencyCountersToCA:(id)arg0 ;
-(void)pushTimeAtHighSocToAggD:(id)arg0 ;
-(void)pushTimeAtHighSocToCA:(id)arg0 ;
-(void)refreshEABatteryStatusTriggeredByConnectionEvent:(BOOL)arg0 ;
-(void)sampleBatteryEntryWithRawData:(id)arg0 andProperties:(id)arg1 ;
-(void)setAggdIntegerValueFromEntry:(id)arg0 forKey:(id)arg1 withPrefix:(id)arg2 ;
-(void)setMitigationStateDefault:(NSUInteger)arg0 ;
-(void)setupBatterySubsampling;
-(void)setupCSMLogging;
-(void)setupEALoggingTriggeredByConnectionEvent:(BOOL)arg0 ;
-(void)updateCurrentSenseMonitorStatusWithEntry:(id)arg0 ;
-(void)updateLastChargeLevel:(int)arg0 withTimestamp:(CGFloat)arg1 ;


@end


#endif