// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXPHOTOSDATASOURCE_H
#define PXPHOTOSDATASOURCE_H

@class NSHashTable, NSDictionary, NSMutableDictionary, NSMutableSet, NSMutableOrderedSet, NSArray, PHFetchResult, NSNumber, NSSet, NSPredicate, PHAssetCollection, PHCollection, NSString, PHPhotoLibrary, PHAsset;
@protocol PXPhotoLibraryUIChangeObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PXPhotosDataSourceSectionCache.h"
#import "PXBackgroundFetchToken.h"
#import "PXLIFOQueue.h"
#import "PXPhotosDataSource.h"

@interface PXPhotosDataSource : NSObject <PXPhotoLibraryUIChangeObserver>

 {
    NSObject<OS_dispatch_queue> *_observersQueue;
    BOOL _observersQueue_shouldCopyChangeObserversOnWrite;
    NSHashTable *_observersQueue_observers;
    PXPhotosDataSourceSectionCache *__sectionCache;
    PXPhotosDataSourceSectionCache *__preparedSectionCache;
    NSDictionary *_hintIndexPathByAssetReferenceCache;
    NSDictionary *_preparedIndexPathByAssetReferenceCache;
    NSDictionary *_preparedResultRecordChangeDetailsByAssetCollection;
    NSMutableDictionary *_resultRecordByAssetCollection;
    NSMutableSet *__inaccurateAssetCollections;
    BOOL _inaccurateAssetCollectionsNeedsUpdate;
    NSMutableDictionary *_preparedChangeDetailsByAssetCollection;
    NSMutableDictionary *_infoForAssetCollection;
    BOOL _backgroundFetchOriginSectionChanged;
    BOOL _needToStartBackgroundFetch;
    PXBackgroundFetchToken *_backgroundFetchToken;
    BOOL _interruptBackgroundFetch;
    BOOL _pauseBackgroundFetchResultsDelivery;
    NSMutableSet *_pauseLibraryChangeDeliveryTokens;
    uint8_t _backgroundFetchId;
    NSMutableDictionary *_pendingResultsByAssetCollection;
    NSObject<OS_dispatch_queue> *_pendingResultsIsolationQueue;
    BOOL _processAndPublishScheduledOnRunloop;
    NSObject<OS_dispatch_queue> *_backgroundQueue;
    PXLIFOQueue *_backgroundLIFOQueue;
    NSMutableOrderedSet *_queuedAssetCollectionsToFetch;
    NSObject<OS_dispatch_queue> *_prefetchQueue;
    NSMutableDictionary *_facesByAssetCache;
    NSMutableDictionary *_weightByAssetCache;
    NSArray *_filterPersons;
    BOOL _hideHiddenAssets;
    NSArray *_fetchPropertySets;
    NSInteger _curationType;
    PHFetchResult *_emptyAssetsFetchResult;
    NSNumber *_cachedIsEmpty;
    NSInteger _nestedChanges;
    PXPhotosDataSource *_parentDataSource;
}


@property (nonatomic, setter=_setPreviousCollectionsCount:) NSUInteger _previousCollectionsCount; // ivar: __previousCollectionsCount
@property (nonatomic) BOOL allowNextChangeDeliveryOnAllRunLoopModes; // ivar: _allowNextChangeDeliveryOnAllRunLoopModes
@property (nonatomic) BOOL allowSlowFetchesOnClientQueue; // ivar: _allowSlowFetchesOnClientQueue
@property (copy, nonatomic) NSSet *allowedOIDs; // ivar: _allowedOIDs
@property (copy, nonatomic) NSSet *allowedUUIDs; // ivar: _allowedUUIDs
@property (readonly, nonatomic) BOOL areAllSectionsConsideredAccurate;
@property (nonatomic) NSInteger backgroundFetchOriginSection; // ivar: _backgroundFetchOriginSection
@property (readonly, nonatomic) NSPredicate *basePredicate; // ivar: _basePredicate
@property (nonatomic) BOOL canIncludeUnsavedSyndicatedAssets; // ivar: _canIncludeUnsavedSyndicatedAssets
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // ivar: _clientQueue
@property (retain, nonatomic) PHFetchResult *collectionListFetchResult; // ivar: _collectionListFetchResult
@property (readonly, nonatomic) PHAssetCollection *containerAssetCollection;
@property (readonly, nonatomic) PHCollection *containerCollection; // ivar: _containerCollection
@property (readonly, nonatomic) BOOL containsMultipleAssets;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger estimatedOtherCount;
@property (readonly, nonatomic) NSInteger estimatedPhotosCount;
@property (readonly, nonatomic) NSInteger estimatedVideosCount;
@property (nonatomic) NSUInteger fetchLimit; // ivar: _fetchLimit
@property (retain, nonatomic) NSPredicate *filterPredicate; // ivar: _filterPredicate
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isBackgroundFetching; // ivar: _isBackgroundFetching
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, nonatomic) BOOL isImmutable;
@property (readonly, nonatomic) NSUInteger options; // ivar: _options
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary; // ivar: _photoLibrary
@property (readonly, nonatomic) PHAsset *referenceAsset; // ivar: _referenceAsset
@property (nonatomic) BOOL reverseSortOrder; // ivar: _reverseSortOrder
@property (copy, nonatomic) NSArray *sortDescriptors; // ivar: _sortDescriptors
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger versionIdentifier; // ivar: _versionIdentifier
@property (nonatomic) BOOL wantsCurationByDefault; // ivar: _wantsCurationByDefault
@property (readonly, nonatomic) BOOL wantsCurationForFirstAssetCollection;


+(id)_curationSharedBackgroundQueue;
+(id)_sharedPrefetchQueue;
+(id)backgroundFetchingGroup;
+(void)waitForAllBackgroundFetchingToFinish;
-(BOOL)_addResultTuple:(id)arg0 forAssetCollection:(id)arg1 toMutableResultRecord:(id)arg2 ;
-(BOOL)_allSectionsConsideredAccurate;
-(BOOL)_areFiltersDisabledForAssetCollection:(id)arg0 ;
-(BOOL)_areSecondaryFetchesEnabled;
-(BOOL)_forceAccurateSection:(NSInteger)arg0 andNumberOfSurroundingSectionsWithContent:(NSInteger)arg1 ;
-(BOOL)_isResulTupleApplicable:(id)arg0 forAssetCollection:(id)arg1 ;
-(BOOL)_reverseSortOrderForAssetCollection:(id)arg0 ;
-(BOOL)forceAccurateAllSectionsIfNeeded;
-(BOOL)forceAccurateAssetCollectionsIfNeeded:(id)arg0 reloadChanges:(BOOL)arg1 ;
-(BOOL)forceAccurateIndexPath:(id)arg0 andAssetsBeforeAndAfter:(NSInteger)arg1 ;
-(BOOL)forceAccurateSection:(NSInteger)arg0 andSectionsBeforeAndAfter:(NSInteger)arg1 ;
-(BOOL)forceAccurateSectionsIfNeeded:(id)arg0 ;
-(BOOL)forceAccurateSectionsIfNeeded:(id)arg0 reloadChanges:(BOOL)arg1 ;
-(BOOL)hasCurationForAssetCollection:(id)arg0 ;
-(BOOL)isAssetAtIndexPathPartOfCuratedSet:(struct PXSimpleIndexPath )arg0 ;
-(BOOL)isCuratedAssetsEmptyForAssetCollection:(id)arg0 ;
-(BOOL)isCuratedAssetsFutilelyForAssetCollection:(id)arg0 ;
-(BOOL)supportsDynamicBackgroundFetching;
-(BOOL)wantsCurationForAssetCollection:(id)arg0 ;
-(CGFloat)weightForAsset:(id)arg0 ;
-(NSInteger)_nextBackgroundFetchId;
-(NSInteger)estimatedAssetsCountWithEnrichmentState:(unsigned short)arg0 ;
-(NSInteger)indexForAsset:(id)arg0 inCollection:(id)arg1 hintIndex:(NSInteger)arg2 ;
-(NSInteger)keyAssetIndexInSection:(NSInteger)arg0 ;
-(NSInteger)numberOfItemsInSection:(NSInteger)arg0 ;
-(NSInteger)numberOfSections;
-(NSInteger)numberOfSectionsWithEnrichmentState:(unsigned short)arg0 ;
-(NSUInteger)_assetCollectionFetchStatus:(id)arg0 ;
-(NSUInteger)_cachedSectionForAssetCollection:(id)arg0 ;
-(NSUInteger)sectionForAssetCollection:(id)arg0 ;
-(id)_allowedOIDsForAssetCollection:(id)arg0 ;
-(id)_allowedUUIDsForAssetCollection:(id)arg0 ;
-(id)_assetOidsByAssetCollectionForAssetsAtIndexPathsInSet:(id)arg0 ;
-(id)_assetsForAssetCollection:(id)arg0 ;
-(id)_closestIndexPathToIndexPath:(id)arg0 ;
-(id)_createResultRecordForAssetCollection:(id)arg0 ;
-(id)_fetchAssetsStartingAtIndexPath:(id)arg0 ;
-(id)_fetchTupleForAssetCollection:(id)arg0 calledOnClientQueue:(BOOL)arg1 isLimitedInitialFetch:(BOOL)arg2 ;
-(id)_fetcher;
-(id)_filterPredicateForAssetCollection:(id)arg0 ;
-(id)_finalFilterPredicateForAssetCollection:(id)arg0 ;
-(id)_inaccurateAssetCollections;
-(id)_inclusionPredicateForAssetCollection:(id)arg0 ;
-(id)_indexPathForAssetWithUUID:(id)arg0 orBurstIdentifier:(id)arg1 orSyndicationIdentifier:(id)arg2 hintIndexPath:(id)arg3 hintCollections:(id)arg4 ;
-(id)_keyAssetsForAssetCollection:(id)arg0 ;
-(id)_mutableResultRecordForAssetCollection:(id)arg0 ;
-(id)_observerInterestingAssetReferences;
-(id)_resultRecordForAssetCollection:(id)arg0 ;
-(id)_sectionCache;
-(id)approximateAssetsAtIndexPaths:(id)arg0 ;
-(id)assetAtIndexPath:(id)arg0 ;
-(id)assetAtSimpleIndexPath:(struct PXSimpleIndexPath )arg0 ;
-(id)assetCollectionForSection:(NSInteger)arg0 ;
-(id)assetReferenceAtIndexPath:(id)arg0 ;
-(id)assetReferenceForAsset:(id)arg0 containedInAssetCollectionWithType:(NSInteger)arg1 ;
-(id)assetsAtIndexPaths:(id)arg0 ;
-(id)assetsInSection:(NSInteger)arg0 ;
-(id)assetsStartingAtIndexPath:(id)arg0 ;
-(id)createDataSourceWithAssetsAtIndexPaths:(id)arg0 ;
-(id)curatedAssetsForAssetCollection:(id)arg0 ;
-(id)curatedAssetsInSection:(NSInteger)arg0 ;
-(id)facesAtSimpleIndexPath:(struct PXSimpleIndexPath )arg0 ;
-(id)fetchResultWithAssetsAtIndexPaths:(id)arg0 ;
-(id)fetchResultWithAssetsInSections:(id)arg0 ;
-(id)fetchResultsByAssetCollection;
-(id)firstAssetCollection;
-(id)indexPathForAsset:(id)arg0 hintIndexPath:(id)arg1 hintCollection:(id)arg2 ;
-(id)indexPathForAsset:(id)arg0 hintIndexPath:(id)arg1 hintCollections:(id)arg2 ;
-(id)indexPathForAsset:(id)arg0 inCollection:(id)arg1 ;
-(id)indexPathForAssetReference:(id)arg0 ;
-(id)indexPathForAssetWithUUID:(id)arg0 orBurstIdentifier:(id)arg1 hintIndexPath:(id)arg2 hintCollection:(id)arg3 ;
-(id)indexPathForAssetWithUUID:(id)arg0 orSyndicationIdentifier:(id)arg1 hintIndexPath:(id)arg2 hintCollection:(id)arg3 ;
-(id)indexPathForFirstAsset;
-(id)indexPathForLastAsset;
-(id)infoForAssetCollection:(id)arg0 ;
-(id)initWithPhotosDataSource:(id)arg0 options:(NSUInteger)arg1 ;
-(id)initWithPhotosDataSourceConfiguration:(id)arg0 ;
-(id)keyAssetsInSection:(NSInteger)arg0 ;
-(id)lastAssetCollection;
-(id)pauseChangeDeliveryAndBackgroundLoadingWithTimeout:(CGFloat)arg0 identifier:(id)arg1 ;
-(id)prepareForPhotoLibraryChange:(id)arg0 ;
-(id)sectionsForAssetCollections:(id)arg0 ;
-(id)uncuratedAssetsForAssetCollection:(id)arg0 ;
-(id)uncuratedAssetsInSection:(NSInteger)arg0 ;
-(void)_bringFetchResultsUpToDateWithFetcherCacheForAssetCollection:(id)arg0 ;
-(void)_cancelBackgroundFetchIfNeeded;
-(void)_childDataSourceDidUpdateFetchesForAssetCollection:(id)arg0 ;
-(void)_commonInit;
-(void)_didFinishBackgroundFetchingForId:(NSInteger)arg0 ;
-(void)_enumerateChangeObserversWithBlock:(id)arg0 ;
-(void)_fetchRemainingCollectionsBackgroundLoopWithId:(NSInteger)arg0 ;
-(void)_getFetchLimit:(*NSUInteger)arg0 fetchWithReverseSortOrder:(*BOOL)arg1 forAssetCollection:(id)arg2 isLimitedInitialFetch:(BOOL)arg3 ;
-(void)_incrementVersionIdentifier;
-(void)_initResultRecordsWithOldOptions:(NSUInteger)arg0 newOptions:(NSUInteger)arg1 ;
-(void)_interruptBackgroundFetch;
-(void)_observersQueue_copyChangeObserversForWriteIfNeeded;
-(void)_performManualChangesForAssetCollections:(id)arg0 changeBlock:(id)arg1 ;
-(void)_performManualChangesForAssetCollections:(id)arg0 collectionsToDiff:(id)arg1 changeBlock:(id)arg2 ;
-(void)_performManualChangesForAssetCollections:(id)arg0 collectionsToDiff:(id)arg1 collectionsToChange:(id)arg2 changeBlock:(id)arg3 ;
-(void)_performManualReloadWithChangeBlock:(id)arg0 ;
-(void)_performProcessAndPublishSelectorInDefaultRunLoopMode;
-(void)_prefetchIndexesByFetchResult:(id)arg0 onlyThumbnails:(BOOL)arg1 ;
-(void)_prepareDiffsForPendingResultsWithCompletion:(id)arg0 ;
-(void)_processAndPublishPendingCollectionFetchResults;
-(void)_processAndPublishPendingCollectionFetchResultsWhenAppropriate;
-(void)_publishChange:(id)arg0 ;
-(void)_publishDidReceivePhotoLibraryChange:(id)arg0 ;
-(void)_publishReloadChange;
-(void)_publishWillChange;
-(void)_updateInaccurateAssetCollectionsIfNeeded;
-(void)clearResultsForAssetCollection:(id)arg0 ;
-(void)clearResultsForAssetCollections:(id)arg0 ;
-(void)dealloc;
-(void)enumerateStartingAtIndexPath:(id)arg0 reverseDirection:(BOOL)arg1 usingBlock:(id)arg2 ;
-(void)forceExcludeAssetsAtIndexPaths:(id)arg0 ;
-(void)forceExcludeAssetsAtIndexes:(id)arg0 ;
-(void)forceIncludeAssetsAtIndexPaths:(id)arg0 ;
-(void)forceIncludeAssetsAtIndexes:(id)arg0 ;
-(void)pauseChangeDeliveryFor:(CGFloat)arg0 identifier:(id)arg1 ;
-(void)photoLibraryDidChangeOnMainQueue:(id)arg0 ;
-(void)prefetchApproximateAssetsAtIndexPaths:(id)arg0 ;
-(void)prefetchApproximateAssetsAtIndexPaths:(id)arg0 reverseOrder:(BOOL)arg1 ;
-(void)prefetchAssetsAtIndexPaths:(id)arg0 onlyThumbnailAssets:(BOOL)arg1 ;
-(void)prefetchAssetsInSections:(id)arg0 ;
-(void)refetchResultsForAssetCollection:(id)arg0 ;
-(void)registerChangeObserver:(id)arg0 ;
-(void)resumeChangeDeliveryAndBackgroundLoading:(id)arg0 ;
-(void)setDisableFilters:(BOOL)arg0 forAssetCollection:(id)arg1 ;
-(void)setKeyAsset:(id)arg0 forAssetCollection:(id)arg1 ;
-(void)setWantsCuration:(BOOL)arg0 forAssetCollection:(id)arg1 ;
-(void)setWantsCurationForAllCollections:(BOOL)arg0 collectionsToDiff:(id)arg1 ;
-(void)startBackgroundFetchIfNeeded;
-(void)stopExcludingAssets:(id)arg0 ;
-(void)stopForceIncludingAllAssets;
-(void)unregisterChangeObserver:(id)arg0 ;


@end


#endif