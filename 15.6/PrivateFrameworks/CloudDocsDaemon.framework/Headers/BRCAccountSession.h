// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BRCACCOUNTSESSION_H
#define BRCACCOUNTSESSION_H

@class NSMutableDictionary, NSURL, NSString, NSHashTable, NSMutableSet, br_pacer, NSNumber, BRDSIDString;
@protocol BRCCloudDocsAppsObserver, OS_dispatch_source, OS_dispatch_queue, OS_dispatch_workloop;

#import <Foundation/Foundation.h>

#import "BRCPQLConnection.h"
#import "BRCClientState.h"
#import "BRCServerPersistedState.h"
#import "BRCAccountWaitOperation.h"
#import "BRCAccountHandler.h"
#import "BRCAnalyticsReporter.h"
#import "BRCThrottle.h"
#import "BRCApplyScheduler.h"
#import "BRCTimerScheduler.h"
#import "BRCContainerScheduler.h"
#import "BRCDeadlineScheduler.h"
#import "BRCDiskSpaceReclaimer.h"
#import "BRCDownloadTrackers.h"
#import "BRCFairScheduler.h"
#import "BRCFileUnlinker.h"
#import "BRCFSDownloader.h"
#import "BRCFSReader.h"
#import "BRCFSUploader.h"
#import "BRCFSWriter.h"
#import "BRCGlobalProgress.h"
#import "BRCItemTransmogrifier.h"
#import "BRCNotificationManager.h"
#import "BRCPowerLogReporter.h"
#import "BRCRecentsEnumerator.h"
#import "BRCStageRegistry.h"
#import "BRCSyncUpScheduler.h"
#import "BRCUserNotification.h"
#import "BRCVolume.h"

@interface BRCAccountSession : NSObject <BRCCloudDocsAppsObserver>

 {
    NSMutableDictionary *_syncContexts;
    NSURL *_dbURL;
    NSObject<OS_dispatch_source> *_dbWatcher;
    NSObject<OS_dispatch_queue> *_dbWatcherQueue;
    NSObject<OS_dispatch_queue> *_dbCorruptionQueue;
    NSObject<OS_dispatch_workloop> *_clientTruthWorkloop;
    NSObject<OS_dispatch_workloop> *_serverTruthWorkloop;
    NSObject<OS_dispatch_workloop> *_readOnlyWorkloop;
    int _cloudDocsFD;
    id *_dbProfilingHook;
    NSString *_databaseID;
    NSHashTable *_miscOperations;
    NSHashTable *_backgroundListOperations;
    BRCPQLConnection *_clientDB;
    BRCPQLConnection *_serverDB;
    BRCPQLConnection *_readOnlyDB;
    BRCPQLConnection *_expensiveReadOnlyDB;
    BRCClientState *_clientState;
    BRCServerPersistedState *_serverState;
    brc_mutex _zonesLock;
    NSMutableDictionary *_libraryRowIDsByMangledID;
    NSMutableDictionary *_appLibrariesByRowID;
    NSMutableDictionary *_serverZonesByZoneRowID;
    NSMutableDictionary *_sharedServerZonesByMangledID;
    NSMutableDictionary *_sharedClientZonesByMangledID;
    NSMutableDictionary *_privateServerZonesByID;
    NSMutableDictionary *_privateClientZonesByID;
    NSString *_acAccountID;
    NSMutableSet *_xpcClients;
    BOOL _resumed;
    NSUInteger _lastDiskSpaceCheckTime;
    NSUInteger _availableDiskSpace;
    NSUInteger _totalDiskSpace;
    BOOL _isGreedy;
    brc_mutex _zonesCreationLock;
    br_pacer *_reschedulePendingDiskItemsPacer;
    br_pacer *_updateDiskSpacePacer;
    BOOL _accountIsReady;
    BRCAccountWaitOperation *_accountWaitOperation;
    BOOL _isDBOpened;
    NSNumber *_isInCarry;
    NSMutableDictionary *_rootsByFolderType;
    NSMutableDictionary *_fsEventsMonitors;
}


@property (readonly, nonatomic) BRDSIDString *accountDSID; // ivar: _accountDSID
@property (readonly, nonatomic) BRCAccountHandler *accountHandler; // ivar: _accountHandler
@property (readonly, nonatomic) BRCAccountWaitOperation *accountWaitOperation;
@property (readonly, nonatomic) BRCAnalyticsReporter *analyticsReporter; // ivar: _analyticsReporter
@property (readonly, nonatomic) BRCThrottle *appLibraryAliasRemovalThrottle; // ivar: _appLibraryAliasRemovalThrottle
@property (readonly, nonatomic) BRCThrottle *appLibraryResetThrottle; // ivar: _appLibraryResetThrottle
@property (readonly, nonatomic) BRCThrottle *appLibraryScanThrottle; // ivar: _appLibraryScanThrottle
@property (readonly, nonatomic) BRCApplyScheduler *applyScheduler; // ivar: _applyScheduler
@property (readonly, nonatomic) BRCTimerScheduler *autoResumeSyncTimerScheduler; // ivar: _autoResumeSyncTimerScheduler
@property (readonly, nonatomic) NSUInteger availableDiskSpace;
@property (retain, nonatomic) NSString *cacheDirPath; // ivar: _cacheDirPath
@property (readonly, nonatomic) BRCPQLConnection *clientDB;
@property (readonly, nonatomic) BRCClientState *clientState;
@property (readonly, nonatomic) NSObject<OS_dispatch_workloop> *clientTruthWorkloop;
@property (readonly, nonatomic) BRCContainerScheduler *containerScheduler; // ivar: _containerScheduler
@property (readonly, nonatomic) NSUInteger databaseID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BRCDeadlineScheduler *defaultScheduler; // ivar: _defaultScheduler
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BRCDiskSpaceReclaimer *diskReclaimer; // ivar: _diskReclaimer
@property (readonly, nonatomic) BRCDownloadTrackers *downloadTrackers; // ivar: _downloadTrackers
@property (readonly, nonatomic) BRCPQLConnection *expensiveReadOnlyDB;
@property (readonly, nonatomic) BRCFairScheduler *fairClientDBScheduler; // ivar: _fairClientDBScheduler
@property (readonly, nonatomic) BRCFileUnlinker *fileUnlinker; // ivar: _fileUnlinker
@property (readonly, nonatomic) BRCFSDownloader *fsDownloader; // ivar: _fsDownloader
@property (readonly, nonatomic) BRCFSReader *fsReader; // ivar: _fsReader
@property (readonly, nonatomic) BRCFSUploader *fsUploader; // ivar: _fsUploader
@property (readonly, nonatomic) BRCFSWriter *fsWriter; // ivar: _fsWriter
@property (readonly, nonatomic) BRCGlobalProgress *globalProgress; // ivar: _globalProgress
@property (readonly, nonatomic) BOOL hasOptimizeStorageEnabled;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isCancelled; // ivar: _isCancelled
@property (readonly, nonatomic) BOOL isDataSeparated; // ivar: _isDataSeparated
@property (readonly, nonatomic) BOOL isGreedy;
@property (readonly, nonatomic) BOOL isOpen; // ivar: _isOpen
@property (readonly, nonatomic) BRCItemTransmogrifier *itemTransmogrifier; // ivar: _itemTransmogrifier
@property (readonly, nonatomic) BRCThrottle *lostItemThrottle; // ivar: _lostItemThrottle
@property (readonly, nonatomic) BRCNotificationManager *notificationManager; // ivar: _notificationManager
@property (readonly, nonatomic) BRCThrottle *operationFailureThrottle; // ivar: _operationFailureThrottle
@property (readonly, nonatomic) NSString *personaIdentifier; // ivar: _personaIdentifier
@property (readonly, nonatomic) BRCPowerLogReporter *powerLogReporter; // ivar: _powerlogReporter
@property (readonly, nonatomic) BRCPQLConnection *readOnlyDB;
@property (readonly, nonatomic) NSObject<OS_dispatch_workloop> *readOnlyWorkloop;
@property (readonly, nonatomic) BRCRecentsEnumerator *recentsEnumerator; // ivar: _recentsEnumerator
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *resetQueue; // ivar: _resetQueue
@property (readonly, nonatomic) BRCPQLConnection *serverDB;
@property (readonly, nonatomic) BRCServerPersistedState *serverState;
@property (readonly, nonatomic) NSObject<OS_dispatch_workloop> *serverTruthWorkloop;
@property (retain, nonatomic) NSString *sessionDirPath; // ivar: _sessionDirPath
@property (readonly, nonatomic) BRCThrottle *sharedAppLibraryResetThrottle; // ivar: _sharedAppLibraryResetThrottle
@property (readonly, nonatomic) BRCStageRegistry *stageRegistry; // ivar: _stageRegistry
@property (readonly) Class superclass;
@property (readonly, nonatomic) BRCThrottle *syncClientZoneErrorThrottle; // ivar: _syncClientZoneErrorThrottle
@property (readonly, nonatomic) BRCThrottle *syncClientZoneThrottle; // ivar: _syncClientZoneThrottle
@property (readonly, nonatomic) BRCSyncUpScheduler *syncUpScheduler; // ivar: _syncUpScheduler
@property (readonly, nonatomic) NSString *ubiquityTokenSalt; // ivar: _ubiquityTokenSalt
@property (readonly, nonatomic) BRCUserNotification *userNotification; // ivar: _userNotification
@property (readonly, nonatomic) BRCVolume *volume; // ivar: _volume


+(BOOL)_checkIntegrity:(id)arg0 serverTruth:(BOOL)arg1 session:(id)arg2 skipBackupDetection:(BOOL)arg3 error:(*id)arg4 ;
+(BOOL)_openConnection:(id)arg0 databaseName:(id)arg1 baseURL:(id)arg2 readonly:(BOOL)arg3 error:(*id)arg4 ;
+(BOOL)_openConnection:(id)arg0 serverTruth:(BOOL)arg1 databaseName:(id)arg2 baseURL:(id)arg3 initialVersion:(*unsigned int)arg4 lastCurrentVersion:(*unsigned int)arg5 error:(*id)arg6 ;
+(BOOL)_registerStaticDBFunctions:(id)arg0 error:(*id)arg1 ;
+(BOOL)_validateDatabase:(id)arg0 baseURL:(id)arg1 session:(id)arg2 serverTruth:(BOOL)arg3 initialVersion:(unsigned int)arg4 lastCurrentVersion:(unsigned int)arg5 error:(*id)arg6 ;
+(BOOL)openAndValidateDatabase:(id)arg0 serverTruth:(BOOL)arg1 session:(id)arg2 baseURL:(id)arg3 skipBackupDetection:(BOOL)arg4 error:(*id)arg5 ;
+(BOOL)upgradeOfflineDB:(id)arg0 serverTruth:(BOOL)arg1 session:(id)arg2 error:(*id)arg3 ;
+(id)_classesForClientState;
+(id)nameComponentsForKey:(id)arg0 db:(id)arg1 ;
+(id)nameComponentsForName:(id)arg0 db:(id)arg1 ;
+(id)sessionForBackingUpDatabasesAtURL:(id)arg0 ;
+(id)sessionForCheckingInconsistencies;
+(id)sessionForDumpingDatabasesAtURL:(id)arg0 ;
+(id)userIdentityForKey:(id)arg0 db:(id)arg1 ;
+(id)userIdentityForName:(id)arg0 db:(id)arg1 ;
+(void)_registerLastBootIfNeeded:(id)arg0 table:(id)arg1 cleanTelemetryIfNeeded:(BOOL)arg2 ;
-(BOOL)PCSMigrationComplete;
-(BOOL)_createAppLibrary:(id)arg0 ;
-(BOOL)_createAppLibraryRootIfNeededAtPath:(id)arg0 error:(*id)arg1 ;
-(BOOL)_createAppLibraryRootsIfNeededWithError:(*id)arg0 ;
-(BOOL)_createClientZone:(id)arg0 ;
-(BOOL)_createPrivateAppLibrary:(id)arg0 ;
-(BOOL)_createSharedAppLibrary:(id)arg0 ;
-(BOOL)_deleteAppLibrary:(id)arg0 ;
-(BOOL)_deleteClientZone:(id)arg0 ;
-(BOOL)_dumpClientZone:(id)arg0 toContext:(id)arg1 includeAllItems:(BOOL)arg2 error:(*id)arg3 ;
-(BOOL)_dumpClientZoneStatus:(id)arg0 toContext:(id)arg1 error:(*id)arg2 ;
-(BOOL)_finishClientTruthConnectionSetupWithError:(*id)arg0 ;
-(BOOL)_finishServerTruthConnectionSetupWithError:(*id)arg0 ;
-(BOOL)_getRootPathXattrValue:(*id)arg0 forRootPath:(id)arg1 error:(*id)arg2 ;
-(BOOL)_openConnection:(id)arg0 databaseName:(id)arg1 readonly:(BOOL)arg2 error:(*id)arg3 ;
-(BOOL)_recursivelyPrepareFolderForLogOutAtURL:(id)arg0 pruneEmptyFolders:(BOOL)arg1 pruneEmptyTopLevelFolder:(BOOL)arg2 maxDepth:(NSUInteger)arg3 ;
-(BOOL)_registerDynamicDBFunctions:(id)arg0 error:(*id)arg1 ;
-(BOOL)_setRootPathXattrValue:(id)arg0 forRootPath:(id)arg1 error:(*id)arg2 ;
-(BOOL)_setupBackupDetector:(struct backup_detector *)arg0 error:(*id)arg1 ;
-(BOOL)_setupConnection:(id)arg0 readonly:(BOOL)arg1 forChecker:(BOOL)arg2 error:(*id)arg3 ;
-(BOOL)_shouldPrivateAppLibraryBeCZMMoved:(id)arg0 ;
-(BOOL)_stepBackupDetector:(struct backup_detector )arg0 newState:(struct backup_detector *)arg1 error:(*id)arg2 ;
-(BOOL)applySyncPolicy:(NSInteger)arg0 forSyncedFolderType:(NSUInteger)arg1 isInitialCreation:(BOOL)arg2 error:(*id)arg3 ;
-(BOOL)backupDatabaseToURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)createAppLibrariesIfNeededWithError:(*id)arg0 ;
-(BOOL)createAppLibraryOnDisk:(id)arg0 createdRoot:(*BOOL)arg1 createdDocuments:(*BOOL)arg2 rootFileID:(*NSUInteger)arg3 ;
-(BOOL)createServerZone:(id)arg0 ;
-(BOOL)deleteServerZone:(id)arg0 ;
-(BOOL)disableSyncforSyncedFolderType:(NSUInteger)arg0 isInitialCreation:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)dumpDatabaseToFileHandle:(id)arg0 zoneName:(id)arg1 includeAllItems:(BOOL)arg2 tracker:(id)arg3 error:(*id)arg4 ;
-(BOOL)dumpFileCoordinationInfoToFileHandle:(id)arg0 error:(*id)arg1 ;
-(BOOL)dumpStatusToFileHandle:(id)arg0 zoneName:(id)arg1 tracker:(id)arg2 error:(*id)arg3 ;
-(BOOL)enableSyncforSyncedFolderType:(NSUInteger)arg0 isInitialCreation:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)globalID:(id)arg0 isStrictChildOfGlobalID:(id)arg1 ;
-(BOOL)hasFSEventsMonitorForSyncedFolderType:(NSUInteger)arg0 ;
-(BOOL)hasRootForSyncedFolderType:(NSUInteger)arg0 ;
-(BOOL)icloudAccountIsInCarry;
-(BOOL)initializeOfflineDatabaseWhileUpgrading:(BOOL)arg0 error:(*id)arg1 ;
-(BOOL)openAndValidateDatabase:(id)arg0 serverTruth:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)openDBWithError:(*id)arg0 ;
-(BOOL)openWithError:(*id)arg0 pushWorkloop:(id)arg1 ;
-(BOOL)registerClient:(id)arg0 ;
-(BOOL)saveAppLibrary:(id)arg0 toDB:(id)arg1 ;
-(BOOL)saveAppLibraryToDB:(id)arg0 ;
-(BOOL)saveClientZoneToDB:(id)arg0 ;
-(BOOL)saveServerZone:(id)arg0 toDB:(id)arg1 ;
-(BOOL)saveServerZoneToDB:(id)arg0 ;
-(BOOL)shouldPathBeDesktopSymlink:(id)arg0 ;
-(BOOL)shouldPerformPCSMigration;
-(NSUInteger)accountSize;
-(NSUInteger)availableDiskSpaceUsingCache:(BOOL)arg0 ;
-(NSUInteger)availableDiskSpaceUsingCache:(BOOL)arg0 schedulingPendingDiskItemsIfNeeded:(BOOL)arg1 ;
-(NSUInteger)computeTotalLiveDocumentSizeWithDb:(id)arg0 ;
-(NSUInteger)syncedFolderTypeForURL:(id)arg0 ;
-(id)__getOrCreateAppLibrary:(id)arg0 rowID:(id)arg1 createOnDisk:(BOOL)arg2 alreadyExists:(*BOOL)arg3 withClientZone:(id)arg4 createCZMMoved:(BOOL)arg5 ;
-(id)__getOrCreateClientZone:(id)arg0 withServerZone:(id)arg1 alreadyExists:(*BOOL)arg2 ;
-(id)__getOrCreateServerZone:(id)arg0 ;
-(id)_appLibrariesEnumerator:(id)arg0 ;
-(id)_appLibrariesMatchingSearchString:(id)arg0 ;
-(id)_appLibraryEnumeratorForZoneRowID:(id)arg0 db:(id)arg1 ;
-(id)_clientZonesMatchingSearchString:(id)arg0 ;
-(id)_containerMetadataRecordsToSaveWithBatchSize:(NSUInteger)arg0 requestID:(NSUInteger)arg1 ;
-(id)_getOrCreateAppLibraryAndPrivateZonesIfNecessary:(id)arg0 creationFlags:(*unsigned int)arg1 ;
-(id)_old_privateAppLibraryByZoneName:(id)arg0 db:(id)arg1 ;
-(id)_privateClientZoneByID:(id)arg0 db:(id)arg1 ;
-(id)_privateClientZoneByName:(id)arg0 db:(id)arg1 ;
-(id)_privateClientZonesEnumerator:(id)arg0 ;
-(id)_privateServerZoneByName:(id)arg0 db:(id)arg1 ;
-(id)_privateServerZonesEnumerator:(id)arg0 ;
-(id)_reserveRowIDForLibrary:(id)arg0 ;
-(id)_sharedClientZonesEnumerator:(id)arg0 ;
-(id)_sharedServerZoneByName:(id)arg0 ownerName:(id)arg1 db:(id)arg2 ;
-(id)_sharedServerZonesEnumerator:(id)arg0 ;
-(id)_syncContextForContextIdentifier:(id)arg0 isShared:(BOOL)arg1 createIfNeeded:(BOOL)arg2 ;
-(id)_unloadClientZones;
-(id)accountStatisticsWithDB:(id)arg0 ;
-(id)allSyncContexts;
-(id)appLibraries;
-(id)appLibrariesMatchingSearchString:(id)arg0 error:(*id)arg1 ;
-(id)appLibraryByID:(id)arg0 ;
-(id)appLibraryByMangledID:(id)arg0 ;
-(id)appLibraryByRowID:(id)arg0 ;
-(id)bouncedItemsEnumerator;
-(id)clientZoneByMangledID:(id)arg0 ;
-(id)clientZones;
-(id)clientZonesMatchingSearchString:(id)arg0 error:(*id)arg1 ;
-(id)cloudDocsClientZone;
-(id)createDeviceKeyForNameInServerDB:(id)arg0 ;
-(id)createFSEventsMonitorForSyncedFolderType:(NSUInteger)arg0 ;
-(id)createRootForSyncedFolderType:(NSUInteger)arg0 ;
-(id)createUserKeyForName:(id)arg0 ;
-(id)currentUserRecordName;
-(id)defaultSyncContext;
-(id)deviceKeyForName:(id)arg0 db:(id)arg1 ;
-(id)dirPathForSyncedFolderType:(NSUInteger)arg0 ;
-(id)fallbackAppLibraryForClientZone:(id)arg0 extension:(id)arg1 ;
-(id)fetchAccountWaitOperationWithAccountReady:(*BOOL)arg0 ;
-(id)foldersNeedingTransmogrifyEnumerator;
-(id)fsEventsMonitorForAppLibraryID:(id)arg0 ;
-(id)fsEventsMonitorForSyncedFolderType:(NSUInteger)arg0 ;
-(id)fsEventsMonitors;
-(id)getOrCreateAppLibraryAndPrivateZonesIfNecessary:(id)arg0 ;
-(id)getOrCreateAppLibraryAndPrivateZonesIfNecessary:(id)arg0 appLibraryExists:(*BOOL)arg1 ;
-(id)getOrCreateSharedZones:(id)arg0 ;
-(id)getOrCreateSharedZones:(id)arg0 shareAcceptOp:(id)arg1 ;
-(id)getOrReserveLibraryRowIDForLibrary:(id)arg0 ;
-(id)globalItemByDocumentID:(unsigned int)arg0 ;
-(id)globalItemByDocumentID:(unsigned int)arg0 db:(id)arg1 ;
-(id)globalItemByFileID:(NSUInteger)arg0 ;
-(id)globalItemByFileID:(NSUInteger)arg0 db:(id)arg1 ;
-(id)init;
-(id)initWithACAccountID:(id)arg0 dbAccountDSID:(id)arg1 salt:(id)arg2 accountHandler:(id)arg3 ;
-(id)itemByFileObjectID:(id)arg0 ;
-(id)itemByFileObjectID:(id)arg0 db:(id)arg1 ;
-(id)itemByItemGlobalID:(id)arg0 ;
-(id)itemByItemGlobalID:(id)arg0 db:(id)arg1 ;
-(id)itemByRowID:(NSUInteger)arg0 ;
-(id)itemByRowID:(NSUInteger)arg0 db:(id)arg1 ;
-(id)itemIDByRowID:(NSUInteger)arg0 ;
-(id)itemIDByRowID:(NSUInteger)arg0 db:(id)arg1 ;
-(id)itemsNeedingIndexingEnumeratorFromNotifRank:(NSUInteger)arg0 batchSize:(NSUInteger)arg1 ;
-(id)itemsWithSideCarInFlightDiffsEnumerator;
-(id)localAliasForSharedItem:(id)arg0 inZone:(id)arg1 ;
-(id)metadataSyncContextForMangledID:(id)arg0 ;
-(id)newAppLibraryFromPQLResultSet:(id)arg0 error:(*id)arg1 ;
-(id)newConnection:(id)arg0 ;
-(id)newConnectionWithLabel:(id)arg0 readonly:(BOOL)arg1 error:(*id)arg2 ;
-(id)newLocalItemFromPQLResultSet:(id)arg0 db:(id)arg1 error:(*id)arg2 ;
-(id)newPrivateClientZoneFromPQLResultSet:(id)arg0 error:(*id)arg1 ;
-(id)newPrivateServerZoneFromPQLResultSet:(id)arg0 error:(*id)arg1 ;
-(id)newServerItemFromPQLResultSet:(id)arg0 error:(*id)arg1 ;
-(id)newSharedClientZoneFromPQLResultSet:(id)arg0 error:(*id)arg1 ;
-(id)newSharedServerZoneFromPQLResultSet:(id)arg0 error:(*id)arg1 ;
-(id)pendingDownloadItemWithDocumentID:(unsigned int)arg0 ;
-(id)privateClientZoneByID:(id)arg0 ;
-(id)privateServerZoneByID:(id)arg0 ;
-(id)resolvedOpenRelpathForPath:(id)arg0 mustExist:(BOOL)arg1 allowResolveInPkg:(BOOL)arg2 errcode:(*int)arg3 ;
-(id)resolvedOpenRelpathForPath:(id)arg0 mustExist:(BOOL)arg1 errcode:(*int)arg2 ;
-(id)rootForSyncedFolderType:(NSUInteger)arg0 ;
-(id)roots;
-(id)serverAliasItemForSharedItem:(id)arg0 ;
-(id)serverAliasItemForSharedItem:(id)arg0 db:(id)arg1 ;
-(id)serverAliasItemForSharedItem:(id)arg0 inZone:(id)arg1 ;
-(id)serverAliasItemForSharedItem:(id)arg0 inZone:(id)arg1 db:(id)arg2 ;
-(id)serverZoneByMangledID:(id)arg0 ;
-(id)serverZoneByName:(id)arg0 ownerName:(id)arg1 ;
-(id)serverZoneByRowID:(id)arg0 ;
-(id)sharedClientZoneByMangledID:(id)arg0 ;
-(id)sharedMetadataSyncContext;
-(id)sharedServerZoneByMangledID:(id)arg0 ;
-(id)sharedServerZoneRowIDsByOwnerNamePrefix:(id)arg0 ;
-(id)sideCarSyncContext;
-(id)singleAppLibraryMatchingSearchString:(id)arg0 error:(*id)arg1 ;
-(id)singleClientZoneMatchingSearchString:(id)arg0 error:(*id)arg1 ;
-(id)stagedItemsEnumerator;
-(id)transferSyncContextForMangledID:(id)arg0 ;
-(id)transferSyncContextForMangledID:(id)arg0 createIfNeeded:(BOOL)arg1 ;
-(id)userIdentityForKey:(id)arg0 ;
-(id)userKeyForName:(id)arg0 db:(id)arg1 ;
-(id)userNameForKey:(id)arg0 db:(id)arg1 ;
-(id)zoneHealthSyncContext;
-(int)resolvePathAdditionalMetadata:(id)arg0 appLibrary:(*id)arg1 ;
-(unsigned int)_recoverAndReportBoosting;
-(unsigned int)_recoverAndReportMissingJobs;
-(void)__registerServerZone:(id)arg0 clientZone:(id)arg1 appLibrary:(id)arg2 isShared:(BOOL)arg3 ;
-(void)_clearNeedsUpgradeErrors:(id)arg0 brVersion:(id)arg1 ;
-(void)_cloudDocsAppsListDidChange:(id)arg0 ;
-(void)_createAccountSupportPathIfNeeded:(id)arg0 protectParent:(BOOL)arg1 ;
-(void)_dumpClientZoneBlockedState:(id)arg0 toContext:(id)arg1 ;
-(void)_enumerateAccountHandlerSupportedFolderTypes:(id)arg0 ;
-(void)_enumerateAppLibraryRowIDs:(id)arg0 usingBlock:(id)arg1 ;
-(void)_loadClientZonesFromDisk;
-(void)_mutexZonesLock;
-(void)_pcsChainAllItemsWithActivity:(id)arg0 ;
-(void)_recreateSymlinkIfNecessaryForDocumentsPath:(id)arg0 folderName:(id)arg1 destinationPath:(id)arg2 ;
-(void)_registerBackgroundXPCActivities;
-(void)_resolvePathInMobileDocsRoot:(id)arg0 appLibrary:(*id)arg1 ;
-(void)_setUserIdentity:(id)arg0 forName:(id)arg1 ;
-(void)_setupSharedPackageExtensionsPlist;
-(void)_setupThrottles;
-(void)_startWatcher;
-(void)_validatePersona;
-(void)addMiscOperation:(id)arg0 ;
-(void)addOfflineAppLibrary:(id)arg0 ;
-(void)addOfflineClientZone:(id)arg0 ;
-(void)addOfflineServerZone:(id)arg0 ;
-(void)assertNotOnZoneMutex;
-(void)close;
-(void)closeAndResetLocalState;
-(void)closeDBs;
-(void)closeXPCClientsSync;
-(void)cloudDocsAppsListDidChange:(id)arg0 ;
-(void)computeDocumentEvictableSizesForLowTime:(NSUInteger)arg0 medTime:(NSUInteger)arg1 highTime:(NSUInteger)arg2 lowSize:(NSUInteger)arg3 medSize:(NSUInteger)arg4 highSize:(NSUInteger)arg5 minRowID:(NSUInteger)arg6 minSize:(NSUInteger)arg7 batchSize:(NSUInteger)arg8 injection:(id)arg9 db:(id)arg10 reply:(id)arg11 ;
-(void)computeTotalEvictableSizeWithAccessLowTimeDelta:(CGFloat)arg0 medTimeDelta:(CGFloat)arg1 highTimeDelta:(CGFloat)arg2 db:(id)arg3 reply:(id)arg4 ;
-(void)dbBecameCorrupted;
-(void)dealloc;
-(void)destroyLocalData;
-(void)destroyLocalDataWaitingForFilesToBeUnlinked:(BOOL)arg0 completionBlock:(id)arg1 ;
-(void)destroyLocalDataWaitingForFilesToBeUnlinked:(BOOL)arg0 pristineContainerIDs:(id)arg1 completionBlock:(id)arg2 ;
-(void)destroyLocalDataWithPristineContainerIDs:(id)arg0 ;
-(void)destroySharedClientZone:(id)arg0 ;
-(void)disableDatabaseProfilingForDB:(id)arg0 ;
-(void)dumpMiscOperationsToContext:(id)arg0 ;
-(void)dumpXPCClientsToContext:(id)arg0 ;
-(void)enableDatabaseProfilingForDB:(id)arg0 ;
-(void)enumerateAppLibraries:(id)arg0 ;
-(void)enumerateClientZones:(id)arg0 ;
// -(void)enumerateFileTypesWithFilterBlock:(id)arg0 enumerationBlock:(unk)arg1  ;
-(void)enumerateItemsWithShareIDUnderParent:(id)arg0 block:(id)arg1 ;
-(void)enumeratePrivateClientZones:(id)arg0 ;
-(void)enumeratePrivateServerZones:(id)arg0 ;
-(void)enumerateServerZones:(id)arg0 ;
-(void)enumerateSharedClientZones:(id)arg0 ;
-(void)enumerateSideFaultsUnderParent:(id)arg0 db:(id)arg1 block:(id)arg2 ;
-(void)enumerateSupportedFolderTypes:(id)arg0 ;
-(void)fetchUserRecordIDWithCompletionHandler:(id)arg0 ;
-(void)invalidateAccountStatus;
-(void)learnParticipantIdentitiesForShare:(id)arg0 forceUpdate:(BOOL)arg1 ;
-(void)markAccountMigrationComplete;
-(void)openForDumping;
// -(void)performBlock:(id)arg0 whileRemovingPrivateClientZone:(unk)arg1  ;
-(void)preventDatabaseFromBeingReused;
-(void)recomputeAppSyncBlockStateForPrivateClientZone:(id)arg0 ;
-(void)recreateDesktopSymlinksIfNecessary;
-(void)removeDesktopSymlink:(BOOL)arg0 andDocumentsSymlink:(BOOL)arg1 ;
-(void)removeFSEventsMonitorForSyncedFolderType:(NSUInteger)arg0 ;
-(void)removeRootForSyncedFolderType:(NSUInteger)arg0 ;
-(void)resetThrottles;
-(void)resume;
-(void)scheduleZoneMovesToCloudDocs:(id)arg0 ;
-(void)setFSEventsMonitor:(id)arg0 forSyncedFolderType:(NSUInteger)arg1 ;
-(void)setNeedsPCSMigration:(BOOL)arg0 ;
-(void)setOptimizeStorageEnabled:(BOOL)arg0 ;
-(void)setRoot:(id)arg0 forSyncedFolderType:(NSUInteger)arg1 ;
-(void)setupDatabase;
-(void)startDownloadsForGreediness;
-(void)stopDBWatcher;
-(void)unregisterClient:(id)arg0 ;
-(void)userDefaultsChanged;


@end


#endif