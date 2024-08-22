// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _ATXDATASTORE_H
#define _ATXDATASTORE_H

@class NSString, PETScalarEventTracker, _PASSqliteDatabase;
@protocol ATXBackupDataProviderDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "_ATXDuetHelper.h"

@interface _ATXDataStore : NSObject <ATXBackupDataProviderDelegate>

 {
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_path;
    NSUInteger _schemaVersion;
    _ATXDuetHelper *_duetHelper;
    PETScalarEventTracker *_dbMigrationTracker;
}


@property (nonatomic) NSUInteger actionHistoryLengthPerAppAction; // ivar: _actionHistoryLengthPerAppAction
@property (readonly, nonatomic) _PASSqliteDatabase *db; // ivar: _db
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)isSqliteData:(id)arg0 ;
+(BOOL)pareDownForBackup:(struct sqlite3 *)arg0 ;
+(id)defaultPath;
+(id)loadDataFromFile:(id)arg0 ;
+(id)removeSensitiveInformationFromModeEntityScoresFile:(id)arg0 shouldBackupContacts:(BOOL)arg1 ;
+(id)sharedInstance;
+(id)stringForHistogramType:(NSInteger)arg0 ;
+(void)_simulateCrashForMigrationFailure:(id)arg0 ;
-(BOOL)_removeActionsWithoutTitle;
-(BOOL)_reset;
-(BOOL)actionExistsForBundleId:(id)arg0 actionType:(id)arg1 ;
-(BOOL)alogContainsActionUUID:(id)arg0 ;
-(BOOL)checkIfInDB:(id)arg0 suggestionType:(NSInteger)arg1 ;
-(BOOL)containsActionType:(id)arg0 ;
-(BOOL)hasOrphanSlotSetKeys;
-(BOOL)migrationUpdateOrInsertTimestamp:(NSInteger)arg0 intoColumn:(id)arg1 forBundleId:(id)arg2 ;
-(BOOL)restoreFromBackup:(id)arg0 ;
-(BOOL)writeSlotSetKeyParameters:(id)arg0 rowId:(id)arg1 slotSet:(id)arg2 success:(*NSInteger)arg3 ;
-(NSInteger)_regenerateSlotSetKeyForBundleId:(id)arg0 ;
-(NSInteger)_regenerateSlotSetKeys;
-(NSInteger)configureDatabase;
-(NSInteger)currentSchemaVersion;
-(NSInteger)launchedAppCount;
-(NSInteger)migrateToVersion:(NSUInteger)arg0 withMigrationPlan:(id)arg1 ;
-(NSInteger)migration_AddEnterpriseAppInfo;
-(NSInteger)migration_AddExtensionInfo;
-(NSInteger)migration_AppLaunchHistogramToTable;
-(NSInteger)migration_DelinkFromCoreLocationVisitMonitoring;
-(NSInteger)migration_DeprecateGenericAppIntentModels;
-(NSInteger)migration_DeprecateIntentForAllAppsHistograms;
-(NSInteger)migration_InstallDateToAppTable;
-(NSInteger)migration_LaunchHistoriesToAppTable;
-(NSInteger)migration_PrefillActionHistograms;
-(NSInteger)migration_RemoveActionsWithoutTitle;
-(NSInteger)migration_RemoveAllSubsequentLaunches;
-(NSInteger)migration_RemoveCachedConsumerDB;
-(NSInteger)migration_RemoveDeprecatedStartCallIntents;
-(NSInteger)migration_RemoveRestoreUserDefault;
-(NSInteger)migration_SlotSetKeyCreation;
-(NSInteger)migration_SlotSetKeyRegeneration;
-(NSInteger)migration_deleteAllTrainedRelevanceModels;
-(NSInteger)migration_deleteFocusSpaceCaches;
-(NSInteger)migration_failForTests;
-(NSInteger)migration_forceUpdateNewAzulSystemAppsInstallDate;
-(NSInteger)migration_moveCacheFiles;
-(NSInteger)migration_overrideNilInstallDateToDistantOldTime;
-(NSInteger)migration_populateModeCaches;
-(NSInteger)migration_removeAnchorModelDirectory;
-(NSInteger)migration_removeBrokenBlendingStream;
-(NSInteger)migration_removeHomeScreenWidgetBlacklistFile;
-(NSInteger)migration_removeOldStackStateTrackerFile;
-(NSInteger)migration_updateNewAzulSystemAppsInstallDate;
-(NSInteger)runMigrationPlan:(id)arg0 ;
-(NSInteger)skipFromZeroSchema;
-(NSInteger)updateAlog:(id)arg0 slotsToMigrate:(id)arg1 ;
-(NSUInteger)numActionKeyOccurrencesForActionKey:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 ;
-(NSUInteger)numActionParameterHashOccurrencesForActionKey:(id)arg0 parameterHash:(NSUInteger)arg1 startDate:(id)arg2 endDate:(id)arg3 ;
-(id)_allAppsRequireInstallDate:(BOOL)arg0 ;
-(id)_appInfoForBundleIdNoSync:(id)arg0 ;
-(id)_databaseSchema;
-(id)_lastAppLaunchDateOfType:(NSInteger)arg0 ;
-(id)_trimMigrationPlan:(id)arg0 toSchema:(NSUInteger)arg1 ;
-(id)actionAndSlotsForRowId:(id)arg0 ;
-(id)actionForSlotUUID:(id)arg0 ;
-(id)actionLogKeys;
-(id)allActionsAndSlots;
-(id)allApps;
-(id)allAppsLaunchedOrInstalledWithin30Days;
-(id)allAppsWithInstallDate;
-(id)appInfoForBundleId:(id)arg0 ;
-(id)appIntentDuetEventsForActionsBetweenStartDate:(id)arg0 endDate:(id)arg1 ;
-(id)appLaunchSequence;
-(id)averageSecondsBetweenAppActionsForAppAction:(id)arg0 ;
-(id)blobOfType:(NSInteger)arg0 ;
-(id)categoricalHistogramDataForHistogramType:(NSInteger)arg0 ;
-(id)filenamesAndDataForBackupShouldPareDown:(BOOL)arg0 transport:(NSUInteger)arg1 ;
-(id)filenamesAndDataForBackupWithTransport:(NSUInteger)arg0 ;
-(id)getSuggestionResponsesAsStringInDB;
-(id)histogramDataForHistogramType:(NSInteger)arg0 ;
-(id)init;
-(id)initWithInMemoryDataStore;
-(id)initWithPath:(id)arg0 andDuetHelper:(id)arg1 ;
-(id)isEligibleForWidgetsForCacheKey:(id)arg0 ;
-(id)lastAppActionLaunchDateForAppAction:(id)arg0 ;
-(id)lastLaunchDate;
-(id)lastLaunchedApp;
-(id)lastMessageToRecipient:(id)arg0 ;
-(id)lastSpotlightLaunchDate;
-(id)loadAppActionInfo;
-(id)loadAppActionLaunchesFollowing:(id)arg0 ;
-(id)loadAppActionsFromAppActionInfo;
-(id)loadAppInfo;
-(id)loadLaunchesFollowingBundle:(id)arg0 ;
-(id)loadTopNAppActionsByPredictions:(NSUInteger)arg0 ;
-(id)medianSecondsBetweenAppActionsForAppAction:(id)arg0 ;
-(id)minimalActionParametersforActionsBetweenStartDate:(id)arg0 endDate:(id)arg1 limit:(NSUInteger)arg2 ;
-(id)nthMostRecentAppLaunch:(NSInteger)arg0 ;
-(id)numActionKeyOccurrencesBetweenStartDate:(id)arg0 endDate:(id)arg1 ;
-(id)subtitleForCacheKey:(id)arg0 ;
-(id)supportsBackgroundExecutionForCacheKey:(id)arg0 ;
-(id)titleForCacheKey:(id)arg0 ;
-(id)totalNumberOfActionTypesForBundleId:(id)arg0 ;
-(id)totalSlotsInDatastore;
-(id)validParameterCombinationsWithSchemaForCacheKey:(id)arg0 ;
-(id)webClipsForAppClipBundleId:(id)arg0 ;
-(struct _PASDBIterAction_ )_deserializeActionLogRowWithStmt:(id)arg0 invokingBlock:(id)arg1 ;
-(void)_disconnectFromDb;
-(void)_doAsync:(id)arg0 ;
-(void)_doSync:(id)arg0 ;
-(void)_enumerateAppInfoAppActionsExecutingBlock:(id)arg0 ;
-(void)_enumerateAppInfoBundlesExecutingBlock:(id)arg0 ;
-(void)_markBundleId:(id)arg0 asEnterpriseApp:(BOOL)arg1 ;
-(void)_markBundleIdAsExtension:(id)arg0 ;
-(void)_markBundleIdsAsExtension:(id)arg0 ;
-(void)_removeFeedbackForBundleId:(id)arg0 ;
-(void)_testMigrate;
-(void)_testMigrateToSchema:(NSUInteger)arg0 ;
-(void)addAppActionLaunchForAppAction:(id)arg0 date:(id)arg1 ;
-(void)addAppInstallForBundleId:(id)arg0 date:(id)arg1 genreId:(id)arg2 subGenreIds:(id)arg3 ;
-(void)addAppInstallForBundleId:(id)arg0 date:(id)arg1 genreId:(id)arg2 subGenreIds:(id)arg3 app2VecCluster:(id)arg4 ;
-(void)addAppLaunchForAppLaunchSequence:(id)arg0 date:(id)arg1 ;
-(void)addAppLaunchForBundleId:(id)arg0 date:(id)arg1 withLaunchType:(NSInteger)arg2 ;
-(void)addCategoricalHistogramData:(id)arg0 forHistogramOfType:(NSInteger)arg1 ;
-(void)addExtensionLaunchForBundleId:(id)arg0 date:(id)arg1 ;
-(void)addHistogramData:(id)arg0 forHistogramOfType:(NSInteger)arg1 ;
-(void)clearAppInstallInfo;
-(void)clearAppLaunchInfo;
-(void)clearDatabase;
-(void)deleteLaunchesFollowingAppAction:(id)arg0 ;
-(void)deleteLaunchesFollowingBundle:(id)arg0 ;
-(void)enumerateActionOfType:(id)arg0 bundleId:(id)arg1 block:(id)arg2 ;
-(void)enumerateActionTypesOlderThan:(id)arg0 block:(id)arg1 ;
-(void)enumerateActionsInUUIDSet:(id)arg0 block:(id)arg1 ;
-(void)enumerateAppInfoAppActionsExecutingBlock:(id)arg0 ;
-(void)enumerateAppInfoBundlesExecutingBlock:(id)arg0 ;
-(void)enumerateFeedbackForActionOfType:(id)arg0 bundleId:(id)arg1 block:(id)arg2 ;
-(void)enumerateSlotUuidsOfType:(id)arg0 bundleId:(id)arg1 block:(id)arg2 ;
// -(void)enumerateStateForApps:(id)arg0 withGlobalBlock:(id)arg1 thenWithPerAppBlock:(unk)arg2  ;
// -(void)enumerateStateForApps:(id)arg0 withGlobalBlock:(id)arg1 thenWithPerAppBlock:(unk)arg2 readOnly:(id)arg3  ;
// -(void)enumerateStateForAppsReadOnly:(id)arg0 withGlobalBlock:(id)arg1 thenWithPerAppBlock:(unk)arg2  ;
-(void)insertSuggestionResponse:(id)arg0 response:(NSInteger)arg1 timestamp:(NSInteger)arg2 suggestionType:(NSInteger)arg3 ;
-(void)integrityCheckOrAbort;
-(void)migrate;
-(void)migrateWithMigrationPlan:(id)arg0 ;
-(void)migrationPre44WriteActionType:(id)arg0 bundleId:(id)arg1 date:(id)arg2 action:(id)arg3 slotSets:(id)arg4 timeZone:(id)arg5 prevLocationUUID:(id)arg6 locationUUID:(id)arg7 weight:(CGFloat)arg8 actionUUID:(id)arg9 motionType:(NSInteger)arg10 ;
-(void)pruneMessageRecipientsAddedBefore:(id)arg0 ;
-(void)recordConfirms:(CGFloat)arg0 rejects:(CGFloat)arg1 forFeedbackType:(NSUInteger)arg2 forActionType:(id)arg3 bundleId:(id)arg4 action:(id)arg5 slotSet:(id)arg6 actionUUID:(id)arg7 date:(id)arg8 consumerSubType:(unsigned char)arg9 geohash:(NSInteger)arg10 coarseGeohash:(NSInteger)arg11 ;
-(void)regenerateSlotSetKeyForBundleId:(id)arg0 ;
-(void)removeActionDataForActionUUID:(id)arg0 ;
-(void)removeActionDataForActionUUIDs:(id)arg0 ;
-(void)removeActionDataForBundleId:(id)arg0 ;
-(void)removeActionsWithoutTitle;
-(void)removeAllCachedIntents;
-(void)removeAllSlotsFromActionLog;
-(void)removeAllSlotsFromSlotSetKey;
-(void)removeAppInfoForBundleId:(id)arg0 ;
-(void)removeAppInfoForBundleIdsNotInSet:(id)arg0 ;
-(void)removeAppLaunchesForBundleId:(id)arg0 ;
-(void)removeCachedIntentsWithBundleId:(id)arg0 ;
-(void)removeFeedbackForBundleId:(id)arg0 ;
-(void)resetSuggestionResponses;
-(void)swapInDuetHelperStub:(id)arg0 ;
-(void)trimActionHistoryWithAppWhitelist:(id)arg0 ;
-(void)updateOrInsertApp2VecCluster:(id)arg0 forBundleId:(id)arg1 ;
-(void)updateOrInsertAverageSecondsBetweenAppActions:(id)arg0 forAppAction:(id)arg1 ;
-(void)updateOrInsertAverageSecondsBetweenLaunches:(id)arg0 forBundleId:(id)arg1 ;
-(void)updateOrInsertCategoricalHistogramData:(id)arg0 forHistogram:(NSInteger)arg1 ;
-(void)updateOrInsertGenreId:(id)arg0 subGenreIds:(id)arg1 forBundleId:(id)arg2 ;
-(void)updateOrInsertHistogramData:(id)arg0 forHistogram:(NSInteger)arg1 ;
-(void)updateOrInsertInstallTimestamp:(NSInteger)arg0 genreId:(id)arg1 subGenreIds:(id)arg2 app2VecCluster:(id)arg3 forBundleId:(id)arg4 isExtension:(BOOL)arg5 isEnterpriseApp:(BOOL)arg6 ;
-(void)updateOrInsertMedianSecondsBetweenAppActions:(id)arg0 forAppAction:(id)arg1 ;
-(void)updateOrInsertMedianSecondsBetweenLaunches:(id)arg0 forBundleId:(id)arg1 ;
-(void)updateOrInsertMessageRecipient:(id)arg0 dateMessaged:(id)arg1 ;
-(void)updateOrInsertPredictionsAndFeedbackForAppAction:(id)arg0 feedbackReceived:(BOOL)arg1 forUIType:(id)arg2 ;
-(void)updateOrInsertSubsequentAppActionLaunchCountData:(id)arg0 forAppAction:(id)arg1 ;
-(void)updateOrInsertSubsequentLaunchCountData:(id)arg0 forBundleId:(id)arg1 ;
-(void)updateOrInsertTimestamp:(NSInteger)arg0 forAppAction:(id)arg1 ;
-(void)updateOrInsertTimestamp:(NSInteger)arg0 intoColumn:(id)arg1 forBundleId:(id)arg2 isExtension:(BOOL)arg3 ;
-(void)updateSchemaVersionNumberTo:(NSInteger)arg0 ;
-(void)vacuumDatabaseWithActivity:(id)arg0 ;
-(void)writeActionType:(id)arg0 bundleId:(id)arg1 date:(id)arg2 action:(id)arg3 slotSets:(id)arg4 timeZone:(id)arg5 prevLocationUUID:(id)arg6 locationUUID:(id)arg7 weight:(CGFloat)arg8 actionUUID:(id)arg9 motionType:(NSInteger)arg10 appSessionStartDate:(id)arg11 appSessionEndDate:(id)arg12 geohash:(NSInteger)arg13 coarseGeohash:(NSInteger)arg14 ;
-(void)writeApp2VecCluster:(id)arg0 forBundleId:(id)arg1 ;
-(void)writeAppActionLaunches:(id)arg0 followingAppAction:(id)arg1 ;
-(void)writeAverageSecondsBetweenAppActions:(id)arg0 forAppAction:(id)arg1 ;
-(void)writeAverageSecondsBetweenLaunches:(id)arg0 forBundleId:(id)arg1 ;
-(void)writeBlob:(id)arg0 type:(NSInteger)arg1 expirationDate:(id)arg2 ;
-(void)writeEligibleForWidgets:(BOOL)arg0 cacheKey:(id)arg1 ;
-(void)writeGenreId:(id)arg0 subGenreIds:(id)arg1 forBundleId:(id)arg2 ;
-(void)writeLaunches:(id)arg0 followingBundle:(id)arg1 ;
-(void)writeMedianSecondsBetweenAppActions:(id)arg0 forAppAction:(id)arg1 ;
-(void)writeMedianSecondsBetweenLaunches:(id)arg0 forBundleId:(id)arg1 ;
-(void)writeSubtitle:(id)arg0 cacheKey:(id)arg1 ;
-(void)writeSupportsBackgroundExecution:(BOOL)arg0 cacheKey:(id)arg1 ;
-(void)writeTitle:(id)arg0 cacheKey:(id)arg1 ;
-(void)writeValidParameterCombinationsWithSchema:(id)arg0 cacheKey:(id)arg1 ;
-(void)writeWebClip:(id)arg0 appClip:(id)arg1 ;


@end


#endif