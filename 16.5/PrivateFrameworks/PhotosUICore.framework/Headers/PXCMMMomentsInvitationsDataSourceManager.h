// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXCMMMOMENTSINVITATIONSDATASOURCEMANAGER_H
#define PXCMMMOMENTSINVITATIONSDATASOURCEMANAGER_H

@class NSMutableOrderedSet, NSString;
@protocol PXPhotoLibraryUIChangeObserver, OS_dispatch_queue;


#import "PXCMMInvitationsDataSourceManager.h"
#import "PXCMMMomentsInvitationsDataSourceState.h"

@interface PXCMMMomentsInvitationsDataSourceManager : PXCMMInvitationsDataSourceManager <PXPhotoLibraryUIChangeObserver>

 {
    NSObject<OS_dispatch_queue> *_workerQueue;
    BOOL _isLoading;
    BOOL _hasCreatedInitialDataSource;
}


@property (retain) NSMutableOrderedSet *_remainingAssetCollectionObjectIDsToFetch; // ivar: __remainingAssetCollectionObjectIDsToFetch
@property (retain, nonatomic) PXCMMMomentsInvitationsDataSourceState *_state; // ivar: __state
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)mockDataSourceManagerFromRecentLargeMoments;
+(id)new;
-(id)_createInvitationsDataSourceFromCurrentState;
-(id)assetCollections;
-(id)createInitialDataSource;
-(id)init;
-(id)initWithAssetCollectionsFetchResult:(id)arg0 ;
-(id)prepareForPhotoLibraryChange:(id)arg0 ;
-(void)_handleFinishedFetchingBatch:(id)arg0 preparedChangeDetails:(id)arg1 forFetchResult:(id)arg2 ;
-(void)_workerQueue_fetchRemainingAssetCollectionsInBatches;
-(void)dealloc;
-(void)photoLibraryDidChangeOnMainQueue:(id)arg0 withPreparedInfo:(id)arg1 ;
-(void)startLoadingIfNeeded;


@end


#endif