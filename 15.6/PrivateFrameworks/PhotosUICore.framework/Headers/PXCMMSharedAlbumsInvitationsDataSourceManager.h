// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXCMMSHAREDALBUMSINVITATIONSDATASOURCEMANAGER_H
#define PXCMMSHAREDALBUMSINVITATIONSDATASOURCEMANAGER_H

@class NSMutableOrderedSet, NSString;
@protocol PXPhotoLibraryUIChangeObserver, OS_dispatch_queue;


#import "PXCMMInvitationsDataSourceManager.h"
#import "PXCMMSharedAlbumsInvitationsDataSourceState.h"
#import "PXCMMSharedAlbumsInvitationsDataSource.h"

@interface PXCMMSharedAlbumsInvitationsDataSourceManager : PXCMMInvitationsDataSourceManager <PXPhotoLibraryUIChangeObserver>

 {
    NSObject<OS_dispatch_queue> *_workerQueue;
    BOOL _isLoading;
    BOOL _hasCreatedInitialDataSource;
}


@property (retain) NSMutableOrderedSet *_remainingSharedAlbumObjectIDsToFetch; // ivar: __remainingSharedAlbumObjectIDsToFetch
@property (retain, nonatomic) PXCMMSharedAlbumsInvitationsDataSourceState *_state; // ivar: __state
@property (readonly, nonatomic) PXCMMSharedAlbumsInvitationsDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)mockDataSourceManagerFromCMMDebugSharedAlbums;
-(id)_createSuggestionsDataSourceFromCurrentState;
-(id)createInitialDataSource;
-(id)initWithAssetCollectionsFetchResult:(id)arg0 ;
-(id)prepareForPhotoLibraryChange:(id)arg0 ;
-(id)sharedAlbums;
-(void)_handleFinishedFetchingBatch:(id)arg0 preparedChangeDetails:(id)arg1 forFetchResult:(id)arg2 ;
-(void)_workerQueue_fetchRemainingSharedAlbumsInBatches;
-(void)dealloc;
-(void)photoLibraryDidChangeOnMainQueue:(id)arg0 withPreparedInfo:(id)arg1 ;
-(void)startLoadingIfNeeded;


@end


#endif