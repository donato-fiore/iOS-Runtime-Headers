// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IMCLOUDKITHOOKS_H
#define IMCLOUDKITHOOKS_H


#import <Foundation/Foundation.h>


@interface IMCloudKitHooks : NSObject



+(id)__singleton__im;
+(id)logHandle;
+(id)sharedInstance;
+(void)__setSingleton__im:(id)arg0 ;
-(BOOL)eligibleForTruthZone;
-(BOOL)isDisablingDevices;
-(BOOL)isEnabled;
-(BOOL)isInExitState;
-(BOOL)isStartingSync;
-(BOOL)isSyncing;
-(BOOL)mocAccountsMatch;
-(BOOL)rampedIntoTruthZone;
-(BOOL)removedFromiCloudBackup;
-(BOOL)shouldOptimizeAttachmentStorage;
-(BOOL)shouldShowCloudKitUI;
-(NSInteger)isChangingEnabledState;
-(id)exitDate;
-(id)init;
-(id)lastSyncDate;
-(id)logHandle;
-(id)syncStateDictionary;
-(void)_didAttemptToDisableAllDevicesResult:(BOOL)arg0 ;
-(void)_didAttemptToSetEnabledTo:(BOOL)arg0 result:(BOOL)arg1 ;
-(void)_didPerformAdditionalStorageRequiredCheckWithSuccess:(BOOL)arg0 additionalStorageRequired:(NSUInteger)arg1 forAccountId:(id)arg2 error:(id)arg3 ;
-(void)_updateCloudKitState;
-(void)_updateCloudKitStateWithDictionary:(id)arg0 ;
-(void)broadcastCloudKitState;
-(void)broadcastCloudKitStateAfterClearingErrors;
-(void)broadcastCloudKitStateAfterFetchingAccountStatus;
-(void)clearAnalyticDefaultsAndLocalSyncState;
-(void)clearChatZoneSyncToken;
-(void)clearDataFromCloudKit;
-(void)clearLocalSyncState;
-(void)clearTombStoneMessagesTable;
-(void)createAttachmentZone;
-(void)createChatZone;
-(void)deleteAttachmentZone;
-(void)deleteChatZone;
-(void)deleteExitRecord;
-(void)deleteMessagesZone;
-(void)deleteSalt;
-(void)downloadAttachmentAssets;
-(void)fetchAccountStatusAndUpdateMiCSwitchEligibility;
-(void)fetchCloudKitSyncStateDebuggingInfo:(id)arg0 ;
-(void)fetchExitRecord;
-(void)fetchLatestRampState;
-(void)fetchLatestSalt;
-(void)fetchSyncStateStatistics;
-(void)initiatePeriodicSync;
-(void)initiateSync;
-(void)loadDeletedMessagesWithLimit:(NSInteger)arg0 ;
-(void)loadDirtyMessagesWithLimit:(NSInteger)arg0 ;
-(void)markAllChatsAsDirty;
-(void)metricAttachments:(NSInteger)arg0 ;
-(void)performAdditionalStorageRequiredCheck;
-(void)printCachedRampState;
-(void)printCachedSalt;
-(void)purgeAttachments:(NSInteger)arg0 ;
-(void)removePathFromiCloudBackups:(id)arg0 ;
-(void)reportMetricToCK:(id)arg0 ;
-(void)reportMetricToCK:(id)arg0 withDict:(id)arg1 ;
-(void)reportMetricToCK:(id)arg0 withSuccess:(BOOL)arg1 ;
-(void)sendRestoreFailuresLogDumps;
-(void)setEnabled:(BOOL)arg0 ;
-(void)setShouldOptimizeAttachmentStorage:(BOOL)arg0 ;
-(void)setiCloudBackupsDisabled:(BOOL)arg0 ;
-(void)setupIMCloudKitHooks;
-(void)syncAttachments;
-(void)syncChats;
-(void)syncDeletesToCloudKit;
-(void)syncMessages;
-(void)toggleiCloudBackupsIfNeeded;
-(void)tryToAutoCollectLogsWithErrorString:(id)arg0 sendLogsTo:(id)arg1 ;
-(void)tryToDisableAllDevices;
-(void)updateAttachmentFileSizes;
-(void)uploadDailyAnalyticstoCloudKit;
-(void)writeAttachments;
-(void)writeCloudKitSyncCounts:(id)arg0 ;
-(void)writeDirtyChats;
-(void)writeDirtyMessages;
-(void)writeExitRecord;


@end


#endif