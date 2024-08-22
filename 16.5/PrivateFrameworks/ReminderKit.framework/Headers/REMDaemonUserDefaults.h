// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef REMDAEMONUSERDEFAULTS_H
#define REMDAEMONUSERDEFAULTS_H

@class NSString, NSArray, NSData, NSNumber, NSDate, NSDictionary, NSURL, NSDateComponents;


#import "REMUserDefaults.h"
#import "REMObjectID.h"

@interface REMDaemonUserDefaults : REMUserDefaults

@property (retain, nonatomic) NSString *acAccountIdentifierToMergeLocalDataIntoSyncData;
@property (retain, nonatomic) NSArray *acAccountIdentifiersToMigrateInactivatedCalDavData;
@property (copy, nonatomic) NSData *accountsListCategorizedCountsCache;
@property (retain, nonatomic) NSNumber *cloudKitMaxNumAlarmIDsInReminderCKRecordDebugOverride;
@property (retain, nonatomic) NSString *cloudKitMergeLocalLastBuildVersionMaxRetryReached;
@property (retain, nonatomic) NSDate *cloudKitMergeLocalLastDateMaxRetryReached;
@property (retain, nonatomic) NSNumber *cloudKitMigrationDelayAfterError;
@property (nonatomic) BOOL cloudKitMigrationDisableCleanUp;
@property (retain, nonatomic) NSNumber *cloudKitMigrationMaxNumFailures;
@property (retain, nonatomic) NSNumber *cloudKitMigrationMaxNumInvocations;
@property (retain, nonatomic) NSNumber *cloudKitMigrationObserverPollingInterval;
@property (retain, nonatomic) NSNumber *cloudKitMigrationSimulatedError;
@property (retain, nonatomic) NSNumber *cloudKitResultsLimitPerSyncOperation;
@property (retain, nonatomic) NSDate *cloudKitSchemaCatchUpSyncLastScheduledDate;
@property (retain, nonatomic) NSString *cloudKitSchemaCatchUpSyncLastSuccessBuildVersion;
@property (retain, nonatomic) NSDate *cloudKitSchemaCatchUpSyncLastSuccessDate;
@property (retain, nonatomic) NSNumber *cloudKitSchemaCatchUpSyncSchedulingState;
@property (readonly, nonatomic) BOOL dataaccessDaemonStopSyncingReminders;
@property (nonatomic) BOOL databaseMigrationTestModeEnabled;
@property (nonatomic) BOOL databaseMigrationTimedOut;
@property (nonatomic) BOOL debugForceSupportCloudKitSchemaCatchUpSyncBackgroundScheduling;
@property (nonatomic) BOOL debugSimulateSqliteFull;
@property (nonatomic) BOOL didShowReminderDeletePrivacyWarning;
@property (nonatomic) BOOL disableAlarmEngineDataSourcePrefetching;
@property (nonatomic) BOOL enableAssignmentNotifications;
@property (readonly, nonatomic) BOOL enableAutoGenerateCKPersonIDSalt;
@property (nonatomic) BOOL enableHashingUserIdentifiablesWithPersonIDSalt;
@property (nonatomic) BOOL enableInAppDebugMenu;
@property (nonatomic) BOOL enableWelcomeScreen;
@property (nonatomic) BOOL extraneousAlarmsCollectorContainerDeemedClean;
@property (nonatomic) BOOL forceBasicAAAccountEligibleForCloudKitReminders;
@property (nonatomic) BOOL forceEligibleForAutoCloudKitMigration;
@property (nonatomic) BOOL forceShowWelcomeScreen;
@property (nonatomic) BOOL forceShowWhatsNewScreen;
@property (nonatomic) BOOL hasViewedContactsAccessAlertForCalDAVSharing;
@property (nonatomic) BOOL hasViewedContactsAccessAlertForLocation;
@property (nonatomic) BOOL hasViewedContactsAccessAlertForMessaging;
@property (copy, nonatomic) NSData *hashtagLabelsInCustomSmartListFilterCache;
@property (copy, nonatomic) NSDate *imageDeduplicationLastExecutionDate; // ivar: _imageDeduplicationLastExecutionDate
@property (copy, nonatomic) NSArray *imageDeduplicationLegacyAttachmentsMarkedForDeletion;
@property (nonatomic) BOOL isDatabaseMigrated;
@property (copy, nonatomic) NSDate *lastCloudConfigurationDownload;
@property (copy, nonatomic) NSString *lastDatabaseMigrationSystemBuildVersion;
@property (copy, nonatomic) NSDate *lastDismissedNotificationsPermissionInlineRequestDate;
@property (copy, nonatomic) NSDate *lastExtraneousAlarmsProcessedDate;
@property (copy, nonatomic) NSDate *lastPresentAlarmDate;
@property (copy, nonatomic) NSData *lastSuggestedAttributesAutoTrainingToken;
@property (copy, nonatomic) NSDate *lastSyncPoll;
@property (copy, nonatomic) NSDate *lastViewedNotificationsPermissionWarmingSheetDate;
@property (copy, nonatomic) NSDictionary *muteNotificationForSharedList;
@property (readonly, nonatomic) BOOL newAppShouldTakeoverEKReminderNotifications;
@property (copy, nonatomic) NSDate *nextScheduledAlarmDate;
@property (retain, nonatomic) REMObjectID *preferredDefaultListID;
@property (retain, nonatomic) NSURL *preferredDefaultListObjectIDUrl;
@property (retain, nonatomic) NSNumber *remCurrentRuntimeVersionDebuggingOverride;
@property (nonatomic) BOOL sharedListActivityNotifications_demoMode;
@property (nonatomic) BOOL shouldIncludeRemindersDueTodayInBadgeCount;
@property (nonatomic) BOOL showRemindersAsOverdue;
@property (nonatomic) BOOL simulateMAIDAccount;
@property (readonly, nonatomic) BOOL siriShouldRouteIntentsToNewRemindersApp;
@property (copy, nonatomic) NSNumber *spotlightIndexVersion;
@property (nonatomic) BOOL staledFileAttachmentCleanupContainerDeemedClean;
@property (copy, nonatomic) NSDate *staledFileAttachmentCleanupLastExecutionDate;
@property (copy, nonatomic) NSDictionary *suggestedAttributesHarvestingOverrides;
@property (copy, nonatomic) NSDictionary *suggestedAttributesTrainingOverrides;
@property (copy, nonatomic) NSDictionary *syncActivityNotificationEngine_accountSignInTime;
@property (retain, nonatomic) NSNumber *tipKitCachedCountOfCustomSmartLists;
@property (retain, nonatomic) NSNumber *tipKitCachedCountOfHashtags;
@property (retain, nonatomic) NSNumber *tipKitCachedCountOfLists;
@property (retain, nonatomic) NSNumber *tipKitCachedCountOfListsWithCustomBadge;
@property (retain, nonatomic) NSNumber *tipKitCachedCountOfUncompletedReminders;
@property (retain, nonatomic) NSDateComponents *todayNotificationFireTime;
@property (nonatomic) BOOL useExtraneousAlarmBackOffThrottleInterval;
@property (copy, nonatomic) NSData *userInteractionsData;


+(id)defaultValues;
+(id)storageNumberForTodayNotificationTime:(id)arg0 ;
+(id)todayNotificationFireTimeFromStorageNumber:(id)arg0 ;
-(NSUInteger)muteNotificationOptionsForSharedList:(id)arg0 ;
-(id)_pptPreferredDefaultListIDKey;
-(id)initWithSuiteName:(id)arg0 containerURL:(id)arg1 ;
-(id)observePreferredDefaultListIDWithBlock:(id)arg0 ;
-(id)observeShowRemindersAsOverdueWithBlock:(id)arg0 ;
-(id)streamShouldIncludeRemindersDueTodayInBadgeCount:(id)arg0 ;
-(id)streamTodayNotificationFireTime:(id)arg0 ;
-(void)_deletePreferredDefaultListObjectIDUrl;
-(void)deletePreferredDefaultListID;
-(void)ppt_handleInstall;
-(void)ppt_handleRestore;
-(void)removeMuteNotificationOptionsForSharedList:(id)arg0 ;
-(void)setBestKForKNN:(id)arg0 ;
-(void)setCoreBehaviorTrainingParameters:(id)arg0 ;
-(void)setMuteNotificationOptions:(NSUInteger)arg0 forSharedList:(id)arg1 ;


@end


#endif