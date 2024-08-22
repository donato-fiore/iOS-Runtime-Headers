// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLPHOTOLIBRARY_H
#define PLPHOTOLIBRARY_H

@class NSMutableArray, NSSet, NSPersistentStore, PAImageConversionServiceClient, PAVideoConversionServiceClient, NSString, PLPhotoLibraryPathManager, NSArray;
@protocol PLAlbumProtocol;

#import <Foundation/Foundation.h>

#import "PLGenericAlbum.h"
#import "PLManagedObjectContext.h"
#import "PLGlobalValues.h"
#import "PLKeywordManager.h"
#import "PLPhotoLibraryBundle.h"
#import "PLLibraryServicesManager.h"
#import "PLPhotoLibraryOptions.h"
#import "PLThumbnailIndexes.h"
#import "PLThumbnailManager.h"

@interface PLPhotoLibrary : NSObject {
    NSMutableArray *_transactionCompletionHandlers;
    PLGenericAlbum *_allImportedPhotosAlbum;
    PLGenericAlbum *_lastImportedPhotosAlbum;
    NSSet *_imageFileExtensions;
    NSSet *_rawImageFileExtensions;
    NSSet *_audioFileExtensions;
    NSSet *_extraVideoExtensions;
    os_unfair_lock_s _managedObjectContextLock;
    PLManagedObjectContext *_managedObjectContext;
    NSPersistentStore *_loadedPersistentStore;
    PAImageConversionServiceClient *_imageConversionServiceClient;
    PAVideoConversionServiceClient *_videoConversionServiceClient;
}


@property (readonly, getter=isCloudPhotoLibraryEnabled) BOOL cloudPhotoLibraryEnabled;
@property (readonly, retain, nonatomic) NSObject<PLAlbumProtocol> *filesystemImportProgressAlbum;
@property (readonly, nonatomic) PLGlobalValues *globalValues;
@property (readonly, nonatomic) PAImageConversionServiceClient *imageConversionServiceClient;
@property (readonly) BOOL isUnitTesting;
@property (readonly) PLKeywordManager *keywordManager;
@property (readonly) PLPhotoLibraryBundle *libraryBundle; // ivar: _libraryBundle
@property (readonly, weak, nonatomic) PLLibraryServicesManager *libraryServicesManager; // ivar: _libraryServicesManager
@property (readonly, nonatomic) PLManagedObjectContext *managedObjectContext;
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) PLPhotoLibraryOptions *options; // ivar: _options
@property (readonly, retain, nonatomic) NSObject<PLAlbumProtocol> *otaRestoreProgressAlbum;
@property (readonly, nonatomic) PLPhotoLibraryPathManager *pathManager; // ivar: _pathManager
@property (nonatomic) NSUInteger pendingTransactions; // ivar: _pendingTransactions
@property (readonly, copy, nonatomic) NSArray *photoStreamAlbums;
@property (readonly, copy, nonatomic) NSArray *photoStreamAlbumsForPreferences;
@property (readonly, retain, nonatomic) NSObject<PLAlbumProtocol> *syncProgressAlbum;
@property (readonly, retain, nonatomic) NSArray *syncedAlbums;
@property (readonly, nonatomic) PLThumbnailIndexes *thumbnailIndexes;
@property (readonly, nonatomic) PLThumbnailManager *thumbnailManager;
@property (readonly, nonatomic) PAVideoConversionServiceClient *videoConversionServiceClient;


+(BOOL)_assetsLibrary_isSharedPhotoStreamsSupportEnabled;
+(BOOL)areOpportunisticTasksDisabled;
+(BOOL)canSaveVideoToLibrary:(id)arg0 ;
+(BOOL)isAdjustmentEnvelopeExtension:(id)arg0 ;
+(BOOL)isAudioFileExtension:(id)arg0 ;
+(BOOL)isImageFileExtension:(id)arg0 ;
+(BOOL)isNonRawImageFileExtension:(id)arg0 ;
+(BOOL)isRawImageFileExtension:(id)arg0 ;
+(BOOL)isVideoFileExtension:(id)arg0 ;
+(BOOL)photoLibraryIsObtainable;
+(BOOL)removeFaceMetadataAtURL:(id)arg0 includingPeople:(BOOL)arg1 ;
+(BOOL)shouldTryFastPathWithLibraryBundle:(id)arg0 ;
+(BOOL)systemPhotoLibraryIsObtainable;
+(NSUInteger)CloudPhotoLibrarySize;
+(id)_debugStatisticsDescription;
+(id)_internalSystemPhotoLibrary;
+(id)_resourcesInfoFromMoc:(id)arg0 ;
+(id)_stateDictionary;
+(id)cameraPhotoLibrary;
+(id)cloudSharingPhotoLibrary;
+(id)cmmPhotoLibrary;
+(id)cplPhotoLibrary;
+(id)diagnosticsPhotoLibrary;
+(id)fileReservationForFileAtPath:(id)arg0 exclusive:(BOOL)arg1 ;
+(id)librarySummarySizeDataRefWithManagedObjectContext:(id)arg0 ;
+(id)masterURLFromSidecarURLs:(id)arg0 ;
+(id)myPhotoStreamPhotoLibrary;
+(id)newPhotoLibraryWithName:(char *)arg0 loadedFromBundle:(id)arg1 options:(id)arg2 error:(*id)arg3 ;
+(id)newPhotoLibraryWithName:(char *)arg0 loadedFromURL:(id)arg1 options:(id)arg2 error:(*id)arg3 ;
+(id)opportunisticTaskIsolationQueue;
+(id)photoOutboundSharingTmpDirectoryURL;
+(id)queueStatusDescription;
+(id)savedPhotosOriginalsSizeWithSizeDataRef:(id)arg0 ;
+(id)savedPhotosReferenceMediaSizeWithSizeDataRef:(id)arg0 ;
+(id)sharedPhotoLibrary;
+(id)systemMainQueuePhotoLibrary;
+(id)systemPhotoLibrary;
+(id)unitTestPhotoLibrary;
+(int)priorityForFileExtension:(id)arg0 ;
+(struct os_state_data_s *)_stateDataWithHints:(struct os_state_hints_s *)arg0 ;
+(void)_abortFromMocSaveFail_NSMOC_SQLITE_ABORT_4_withCode:(int)arg0 ;
+(void)_abortFromMocSaveFail_NSMOC_SQLITE_AUTH_23_withCode:(int)arg0 ;
+(void)_abortFromMocSaveFail_NSMOC_SQLITE_BUSY_5_withCode:(int)arg0 ;
+(void)_abortFromMocSaveFail_NSMOC_SQLITE_CANTOPEN_14_withCode:(int)arg0 ;
+(void)_abortFromMocSaveFail_NSMOC_SQLITE_CONSTRAINT_19_withCode:(int)arg0 ;
+(void)_abortFromMocSaveFail_NSMOC_SQLITE_CORRUPT_11_withCode:(int)arg0 ;
+(void)_abortFromMocSaveFail_NSMOC_SQLITE_DONE_101_withCode:(int)arg0 ;
+(void)_abortFromMocSaveFail_NSMOC_SQLITE_EMPTY_16_withCode:(int)arg0 ;
+(void)_abortFromMocSaveFail_NSMOC_SQLITE_ERROR_1_withCode:(int)arg0 ;
+(void)_abortFromMocSaveFail_NSMOC_SQLITE_FORMAT_24_withCode:(int)arg0 ;
+(void)_abortFromMocSaveFail_NSMOC_SQLITE_FULL_13_withCode:(int)arg0 ;
+(void)_abortFromMocSaveFail_NSMOC_SQLITE_INTERNAL_2_withCode:(int)arg0 ;
+(void)_abortFromMocSaveFail_NSMOC_SQLITE_INTERRUPT_9_withCode:(int)arg0 ;
+(void)_abortFromMocSaveFail_NSMOC_SQLITE_IOERR_10_withCode:(int)arg0 ;
+(void)_abortFromMocSaveFail_NSMOC_SQLITE_LOCKED_6_withCode:(int)arg0 ;
+(void)_abortFromMocSaveFail_NSMOC_SQLITE_MISMATCH_20_withCode:(int)arg0 ;
+(void)_abortFromMocSaveFail_NSMOC_SQLITE_MISUSE_21_withCode:(int)arg0 ;
+(void)_abortFromMocSaveFail_NSMOC_SQLITE_NOLFS_22_withCode:(int)arg0 ;
+(void)_abortFromMocSaveFail_NSMOC_SQLITE_NOMEM_7_withCode:(int)arg0 ;
+(void)_abortFromMocSaveFail_NSMOC_SQLITE_NOTADB_26_withCode:(int)arg0 ;
+(void)_abortFromMocSaveFail_NSMOC_SQLITE_NOTFOUND_12_withCode:(int)arg0 ;
+(void)_abortFromMocSaveFail_NSMOC_SQLITE_NOTICE_27_withCode:(int)arg0 ;
+(void)_abortFromMocSaveFail_NSMOC_SQLITE_OTHER_withCode:(int)arg0 ;
+(void)_abortFromMocSaveFail_NSMOC_SQLITE_PERM_3_withCode:(int)arg0 ;
+(void)_abortFromMocSaveFail_NSMOC_SQLITE_PROTOCOL_15_withCode:(int)arg0 ;
+(void)_abortFromMocSaveFail_NSMOC_SQLITE_RANGE_25_withCode:(int)arg0 ;
+(void)_abortFromMocSaveFail_NSMOC_SQLITE_READONLY_8_withCode:(int)arg0 ;
+(void)_abortFromMocSaveFail_NSMOC_SQLITE_ROW_100_withCode:(int)arg0 ;
+(void)_abortFromMocSaveFail_NSMOC_SQLITE_SCHEMA_17_withCode:(int)arg0 ;
+(void)_abortFromMocSaveFail_NSMOC_SQLITE_TOOBIG_18_withCode:(int)arg0 ;
+(void)_abortFromMocSaveFail_NSMOC_SQLITE_WARNING_28_withCode:(int)arg0 ;
+(void)_activateStatusTimer;
+(void)_assetsLibrary_disableSharedPhotoStreamsSupport;
+(void)_context:(id)arg0 saveFailedWithError:(id)arg1 ;
+(void)_contextSaveFailedDueToChangingSPL:(id)arg0 ;
+(void)_contextSaveFailedDueToClientRequestedShutdown:(id)arg0 ;
+(void)_contextSaveFailedWithError:(id)arg0 ;
+(void)_contextSaveFailedWithNoPersistentStores:(id)arg0 ;
+(void)_contextSaveFailedWithSQLiteResultCode:(int)arg0 ;
+(void)_contextSaveFailedWithTimeoutError:(id)arg0 ;
+(void)_getResourceData:(id)arg0 nonDerivativeSizeOut:(*uint8_t)arg1 derivativesSizeOut:(NSUInteger)arg2 fileBackedThumbnailsSizeOut:(*uint8_t)arg3 tableThumbnailsSizeOut:(NSUInteger)arg4 ;
+(void)_loadFileExtensionInformation;
+(void)_registerStateHandler;
// +(void)_withDispatchGroup:(id)arg0 onContext:(id)arg1 synchronously:(BOOL)arg2 shouldSave:(BOOL)arg3 refreshAfterSave:(BOOL)arg4 performTransaction:(id)arg5 completionHandler:(unk)arg6  ;
+(void)configureEnumeratorForLibrarySizeInfo:(id)arg0 completion:(id)arg1 ;
+(void)initialize;
+(void)postGlobalPhotoLibraryAvailableIfNecessary;
+(void)refreshCachedCountsAndDates:(BOOL)arg0 onAssetsContainerClass:(Class)arg1 inContext:(id)arg2 withPredicate:(id)arg3 ;
+(void)refreshCachedCountsOnAllAssetContainersInContext:(id)arg0 ;
+(void)reportLibraryDidDealloc:(id)arg0 ;
+(void)reportLibraryDidInit:(id)arg0 ;
+(void)setCloudAlbumSharingEnabled:(BOOL)arg0 ;
+(void)setPhotoStreamEnabled:(BOOL)arg0 ;
-(BOOL)_hasIncompleteAsset;
-(BOOL)batchDeleteAssetsWithPredicate:(id)arg0 reason:(id)arg1 error:(*id)arg2 ;
-(BOOL)batchDeleteObjectsWithEntity:(id)arg0 predicate:(id)arg1 error:(*id)arg2 ;
-(BOOL)deleteAllDiagnosticFiles:(*id)arg0 ;
-(BOOL)getPhotoCount:(*NSUInteger)arg0 videoCount:(*NSUInteger)arg1 ;
-(BOOL)getPhotoCount:(*NSUInteger)arg0 videoCount:(*NSUInteger)arg1 excludeTrashed:(BOOL)arg2 excludeInvisible:(BOOL)arg3 excludeCloudShared:(BOOL)arg4 ;
-(BOOL)hasCompletedMomentAnalysis;
-(BOOL)hasCompletedRestorePostProcessing;
-(BOOL)hasITunesSyncedContent;
-(BOOL)hasPendingAssetsIgnoreiTunes:(BOOL)arg0 ;
-(BOOL)isAlbumSynced:(id)arg0 ;
-(BOOL)isReadyForCloudPhotoLibrary;
-(BOOL)loadDatabaseWithOptions:(id)arg0 error:(*id)arg1 ;
-(BOOL)safeSave:(id)arg0 error:(*id)arg1 ;
-(BOOL)unloadDatabase:(*id)arg0 ;
-(NSUInteger)_dbFileSizes;
-(NSUInteger)_fileSizeAtPath:(id)arg0 ;
-(NSUInteger)countOfLocalAlbumsContainingAssets:(id)arg0 assetsInSomeAlbumCount:(*NSInteger)arg1 ;
-(NSUInteger)numberOfCPLSupportedAssetsOfKind:(short)arg0 includingTrashedSinceDate:(id)arg1 ;
-(NSUInteger)numberOfUnpushedAssetsOfKind:(short)arg0 ;
-(NSUInteger)sharedStreamsSize;
-(id)_fetchCompleteAssetIDsWithValidatedSavedAssetTypeMask:(unsigned short)arg0 context:(id)arg1 ;
-(id)_fetchedObjectsForDeleteWithEntity:(id)arg0 predicate:(id)arg1 batchSize:(NSUInteger)arg2 error:(*id)arg3 ;
-(id)_initWithPathManager:(id)arg0 ;
-(id)_loadClientDatabaseContextFastPath;
-(id)_loadClientDatabaseContextWithOptions:(id)arg0 error:(*id)arg1 ;
-(id)_loadDatabaseContextWithOptions:(id)arg0 error:(*id)arg1 ;
-(id)_loadServerDatabaseContextWithOptions:(id)arg0 error:(*id)arg1 ;
-(id)addDCIMEntryAtFileURL:(id)arg0 mainFileMetadata:(id)arg1 toEvent:(id)arg2 sidecarFileInfo:(id)arg3 progress:(id)arg4 importSessionIdentifier:(id)arg5 isImported:(BOOL)arg6 previewImage:(id)arg7 thumbnailImage:(id)arg8 savedAssetType:(short)arg9 replacementUUID:(id)arg10 publicGlobalUUID:(id)arg11 extendedInfo:(id)arg12 withUUID:(id)arg13 ignoreEmbeddedMetadata:(BOOL)arg14 isPlaceholder:(BOOL)arg15 placeholderFileURL:(id)arg16 ;
-(id)albumFromGroupURL:(id)arg0 ;
-(id)albumListForAlbumOfKind:(int)arg0 ;
-(id)albumListForContentMode:(int)arg0 ;
-(id)albumWithUuid:(id)arg0 ;
-(id)allImportedPhotosAlbum;
-(id)allImportedPhotosAlbumCreateIfNeeded:(BOOL)arg0 ;
-(id)assetURLForPhoto:(id)arg0 ;
-(id)assetURLForPhoto:(id)arg0 extension:(id)arg1 ;
-(id)assetWithUUID:(id)arg0 ;
-(id)assetWithUUID:(id)arg0 inContainer:(id)arg1 ;
-(id)assetsdClient;
-(id)constraintsDirector;
-(id)cplStatus;
-(id)description;
-(id)duplicatePhotoStreamPhotosForPhotos:(id)arg0 ;
-(id)estimatedLibrarySizes;
-(id)eventAlbumContainingPhoto:(id)arg0 ;
-(id)eventWithName:(id)arg0 andImportSessionIdentifier:(id)arg1 ;
-(id)iTunesSyncedContentInfo;
-(id)imageForFormat:(unsigned short)arg0 forAsset:(id)arg1 ;
-(id)incompleteRestoreProcesses;
-(id)init;
-(id)initWithName:(char *)arg0 libraryBundle:(id)arg1 options:(id)arg2 ;
-(id)lastImportedPhotosAlbum;
-(id)lastImportedPhotosAlbumCreateIfNeeded:(BOOL)arg0 ;
-(id)libraryID;
-(id)librarySizes;
-(id)librarySizesFromDB;
-(id)newImageForPhoto:(id)arg0 format:(unsigned short)arg1 ;
-(id)newImageForPhoto:(id)arg0 format:(unsigned short)arg1 allowPlaceholder:(BOOL)arg2 outImageProperties:(struct __CFDictionary **)arg3 outDeliveredPlaceholder:(*BOOL)arg4 ;
-(id)objectWithObjectID:(id)arg0 ;
-(id)personInfoManager;
-(id)photoAnalysisClient;
-(id)photoFromAssetURL:(id)arg0 ;
-(id)photoOutboundSharingTmpDirectoryURL;
-(id)syncProgressAlbumsIgnoreiTunes:(BOOL)arg0 ;
-(id)syncedAlbumSubtitleStringFormat;
-(id)transactionCompletionHandlers;
-(void)_applyAdjustmentFileInfo:(id)arg0 renderedContentFileInfo:(id)arg1 renderedVideoComplementFileInfo:(id)arg2 toAsset:(id)arg3 withMainFileURL:(id)arg4 mainFileMetadata:(id)arg5 ;
-(void)_applySideCarFiles:(id)arg0 toAsset:(id)arg1 withMainFileURL:(id)arg2 mainFileMetadata:(id)arg3 ;
-(void)_deleteEmptyImportAlbumsWithAddedAlbums:(id)arg0 ;
-(void)_deleteObsoleteMetadataFiles;
-(void)_enumerateFilesAtURL:(id)arg0 withBlock:(id)arg1 ;
-(void)_enumerateFilesAtURLs:(id)arg0 withBlock:(id)arg1 ;
-(void)_filterAlbums:(id)arg0 toTrashableAlbums:(*id)arg1 deletableAlbums:(*id)arg2 otherAlbums:(*id)arg3 ;
-(void)_filterAssets:(id)arg0 toTrashableAssets:(*id)arg1 deletableAssets:(*id)arg2 otherAssets:(*id)arg3 ;
-(void)_inq_createPhotoStreamAlbumStreamID:(id)arg0 ;
-(void)_photoLibraryCorruptNotification;
-(void)_photoLibraryForceClientExitNotification;
-(void)_processPhotoIrisSidecarIfNecessary:(id)arg0 forAsset:(id)arg1 mainFileMetadata:(id)arg2 ;
-(void)_recreateItemsFromMetadataAtDirectoryURLs:(id)arg0 includeAlbums:(BOOL)arg1 ;
-(void)_removeOldFaceMetadataAsync;
-(void)_safeSave:(id)arg0 ;
-(void)_updateAssetCountKeyPath:(id)arg0 withPendingCountKeyPath:(id)arg1 inContext:(id)arg2 ;
-(void)_updateMemoryCountKeyPath:(id)arg0 withPendingCountKeyPath:(id)arg1 inContext:(id)arg2 ;
-(void)_userApplyTrashedState:(short)arg0 toAlbums:(id)arg1 ;
-(void)_userApplyTrashedState:(short)arg0 toAssets:(id)arg1 localOnlyDelete:(BOOL)arg2 ;
-(void)_userDeleteAlbums:(id)arg0 ;
-(void)_userDeleteAssets:(id)arg0 withReason:(id)arg1 localOnlyDelete:(BOOL)arg2 ;
-(void)addCompletionHandlerToCurrentTransaction:(id)arg0 ;
-(void)batchDeleteAssets:(id)arg0 withReason:(id)arg1 ;
-(void)cleanupAfterImportAllDCIMAssets;
-(void)cleanupIncompleteAssetsAfterOTARestore;
-(void)clearTransactionCompletionHandlers;
-(void)clientApplicationWillEnterForeground;
-(void)countOfReferencedMediaWithCompletionHandler:(id)arg0 ;
-(void)createPhotoStreamAlbumWithStreamID:(id)arg0 ;
-(void)dataMigratorSupportCleanupModelForDataMigrationPurgeMissingSharedAndSynced;
-(void)dealloc;
-(void)deleteExpiredTrashedAssetsAndAlbums;
-(void)deleteExpiredTrashedResources;
-(void)deleteITunesSyncedContentForEnablingiCPL;
-(void)deleteUnknownDeferredIntermediates;
-(void)deleteUnusedCameraMetadataPaths;
-(void)disableOpportunisticTasks;
-(void)enableOpportunisticTasks;
-(void)handlePersistentStoreRemoval:(id)arg0 ;
-(void)handlePossibleCoreDataError:(id)arg0 ;
-(void)invalidateWithReason:(id)arg0 ;
-(void)modifyDCIMEntryForPhoto:(id)arg0 ;
-(void)old_refreshCachedCountsOnAllAssetContainersInContext:(id)arg0 ;
-(void)performBlock:(id)arg0 ;
// -(void)performBlock:(id)arg0 completionHandler:(unk)arg1  ;
// -(void)performBlock:(id)arg0 completionHandler:(unk)arg1 withPriority:(id)arg2  ;
// -(void)performBlock:(id)arg0 withPriority:(unk)arg1  ;
-(void)performBlockAndWait:(id)arg0 ;
// -(void)performBlockAndWait:(id)arg0 completionHandler:(unk)arg1  ;
// -(void)performBlockAndWait:(id)arg0 forceSave:(unk)arg1  ;
-(void)performTransaction:(id)arg0 ;
// -(void)performTransaction:(id)arg0 completionHandler:(unk)arg1  ;
// -(void)performTransaction:(id)arg0 completionHandler:(unk)arg1 withPriority:(id)arg2  ;
// -(void)performTransaction:(id)arg0 withPriority:(unk)arg1  ;
-(void)performTransactionAndWait:(id)arg0 ;
// -(void)performTransactionAndWait:(id)arg0 completionHandler:(unk)arg1  ;
-(void)recreateAlbumsAndPersonsFromMetadata;
-(void)recreateMemoriesAndPersonsFromMetadata;
-(void)recreatePersonsFromMetadata;
-(void)repairSingletonObjects;
-(void)resetCachedImportAlbumsIfNeededForAlbum:(id)arg0 ;
-(void)updateAlbumKeyAssetsInContext:(id)arg0 withPredicate:(id)arg1 ;
-(void)updateAssetPlayShareViewCountsInContext:(id)arg0 ;
-(void)updateMemoryPlayShareViewCountsInContext:(id)arg0 ;
-(void)userExpungeAlbums:(id)arg0 ;
-(void)userExpungeAssets:(id)arg0 ;
-(void)userExpungeAssets:(id)arg0 localOnlyDelete:(BOOL)arg1 ;
-(void)userTrashAlbums:(id)arg0 ;
-(void)userTrashAssets:(id)arg0 ;
-(void)userUntrashAlbums:(id)arg0 ;
-(void)userUntrashAssets:(id)arg0 ;
-(void)withDispatchGroup:(id)arg0 performBlock:(id)arg1 ;
-(void)withDispatchGroup:(id)arg0 performTransaction:(id)arg1 ;
// -(void)withDispatchGroup:(id)arg0 performTransaction:(id)arg1 completionHandler:(unk)arg2  ;


@end


#endif