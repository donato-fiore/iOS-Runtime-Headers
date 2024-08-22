// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXPHOTOKITCOLLECTIONSDATASOURCEMANAGER_H
#define PXPHOTOKITCOLLECTIONSDATASOURCEMANAGER_H

@class PHPhotoLibrary, NSMutableDictionary, NSOperationQueue, NSMutableSet, NSMutableArray, NSArray, PHCollectionList, PHFetchResult, NSString;
@protocol PXCollectionFetchOperationDelegate, PXChangeObserver, PXPhotoLibraryUIChangeObserver, OS_os_log;


#import "PXCollectionsDataSourceManager.h"
#import "PXPhotoKitCollectionsDataSourceManagerConfiguration.h"
#import "PXPhotoKitCollectionsDataSource.h"

@interface PXPhotoKitCollectionsDataSourceManager : PXCollectionsDataSourceManager <PXCollectionFetchOperationDelegate, PXChangeObserver, PXPhotoLibraryUIChangeObserver>

 {
    PHPhotoLibrary *_photoLibrary;
    NSMutableDictionary *_subCollectionFetchResultsCache;
    NSMutableDictionary *_subCollectionKeyAssetFetchResultsCache;
    NSMutableDictionary *_collectionIndexPathByCollection;
    NSOperationQueue *_subCollectionFetchOperationQueue;
    NSOperationQueue *_subCollectionKeyAssetsFetchOperationQueue;
    BOOL _performedBackgroundFetching;
    BOOL _needsBackgroundFetching;
    BOOL _prepareBackgroundFetching;
    BOOL _publishChangesScheduledOnRunLoop;
    CGFloat _lastPublishChangesTime;
    NSMutableSet *_pendingChangedCollections;
    NSMutableSet *_changedSubCollections;
    BOOL _simulateNonIncrementalChanges;
    NSMutableSet *_changeProcessingPausedReasons;
    BOOL _changesOccurredWhilePaused;
    NSMutableArray *_changesDetailsWhilePaused;
    NSInteger _pausedChangeDetailsBufferLength;
    BOOL _isPhotoLibraryEmpty;
}


@property (retain, nonatomic, setter=_setCollectionListBySection:) NSArray *_collectionListBySection; // ivar: __collectionListBySection
@property (retain, nonatomic, setter=_setCollectionsFetchResultBySection:) NSArray *_collectionsFetchResultBySection; // ivar: __collectionsFetchResultBySection
@property (readonly, nonatomic) NSMutableDictionary *_subCollectionActiveCountFetchOperations; // ivar: __subCollectionActiveCountFetchOperations
@property (readonly, nonatomic) NSMutableDictionary *_subCollectionActiveKeyAssetsFetchOperations; // ivar: __subCollectionActiveKeyAssetsFetchOperations
@property (retain, nonatomic) NSArray *_virtualCollections; // ivar: __virtualCollections
@property (readonly, nonatomic) PHCollectionList *collectionList; // ivar: _collectionList
@property (readonly, nonatomic) PHFetchResult *collectionsFetchResult; // ivar: _collectionsFetchResult
@property (readonly, nonatomic) PXPhotoKitCollectionsDataSourceManagerConfiguration *configuration; // ivar: _configuration
@property (readonly, nonatomic) PXPhotoKitCollectionsDataSource *dataSource;
@property (readonly) NSObject<OS_os_log> *dataSourceManagerLog;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isChangeProcessingPaused; // ivar: _isChangeProcessingPaused
@property (readonly, nonatomic) NSInteger numberOfPendingKeyAssetFetches;
@property (readonly) Class superclass;


+(id)sharedKeyAssetsFetchQueue;
+(id)sharedSubCollectionsFetchQueue;
-(BOOL)_containsAnyAlbumsWithAssets:(id)arg0 ;
-(BOOL)_containsAnyAssets:(id)arg0 ;
-(BOOL)_isEmpty;
-(BOOL)_isImportsAssetCollection:(id)arg0 ;
-(BOOL)_isPlacesAlbumAssetCollection:(id)arg0 ;
-(BOOL)_needsFetchResultForCollection:(id)arg0 ;
-(BOOL)_needsKeyAssetsFetchResultForCollection:(id)arg0 ;
-(BOOL)_shouldIncludeCollection:(id)arg0 ;
-(BOOL)_updateCachedSubCollectionFetchResultsForChange:(id)arg0 fetchResultChangeDetails:(id)arg1 ;
-(BOOL)canDeleteCollection:(id)arg0 ;
-(BOOL)canEditAlbums;
-(BOOL)canRenameCollection:(id)arg0 ;
-(BOOL)canReorderCollection:(id)arg0 ;
-(BOOL)containsAnyAssets:(id)arg0 ;
-(BOOL)hasAssetsFetchResultForCollection:(id)arg0 ;
-(BOOL)isBackgroundFetching;
-(BOOL)isCachedFetchResultOutdatedForCollection:(id)arg0 ;
-(NSInteger)estimatedCountForAssetCollection:(id)arg0 ;
-(NSUInteger)_fixedOrderPriorityForVirtualCollection:(id)arg0 ;
-(id)_changedSubCollectionIndexesBySections;
-(id)_filterFetchResult:(id)arg0 ;
-(id)_getSectionedCollectionListAndFetchResultsFromFetchResult:(id)arg0 ;
-(id)_keyAssetFetchResultForSubCollection:(id)arg0 fetchIfNeeded:(BOOL)arg1 ;
-(id)_newDataSource;
-(id)_subitemChangeDetailsByItemBySection;
-(id)assetsFetchResultForCollection:(id)arg0 ;
-(id)assetsFetchResultForCollection:(id)arg0 fetchIfNeeded:(BOOL)arg1 ;
-(id)createInitialDataSource;
-(id)displayableAssetsForCollectionList:(id)arg0 maximumCount:(NSInteger)arg1 useCache:(BOOL)arg2 correspondingCollections:(*id)arg3 ;
-(id)fetchResultForSubCollection:(id)arg0 ;
-(id)indexPathForCollection:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 ;
-(id)keyAssetsFetchResultForCollection:(id)arg0 ;
-(id)keyAssetsFetchResultForCollection:(id)arg0 fetchIfNeeded:(BOOL)arg1 ;
-(id)prepareForPhotoLibraryChange:(id)arg0 ;
-(id)uncachedFetchResultForSubCollection:(id)arg0 ;
-(id)uncachedKeyAssetFetchResultForSubCollection:(id)arg0 ;
-(void)_endSignpostForFetchOperation:(id)arg0 ;
-(void)_enqueueFetchCountsOperationForCollection:(id)arg0 ;
-(void)_enqueueFetchKeyAssetsOperationForCollection:(id)arg0 ;
-(void)_enumerateAllPhotoKitCollectionsUsingBlock:(id)arg0 ;
-(void)_prepareBackgroundFetchingIfNeededForCollection:(id)arg0 ;
-(void)_publishPendingCollectionChanges;
-(void)_recursivelyCollectCollectionsIn:(id)arg0 fetchResult:(id)arg1 ;
-(void)_recursivelyEnumerateAssetCollectionsInFetchResult:(id)arg0 block:(id)arg1 ;
-(void)_updateCollectionIndexMappingForFilteredFetchResults;
-(void)_updateDataSourceForChangeOnCollection:(id)arg0 ;
-(void)_updateFilteredCollectionsFetchResults;
-(void)_updateKeyAssetsCacheForCollection:(id)arg0 withFetchResult:(id)arg1 otherFetchResultsByAssetCollection:(id)arg2 ;
-(void)_updateVisibleCountsForCollection:(id)arg0 withWithFetchResult:(id)arg1 ;
-(void)collectionFetchOperationDidBegin:(id)arg0 ;
-(void)collectionFetchOperationDidCancel:(id)arg0 ;
-(void)collectionFetchOperationDidComplete:(id)arg0 ;
-(void)dealloc;
-(void)getDisplayableAssets:(*id)arg0 indexes:(*id)arg1 forCollection:(id)arg2 maximumCount:(NSInteger)arg3 useCache:(BOOL)arg4 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)pauseBackgroundFetching;
-(void)photoLibraryDidChangeOnMainQueue:(id)arg0 ;
-(void)prepareBackgroundFetchingIfNeeded;
-(void)setChangeProcessingPaused:(BOOL)arg0 forReason:(id)arg1 ;
-(void)startBackgroundFetchingIfNeeded;
-(void)startCoalescingFetchResultChanges;
-(void)stopCoalescingAndPublishFetchResultChanges;
-(void)waitUntilBackgroundFetchingFinishedWithCompletionBlock:(id)arg0 ;


@end


#endif