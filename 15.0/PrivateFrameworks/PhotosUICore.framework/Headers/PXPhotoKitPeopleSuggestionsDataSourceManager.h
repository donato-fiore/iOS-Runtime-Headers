// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXPHOTOKITPEOPLESUGGESTIONSDATASOURCEMANAGER_H
#define PXPHOTOKITPEOPLESUGGESTIONSDATASOURCEMANAGER_H

@class NSMutableOrderedSet, PHAssetCollection, NSString;
@protocol PXPhotoLibraryUIChangeObserver;


#import "PXPeopleSuggestionsDataSourceManager.h"
#import "PXPhotoKitPeopleSuggestionsDataSourceState.h"
#import "PXPhotoKitPeopleSuggestionsDataSource.h"
#import "PXUpdater.h"

@interface PXPhotoKitPeopleSuggestionsDataSourceManager : PXPeopleSuggestionsDataSourceManager <PXPhotoLibraryUIChangeObserver>

 {
    BOOL _isPrefetching;
    BOOL _hasCreatedInitialDataSource;
    BOOL _needsDeferredLoading;
}


@property (retain) NSMutableOrderedSet *_remainingPeopleToFetch; // ivar: __remainingPeopleToFetch
@property (retain, nonatomic) PXPhotoKitPeopleSuggestionsDataSourceState *_state; // ivar: __state
@property (retain, nonatomic) PHAssetCollection *assetCollection; // ivar: _assetCollection
@property (readonly, nonatomic) PXPhotoKitPeopleSuggestionsDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasFinishedLoadingFinalDataSource; // ivar: _hasFinishedLoadingFinalDataSource
@property (nonatomic) BOOL hasStartedLoadingFinalDataSource; // ivar: _hasStartedLoadingFinalDataSource
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) PXUpdater *updater; // ivar: _updater


+(id)mockDataSourceManagerFromPeopleInPhotosInAssetCollection:(id)arg0 ;
+(id)photosGraphPeopleSuggestionsDataSourceManagerWithAssetCollection:(id)arg0 ;
+(id)sharedWorkerQueue;
-(BOOL)isLoading;
-(id)_createSuggestionsDataSourceFromCurrentState;
-(id)_initWithAssetCollection:(id)arg0 ;
-(id)createInitialDataSource;
-(id)initWithPeopleFetchResult:(id)arg0 ;
-(id)mediaProvider;
-(id)people;
-(id)prepareForPhotoLibraryChange:(id)arg0 ;
-(void)_handleFinishedFetchingBatch:(id)arg0 preparedChangeDetails:(id)arg1 forFetchResult:(id)arg2 ;
-(void)_handleFinishedLoadingFinalDataSourceFetchResult:(id)arg0 ;
-(void)_loadFinalDataSource;
-(void)_workerQueue_fetchRemainingPeopleInBatches;
-(void)boostLoading;
-(void)cancelLoading;
-(void)photoLibraryDidChangeOnMainQueue:(id)arg0 withPreparedInfo:(id)arg1 ;
-(void)startLoading;
-(void)startPrefetchingIfNeeded;


@end


#endif