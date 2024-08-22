// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLDISPLAYAGENT_H
#define PLDISPLAYAGENT_H

@class PLAgent, PLTimer, PLEntryNotificationOperatorComposition, NSMutableArray, PLEntry, BrightnessSystemClient, CBAdaptationClient, NSString, NSDictionary, PLIOKitOperatorComposition, KeyboardBrightnessClient, PLMonotonicTimer, PLXPCListenerOperatorComposition, NSDate, NSMutableDictionary, PLNSNotificationOperatorComposition;
@protocol BLSBacklightStateObserving;


#import "PLDisplayIOReportAODStats.h"
#import "PLDisplayIOReportStats.h"
#import "PLEventForwardDisplayEntry.h"

@interface PLDisplayAgent : PLAgent <BLSBacklightStateObserving>



@property NSInteger AZLSnapshotsEntries; // ivar: _AZLSnapshotsEntries
@property (retain) PLTimer *AZLSnapshotsTimer; // ivar: _AZLSnapshotsTimer
@property (retain) PLEntryNotificationOperatorComposition *ApplicationNotification; // ivar: _ApplicationNotification
@property (retain) PLEntryNotificationOperatorComposition *IOMFBScanoutNotification; // ivar: _IOMFBScanoutNotification
@property BOOL ShouldLogAmbient; // ivar: _ShouldLogAmbient
@property (retain) NSMutableArray *afkEndpoints; // ivar: _afkEndpoints
@property (retain) PLTimer *alsLuxFilterTimer; // ivar: _alsLuxFilterTimer
@property BOOL alsOn; // ivar: _alsOn
@property BOOL alsPluginKeyRegistered; // ivar: _alsPluginKeyRegistered
@property *__IOHIDEventSystemClient ambientLightSensorHIDClientRef; // ivar: _ambientLightSensorHIDClientRef
@property (retain) PLEntryNotificationOperatorComposition *aodstateChangedNotification; // ivar: _aodstateChangedNotification
@property float autobrightnessmNits; // ivar: _autobrightnessmNits
@property (retain) PLTimer *backlightFilterTimer; // ivar: _backlightFilterTimer
@property (retain) PLEntryNotificationOperatorComposition *batteryLevelChanged; // ivar: _batteryLevelChanged
@property (retain) PLTimer *bluelightFilterTimer; // ivar: _bluelightFilterTimer
@property (retain) PLEntry *bluelightStatusEntry; // ivar: _bluelightStatusEntry
@property (retain) BrightnessSystemClient *brightnessSystemClient; // ivar: _brightnessSystemClient
@property (retain) CBAdaptationClient *colorAdaptationClient; // ivar: _colorAdaptationClient
@property CGFloat currAFKSystemTimeOffset; // ivar: _currAFKSystemTimeOffset
@property CGFloat currAFKSystemTimestamp; // ivar: _currAFKSystemTimestamp
@property CGFloat currMonoTimestamp; // ivar: _currMonoTimestamp
@property (retain) PLTimer *dcpTimeoffsetCalibTimer; // ivar: _dcpTimeoffsetCalibTimer
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) PLDisplayIOReportAODStats *displayIOReportAODStats; // ivar: _displayIOReportAODStats
@property (retain) PLDisplayIOReportStats *displayIOReportAZLSnapshots; // ivar: _displayIOReportAZLSnapshots
@property (retain) PLDisplayIOReportStats *displayIOReportAZLStats; // ivar: _displayIOReportAZLStats
@property (retain) PLDisplayIOReportStats *displayIOReportStats; // ivar: _displayIOReportStats
@property CGFloat displayLux; // ivar: _displayLux
@property (readonly) NSDictionary *displayPowerModel; // ivar: _displayPowerModel
@property (retain) NSMutableArray *displayStateChanges; // ivar: _displayStateChanges
@property CGFloat displaymNits; // ivar: _displaymNits
@property BOOL firstEntryOnInit; // ivar: _firstEntryOnInit
@property *__IOMobileFramebuffer frameBuffer; // ivar: _frameBuffer
@property (readonly) NSUInteger hash;
@property (readonly) PLIOKitOperatorComposition *iokitBacklight; // ivar: _iokitBacklight
@property (readonly) PLIOKitOperatorComposition *iokitBacklightControl; // ivar: _iokitBacklightControl
@property (readonly) PLIOKitOperatorComposition *iokitBacklightDCP; // ivar: _iokitBacklightDCP
@property (readonly) PLIOKitOperatorComposition *iokitDisplay; // ivar: _iokitDisplay
@property (readonly) PLIOKitOperatorComposition *iokitKeyboardBrightness; // ivar: _iokitKeyboardBrightness
@property (readonly) PLIOKitOperatorComposition *iokitLCD; // ivar: _iokitLCD
@property (readonly) PLIOKitOperatorComposition *iokitTouch; // ivar: _iokitTouch
@property BOOL isDisplayHighBrightness; // ivar: _isDisplayHighBrightness
@property BOOL isDisplayOnNow; // ivar: _isDisplayOnNow
@property BOOL isFirstTimeModeling; // ivar: _isFirstTimeModeling
@property BOOL isMIEActive; // ivar: _isMIEActive
@property BOOL isMultitouchLoggingEnabled; // ivar: _isMultitouchLoggingEnabled
@property (retain) KeyboardBrightnessClient *kbClient; // ivar: _kbClient
@property (retain) PLTimer *keyboardBrightnessFilterTimer; // ivar: _keyboardBrightnessFilterTimer
@property NSUInteger lastALSLux; // ivar: _lastALSLux
@property CGFloat lastALSPowerSaved; // ivar: _lastALSPowerSaved
@property CGFloat lastBuiltinDisplayBrightness; // ivar: _lastBuiltinDisplayBrightness
@property CGFloat lastBuiltinDisplayLux; // ivar: _lastBuiltinDisplayLux
@property CGFloat lastBuiltinDisplaySliderValue; // ivar: _lastBuiltinDisplaySliderValue
@property CGFloat lastBuiltinDisplayTime; // ivar: _lastBuiltinDisplayTime
@property (retain) NSString *lastForegroundAppAPL; // ivar: _lastForegroundAppAPL
@property NSInteger lastRearLuxValue; // ivar: _lastRearLuxValue
@property int lastScreenState; // ivar: _lastScreenState
@property (retain) PLMonotonicTimer *logLastALSPowerSavedTimer; // ivar: _logLastALSPowerSavedTimer
@property (retain) PLXPCListenerOperatorComposition *multitouchXPCListener; // ivar: _multitouchXPCListener
@property NSUInteger pendingALSLux; // ivar: _pendingALSLux
@property (retain) NSDate *pendingALSLuxEntryDate; // ivar: _pendingALSLuxEntryDate
@property (retain) NSMutableDictionary *pendingBacklightEntry; // ivar: _pendingBacklightEntry
@property (retain) NSDate *pendingBacklightEntryDate; // ivar: _pendingBacklightEntryDate
@property (retain) NSDate *pendingKeyboardBrightnessDate; // ivar: _pendingKeyboardBrightnessDate
@property CGFloat pendingKeyboardBrightnessValue; // ivar: _pendingKeyboardBrightnessValue
@property float realmNits; // ivar: _realmNits
@property (readonly) Class superclass;
@property (retain) PLNSNotificationOperatorComposition *thermalMonitorListener; // ivar: _thermalMonitorListener
@property *__IOHIDEventSystemClient touchHIDClientRef; // ivar: _touchHIDClientRef
@property (retain) PLEventForwardDisplayEntry *uAmpsEntry; // ivar: _uAmpsEntry
@property (retain) PLTimer *uAmpsFilterTimer; // ivar: _uAmpsFilterTimer
@property BOOL userTouch; // ivar: _userTouch
@property (retain) NSDate *userTouchDownTime; // ivar: _userTouchDownTime
@property BOOL wasDisplayOn; // ivar: _wasDisplayOn


+(BOOL)shouldLogALSPowerSaved;
+(BOOL)shouldLogAOD;
+(BOOL)shouldLogAPL;
+(BOOL)shouldLogBLR;
+(BOOL)shouldLogBacklightControl;
+(BOOL)shouldLogDisplay;
+(BOOL)shouldLogFromDCP;
+(BOOL)shouldLogKeyboardBrightness;
+(BOOL)shouldLogLCD;
+(BOOL)shouldLogLuxStats;
+(BOOL)shouldLogTouch;
+(BOOL)shouldLogUserBrightness;
+(BOOL)shouldModelPowerFromAPL;
+(BOOL)shouldModelPowerFromIOMFB;
+(id)entryAggregateDefinitionScreenOn;
+(id)entryAggregateDefinitionUserTouch;
+(id)entryAggregateDefinitions;
+(id)entryEventBackwardDefinitionALSThreshold;
+(id)entryEventBackwardDefinitionAPLStats;
+(id)entryEventBackwardDefinitionAZLSnapshots;
+(id)entryEventBackwardDefinitionAZLStats;
+(id)entryEventBackwardDefinitionAmbientLight;
+(id)entryEventBackwardDefinitionBlueLightParameters;
+(id)entryEventBackwardDefinitionCurveUpdate;
+(id)entryEventBackwardDefinitionDCPAODstats;
+(id)entryEventBackwardDefinitionHarmonyParameters;
+(id)entryEventBackwardDefinitionRampInfo;
+(id)entryEventBackwardDefinitionTouch;
+(id)entryEventBackwardDefinitions;
+(id)entryEventForwardDefinitionALSEnabled;
+(id)entryEventForwardDefinitionALSLux;
+(id)entryEventForwardDefinitionALSPowerSaved;
+(id)entryEventForwardDefinitionALSUserPreferences;
+(id)entryEventForwardDefinitionBlueLightReductionStatus;
+(id)entryEventForwardDefinitionColorAdaptationMode;
+(id)entryEventForwardDefinitionDisplay;
+(id)entryEventForwardDefinitionLinearBrightness;
+(id)entryEventForwardDefinitionLuxStats;
+(id)entryEventForwardDefinitions;
+(id)entryEventIntervalDefinitions;
+(id)entryEventNoneDefinitionPanelStats;
+(id)entryEventNoneDefinitions;
+(id)entryEventPointDefinitionBacklightControl;
+(id)entryEventPointDefinitionDisplay;
+(id)entryEventPointDefinitionKeyboardBrightness;
+(id)entryEventPointDefinitionMultitouch;
+(id)entryEventPointDefinitionUserBrightness;
+(id)entryEventPointDefinitions;
+(void)load;
-(BOOL)isAlsEnabled;
-(BOOL)listenForAlsPluginMatchingKeys:(struct __IOHIDEventSystemClient *)arg0 withKeys:(**void)arg1 withValues:(**void)arg2 withCount:(NSUInteger)arg3 ;
-(BOOL)updateDisplayIOReportStats:(id)arg0 ;
-(CGFloat)averageFrameRateFromIOMFBScanout:(id)arg0 ;
-(CGFloat)calculatePowerFromAPL:(CGFloat)arg0 withAvgRed:(CGFloat)arg1 withAvgGreen:(CGFloat)arg2 withAvgBlue:(CGFloat)arg3 ;
-(CGFloat)uAmpsToDisplayPower:(CGFloat)arg0 ;
-(NSInteger)getBuiltInDisplayID:(id)arg0 ;
-(NSUInteger)getBacklightEnabledTimestamp:(unsigned int)arg0 ;
-(id)getSubFrameMap;
-(id)init;
-(struct __IOHIDEventSystemClient *)setUpIOHIDAmbientLightSensorSystemClient;
-(struct __IOHIDEventSystemClient *)setUpIOHIDTouchSystemClient;
-(void)__FrameBufferEventCallback:(struct __IOMobileFramebuffer *)arg0 ;
-(void)backlight:(id)arg0 didCompleteUpdateToState:(NSInteger)arg1 forEvent:(id)arg2 ;
-(void)chunkScreenOnAtDate:(id)arg0 ;
-(void)cleanUpAFKInterfaces;
-(void)clearDisplayAccountingEvents;
-(void)dealloc;
-(void)extractDataWithEntry:(id)arg0 withColName:(id)arg1 withDataArray:(id)arg2 ;
-(void)fillInBuiltinDisplayBrightnessParameters:(id)arg0 ;
-(void)handleAFKInterfaceIOServiceCallback:(unsigned int)arg0 ;
-(void)handleAFKInterfaceMsg:(id)arg0 ;
-(void)handleBrightnessClientNotification:(id)arg0 withValue:(id)arg1 ;
-(void)initAODState:(NSInteger)arg0 ;
-(void)initOperatorDependancies;
-(void)initTaskOperatorDependancies;
-(void)initializeScreenOnAccumulation;
-(void)log;
-(void)logAODChange;
-(void)logAODState:(int)arg0 ;
-(void)logBlueLightDataWithDictionary:(id)arg0 ;
-(void)logBrightnessDataWithEntryKey:(id)arg0 withColName:(id)arg1 withValue:(id)arg2 ;
-(void)logDisplayAPL;
-(void)logDisplayAZL;
-(void)logEventBackwardALSThreshold:(id)arg0 ;
-(void)logEventBackwardAmbientLight:(id)arg0 ;
-(void)logEventBackwardCurveUpdate:(id)arg0 ;
-(void)logEventBackwardRampInfo:(id)arg0 ;
-(void)logEventBackwardTouch;
-(void)logEventBackwardUserTouch:(BOOL)arg0 ;
-(void)logEventForwardALSEnabled;
-(void)logEventForwardALSLux:(NSUInteger)arg0 ;
-(void)logEventForwardALSUserPreferences;
-(void)logEventForwardALSUserPreferencesEntryWithLux:(id)arg0 ;
-(void)logEventForwardALSUserPreferencesWithCurrLux;
-(void)logEventForwardColorAdaptationMode;
-(void)logEventForwardDisplay;
-(void)logEventForwardDisplayWithInactiveScreenHistoryArray:(id)arg0 ;
-(void)logEventForwardDisplayWithRawData:(id)arg0 withDate:(id)arg1 ;
-(void)logEventForwardLinearBrightness:(id)arg0 ;
-(void)logEventForwardLuxStats:(id)arg0 ;
-(void)logEventNonePanelStats;
-(void)logEventPointDisplay;
-(void)logEventPointDisplayBacklight;
-(void)logEventPointDisplayBacklightWithState:(NSUInteger)arg0 ;
-(void)logEventPointDisplayForBlock:(id)arg0 isActive:(int)arg1 ;
-(void)logEventPointDisplayMIE;
-(void)logEventPointKeyboardBrightness:(CGFloat)arg0 ;
-(void)logEventPointKeyboardBrightness:(CGFloat)arg0 withDate:(id)arg1 ;
-(void)logEventPointMultitouchWithPayload:(id)arg0 ;
-(void)logEventPointUserBrightnessCommitted:(CGFloat)arg0 ;
-(void)logScreenOnAccumulationWithDelta:(CGFloat)arg0 ;
-(void)modelDisplayPower:(id)arg0 ;
-(void)modelDisplayPowerFromIOMFB:(id)arg0 ;
-(void)modelDynamicDisplayPower:(id)arg0 ;
-(void)modelDynamicDisplayPowerFromAPL:(id)arg0 ;
-(void)qualifyDisplayPower:(id)arg0 ;
-(void)reArmCallback;
-(void)reArmUAmpsCallback;
-(void)registerForBuiltInDisplayNotifications:(id)arg0 withNewBuiltInDisplayID:(NSInteger)arg1 ;
-(void)screenStateChangedTo:(BOOL)arg0 atDate:(id)arg1 ;
-(void)updateLastForegroundAppAPL:(id)arg0 ;


@end


#endif