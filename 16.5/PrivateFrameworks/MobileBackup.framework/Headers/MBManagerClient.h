// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MBMANAGERCLIENT_H
#define MBMANAGERCLIENT_H

@class NSString;
@protocol MBConnectionDelegate, OS_dispatch_queue, OS_dispatch_source, OS_dispatch_group;


#import "MBManager.h"
#import "MBCellularDataSubscriptionMonitor.h"
#import "MBConnection.h"

@interface MBManagerClient : MBManager <MBConnectionDelegate>

 {
    NSObject<OS_dispatch_queue> *_eventQueue;
    int _iTunesRestoreStartedNotificationToken;
    int _iTunesRestoreEndedNotificationToken;
    BOOL _iTunesRestoreStarted;
    int _enabledToken;
    NSObject<OS_dispatch_source> *_timer;
    NSString *_personaIdentifier;
}


@property (retain, nonatomic) MBCellularDataSubscriptionMonitor *cellularDataSubscriptionMonitor; // ivar: _cellularDataSubscriptionMonitor
@property (retain) MBConnection *connection; // ivar: _connection
@property (retain) NSObject<OS_dispatch_group> *initialBackupOnCellularSupportGroup; // ivar: _initialBackupOnCellularSupportGroup
@property (nonatomic) BOOL shouldSupportiTunes; // ivar: _shouldSupportiTunes


-(BOOL)_isBackupAgent2Running;
-(BOOL)_restoreApplicationWithBundleID:(id)arg0 failed:(BOOL)arg1 qos:(id)arg2 context:(id)arg3 error:(*id)arg4 ;
-(BOOL)acquireLockWithBackupUDID:(id)arg0 owner:(id)arg1 timeout:(CGFloat)arg2 error:(*id)arg3 ;
-(BOOL)addFileToBackupUDID:(id)arg0 snapshotID:(NSUInteger)arg1 domainName:(id)arg2 relativePath:(id)arg3 fromPath:(id)arg4 error:(*id)arg5 ;
-(BOOL)airTrafficShouldCreateAppPlaceholdersWithError:(*id)arg0 ;
-(BOOL)allowiTunesBackup;
-(BOOL)archiveLogsTo:(id)arg0 error:(*id)arg1 ;
-(BOOL)cancelApplicationRestoreWithBundleID:(id)arg0 error:(*id)arg1 ;
-(BOOL)cancelDeviceTransferWithTaskType:(NSInteger)arg0 error:(*id)arg1 ;
-(BOOL)clearAllPendingFollowUpsWithError:(*id)arg0 ;
-(BOOL)countCameraRollQuota;
-(BOOL)countCameraRollQuotaForBackupUDID:(id)arg0 error:(*id)arg1 ;
-(BOOL)deleteAccountWithError:(*id)arg0 ;
-(BOOL)deleteBackupUDID:(id)arg0 error:(*id)arg1 ;
-(BOOL)deleteItemFromBackupUDID:(id)arg0 snapshotID:(NSUInteger)arg1 domainName:(id)arg2 relativePath:(id)arg3 error:(*id)arg4 ;
-(BOOL)deleteSnapshotID:(NSUInteger)arg0 fromBackupUDID:(id)arg1 error:(*id)arg2 ;
-(BOOL)discountCameraRollQuota;
-(BOOL)discountCameraRollQuotaForBackupUDID:(id)arg0 error:(*id)arg1 ;
-(BOOL)exitMegaBackupMode:(*id)arg0 ;
-(BOOL)extractItemFromBackupUDID:(id)arg0 snapshotID:(NSUInteger)arg1 domainName:(id)arg2 relativePath:(id)arg3 toPath:(id)arg4 error:(*id)arg5 ;
-(BOOL)inheritSnapshot:(id)arg0 fromDevice:(id)arg1 error:(*id)arg2 ;
-(BOOL)isBackupEnabled;
-(BOOL)isBackupEnabledForDomainName:(id)arg0 ;
-(BOOL)isBackupOnCellularAllowedWithAccount:(id)arg0 error:(*id)arg1 ;
-(BOOL)isBackupOnCellularEnabledWithError:(*id)arg0 ;
-(BOOL)isInitialMegaBackupCompleted:(*id)arg0 ;
-(BOOL)isLocalBackupPasswordSetWithError:(*id)arg0 ;
-(BOOL)isManualBackupOnCellularAllowedWithAccount:(id)arg0 error:(*id)arg1 ;
-(BOOL)logPrebuddyFlowTelemetry:(NSInteger)arg0 error:(*id)arg1 ;
-(BOOL)mergeSnapshots:(id)arg0 backupUUID:(id)arg1 error:(*id)arg2 ;
-(BOOL)pinSnapshotID:(NSUInteger)arg0 backupUDID:(id)arg1 error:(*id)arg2 ;
-(BOOL)postFollowUpForBackgroundRestoreProgress:(id)arg0 error:(*id)arg1 ;
-(BOOL)postFollowUpForDrySpellWithDuration:(CGFloat)arg0 firstBackup:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)postFollowUpForRestoreFailedWithDomainNames:(id)arg0 error:(*id)arg1 ;
-(BOOL)postFollowUpForRestoreFinishedWithError:(*id)arg0 ;
-(BOOL)postFollowUpForRestoreTimeoutWithError:(*id)arg0 ;
-(BOOL)prepareForBackgroundRestoreWithError:(*id)arg0 ;
-(BOOL)recordRestoreFailure:(id)arg0 error:(*id)arg1 ;
-(BOOL)releaseLockWithBackupUDID:(id)arg0 owner:(id)arg1 error:(*id)arg2 ;
-(BOOL)removeDomainName:(id)arg0 error:(*id)arg1 ;
-(BOOL)requestMegaBackupExpirationDate:(id)arg0 error:(*id)arg1 ;
-(BOOL)restoreApplicationWithBundleID:(id)arg0 failed:(BOOL)arg1 context:(id)arg2 error:(*id)arg3 ;
-(BOOL)restoreApplicationWithBundleID:(id)arg0 failed:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)restoreApplicationWithBundleID:(id)arg0 failed:(BOOL)arg1 withQOS:(NSInteger)arg2 context:(id)arg3 error:(*id)arg4 ;
-(BOOL)restoreBookWithPath:(id)arg0 context:(id)arg1 error:(*id)arg2 ;
-(BOOL)restoreBookWithPath:(id)arg0 error:(*id)arg1 ;
-(BOOL)restoreDataExistsForApplicationWithBundleID:(id)arg0 size:(*NSUInteger)arg1 ;
-(BOOL)restoreFileExistsWithPath:(id)arg0 ;
-(BOOL)restoreFileWithPath:(id)arg0 context:(id)arg1 error:(*id)arg2 ;
-(BOOL)restoreFileWithPath:(id)arg0 error:(*id)arg1 ;
-(BOOL)restoreFilesForDomain:(id)arg0 relativePath:(id)arg1 pendingOnly:(BOOL)arg2 range:(struct _NSRange )arg3 error:(*id)arg4 progress:(id)arg5 ;
-(BOOL)restoreFilesWithPaths:(id)arg0 context:(id)arg1 error:(*id)arg2 ;
-(BOOL)restoreFilesWithPaths:(id)arg0 error:(*id)arg1 ;
-(BOOL)restorePreviousSettingsEnabledForMegaBackup:(*id)arg0 ;
-(BOOL)restoreSupportsBatching;
-(BOOL)resumeDeviceTransferWithTaskType:(NSInteger)arg0 error:(*id)arg1 ;
-(BOOL)saveKeybagsForBackupUDID:(id)arg0 withError:(*id)arg1 ;
-(BOOL)setBackupOnCellularEnabled:(BOOL)arg0 error:(*id)arg1 ;
-(BOOL)setEntryPointForMegaBackupTelemetry:(NSInteger)arg0 error:(*id)arg1 ;
-(BOOL)setMegaBackupTurnOnAllAppsSyncTelemetry:(BOOL)arg0 error:(*id)arg1 ;
-(BOOL)setMegaBackupTurnOniCloudBackupTelemetry:(BOOL)arg0 error:(*id)arg1 ;
-(BOOL)setPrebuddyUIDeltaTelemetry:(id)arg0 date:(id)arg1 error:(*id)arg2 ;
-(BOOL)setupBackupWithPasscode:(id)arg0 error:(*id)arg1 ;
-(BOOL)startBackupWithError:(*id)arg0 ;
-(BOOL)startBackupWithOptions:(id)arg0 error:(*id)arg1 ;
-(BOOL)startDeviceTransferWithTaskType:(NSInteger)arg0 sessionInfo:(id)arg1 error:(*id)arg2 ;
-(BOOL)startRestoreForBackupUDID:(id)arg0 snapshotID:(NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)startScanForBundleIDs:(id)arg0 error:(*id)arg1 ;
-(BOOL)startScanWithError:(*id)arg0 ;
-(BOOL)unpinSnapshotID:(NSUInteger)arg0 backupUDID:(id)arg1 error:(*id)arg2 ;
-(BOOL)unsetLocalBackupPasswordWithError:(*id)arg0 ;
-(BOOL)updateMegaBackupExpirationDate:(id)arg0 error:(*id)arg1 ;
-(BOOL)wasBackupEnabledForMegaBackup:(*id)arg0 ;
-(NSUInteger)_backupOnCellularSupport;
-(NSUInteger)backupOnCellularSupportWithAccount:(id)arg0 error:(*id)arg1 ;
-(NSUInteger)countOfRestoreFailuresForDataclass:(id)arg0 assetType:(id)arg1 ;
-(NSUInteger)nextBackupSize;
-(id)_makeConnection;
-(id)_sendRequest:(id)arg0 arguments:(id)arg1 ;
-(id)_sendRequest:(id)arg0 arguments:(id)arg1 error:(*id)arg2 ;
-(id)backgroundRestoreCellularAccessWithError:(*id)arg0 ;
-(id)backgroundRestoreInfo;
-(id)backupDeviceUUID;
-(id)backupState;
-(id)dateOfLastBackup;
-(id)dateOfLastBackupWithError:(*id)arg0 ;
-(id)dateOfNextScheduledBackup;
-(id)dateOfNextScheduledBackupWithError:(*id)arg0 ;
-(id)deviceLockInfosWithError:(*id)arg0 ;
-(id)disabledDomainInfos;
-(id)domainInfoForName:(id)arg0 ;
-(id)domainInfoList;
-(id)filesForSnapshotID:(NSUInteger)arg0 backupUDID:(id)arg1 error:(*id)arg2 ;
-(id)getAppleIDsForBackupUDID:(id)arg0 snapshotID:(NSUInteger)arg1 activeAppleID:(*id)arg2 error:(*id)arg3 ;
-(id)getAppleIDsForBackupUDID:(id)arg0 snapshotID:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)getAppleIDsMapForBackupUDID:(id)arg0 snapshotID:(NSUInteger)arg1 activeAppleID:(*id)arg2 error:(*id)arg3 ;
-(id)getBackupListWithError:(*id)arg0 ;
-(id)getBackupListWithFiltering:(BOOL)arg0 error:(*id)arg1 ;
-(id)getBuddyDataStashForBackupUDID:(id)arg0 snapshotID:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)initWithAccount:(id)arg0 delegate:(id)arg1 eventQueue:(id)arg2 ;
-(id)initWithDelegate:(id)arg0 eventQueue:(id)arg1 ;
-(id)initWithDelegate:(id)arg0 eventQueue:(id)arg1 personaIdentifier:(id)arg2 ;
-(id)journalForBackupUUID:(id)arg0 error:(*id)arg1 ;
-(id)journalLastModifiedForBackupUUID:(id)arg0 error:(*id)arg1 ;
-(id)nextBackupSizeInfo;
-(id)personalPersonaIdentifier;
-(id)reservedBackupSizeListWithError:(*id)arg0 ;
-(id)restoreFailuresForDataclass:(id)arg0 assetType:(id)arg1 range:(struct _NSRange )arg2 ;
-(id)restoreFilesForDomain:(id)arg0 relativePath:(id)arg1 pendingOnly:(BOOL)arg2 range:(struct _NSRange )arg3 error:(*id)arg4 ;
-(id)restoreInfo;
-(id)restoreState;
-(id)restoreStateWithError:(*id)arg0 ;
-(void)accountChanged:(id)arg0 ;
-(void)boostBackgroundRestoreWithCompletionHandler:(id)arg0 ;
-(void)cancel;
-(void)cancelRestore;
-(void)clearRestoreSession;
-(void)connection:(id)arg0 didReceiveMessage:(id)arg1 ;
-(void)connectionWasInterrupted:(id)arg0 ;
-(void)connectionWasInvalidated:(id)arg0 ;
-(void)dealloc;
-(void)fetchAppBundleIDsForSnapshot:(id)arg0 completion:(id)arg1 ;
-(void)fetchBackgroundRestoreCellularAccessWithCompletion:(id)arg0 ;
-(void)fetchRestorableSnapshotsWithCompletion:(id)arg0 ;
-(void)fetchiCloudRestoreIsCompleteWithCompletion:(id)arg0 ;
-(void)finishRestore;
-(void)insufficientFreeSpaceToRestore;
-(void)keyBagIsLocking;
-(void)keyBagIsUnlocked;
-(void)prioritizeRestoreFileWithPath:(id)arg0 ;
-(void)rebootDevice;
-(void)repair;
-(void)saveBackgroundRestoreCellularAccess:(id)arg0 completion:(id)arg1 ;
-(void)saveBackupDomainsEnabledForMegaBackup:(id)arg0 ;
-(void)saveBackupEnabledForMegaBackup;
-(void)saveSyncSettingsEnabledForMegaBackup:(id)arg0 ;
-(void)setAllowiTunesBackup:(BOOL)arg0 ;
-(void)setBackupEnabled:(BOOL)arg0 ;
-(void)setBackupEnabled:(BOOL)arg0 forDomainName:(id)arg1 ;
-(void)setRestoreQualityOfService:(NSInteger)arg0 ;
-(void)setRestoreSessionWithBackupUDID:(id)arg0 snapshotUUID:(id)arg1 ;
-(void)setSupportsiTunes:(BOOL)arg0 ;
-(void)startDataTransferWithPreflightInfo:(id)arg0 completionHandler:(id)arg1 ;
-(void)startKeychainDataImportWithKeychainInfo:(id)arg0 completionHandler:(id)arg1 ;
-(void)startKeychainDataTransferWithCompletionHandler:(id)arg0 ;
-(void)startKeychainTransferWithCompletionHandler:(id)arg0 ;
-(void)startPreflightWithCompletionHandler:(id)arg0 ;
-(void)startRestoreForBackupUDID:(id)arg0 snapshotID:(NSUInteger)arg1 options:(id)arg2 completion:(id)arg3 ;
-(void)startRestoreForSnapshot:(id)arg0 options:(id)arg1 completion:(id)arg2 ;
-(void)startWatchingBackupAgent2;
-(void)syncBackupEnabled;
-(void)wakeUp;


@end


#endif