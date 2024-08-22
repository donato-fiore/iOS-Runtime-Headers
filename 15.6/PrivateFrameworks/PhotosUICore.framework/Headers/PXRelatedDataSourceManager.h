// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXRELATEDDATASOURCEMANAGER_H
#define PXRELATEDDATASOURCEMANAGER_H

@class NSDate, PHFetchResult;
@protocol OS_dispatch_queue;


#import "PXSectionedDataSourceManager.h"
#import "PXRelatedSettings.h"
#import "PXPhotosDetailsContext.h"
#import "PXRelatedDataSource.h"

@interface PXRelatedDataSourceManager : PXSectionedDataSourceManager {
    BOOL _didStartLoading;
    BOOL _shouldCancelLoading;
    NSObject<OS_dispatch_queue> *_backgroundQueue;
    PXRelatedSettings *_settings;
    NSUInteger _fetchLimit;
    NSUInteger _initialBatchSize;
    NSUInteger _loadBatchSize;
    NSDate *_loadStartDate;
    BOOL _didLoadInitialDataSource;
}


@property (nonatomic, getter=_isCanceled, setter=_setCanceled:) BOOL _canceled; // ivar: __canceled
@property (readonly, nonatomic) PHFetchResult *_collectionListFetchResult; // ivar: __collectionListFetchResult
@property (readonly, nonatomic) PXPhotosDetailsContext *_context; // ivar: __context
@property (retain, nonatomic, setter=_setPreparedRelatedCollections:) PHFetchResult *_preparedRelatedCollections; // ivar: __preparedRelatedCollections
@property (retain, nonatomic, setter=_setRelatedCollections:) PHFetchResult *_relatedCollections; // ivar: __relatedCollections
@property (readonly, nonatomic) PXRelatedDataSource *dataSource;
@property (nonatomic) NSUInteger initialBatchSize; // ivar: __initialBatchSize
@property (nonatomic) NSUInteger loadBatchSize; // ivar: __loadBatchSize
@property (readonly, nonatomic) BOOL useItemIndexPaths; // ivar: _useItemIndexPaths


-(id)_collectionListRelatedToObject:(id)arg0 ;
-(id)_collectionsRelatedToReferenceObject:(id)arg0 ;
-(id)_keyAssetFetchResultForRelatedCollection:(id)arg0 referenceAsset:(id)arg1 ;
-(id)_referenceAssetForReferenceObject:(id)arg0 ;
-(id)_referenceObject;
-(id)_referenceObjectFromCollectionListFetchResult:(id)arg0 ;
-(id)createPhotosDataSourceForRelatedEntry:(id)arg0 ;
-(id)init;
-(id)initWithPhotosDetailsContext:(id)arg0 ;
-(id)initWithPhotosDetailsContext:(id)arg0 useItemIndexPaths:(BOOL)arg1 ;
-(void)_continueBackgroundLoadWithReferenceObject:(id)arg0 attemptIndex:(NSInteger)arg1 ;
-(void)_continueBackgroundLoadWithReferenceObject:(id)arg0 relatedCollections:(id)arg1 ;
-(void)_startBackgroundLoad;
-(void)cancelLoading;
-(void)registerChangeObserver:(id)arg0 context:(*void)arg1 ;
-(void)startLoading;
-(void)unregisterChangeObserver:(id)arg0 context:(*void)arg1 ;


@end


#endif