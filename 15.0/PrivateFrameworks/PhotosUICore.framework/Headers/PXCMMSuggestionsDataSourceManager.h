// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXCMMSUGGESTIONSDATASOURCEMANAGER_H
#define PXCMMSUGGESTIONSDATASOURCEMANAGER_H

@class NSMutableOrderedSet, NSString;
@protocol PXPhotoLibraryUIChangeObserver, OS_dispatch_queue;


#import "PXSectionedDataSourceManager.h"
#import "PXCMMSuggestionsDataSourceState.h"
#import "PXCMMSuggestionsDataSourceContext.h"
#import "PXCMMSuggestionsDataSource.h"

@interface PXCMMSuggestionsDataSourceManager : PXSectionedDataSourceManager <PXPhotoLibraryUIChangeObserver>

 {
    NSObject<OS_dispatch_queue> *_workerQueue;
    BOOL _isLoading;
    BOOL _hasCreatedInitialDataSource;
}


@property (retain) NSMutableOrderedSet *_remainingAssetCollectionsObjectIDsToFetch; // ivar: __remainingAssetCollectionsObjectIDsToFetch
@property (retain, nonatomic) PXCMMSuggestionsDataSourceState *_state; // ivar: __state
@property (readonly, nonatomic) PXCMMSuggestionsDataSourceContext *context; // ivar: _context
@property (readonly, nonatomic) PXCMMSuggestionsDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_fetchResultForEmptyDataSourceManager;
+(id)_fetchResultForMockRecentLargeMomentsDataSourceManager;
+(id)_fetchResultForTypeGraphWithContext:(id)arg0 ;
+(id)currentDataSourceManager;
+(id)dataSourceManagerWithParticipants:(id)arg0 fetchLimit:(NSInteger)arg1 shouldShowAccepted:(BOOL)arg2 message:(id)arg3 date:(id)arg4 matchingStrategy:(NSUInteger)arg5 ;
+(id)emptyDataSourceManager;
+(id)keyPathsAffectingCurrentDataSourceManager;
+(id)mockDataSourceManagerFromRecentLargeMoments;
+(id)mostRecentCreationDate;
+(id)new;
-(id)_createSuggestionsDataSourceFromCurrentState;
-(id)assetCollections;
-(id)createInitialDataSource;
-(id)init;
-(id)initWithAssetCollectionsFetchResult:(id)arg0 ;
-(id)initWithContext:(id)arg0 assetCollectionsFetchResult:(id)arg1 ;
-(id)prepareForPhotoLibraryChange:(id)arg0 ;
-(void)_handleFinishedFetchingBatch:(id)arg0 preparedChangeDetails:(id)arg1 forFetchResult:(id)arg2 changedObjects:(id)arg3 ;
-(void)_startLoadingIfNeeded;
-(void)_workerQueue_fetchRemainingAssetCollectionsInBatchesWithAssetCollections:(id)arg0 ;
-(void)photoLibraryDidChangeOnMainQueue:(id)arg0 withPreparedInfo:(id)arg1 ;


@end


#endif