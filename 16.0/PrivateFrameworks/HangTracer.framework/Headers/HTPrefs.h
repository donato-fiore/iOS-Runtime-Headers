// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HTPREFS_H
#define HTPREFS_H

@class NSDictionary, NSString, NSArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface HTPrefs : NSObject

@property *__CFString _htDomain; // ivar: __htDomain
@property *__CFString _htTaskingDomain; // ivar: __htTaskingDomain
@property (retain) NSDictionary *_installedHTProfileDict; // ivar: __installedHTProfileDict
@property BOOL _isInternalNoOverride; // ivar: __isInternalNoOverride
@property (retain) NSObject<OS_dispatch_queue> *_prefsQueue; // ivar: __prefsQueue
@property (retain) NSString *_profilePath; // ivar: __profilePath
@property (readonly) CGFloat appActivationLoggingCPUUtilizationThresholdMSec; // ivar: _appActivationLoggingCPUUtilizationThresholdMSec
@property (readonly) BOOL appActivationLoggingEnabled; // ivar: _appActivationLoggingEnabled
@property (readonly) unsigned int appActivationLoggingMaxActivationLimit; // ivar: _appActivationLoggingMaxActivationLimit
@property (readonly) BOOL appLaunchMonitoringEnabled; // ivar: _appLaunchMonitoringEnabled
@property (retain) NSString *automationGroup; // ivar: _automationGroup
@property (readonly) unsigned int badDayEnablementDurationDays; // ivar: _badDayEnablementDurationDays
@property (readonly) NSUInteger badDayEnablementForHangDurationMSec; // ivar: _badDayEnablementForHangDurationMSec
@property (readonly) unsigned int badDayEnablementForLogCount; // ivar: _badDayEnablementForLogCount
@property (readonly) unsigned int badDayEnablementForPreviousDays; // ivar: _badDayEnablementForPreviousDays
@property (readonly) unsigned int badDayEnablementMinimumBreakDurationDays; // ivar: _badDayEnablementMinimumBreakDurationDays
@property (readonly) CGFloat badDaySecondsBetweenLastEnablementAndReferenceDate; // ivar: _badDaySecondsBetweenLastEnablementAndReferenceDate
@property (readonly) BOOL customerModeEnabled; // ivar: _customerModeEnabled
@property (readonly) NSString *enablementPrefix; // ivar: _enablementPrefix
@property (readonly) BOOL eplEnabled; // ivar: _eplEnabled
@property (readonly) BOOL eplEnabledProfile; // ivar: _eplEnabledProfile
@property (readonly) CGFloat eplTimeoutTimestampSec; // ivar: _eplTimeoutTimestampSec
@property (retain) NSString *experimentGroup; // ivar: _experimentGroup
@property (readonly) int fenceHangDailyLogLimit; // ivar: _fenceHangDailyLogLimit
@property (readonly) BOOL fenceTrackingEnabled; // ivar: _fenceTrackingEnabled
@property (readonly) BOOL forceQuitDetectionEnabled; // ivar: _forceQuitDetectionEnabled
@property (readonly) unsigned int forceQuitDetectionThresholdMSec; // ivar: _forceQuitDetectionThresholdMSec
@property (readonly) BOOL hangtracerDaemonEnabled; // ivar: _hangtracerDaemonEnabled
@property (readonly) BOOL hasInternalSettings; // ivar: _hasInternalSettings
@property (readonly) BOOL htTailspinEnabled; // ivar: _htTailspinEnabled
@property (readonly) BOOL hudEnabled; // ivar: _hudEnabled
@property (readonly) unsigned int hudThresholdMSec; // ivar: _hudThresholdMSec
@property (readonly) BOOL isCarryDevice; // ivar: _isCarryDevice
@property (readonly) BOOL isInternal; // ivar: _isInternal
@property BOOL keepTailspinsLegacy; // ivar: _keepTailspinsLegacy
@property (readonly) BOOL memoryLoggingEnabled; // ivar: _memoryLoggingEnabled
@property unsigned int memoryLoggingIntervalSec; // ivar: _memoryLoggingIntervalSec
@property (readonly) BOOL pdseAllowEnableTailspin; // ivar: _pdseAllowEnableTailspin
@property (readonly) BOOL pdseAppLaunchKillSwitch; // ivar: _pdseAppLaunchKillSwitch
@property (readonly) int pdseAppLaunchPeriodDays; // ivar: _pdseAppLaunchPeriodDays
@property (readonly) BOOL pdseCATailspinKillSwitch; // ivar: _pdseCATailspinKillSwitch
@property (readonly) int pdseCATailspinPeriodDays; // ivar: _pdseCATailspinPeriodDays
@property (readonly) BOOL pdseHTBadDayKillSwitch; // ivar: _pdseHTBadDayKillSwitch
@property (readonly) int pdseHTPeriodDays; // ivar: _pdseHTPeriodDays
@property (readonly) BOOL pdseHTRateOnlyKillSwitch; // ivar: _pdseHTRateOnlyKillSwitch
@property (readonly) int pdseHTRateOnlyPeriodDays; // ivar: _pdseHTRateOnlyPeriodDays
@property (readonly) BOOL pdseHTThirdPartyKillSwitch; // ivar: _pdseHTThirdPartyKillSwitch
@property (readonly) int pdseHTThirdPartyNoLogUploadPeriodDays; // ivar: _pdseHTThirdPartyNoLogUploadPeriodDays
@property (readonly) int pdseHTThirdPartyPeriodDays; // ivar: _pdseHTThirdPartyPeriodDays
@property (readonly) BOOL pdseHangTracerKillSwitch; // ivar: _pdseHangTracerKillSwitch
@property (readonly) BOOL pdseSentryKillSwitch; // ivar: _pdseSentryKillSwitch
@property (readonly) int pdseSentryPeriodDays; // ivar: _pdseSentryPeriodDays
@property (readonly) NSArray *prefContextPrefixPriorityOrder;
@property (readonly) *HTPrefInit prefInitList; // ivar: _prefInitList
@property (readonly) NSUInteger reportPeriodMATU; // ivar: _reportPeriodMATU
@property (readonly) int runLoopHangDailyLogLimit; // ivar: _runLoopHangDailyLogLimit
@property (readonly) int runLoopHangPerPeriodLogLimit; // ivar: _runLoopHangPerPeriodLogLimit
@property (readonly) int runLoopLongHangDailyLogLimit; // ivar: _runLoopLongHangDailyLogLimit
@property (readonly) int runLoopMicroHangDailyLogLimit; // ivar: _runLoopMicroHangDailyLogLimit
@property (readonly) NSUInteger runloopHangDurationThresholdMSec; // ivar: _runloopHangDurationThresholdMSec
@property (readonly) CGFloat runloopHangPercentHeavyLogs; // ivar: _runloopHangPercentHeavyLogs
@property (readonly) int runloopHangThirdPartyDailyLogLimit; // ivar: _runloopHangThirdPartyDailyLogLimit
@property (readonly) NSUInteger runloopHangThirdPartyDurationThresholdMSec; // ivar: _runloopHangThirdPartyDurationThresholdMSec
@property (readonly) NSUInteger runloopHangTimeoutDurationMSec; // ivar: _runloopHangTimeoutDurationMSec
@property (readonly) NSUInteger runloopLongHangDurationThresholdMSec; // ivar: _runloopLongHangDurationThresholdMSec
@property (readonly) CGFloat samplingPercentForMicroHangs; // ivar: _samplingPercentForMicroHangs
@property (readonly) NSUInteger savedTailspinMaxMB; // ivar: _savedTailspinMaxMB
@property BOOL shouldAllowSentryEnablement; // ivar: _shouldAllowSentryEnablement
@property (readonly) BOOL shouldCollectOSSignposts; // ivar: _shouldCollectOSSignposts
@property (readonly) BOOL shouldCollectOSSignpostsDeferred; // ivar: _shouldCollectOSSignpostsDeferred
@property (readonly) BOOL shouldCompressSavedTailspins; // ivar: _shouldCompressSavedTailspins
@property (readonly) BOOL shouldDisplayFenceHangToHUD;
@property (readonly) BOOL shouldIncludeDiskInfo; // ivar: _shouldIncludeDiskInfo
@property (readonly) BOOL shouldIncludeDisplayData; // ivar: _shouldIncludeDisplayData
@property (readonly) BOOL shouldIncludeNetworkState; // ivar: _shouldIncludeNetworkState
@property BOOL shouldPostHTPrefsChangedNotification; // ivar: _shouldPostHTPrefsChangedNotification
@property (readonly) BOOL shouldSaveTailspins; // ivar: _shouldSaveTailspins
@property (readonly) BOOL shouldUpdateHangsHUD;
@property (readonly) BOOL shouldUploadToDiagPipe; // ivar: _shouldUploadToDiagPipe
@property (readonly) int signpostMonitoringDailyLogLimit; // ivar: _signpostMonitoringDailyLogLimit
@property (readonly) BOOL signpostMonitoringEnabled; // ivar: _signpostMonitoringEnabled
@property (readonly) int signpostMonitoringPerPeriodLogLimit; // ivar: _signpostMonitoringPerPeriodLogLimit
@property (readonly) int slowAppActivationDailyLogLimit; // ivar: _slowAppActivationDailyLogLimit
@property (readonly) int slowAppActivationPerAppMaxLogLimit; // ivar: _slowAppActivationPerAppMaxLogLimit
@property (readonly) BOOL slowAppActivationTailspinEnabled; // ivar: _slowAppActivationTailspinEnabled
@property (readonly) NSUInteger slowAppActivationThresholdMSec; // ivar: _slowAppActivationThresholdMSec
@property (readonly) NSUInteger springBoardHangIORegGPUDumpTimeoutMSec; // ivar: _springBoardHangIORegGPUDumpTimeoutMSec
@property (retain) NSString *tailspinSaveFormat; // ivar: _tailspinSaveFormat
@property (readonly) NSString *thirdPartyDevBootSessionUUID; // ivar: _thirdPartyDevBootSessionUUID
@property (readonly) BOOL thirdPartyDevHangHUDEnabled; // ivar: _thirdPartyDevHangHUDEnabled
@property (readonly) NSArray *thirdPartyDevPreferredLanguages; // ivar: _thirdPartyDevPreferredLanguages
@property (readonly) BOOL thirdPartyRunLoopHangLogsEnabled; // ivar: _thirdPartyRunLoopHangLogsEnabled


+(id)sharedPrefs;
-(?)boolPropertycontextPrefixOut;
-(?)doublePropertycontextPrefixOut;
-(?)initBoolProperty;
-(?)initDoubleProperty;
-(?)initIntProperty;
-(?)initNSStringProperty;
-(?)initPropertyForceQuitDetectionEnabled;
-(?)initPropertyHangtracerDaemonEnabled;
-(?)initPropertyHaveInternalSettings;
-(?)initPropertyIsCarryDevice;
-(?)initPropertyIsInternal;
-(?)initPropertyMemoryLoggingIntervalSec;
-(?)initPropertyReportPeriod;
-(?)initPropertyShouldSaveAndCompressTailspins;
-(?)initPropertyThirdPartyDevPreferredLanguages;
-(?)initUnsignedIntProperty;
-(?)initUnsignedLongProperty;
-(?)intPropertycontextPrefixOut;
-(?)objectProperty:(?)arg0 matchingSelectorcontextPrefixOut;
-(?)stringPropertycontextPrefixOut;
-(?)unsignedIntPropertycontextPrefixOut;
-(?)unsignedLongPropertycontextPrefixOut;
-(id)getHighestPrioritySettingValue:(id)arg0 matchingSelector:(SEL)arg1 contextPrefixOut:(*id)arg2 ;
-(id)prefNamed:(struct __CFString *)arg0 domain:(struct __CFString *)arg1 profile:(id)arg2 matchingSelector:(SEL)arg3 contextPrefixOut:(*id)arg4 ;
-(void)__createInternalSettings;
-(void)_removeAllPrefs;
-(void)dealloc;
-(void)earlyInitNecessaryPrefs;
-(void)refreshHTPrefs;
-(void)setupPrefsWithQueue:(id)arg0 ;
-(void)setupPrefsWithQueue:(id)arg0 profilePath:(id)arg1 taskingDomainName:(struct __CFString *)arg2 hangtracerDomain:(struct __CFString *)arg3 setupInternalPrefs:(BOOL)arg4 ;


@end


#endif