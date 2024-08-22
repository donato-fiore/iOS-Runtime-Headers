// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IMDCKUTILITIES_H
#define IMDCKUTILITIES_H

@class NSString, FTDeviceSupport, IMDefaults, IMLockdownManager, IDSServerBag;
@protocol IMDCKSyncStateDelegate;

#import <Foundation/Foundation.h>

#import "IMDCKSyncState.h"

@interface IMDCKUtilities : NSObject <IMDCKSyncStateDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isDeviceCharging) BOOL deviceCharging;
@property (readonly, nonatomic, getter=isDeviceOnWifi) BOOL deviceOnWifi;
@property (retain, nonatomic) FTDeviceSupport *deviceSupport; // ivar: _deviceSupport
@property (nonatomic) BOOL didKeyRollPendingCheck; // ivar: _didKeyRollPendingCheck
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) IMDefaults *imDefaults; // ivar: _imDefaults
@property (readonly, nonatomic) BOOL isInCloudKitDemoMode;
@property (readonly, nonatomic) BOOL isSyncingPaused;
@property (readonly, nonatomic, getter=isKeyRollPending) BOOL keyRollPending;
@property (retain, nonatomic) IMLockdownManager *lockdownManager; // ivar: _lockdownManager
@property (retain, nonatomic) IDSServerBag *serverBag; // ivar: _serverBag
@property (readonly) Class superclass;
@property (readonly, nonatomic) IMDCKSyncState *syncState; // ivar: _syncState
@property (nonatomic) BOOL useDeprecatedApi; // ivar: _useDeprecatedApi


+(id)_idsAccountController;
+(id)calculateAliasesForDefaults;
+(id)im_AKSecurityLevelKey;
+(id)logHandle;
+(id)readAliasesFromDefaults;
+(id)restoreFailuresDirectory;
+(id)sharedInstance;
+(void)addConditionChecks:(NSUInteger)arg0 toCriteria:(id)arg1 ;
+(void)calculateAndSaveAliasesToDefaults;
-(BOOL)_accountNeedsRepairOverride;
-(BOOL)_allowDestructiveMOCFeaturesBasedOnDSID;
-(BOOL)_checkEligibilityWithAccountInfo:(id)arg0 ;
-(BOOL)_checkIfEnabledByServerBagOrDefault:(id)arg0 ;
-(BOOL)_deviceActive;
-(BOOL)_isInExitState;
-(BOOL)_isLogDumpAllowed;
-(BOOL)_isRunningInAutomation;
-(BOOL)_mocFeatureEnabled;
-(BOOL)_serverAllowsCacheDelete;
-(BOOL)_serverAllowsRemovalFromBackUp;
-(BOOL)_serverAllowsSync;
-(BOOL)_shouldDisplayPopUpForResettingKeepMessages;
-(BOOL)_shouldiCloudSwitchBeEnabled;
-(BOOL)accountIsVerifiedForMOCAndSafeForCacheDelete;
-(BOOL)cacheDeleteEnabled;
-(BOOL)cloudKitSyncDownloadAssetsOnly;
-(BOOL)cloudKitSyncingEnabled;
-(BOOL)deviceConditionsAllowPeriodicSync;
-(BOOL)enableAttachmentMetricCollection;
-(BOOL)iCloudAccountMatchesiMessageAccount;
-(BOOL)isCKPartialError:(id)arg0 ;
-(BOOL)isLocalCachedSaltPresent;
-(BOOL)logDumpIsExpected;
-(BOOL)logDumpIsNecessaryAfterSync;
-(BOOL)removeFromBackUpAllowed;
-(BOOL)serverAllowsAnalyticDetailsSubmission;
-(BOOL)serverAllowsAnalyticSubmission;
-(BOOL)serverAllowsMetricSubmission;
-(BOOL)shouldCollectDailyLogDump;
-(BOOL)shouldCollectDailyLogDumpForRestoreFailures;
-(BOOL)shouldForceArchivedMessagesSync;
-(BOOL)shouldKickOffWriteForSyncType:(NSInteger)arg0 ;
-(BOOL)shouldLogDumpOnCloudKitError;
-(BOOL)shouldPresentTTROnCloudKitError;
-(BOOL)shouldRepairAccountWithAccountStatus:(NSInteger)arg0 securityLevel:(NSUInteger)arg1 ;
-(BOOL)shouldUseDevContainer;
-(BOOL)shouldUseDevNickNameContainer;
-(BOOL)signedIntoiCloudAndiMessageAndiCloudAccountMatchesiMessageAccount;
-(NSInteger)_mininimumServerBagClientValue;
-(NSInteger)overrideNumberOfChatsToFetch;
-(NSInteger)overrideNumberOfChatsToWrite;
-(NSUInteger)_primaryiCloudAccountSecurityLevel;
-(NSUInteger)messageDatabaseSize;
-(id)_accountManager;
-(id)_accountStore;
-(id)_authenticationController;
-(id)_createAccountError:(id)arg0 ;
-(id)_getKeepMessagesValue;
-(id)_personIdFromAccount:(id)arg0 ;
-(id)_primaryiCloudAccount;
-(id)_primaryiCloudAccountAltDSID;
-(id)_truthContainer;
-(id)_truthDatabase;
-(id)backupController;
-(id)ckStatisticCalculations;
-(id)deviceActiveString;
-(id)deviceConditions;
-(id)dsid;
-(id)exitManager;
-(id)extractServerRecordFromCKServerErrorRecordChanged:(id)arg0 ;
-(id)finalSyncStateFor:(NSInteger)arg0 ;
-(id)findRootCauses:(id)arg0 ;
-(id)init;
-(id)initWithServerBag:(id)arg0 lockDownmanager:(id)arg1 deviceSupport:(id)arg2 imDefaults:(id)arg3 ;
-(id)internalQueue;
-(id)lastDeviceBackUpDate;
-(id)logCollectorAddress;
-(id)logHandle;
-(id)newfilteredArrayRemovingCKRecordDupes:(id)arg0 ;
-(id)newfilteredArrayRemovingCKRecordIDDupes:(id)arg0 ;
-(id)recordNameForMessageWithGUID:(id)arg0 usingSalt:(id)arg1 ;
-(id)simplifiedError:(id)arg0 ;
-(id)syncFailureMetricString:(id)arg0 isRecoverable:(BOOL)arg1 error:(id)arg2 ;
-(unsigned int)PCSReportManateeStatus;
// -(void)PCSReportManateeStatusAsync:(id)arg0 timeout:(unk)arg1  ;
-(void)_askToTapToRadarWithString:(id)arg0 internalOnly:(BOOL)arg1 ;
-(void)_fetchPrimaryAccountWithCompletion:(id)arg0 ;
-(void)_resetKeepMessagesSettingandBroadcastToAllDevices;
-(void)_setEligibleToToggleMiCSwitch:(BOOL)arg0 ;
-(void)_setiCloudSettingsSwitchEnabled:(BOOL)arg0 ;
-(void)_showCKLogNotificationWithCompletion:(id)arg0 ;
-(void)broadcastCloudKitState;
-(void)broadcastCloudKitStateAfterClearingErrors;
-(void)broadcastCloudKitStateAfterFetchingAccountStatus;
-(void)checkCloudkitEnabledStatusAndToggleiCloudSwitchIfNeeded;
-(void)checkiCloudQuota:(id)arg0 ;
-(void)disableAllDevicesWithCompletion:(id)arg0 ;
-(void)downgradingFromHSA2AndDisablingMOC;
-(void)eligibleForTruthZoneWithCompletion:(id)arg0 ;
-(void)enableMOCIfNeeded;
-(void)evalToggleiCloudSettingsSwitch;
-(void)fetchAccountStatusAndUpdateMiCSwitchEligibility;
-(void)fetchAccountStatusAndUpdateMiCSwitchEligibilityIfNeededOnImagentLaunch;
-(void)fetchCloudKitAccountStatusAndUpdateEligibilityAndNeedsRepairStatusWithCompletion:(id)arg0 ;
-(void)fetchCloudKitAccountStatusWithCompletion:(id)arg0 ;
-(void)fetchiCloudAccountPersonID:(id)arg0 ;
-(void)isFirstSyncWithCompletion:(id)arg0 ;
-(void)keyRollPendingStateDidChange;
-(void)logCloudKitSyncToPowerLogForSyncType:(NSInteger)arg0 isCoreDuetSync:(BOOL)arg1 didCompleteChatSync:(BOOL)arg2 didSucceedSyncingChats:(BOOL)arg3 didCompleteMessageSync:(BOOL)arg4 didSucceedSyncingMessages:(BOOL)arg5 didCompleteAttachmentSync:(BOOL)arg6 didSucceedSyncingAttachments:(BOOL)arg7 syncAttemptCount:(NSUInteger)arg8 ;
-(void)logCloudKitSyncToPowerLogForSyncType:(NSInteger)arg0 isCoreDuetSync:(BOOL)arg1 didStartSync:(BOOL)arg2 didFinishSync:(BOOL)arg3 didSucceedSyncing:(BOOL)arg4 ;
-(void)logDumpAndSendMessageTo:(id)arg0 forHours:(int)arg1 reason:(id)arg2 ;
-(void)logDumpAndSendMessageTo:(id)arg0 forHours:(int)arg1 reason:(id)arg2 isInitialSync:(BOOL)arg3 requirePreviousPrompt:(BOOL)arg4 willSendBlock:(id)arg5 ;
-(void)logDumpAndSendMessageTo:(id)arg0 forHours:(int)arg1 reason:(id)arg2 requirePreviousPrompt:(BOOL)arg3 willSendBlock:(id)arg4 ;
-(void)logToPowerLogForLogDumpGUID:(id)arg0 logDumpCompleted:(BOOL)arg1 logDumpSucceeded:(BOOL)arg2 logDumpSendingCompleted:(BOOL)arg3 logDumpSendingSucceeded:(BOOL)arg4 reason:(id)arg5 ;
-(void)postSyncStateToCloudKit:(id)arg0 ;
-(void)primaryAccountHasiCloudBackupEnabledWithCompletion:(id)arg0 ;
-(void)reportCompletionForSyncType:(NSInteger)arg0 isCoreDuetSync:(BOOL)arg1 onAttempt:(NSUInteger)arg2 wasSuccessful:(BOOL)arg3 duration:(CGFloat)arg4 ;
-(void)reportErrorForSyncType:(NSInteger)arg0 syncStep:(id)arg1 response:(NSInteger)arg2 error:(id)arg3 ;
-(void)reportMOCDebuggingErrorWithString:(id)arg0 internalOnly:(BOOL)arg1 ;
-(void)reportMOCDebuggingErrorWithString:(id)arg0 internalOnly:(BOOL)arg1 initialSync:(BOOL)arg2 ;
-(void)reportMOCDebuggingErrorWithString:(id)arg0 internalOnly:(BOOL)arg1 initialSync:(BOOL)arg2 sendToHandle:(id)arg3 ;
-(void)reportMOCDebuggingErrorWithString:(id)arg0 internalOnly:(BOOL)arg1 initialSync:(BOOL)arg2 sendToHandle:(id)arg3 reasonString:(id)arg4 ;
-(void)reportZoneCreation:(id)arg0 ;
-(void)resetLastSyncDate;
-(void)setCloudKitSyncingEnabled:(BOOL)arg0 ;
-(void)syncStateWillUpdate:(id)arg0 ;


@end


#endif