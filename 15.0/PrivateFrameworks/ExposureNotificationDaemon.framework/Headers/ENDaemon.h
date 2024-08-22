// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ENDAEMON_H
#define ENDAEMON_H

@class NSMutableSet, NSMutableDictionary, NSString, SBSRemoteAlertHandle, PrivacyProxyServiceStatus, NSBackgroundActivityScheduler, NSMutableOrderedSet, SFClient, CUSystemMonitor, ENUserAlert, UNUserNotificationCenter;
@protocol ApplicationObserver, ENConfigurationManagerDelegate, ENExposureDetectionManagerDelegate, ENOnboardingManagerDelegate, ENTemporaryExposureKeyManagerDelegate, ENTestResultManagerDelegate, ENTextMessageManagerDelegate, SBSRemoteAlertHandleObserver, UNUserNotificationCenterDelegate, OS_dispatch_source, OS_xpc_object, ENDaemonDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "ApplicationObserver.h"
#import "ENExposureDatabase.h"
#import "ENActiveEntity.h"
#import "ENConfigurationManager.h"
#import "ENDifferentialPrivacyManager.h"
#import "ENDownloadManager.h"
#import "ENExposureDetectionManager.h"
#import "ENXPCTimer.h"
#import "ENOnboardingManager.h"
#import "ENRegionMonitor.h"
#import "ENTemporaryExposureKeyManager.h"
#import "ENTestResultManager.h"
#import "ENTextMessageManager.h"

@interface ENDaemon : NSObject <ApplicationObserver, ENConfigurationManagerDelegate, ENExposureDetectionManagerDelegate, ENOnboardingManagerDelegate, ENTemporaryExposureKeyManagerDelegate, ENTestResultManagerDelegate, ENTextMessageManagerDelegate, SBSRemoteAlertHandleObserver, UNUserNotificationCenterDelegate>

 {
    ApplicationObserver *_applicationObserver;
    BOOL _activateCalled;
    BOOL _btMonitorStarted;
    ENExposureDatabase *_exposureDatabase;
    NSObject<OS_dispatch_source> *_pauseTimer;
    int _prefsChangedNotifyToken;
    int _profileChangedNotifyToken;
    int _proxyStatusChangedNotifyToken;
    int _proxyConfigChangedNotifyToken;
    int _screenLockNotifyToken;
    NSUInteger _startTicks;
    NSUInteger _startTicksFull;
    NSUInteger _stateHandler;
    int _tccChangedNotifyToken;
    BOOL _updatePending;
    NSMutableSet *_xpcConnections;
    NSObject<OS_xpc_object> *_xpcListener;
}


@property (copy, nonatomic) ENActiveEntity *activeEntity; // ivar: _activeEntity
@property (retain, nonatomic) NSMutableDictionary *appActivities; // ivar: _appActivities
@property (nonatomic) BOOL automaticRegionSwitchEnabled; // ivar: _automaticRegionSwitchEnabled
@property (nonatomic) BOOL availabilityAlertDisabled; // ivar: _availabilityAlertDisabled
@property (copy, nonatomic) NSString *btTracingAppID; // ivar: _btTracingAppID
@property (retain, nonatomic) SBSRemoteAlertHandle *buddyAlertHandle; // ivar: _buddyAlertHandle
@property (retain, nonatomic) ENConfigurationManager *configurationManager; // ivar: _configurationManager
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ENDaemonDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) ENDifferentialPrivacyManager *differentialPrivacyManager; // ivar: _differentialPrivacyManager
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchDownloadManagingQueue; // ivar: _dispatchDownloadManagingQueue
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchExposureDetectionManagingQueue; // ivar: _dispatchExposureDetectionManagingQueue
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchTestResultManagingQueue; // ivar: _dispatchTestResultManagingQueue
@property (retain, nonatomic) ENDownloadManager *downloadManager; // ivar: _downloadManager
@property (retain, nonatomic) ENExposureDetectionManager *exposureDetectionManager; // ivar: _exposureDetectionManager
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) ENXPCTimer *monthlyNotificationTimer; // ivar: _monthlyNotificationTimer
@property (nonatomic) BOOL monthlySummaryDisabled; // ivar: _monthlySummaryDisabled
@property (retain, nonatomic) PrivacyProxyServiceStatus *networkProxyStatus; // ivar: _networkProxyStatus
@property (nonatomic) NSUInteger networkProxyTraffic; // ivar: _networkProxyTraffic
@property (nonatomic) BOOL onboardingFirstTime; // ivar: _onboardingFirstTime
@property (retain, nonatomic) ENOnboardingManager *onboardingManager; // ivar: _onboardingManager
@property (retain, nonatomic) ENXPCTimer *onboardingTimer; // ivar: _onboardingTimer
@property (nonatomic) unsigned int onboardingTrigger; // ivar: _onboardingTrigger
@property (nonatomic) NSInteger overallStatus; // ivar: _overallStatus
@property (retain, nonatomic) NSBackgroundActivityScheduler *persistencePurgeScheduler; // ivar: _persistencePurgeScheduler
@property (nonatomic) BOOL prefAggressiveScanning; // ivar: _prefAggressiveScanning
@property (nonatomic) BOOL prefConfigurationManagerEnabled; // ivar: _prefConfigurationManagerEnabled
@property (nonatomic) CGFloat prefDatabasePurgeInterval; // ivar: _prefDatabasePurgeInterval
@property (nonatomic) BOOL prefDeveloperServerConfiguration; // ivar: _prefDeveloperServerConfiguration
@property (nonatomic) NSInteger prefDifferentialPrivacyConsent; // ivar: _prefDifferentialPrivacyConsent
@property (nonatomic) BOOL prefEnableNKD; // ivar: _prefEnableNKD
@property (nonatomic) BOOL prefEnabled; // ivar: _prefEnabled
@property (nonatomic) BOOL prefLoggingRPI; // ivar: _prefLoggingRPI
@property (nonatomic) BOOL prefLoggingSensitive; // ivar: _prefLoggingSensitive
@property (nonatomic) BOOL prefNetworkProxyEnabled; // ivar: _prefNetworkProxyEnabled
@property (nonatomic) BOOL prefPaused; // ivar: _prefPaused
@property (nonatomic) unsigned int prefRateLimitMaxAPICount; // ivar: _prefRateLimitMaxAPICount
@property (nonatomic) unsigned int prefRateLimitMaxAPICountV2; // ivar: _prefRateLimitMaxAPICountV2
@property (copy, nonatomic) NSString *prefRegionIdentifierOverride; // ivar: _prefRegionIdentifierOverride
@property (nonatomic) BOOL prefRegionMonitorTestMode; // ivar: _prefRegionMonitorTestMode
@property (nonatomic) CGFloat prefServerConfigurationRefreshInterval; // ivar: _prefServerConfigurationRefreshInterval
@property (nonatomic) BOOL prefServerForceDisable; // ivar: _prefServerForceDisable
@property (nonatomic) BOOL prefSkipExposureWindowShuffling; // ivar: _prefSkipExposureWindowShuffling
@property (nonatomic) BOOL prefSkipFileSigning; // ivar: _prefSkipFileSigning
@property (nonatomic) BOOL prefStoreDemoMode; // ivar: _prefStoreDemoMode
@property (nonatomic) BOOL prefTCCAllowWithoutApps; // ivar: _prefTCCAllowWithoutApps
@property (retain, nonatomic) NSMutableOrderedSet *previouslyTrackedApps; // ivar: _previouslyTrackedApps
@property (retain, nonatomic) ENRegionMonitor *regionMonitor; // ivar: _regionMonitor
@property (retain, nonatomic) NSMutableDictionary *remoteUISessions; // ivar: _remoteUISessions
@property (retain, nonatomic) NSMutableDictionary *screenUnlockPendingActions; // ivar: _screenUnlockPendingActions
@property (retain, nonatomic) SFClient *sharingClient; // ivar: _sharingClient
@property (readonly, nonatomic) unsigned int stateMetricVersion;
@property (readonly) Class superclass;
@property (retain, nonatomic) CUSystemMonitor *systemMonitor; // ivar: _systemMonitor
@property (retain, nonatomic) ENTemporaryExposureKeyManager *temporaryExposureKeyManager; // ivar: _temporaryExposureKeyManager
@property (retain, nonatomic) ENTestResultManager *testResultManager; // ivar: _testResultManager
@property (retain, nonatomic) ENTextMessageManager *textMessageManager; // ivar: _textMessageManager
@property (nonatomic) NSInteger travelStatus; // ivar: _travelStatus
@property (nonatomic) unsigned int usageExposureDetectFileActivate; // ivar: _usageExposureDetectFileActivate
@property (nonatomic) unsigned int usageExposureDetectFileAddKeys; // ivar: _usageExposureDetectFileAddKeys
@property (nonatomic) unsigned int usageExposureDetectFileFinish; // ivar: _usageExposureDetectFileFinish
@property (nonatomic) unsigned int usageExposureDetectFileGetExposureWindows; // ivar: _usageExposureDetectFileGetExposureWindows
@property (nonatomic) unsigned int usageExposureDetectFileGetExposures; // ivar: _usageExposureDetectFileGetExposures
@property (nonatomic) unsigned int usageGetDiagnosisKeys; // ivar: _usageGetDiagnosisKeys
@property (nonatomic) unsigned int usageManagerActivate; // ivar: _usageManagerActivate
@property (nonatomic) unsigned int usageResetAllData; // ivar: _usageResetAllData
@property (nonatomic) unsigned int usageUserAlertDontReset; // ivar: _usageUserAlertDontReset
@property (nonatomic) unsigned int usageUserAlertDontShare; // ivar: _usageUserAlertDontShare
@property (nonatomic) unsigned int usageUserAlertReset; // ivar: _usageUserAlertReset
@property (nonatomic) unsigned int usageUserAlertShare; // ivar: _usageUserAlertShare
@property (nonatomic) unsigned int usageUserDisabled; // ivar: _usageUserDisabled
@property (nonatomic) unsigned int usageUserEnabled; // ivar: _usageUserEnabled
@property (nonatomic) unsigned int usageUserPaused; // ivar: _usageUserPaused
@property (nonatomic) unsigned int usageUserUnpaused; // ivar: _usageUserUnpaused
@property (retain, nonatomic) ENUserAlert *userAlert; // ivar: _userAlert
@property (retain, nonatomic) UNUserNotificationCenter *userNotificationCenter; // ivar: _userNotificationCenter
@property (nonatomic) BOOL wasInDifferentActiveRegion; // ivar: _wasInDifferentActiveRegion
@property (nonatomic) BOOL wasInRestrictedStatus; // ivar: _wasInRestrictedStatus


+(BOOL)deviceSupportsFaceID;
-(BOOL)_bluetoothMonitorShouldRun;
-(BOOL)_getExposureMatchAttemptBool;
-(BOOL)_isNKDActive;
-(BOOL)_postExposureNotificationForClassification:(id)arg0 status:(NSInteger)arg1 region:(id)arg2 ;
-(BOOL)_shouldDisableMonthlySummary;
-(BOOL)_writePreferenceActiveEntity:(id)arg0 ;
-(BOOL)_writePreferenceRegionPendingOnboarding:(id)arg0 ;
-(BOOL)isDeviceUnlocked;
-(BOOL)isOnboardingNeeded;
-(BOOL)isProxyEnabledForTestResultManager:(id)arg0 ;
-(CGFloat)timeForAvailabilityAlertCycleReset;
-(NSInteger)getOverallStatus;
-(NSInteger)tccAccessForBundleID:(id)arg0 ;
-(id)_getBundleIDFromBundle:(struct __CFBundle *)arg0 ;
-(id)_getDelegateAndReturnError:(*id)arg0 ;
-(id)_getDiagnosedVaccineStatusForDifferentialPrivacyWithUserVaccinationStatus:(id)arg0 ;
-(id)_getDownloadEndpointsAndReturnError:(*id)arg0 ;
-(id)_getInfoDictFromAppProxy:(id)arg0 ;
-(id)_getInfoDictFromBundle:(struct __CFBundle *)arg0 ;
-(id)_getLatestExposureForDifferentialPrivacy;
-(id)_readPreferenceActiveEntity;
-(id)_readPreferenceRegionPendingOnboarding;
-(id)activeRegionForExposureDetectionManager:(id)arg0 ;
-(id)advertisementDatabaseQuerySessionWithAttenuationThreshold:(unsigned char)arg0 error:(*id)arg1 ;
-(id)descriptionWithLevel:(int)arg0 ;
-(id)exposureDetectionManager:(id)arg0 advertisementDatabaseQuerySessionWithAttenuationThreshold:(unsigned char)arg1 error:(*id)arg2 ;
-(id)getExposureDatabaseAndReturnError:(*id)arg0 ;
-(id)init;
-(id)legacyHistoryPath;
-(id)loadHistorySinceTime:(CGFloat)arg0 ;
-(id)loadLegacyHistorySinceTime:(CGFloat)arg0 ;
-(id)regionForBundleInfo:(id)arg0 ;
-(id)temporaryExposureKeyManager:(id)arg0 retrieveTEKHistoryIncludingActive:(BOOL)arg1 generateNewTEK:(BOOL)arg2 ;
-(id)xpcConnectionForBundleID:(id)arg0 ;
-(unsigned char)_getAvailabilityAlertCountIncrement:(BOOL)arg0 reset:(BOOL)arg1 ;
-(unsigned char)_getLegalConsentPageCount;
-(unsigned int)appDequeueActivityFlagsWithBundleID:(id)arg0 ;
-(void)_activate;
-(void)_bluetoothMonitorEnsureStarted;
-(void)_bluetoothMonitorEnsureStopped;
-(void)_bluetoothTracingEnsureStarted;
-(void)_bluetoothTracingEnsureStopped;
-(void)_bluetoothTracingStop;
-(void)_databasesEnsureClosed;
-(void)_databasesEnsureOpened;
-(void)_deferConsentForPendingRegion;
-(void)_differentialPrivacyEnsureStarted;
-(void)_differentialPrivacyEnsureStopped;
-(void)_disableAvailabilityAlertIfNeeded;
-(void)_enApplicationDidInstall:(id)arg0 ;
-(void)_enApplicationDidUninstall:(id)arg0 ;
// -(void)_enqueueScreenUnlockAction:(id)arg0 withIdentifier:(unk)arg1  ;
-(void)_exposureManagersEnsureStarted;
-(void)_exposureManagersEnsureStopped;
-(void)_exposureNotificationRegionConfigurationChanged:(id)arg0 ;
-(void)_exposureNotificationRegionConfigurationRemoved:(id)arg0 ;
-(void)_fetchPrefRegionConfig:(id)arg0 oldCustomCountryCode:(id)arg1 ;
-(void)_handleTestVerificationErrors:(id)arg0 ;
-(void)_invalidate;
-(void)_migrateLegacyHistoryIfNecessary;
-(void)_periodicPersistencePurge;
-(void)_postUserNotificationWithRequest:(id)arg0 authorizationFailureHandler:(id)arg1 ;
-(void)_resetDataWithFlags:(unsigned int)arg0 ;
-(void)_resetDeveloperSettings;
-(void)_schedulePeriodicPersistencePurge;
-(void)_scheduleUpdate;
-(void)_setActiveRegionForApp:(id)arg0 infoDict:(id)arg1 ;
-(void)_startPreauthorizedTestVerificationAction;
-(void)_tccChanged;
-(void)_turnOffEN;
-(void)_update;
-(void)_updateOverallStatus;
-(void)_updatePhase1ConfigurationIfNeeded:(id)arg0 ;
-(void)_xpcConnectionAccept:(id)arg0 ;
-(void)_xpcListenerEvent:(id)arg0 ;
-(void)activate;
-(void)appLaunchWithBundleID:(id)arg0 activity:(unsigned int)arg1 shouldEnterForeground:(BOOL)arg2 requiredRuntimeInSeconds:(int)arg3 ;
-(void)applicationsDidInstall:(id)arg0 ;
-(void)applicationsDidUninstall:(id)arg0 ;
-(void)bluetoothPowerStateChanged;
-(void)configurationManager:(id)arg0 didResolveCurrentRegion:(BOOL)arg1 ;
-(void)configurationManager:(id)arg0 errorDetected:(unsigned int)arg1 ;
-(void)configurationManager:(id)arg0 exposureNotificationRegionConfigurationChanged:(id)arg1 ;
-(void)configurationManager:(id)arg0 exposureNotificationRegionConfigurationRemovedForRegion:(id)arg1 ;
-(void)enqueuePreauthorizedTestVerificationUnlockAction;
// -(void)enqueueScreenUnlockAction:(id)arg0 withIdentifier:(unk)arg1  ;
-(void)exposureDetectionManager:(id)arg0 errorDetected:(unsigned int)arg1 ;
-(void)exposureDetectionManager:(id)arg0 finishedSessionWithResult:(id)arg1 ;
-(void)fetchServerConfigurationForAppBundleIdentifier:(id)arg0 infoDictionary:(id)arg1 ;
-(void)fetchServerConfigurationForRegion:(id)arg0 completion:(id)arg1 ;
-(void)invalidate;
-(void)monthlyTriggerActivateWithIntervalOverride:(unsigned int)arg0 ;
-(void)monthlyTriggerDeactivate;
-(void)notifyUserWithStatus:(NSInteger)arg0 ;
-(void)onboardingManagerDidObserveDeviceUnlock:(id)arg0 ;
-(void)onboardingTriggerRetry:(unsigned int)arg0 ;
-(void)pauseUpdate;
-(void)postAnalyticsOptInNotificationForRegion:(id)arg0 ;
-(void)postENOffNotification;
-(void)postExposureNotification:(id)arg0 ;
-(void)postExposureSummaryAccessNotificationWithAppBundleIdentifier:(id)arg0 string:(id)arg1 ;
-(void)postGeneralNotificationWithTitle:(id)arg0 message:(id)arg1 ;
-(void)postMonthlySummaryNotificationForAppBundleIdentifier:(id)arg0 ;
-(void)postOnboardingNotificationForRegion:(id)arg0 ;
-(void)postPreAuthorizationNotificationForRegion:(id)arg0 ;
-(void)postTestVerificationReceivedNotification:(id)arg0 region:(id)arg1 reportType:(unsigned int)arg2 ;
-(void)prefsChanged;
// -(void)presentBuddyForRegion:(id)arg0 errorHandler:(id)arg1 completionHandler:(unk)arg2  ;
-(void)remoteAlertHandle:(id)arg0 didInvalidateWithError:(id)arg1 ;
-(void)remoteAlertHandleDidActivate:(id)arg0 ;
-(void)remoteAlertHandleDidDeactivate:(id)arg0 ;
-(void)startAvailabilityAlertCycleWithBuddy:(BOOL)arg0 ;
-(void)startServerConfigurationFetchForRegion:(id)arg0 ;
-(void)tearDownAlertHandle;
-(void)textMessageManager:(id)arg0 errorDetected:(unsigned int)arg1 ;
-(void)updateExistingConsentForPhase1ActiveRegion:(NSInteger)arg0 ;
-(void)userNotificationCenter:(id)arg0 didReceiveNotificationResponse:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)xpcConnectionInvalidated:(id)arg0 ;
-(void)xpcPreAuthorizedDiagnosisKeysAvailable;
-(void)xpcReportStatus;


@end


#endif