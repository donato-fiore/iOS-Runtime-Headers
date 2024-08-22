// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PHPHOTOLIBRARY_H
#define PHPHOTOLIBRARY_H

@class PLLazyObject, PLFileSystemVolume, NSManagedObjectID, PLAssetsdClient, NSHashTable, PLPhotoLibrary, PLCacheMetricsCollectorClient, NSMutableDictionary, CPLStatus, NSString, PAImageConversionServiceClient, PLPhotoAnalysisServiceClient, PLPhotoLibraryBundle, NSURL, NSProgress, NSError, PLPhotoKitVariationCache, PAVideoConversionServiceClient;
@protocol PHBatchFetchingArrayDataSource, CPLStatusDelegate, PHPerformChangesRequest, OS_dispatch_queue, PLPhotoAnalysisServiceTaxonomyResolver;

#import <Foundation/Foundation.h>

#import "PHPhotoLibraryAppPrivateData.h"
#import "PHPersistentChangeToken.h"
#import "PHPerformChangesRequest.h"

@interface PHPhotoLibrary : NSObject <PHBatchFetchingArrayDataSource, CPLStatusDelegate, PHPerformChangesRequest>

 {
    PLLazyObject *_lazyPhotoLibrary;
    PLLazyObject *_lazyMainQueueConcurrencyPhotoLibrary;
    PLLazyObject *_lazyMainQueuePhotoLibrary;
    PLLazyObject *_lazyBackgroundQueuePhotoLibrary;
    PLLazyObject *_lazyUserInitiatedQueuePhotoLibrary;
    PLLazyObject *_lazyBackgroundQueueObjectFetchingPhotoLibrary;
    PLLazyObject *_lazyChangeHandlingPhotoLibrary;
    PLLazyObject *_lazyAlbumRootFolderObjectID;
    PLLazyObject *_lazyProjectAlbumRootFolderObjectID;
    PLLazyObject *_lazyAppPrivateData;
    PLLazyObject *_lazyCacheMetricsCollectorClient;
    PLLazyObject *_lazyCPLStatus;
    PLLazyObject *_lazyIsReadyForAnalysis;
    PLFileSystemVolume *_libraryFileSystemVolume;
    uint8_t _isCompletedPostOpenInitialization;
    NSInteger _wellKnownPhotoLibraryIdentifier;
}


@property (readonly, nonatomic) NSManagedObjectID *albumRootFolderObjectID;
@property (readonly, nonatomic) PHPhotoLibraryAppPrivateData *appPrivateData;
@property (readonly, nonatomic) PLAssetsdClient *assetsdClient;
@property (retain, nonatomic) NSHashTable *availabilityObservers; // ivar: _availabilityObservers
@property (readonly) PLPhotoLibrary *backgroundQueueObjectFetchingPhotoLibrary;
@property (readonly) PLPhotoLibrary *backgroundQueuePhotoLibrary;
@property (readonly, nonatomic) PLCacheMetricsCollectorClient *cacheMetricsCollector;
@property (readonly) PLPhotoLibrary *changeHandlingPhotoLibrary;
@property (retain, nonatomic) NSMutableDictionary *changeNotificationInfo; // ivar: _changeNotificationInfo
@property (nonatomic) BOOL clearsOIDCacheAfterFetchResultDealloc; // ivar: _clearsOIDCacheAfterFetchResultDealloc
@property (readonly, nonatomic, getter=isCloudPhotoLibraryEnabled) BOOL cloudPhotoLibraryEnabled;
@property (readonly, nonatomic) CPLStatus *cplStatus;
@property (readonly, nonatomic) PHPersistentChangeToken *currentToken;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSHashTable *externalObservers; // ivar: _externalObservers
@property (retain, nonatomic) NSHashTable *fetchResults; // ivar: _fetchResults
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PAImageConversionServiceClient *imageConversionServiceClient; // ivar: _imageConversionServiceClient
@property (retain, nonatomic) NSHashTable *internalObservers; // ivar: _internalObservers
@property (nonatomic) BOOL isChangeProcessingPending; // ivar: _isChangeProcessingPending
@property (readonly, nonatomic) BOOL isCloudPhotoLibrary;
@property (readonly, nonatomic) BOOL isReadOnlyCloudPhotoLibrary;
@property (readonly, nonatomic) BOOL isReadyForAnalysis;
@property (readonly, nonatomic) BOOL isSystemPhotoLibrary;
@property (nonatomic) CGFloat lastChangeProcessingStarted; // ivar: _lastChangeProcessingStarted
@property (readonly, nonatomic) PLPhotoLibrary *mainQueueConcurrencyPhotoLibrary;
@property (readonly) PLPhotoLibrary *mainQueuePhotoLibrary;
@property (retain, nonatomic) PHPerformChangesRequest *performChangesRequest; // ivar: _performChangesRequest
@property (readonly, nonatomic) PLPhotoAnalysisServiceClient *photoAnalysisClient;
@property (readonly) PLPhotoLibrary *photoLibrary;
@property (readonly) PLPhotoLibraryBundle *photoLibraryBundle; // ivar: _photoLibraryBundle
@property (readonly, nonatomic) NSURL *photoLibraryURL; // ivar: _photoLibraryURL
@property (readonly, nonatomic) NSProgress *postOpenProgress; // ivar: _postOpenProgress
@property (readonly, nonatomic) NSManagedObjectID *projectAlbumRootFolderObjectID;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<PLPhotoAnalysisServiceTaxonomyResolver> *taxonomyResolver;
@property (readonly) PLPhotoLibrary *transactionPhotoLibrary; // ivar: _transactionPhotoLibrary
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *transactionQueue; // ivar: _transactionQueue
@property (readonly, nonatomic) unsigned short type; // ivar: _type
@property (retain) NSError *unavailabilityReason; // ivar: _unavailabilityReason
@property (nonatomic) BOOL unknownMergeEvent; // ivar: _unknownMergeEvent
@property (readonly) PLPhotoLibrary *userInitiatedQueuePhotoLibrary;
@property (readonly, nonatomic) NSString *uuid;
@property (readonly) PLPhotoKitVariationCache *variationCache;
@property (retain, nonatomic) PAVideoConversionServiceClient *videoConversionServiceClient; // ivar: _videoConversionServiceClient
@property (readonly, nonatomic) NSInteger wellKnownPhotoLibraryIdentifier;


+(BOOL)_isInternalObserver:(id)arg0 ;
+(BOOL)checkAuthorizationStatusForAPIAccessLevel:(NSInteger)arg0 ;
+(BOOL)createOrUpgradePhotoLibraryWithWellKnownIdentifier:(NSInteger)arg0 error:(*id)arg1 ;
+(BOOL)hasSharedPhotoLibrary;
+(BOOL)isMultiLibraryModeEnabled;
+(BOOL)isSystemPhotoLibraryURL:(id)arg0 ;
+(BOOL)setImagePickerPhotoLibrary:(id)arg0 error:(*id)arg1 ;
+(BOOL)setSystemPhotoLibraryURL:(id)arg0 error:(*id)arg1 ;
+(BOOL)shouldDisplayMergeCandidates:(id)arg0 forPerson:(id)arg1 ;
+(CGFloat)nextOverrideTimeIntervalForSystemBudgets:(NSUInteger)arg0 ;
+(Class)PHObjectClassForEntityName:(id)arg0 ;
+(Class)PHObjectClassForOID:(id)arg0 ;
+(Class)classForFetchType:(id)arg0 ;
+(NSInteger)_photosAccessAllowedForAccessLevel:(NSInteger)arg0 ;
+(NSInteger)authorizationStatus;
+(NSInteger)authorizationStatusForAccessLevel:(NSInteger)arg0 ;
+(NSInteger)collectionListTypeForIdentifierCode:(id)arg0 ;
+(NSUInteger)_countOfAssetsAllowedForProcessingInLibrary:(id)arg0 error:(*id)arg1 ;
+(char *)systemPhotoLibraryAvailableNotificationName;
+(char *)systemPhotoLibraryURLChangeNotificationName;
+(id)PHObjectClasses;
+(id)PHObjectClassesByEntityName;
+(id)_effectiveRootEntity:(id)arg0 ;
+(id)_sharedPhotoLibrary;
+(id)fetchTypeForLocalIdentifierCode:(id)arg0 ;
+(id)imagePickerPhotoLibrary;
+(id)openPhotoLibraryWithWellKnownIdentifier:(NSInteger)arg0 error:(*id)arg1 ;
+(id)predicateForAssetsAnalyzedForFacesWithAssetObjectIDs:(id)arg0 ;
+(id)sharedContactStore;
+(id)sharedLazyPhotoLibraryForCMM;
+(id)sharedMomentSharePhotoLibrary;
+(id)sharedPhotoLibrary;
+(id)stringFromPHPhotoLibraryType:(unsigned short)arg0 ;
+(id)systemPhotoLibraryURL;
+(id)uniqueObjectIDCache;
+(id)uniquedOID:(id)arg0 ;
+(id)uniquedOIDs:(id)arg0 ;
+(id)uniquedOIDsFromObjects:(id)arg0 ;
+(id)wellKnownPhotoLibraryURLForIdentifier:(NSInteger)arg0 ;
+(void)_forceUserInterfaceReload;
+(void)_requestAuthorizationForAccessLevel:(NSInteger)arg0 supportsLimited:(BOOL)arg1 handler:(id)arg2 ;
+(void)assertRunningInExtension;
+(void)assertTransaction;
+(void)enableMultiLibraryMode;
+(void)initialize;
+(void)removeAllUniquedOIDs;
+(void)requestAuthorization:(id)arg0 ;
+(void)requestAuthorizationForAccessLevel:(NSInteger)arg0 handler:(id)arg1 ;
+(void)setNeedsToRepairKeyCuratedAssetForMemories:(id)arg0 ;
+(void)setSharedPhotoLibrary:(id)arg0 ;
-(BOOL)_postOpenInitializationWithError:(*id)arg0 ;
-(BOOL)_preflightRequest:(id)arg0 withError:(*id)arg1 ;
-(BOOL)createOrUpgradeLibraryUsingOptions:(id)arg0 error:(*id)arg1 ;
-(BOOL)createPhotoLibraryUsingOptions:(id)arg0 error:(*id)arg1 ;
-(BOOL)createPhotoLibraryWithError:(*id)arg0 ;
-(BOOL)createPhotoLibraryWithOptions:(NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)invalidatePersistentGraphCachesAndReturnError:(*id)arg0 ;
-(BOOL)invalidateTransientGraphCachesAndReturnError:(*id)arg0 ;
-(BOOL)isFaceProcessingFinished;
-(BOOL)isPHPhotoLibraryForCMM;
-(BOOL)openAndWaitWithUpgrade:(BOOL)arg0 error:(*id)arg1 ;
-(BOOL)openAndWaitWithUpgrade:(BOOL)arg0 options:(id)arg1 error:(*id)arg2 ;
// -(BOOL)performCancellableChangesAndWait:(id)arg0 error:(unk)arg1  ;
// -(BOOL)performChangesAndWait:(id)arg0 error:(unk)arg1  ;
-(BOOL)petVIPModelExists;
-(BOOL)requestAssetRevGeocodingForAssetLocalIdentifiers:(id)arg0 withError:(*id)arg1 ;
-(BOOL)requestAssetRevGeocodingWithError:(*id)arg0 ;
-(BOOL)requestEnrichmentWithOptions:(id)arg0 error:(*id)arg1 ;
-(BOOL)requestHighlightCollectionEnrichmentWithOptions:(id)arg0 error:(*id)arg1 ;
-(BOOL)requestHighlightEnrichmentWithOptions:(id)arg0 error:(*id)arg1 ;
-(BOOL)shouldMobileSlideShowLaunchWithError:(*id)arg0 ;
-(CGFloat)_analysisProgressForHighlight:(id)arg0 fetchCountBlock:(id)arg1 ;
-(CGFloat)faceAnalysisProgressForHighlight:(id)arg0 error:(*id)arg1 ;
-(CGFloat)ratioOfAssetsAtOrAboveSceneAnalysisVersion:(short)arg0 ;
-(CGFloat)ratioOfAssetsWithFacesProcessed;
-(CGFloat)ratioOfAssetsWithFullAnalysisProcessed;
-(CGFloat)ratioOfAssetsWithScenesProcessed;
-(CGFloat)sceneAnalysisProgressForHighlight:(id)arg0 usingSceneVersion:(short)arg1 ;
-(NSInteger)_initialRetryCountForChangesRequest:(id)arg0 ;
-(NSUInteger)countOfClusteringEligibleFaces;
-(NSUInteger)countOfDirtyFaceGroups;
-(NSUInteger)countOfFaceCropsToBeGenerated;
-(NSUInteger)countOfUnclusteredFaces;
-(NSUInteger)countOfUnprocessedFaceCrops;
-(id)_assetOIDsForHighlight:(id)arg0 withContext:(id)arg1 ;
-(id)_cloudIdentifierKeysByFetchType;
-(id)_computeFingerprintsForAssetsWithObjectIDsByUUID:(id)arg0 ;
-(id)_errorForAuthorizationStatus:(NSInteger)arg0 accessLevel:(NSInteger)arg1 ;
-(id)_faceAnalysisProcessingCounts;
-(id)_fetchPersistentChangesSinceToken:(id)arg0 maximumChangeThreshold:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)_fingerPrintsForAssetUUIDs:(id)arg0 ;
-(id)_getAssetLocalIdentifiersByFingerPrintForFingerPrints:(id)arg0 ;
-(id)_getCloudClient;
-(id)_getPhotoKitClient;
-(id)_initializeAppPrivateData;
-(id)_initializeCPLStatus;
-(id)_initializeIsReadyForAnalysis;
-(id)_lazyPhotoLibrary;
-(id)_popChangesRequest;
-(id)allSocialGroupsForPersonIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)allowedEntities;
-(id)analysisProgressCountsForWorkerType:(short)arg0 ;
-(id)assetIdentifiersForPersonIdentifiers:(id)arg0 error:(*id)arg1 ;
-(id)assetUUIDsAllowedForCurationFromAssets:(id)arg0 ;
-(id)bfa_fetchObjectsForOIDs:(id)arg0 propertyHint:(NSUInteger)arg1 overrideResultsWithClass:(Class)arg2 ;
-(id)bfa_fetchedObjectsForOIDs:(id)arg0 propertySetClass:(Class)arg1 ;
-(id)bfa_tombstoneObjectForOID:(id)arg0 uuid:(id)arg1 propertyHint:(NSUInteger)arg2 overrideResultsWithClass:(Class)arg3 ;
-(id)changeRequestForUUID:(id)arg0 ;
-(id)cloudIdentifierMappingsForLocalIdentifiers:(id)arg0 ;
-(id)cloudIdentifiersForLocalIdentifiers:(id)arg0 ;
-(id)curationDebugInformationForAssetCollectionWithLocalIdentifier:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)curationDebugInformationForAssetLocalIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)exportGraphForPurpose:(id)arg0 error:(*id)arg1 ;
-(id)faceAnalysisProgressCounts;
-(id)faceClusterSequenceNumbersOfFacesWithClusterSequenceNumbers:(id)arg0 error:(*id)arg1 ;
-(id)faceClusterSequenceNumbersOfKeyFacesInAlgorithmicFaceGroupsForPerson:(id)arg0 verifiedClusterSequenceNumbers:(id)arg1 ;
-(id)fetchDictionariesByPHClassForOIDs:(id)arg0 propertyHint:(NSUInteger)arg1 includeTrash:(BOOL)arg2 overrideWithPHClass:(Class)arg3 ;
-(id)fetchPHObjectsForOIDs:(id)arg0 ;
-(id)fetchPHObjectsForOIDs:(id)arg0 propertyHint:(NSUInteger)arg1 includeTrash:(BOOL)arg2 overrideResultsWithClass:(Class)arg3 ;
-(id)fetchPHObjectsForUUIDs:(id)arg0 entityName:(id)arg1 ;
-(id)fetchPersistentChangesSinceToken:(id)arg0 error:(*id)arg1 ;
-(id)fetchPersistentChangesWithRequest:(id)arg0 error:(*id)arg1 ;
-(id)fetchUpdatedObject:(id)arg0 ;
-(id)fetchedObjectsForOIDs:(id)arg0 propertySetClass:(Class)arg1 ;
-(id)graphStatisticsDescription:(*id)arg0 ;
-(id)graphStatusDescription:(*id)arg0 ;
-(id)highlightDebugInformationForHighlightWithLocalIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)inferredContactByPersonLocalIdentifierForPersonLocalIdentifiers:(id)arg0 ;
-(id)inferredContactForPersonLocalIdentifier:(id)arg0 ;
-(id)init;
-(id)initMomentShareLibrary;
-(id)initSharedLibrary;
-(id)initWithPLPhotoLibrary:(id)arg0 ;
-(id)initWithPLPhotoLibrary:(id)arg0 type:(unsigned short)arg1 ;
-(id)initWithPhotoLibraryBundle:(id)arg0 type:(unsigned short)arg1 ;
-(id)initWithPhotoLibraryURL:(id)arg0 ;
-(id)initWithPhotoLibraryURL:(id)arg0 type:(unsigned short)arg1 ;
-(id)libraryID;
-(id)librarySpecificFetchOptions;
-(id)localIdentifierMappingsForCloudIdentifiers:(id)arg0 ;
-(id)localIdentifiersForCloudIdentifiers:(id)arg0 ;
-(id)lookupCloudIdentifiersForLocalIdentifiers:(id)arg0 ;
-(id)lookupLocalIdentifiersForCloudIdentifiers:(id)arg0 ;
-(id)mainQueueManagedObjectContext;
-(id)managedObjectContext;
-(id)managedObjectContextForCurrentQueueQoS;
-(id)memoryDebugInformationForMemoryWithLocalIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)migrationDate;
-(id)newClusteringEligibleFacesFetchOptions;
-(id)newFaceCropsToBeGeneratedFetchOptions;
-(id)newUnclusteredFacesFetchOptions;
-(id)objectFetchingContextForCurrentQueueQoS;
-(id)objectFetchingManagedObjectContextForObject:(id)arg0 propertySet:(id)arg1 ;
-(id)plLibraryOptionsFromPHOptions:(id)arg0 createOptions:(*NSUInteger)arg1 ;
-(id)pl_syncProgressAlbums;
-(id)queryForType:(id)arg0 withIdentifiers:(id)arg1 local:(BOOL)arg2 ;
-(id)relatedDebugInformationBetweenAssetForLocalIdentifier:(id)arg0 andRelatedAssetCollectionForLocalIdentifier:(id)arg1 options:(id)arg2 precision:(NSUInteger)arg3 relatedType:(NSUInteger)arg4 error:(*id)arg5 ;
-(id)relatedDebugInformationBetweenReferenceAssetCollectionForLocalIdentifier:(id)arg0 andRelatedAssetCollectionForLocalIdentifier:(id)arg1 options:(id)arg2 precision:(NSUInteger)arg3 relatedType:(NSUInteger)arg4 error:(*id)arg5 ;
-(id)requestAssetSearchKeywordsForAssetCollectionUUIDs:(id)arg0 ofType:(NSUInteger)arg1 withOptions:(id)arg2 error:(*id)arg3 ;
-(id)requestGraphSearchMetadataWithOptions:(id)arg0 error:(*id)arg1 ;
-(id)requestSearchIndexKeywordsForAssetCollectionUUIDs:(id)arg0 ofType:(NSUInteger)arg1 withOptions:(id)arg2 error:(*id)arg3 ;
-(id)requestSearchableAssetUUIDsBySocialGroupForAssetCollectionUUIDs:(id)arg0 ofType:(NSUInteger)arg1 isFullAnalysis:(BOOL)arg2 withOptions:(id)arg3 error:(*id)arg4 ;
-(id)requestSynonymsDictionariesWithError:(*id)arg0 ;
-(id)requestTextFeaturesForMomentLocalIdentifiers:(id)arg0 error:(*id)arg1 ;
-(id)requestZeroKeywordsWithOptions:(id)arg0 error:(*id)arg1 ;
-(id)sceneInformationFromStartDate:(id)arg0 toEndDate:(id)arg1 ;
-(id)sceneTaxonomyDetectorNodeSceneIDsFromSceneID:(unsigned int)arg0 ;
-(id)sharingMessageSuggestionDebugInformationForAssetCollectionLocalIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)sharingSuggestionDebugInformationForAssetCollectionLocalIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)sharingSuggestionWithRandomPick:(BOOL)arg0 fallbackToRecentMoments:(BOOL)arg1 needsNotification:(BOOL)arg2 ;
-(id)socialGroupsForPersonIdentifiers:(id)arg0 error:(*id)arg1 ;
-(id)sortedArrayOfPersonIdentifiers:(id)arg0 error:(*id)arg1 ;
-(id)suggestedContactsForPersonLocalIdentifier:(id)arg0 ;
-(id)suggestedMePersonIdentifierWithError:(*id)arg0 ;
-(id)suggestionsForPersonLocalIdentifier:(id)arg0 clusterSequenceNumbers:(id)arg1 excludePersonLocalIdentifiers:(id)arg2 minimumSuggestionFaceCount:(NSUInteger)arg3 ;
-(id)upgradePhotoLibraryUsingOptions:(id)arg0 completion:(id)arg1 ;
-(id)urlForApplicationDataFolderIdentifier:(NSInteger)arg0 ;
// -(int)requestProcessingTypes:(NSUInteger)arg0 forAssetsWithLocalIdentifiers:(id)arg1 progressHandler:(id)arg2 completionHandler:(unk)arg3  ;
-(void)_addObserver:(id)arg0 ;
-(void)_beginTransaction;
-(void)_callLegacyCompletionTarget:(id)arg0 completionSelector:(SEL)arg1 contextInfo:(*void)arg2 withSuccess:(BOOL)arg3 error:(id)arg4 ;
-(void)_cancelTransactionOnExecutionContext:(id)arg0 withInstrumentation:(id)arg1 completionHandler:(id)arg2 ;
-(void)_commitTransactionOnExecutionContext:(id)arg0 withInstrumentation:(id)arg1 completionHandler:(id)arg2 ;
-(void)_denyTransactionOnExecutionContext:(id)arg0 withInstrumentation:(id)arg1 authorizationStatus:(NSInteger)arg2 accessLevel:(NSInteger)arg3 completionHandler:(id)arg4 ;
-(void)_endTransaction;
-(void)_handleLibraryBecameUnavailable:(id)arg0 reason:(id)arg1 ;
-(void)_handleServiceConnectionClosed:(id)arg0 ;
-(void)_importExportRequests:(id)arg0 assetCollection:(id)arg1 bundleStagingDirectoryURL:(id)arg2 resultHandler:(id)arg3 ;
-(void)_importIntoLibraryWithAssetCollection:(id)arg0 assetBundles:(id)arg1 resultHandler:(id)arg2 ;
-(void)_importRenderedAssets:(id)arg0 assetCollection:(id)arg1 bundleStagingDirectoryURL:(id)arg2 resultHandler:(id)arg3 ;
-(void)_invalidateEverythingWithReason:(id)arg0 ;
-(void)_notifiyPersistentChangeObservers;
-(void)_notifyAvailabilityObserversWithReason:(id)arg0 ;
-(void)_onQueueNotifyAvailabilityObserversWithReason:(id)arg0 ;
-(void)_processPendingChanges;
-(void)_removeObserver:(id)arg0 ;
-(void)_requestAnalysisProgressWithCompletion:(id)arg0 ;
-(void)_sendChangesRequest:(id)arg0 onExecutionContext:(id)arg1 withInstrumentation:(id)arg2 remainingRetryCount:(NSInteger)arg3 reply:(id)arg4 ;
-(void)_sendChangesRequest:(id)arg0 onExecutionContext:(id)arg1 withInstrumentation:(id)arg2 reply:(id)arg3 ;
-(void)_startObservingServiceConnectionInvalidated;
-(void)_startWatchingFileSystemVolumeForLibraryAvailability;
-(void)_startWatchingForLibraryAvailability;
-(void)_stopObservingServiceConnectionInvalidated;
-(void)_stopWatchingFileSystemVolumeForLibraryAvailability;
-(void)_stopWatchingForLibraryAvailability;
-(void)accountDidChange:(id)arg0 ;
-(void)appPrivateDataWriteFailedWithError:(id)arg0 ;
-(void)assertTransaction;
-(void)cancelOperationsWithIdentifiers:(id)arg0 reply:(id)arg1 ;
-(void)close;
-(void)closeWithReason:(id)arg0 ;
-(void)countOfReferencedMediaWithCompletionHandler:(id)arg0 ;
-(void)dealloc;
-(void)handleMergeNotification:(id)arg0 ;
-(void)importAssetsFromLibrary:(id)arg0 assetIdentifiers:(id)arg1 containerIdentifier:(id)arg2 resultHandler:(id)arg3 ;
-(void)legacySaveImageDataToCameraRoll:(id)arg0 completionTarget:(id)arg1 completionSelector:(SEL)arg2 contextInfo:(*void)arg3 ;
-(void)legacySaveImageToCameraRoll:(id)arg0 completionTarget:(id)arg1 completionSelector:(SEL)arg2 contextInfo:(*void)arg3 ;
-(void)legacySaveScreenshotToCameraRoll:(id)arg0 completionTarget:(id)arg1 completionSelector:(SEL)arg2 contextInfo:(*void)arg3 ;
-(void)legacySaveVideoToCameraRoll:(id)arg0 completionTarget:(id)arg1 completionSelector:(SEL)arg2 contextInfo:(*void)arg3 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
// -(void)performCancellableChanges:(id)arg0 completionHandler:(unk)arg1  ;
// -(void)performChanges:(id)arg0 completionHandler:(unk)arg1  ;
-(void)personPromotionProcessingStatusForUserInterface:(id)arg0 ;
-(void)recordDeleteRequest:(id)arg0 ;
-(void)recordInsertRequest:(id)arg0 ;
-(void)recordUpdateRequest:(id)arg0 ;
-(void)registerAvailabilityObserver:(id)arg0 ;
-(void)registerChangeObserver:(id)arg0 ;
-(void)registerFetchResult:(id)arg0 ;
-(void)requestAnalysisProgressCountsWithCompletion:(id)arg0 ;
-(void)requestGenerateQuestionsWithOptions:(id)arg0 reply:(id)arg1 ;
-(void)requestGraphReadyNotificationWithCoalescingIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)requestGraphRebuildProgressWithCompletion:(id)arg0 ;
-(void)requestGraphRebuildWithOptions:(id)arg0 progress:(id)arg1 completion:(id)arg2 ;
-(void)requestGraphRebuildWithProgress:(id)arg0 completion:(id)arg1 ;
-(void)requestHighlightEstimatesWithCompletion:(id)arg0 ;
-(void)requestSearchIndexGraphUpdates:(id)arg0 supportingData:(id)arg1 withCompletion:(id)arg2 ;
-(void)requestSearchIndexUpdates:(id)arg0 withCompletion:(id)arg1 ;
-(void)requestSyndicationProcessingWithOptions:(id)arg0 reply:(id)arg1 ;
-(void)requestTotalProgressCountsForWorkerType:(short)arg0 states:(id)arg1 completion:(id)arg2 ;
-(void)requestTotalProgressCountsWithCompletion:(id)arg0 ;
-(void)resetFaceAnalysisWithResetLevel:(NSInteger)arg0 completionHandler:(id)arg1 ;
-(void)resetLimitedLibraryAccessForApplication:(id)arg0 completionHandler:(id)arg1 ;
-(void)runPFLWithAttachments:(id)arg0 recipeUserInfo:(id)arg1 resultBlock:(id)arg2 ;
-(void)setChangeRequest:(id)arg0 forUUID:(id)arg1 ;
-(void)setWidgetTimelineGeneratedForDisplaySize:(struct CGSize )arg0 ;
-(void)simulateMemoriesNotificationWithOptions:(id)arg0 reply:(id)arg1 ;
-(void)statusDidChange:(id)arg0 ;
-(void)unregisterAvailabilityObserver:(id)arg0 ;
-(void)unregisterChangeObserver:(id)arg0 ;
-(void)unregisterFetchResult:(id)arg0 ;


@end


#endif