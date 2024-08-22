// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IOACCESSORYLDCMPORTMANAGERTYPEC_H
#define IOACCESSORYLDCMPORTMANAGERTYPEC_H

@class NSCondition, NSLock, NSMutableDictionary;
@protocol OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "HalogenTypeC.h"

@interface IOAccessoryLDCMPortManagerTypeC : NSObject

@property (nonatomic) *void FBSOpenApplicationOptionKeyPromptUnlockDevice; // ivar: _FBSOpenApplicationOptionKeyPromptUnlockDevice
@property (nonatomic) int analyticsDebugEvent; // ivar: _analyticsDebugEvent
@property (nonatomic) NSCondition *condition; // ivar: _condition
@property NSLock *defaultsRWLock; // ivar: _defaultsRWLock
@property (nonatomic) BOOL didReportDisabledAnalytic; // ivar: _didReportDisabledAnalytic
@property (nonatomic) NSUInteger dryPollingIntervalNs; // ivar: _dryPollingIntervalNs
@property (nonatomic) unsigned int drySinceWetCount; // ivar: _drySinceWetCount
@property (nonatomic) BOOL enableTTRCooldown; // ivar: _enableTTRCooldown
@property (nonatomic) BOOL enableTapToRadarPopup; // ivar: _enableTapToRadarPopup
@property (nonatomic) BOOL fakeWetMeasurements; // ivar: _fakeWetMeasurements
@property (nonatomic) NSObject<OS_dispatch_queue> *halogenTypeCDispatchQueue; // ivar: _halogenTypeCDispatchQueue
@property (nonatomic) NSObject<OS_dispatch_queue> *halogenTypeCTTRDispatchQueue; // ivar: _halogenTypeCTTRDispatchQueue
@property (nonatomic) BOOL isInternalBuild; // ivar: _isInternalBuild
@property (nonatomic) BOOL isMeasurementActive; // ivar: _isMeasurementActive
@property (nonatomic) BOOL isPowerAssertionHeld; // ivar: _isPowerAssertionHeld
@property (nonatomic) BOOL isReceptacleEmpty; // ivar: _isReceptacleEmpty
@property (nonatomic) BOOL isTapToRadarPending; // ivar: _isTapToRadarPending
@property (nonatomic) BOOL isWet; // ivar: _isWet
@property (nonatomic) int lastMeasurementResult; // ivar: _lastMeasurementResult
@property (nonatomic) int lastMeasurementStatus; // ivar: _lastMeasurementStatus
@property (nonatomic) NSUInteger lastTTRTimeStamp; // ivar: _lastTTRTimeStamp
@property (nonatomic) NSUInteger lastUserNotificationTimeStamp; // ivar: _lastUserNotificationTimeStamp
@property (nonatomic) NSMutableDictionary *ldcmErrorCountDict; // ivar: _ldcmErrorCountDict
@property (nonatomic) BOOL measureSBU; // ivar: _measureSBU
@property (nonatomic) BOOL measurementsEnabled; // ivar: _measurementsEnabled
@property (nonatomic) BOOL mitigationsEnabled; // ivar: _mitigationsEnabled
@property (nonatomic) BOOL mitigationsOverrideEnabled; // ivar: _mitigationsOverrideEnabled
@property (nonatomic) BOOL newAccArrived; // ivar: _newAccArrived
@property (nonatomic) BOOL refMeasurementFailed; // ivar: _refMeasurementFailed
@property (nonatomic) unsigned int referenceMeasurementFailureCount; // ivar: _referenceMeasurementFailureCount
@property (nonatomic) unsigned int referenceMeasurementPassCount; // ivar: _referenceMeasurementPassCount
@property (nonatomic) BOOL sbuBootArgSet; // ivar: _sbuBootArgSet
@property (nonatomic) BOOL selfTestFailed; // ivar: _selfTestFailed
@property (nonatomic) unsigned int selfTestFailureCount; // ivar: _selfTestFailureCount
@property (nonatomic) unsigned int selfTestPassCount; // ivar: _selfTestPassCount
@property (nonatomic) BOOL skipMitigationsBootArgSet; // ivar: _skipMitigationsBootArgSet
@property (nonatomic) BOOL skipTTRBootArgSet; // ivar: _skipTTRBootArgSet
@property (nonatomic) unsigned int sleepAssertionID; // ivar: _sleepAssertionID
@property (nonatomic) mach_timebase_info timeBase; // ivar: _timeBase
@property (nonatomic) NSObject<OS_dispatch_source> *timer; // ivar: _timer
@property (nonatomic) NSObject<OS_dispatch_source> *timerReferenceMeasurement; // ivar: _timerReferenceMeasurement
@property (nonatomic) NSObject<OS_dispatch_source> *timerSelfTest; // ivar: _timerSelfTest
@property (nonatomic) HalogenTypeC *typeC; // ivar: _typeC
@property (nonatomic) BOOL userNotified; // ivar: _userNotified
@property (nonatomic) BOOL wasTapToRadarShown; // ivar: _wasTapToRadarShown
@property (nonatomic) ? wetMeasurementInfo; // ivar: _wetMeasurementInfo
@property (nonatomic) NSUInteger wetPollingIntervalNs; // ivar: _wetPollingIntervalNs
@property (nonatomic) BOOL wetTooLongRecorded; // ivar: _wetTooLongRecorded


-(BOOL)_checkIsReceptacleEmpty;
-(BOOL)_holdPowerAssertionTypeC:(BOOL)arg0 ;
-(BOOL)_recordLDCMError:(int)arg0 ;
-(BOOL)_setInitialTTRTimestamp;
-(BOOL)_setInitialUserNotificationTimestamp;
-(BOOL)_setMitigations:(BOOL)arg0 ;
-(BOOL)_throttleTTR;
-(BOOL)_throttleUserNotification;
-(id)_fetchFilesToUpload:(id)arg0 ;
-(id)initWithParams:(NSUInteger)arg0 dryPollingIntervalNs:(NSUInteger)arg1 ;
-(int)_halogenErrorToAnalyticError:(unsigned char)arg0 ;
-(int)_measurementErrorToAnalyticError:(unsigned char)arg0 ;
-(void)_controlLDCMMeasurements;
-(void)_fileRadarHalogenTypeC:(id)arg0 TTRCategory:(int)arg1 ;
-(void)_generateAlternateMeasurementAnalytics:(BOOL)arg0 measurementInfo:(struct ? *)arg1 intervalSinceLastPass:(CGFloat)arg2 ;
-(void)_generateAnalytics:(BOOL)arg0 dryToWetTransition:(BOOL)arg1 measurementInfo:(struct ? *)arg2 ;
-(void)_generateFailureAnalytics:(int)arg0 recordLDCMDisabled:(BOOL)arg1 analyticsError:(int)arg2 ;
-(void)_generateLDCMCSVData;
-(void)_giveUserRadarPrompt:(int)arg0 ;
-(void)_loadFrontBoard;
-(void)_manageLDCMSettings;
-(void)_processLDCMAnalyticsDefauts;
-(void)_processLDCMDefauts:(BOOL)arg0 ;
-(void)_processMitigationsOverride;
-(void)_readLDCMBootArgs;
-(void)_registerForLDCMNotifications;
-(void)_resetLDCMErrorDict;
-(void)_showMitigationAlert;
-(void)_writeAndNotifyDefaults:(id)arg0 value:(id)arg1 domain:(id)arg2 notify:(BOOL)arg3 notification:(id)arg4 ;
-(void)dealloc;
-(void)handleAttachEvent;
-(void)handleDetachEvent;
-(void)performTypeCMeasurement;
-(void)performTypeCReferenceMeasurement;
-(void)performTypeCSelfTest;


@end


#endif