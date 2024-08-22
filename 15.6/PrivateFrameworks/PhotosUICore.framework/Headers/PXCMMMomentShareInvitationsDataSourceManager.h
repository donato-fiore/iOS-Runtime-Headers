// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXCMMMOMENTSHAREINVITATIONSDATASOURCEMANAGER_H
#define PXCMMMOMENTSHAREINVITATIONSDATASOURCEMANAGER_H

@class PHPhotoLibrary, NSMutableOrderedSet, NSString;
@protocol PXPhotoLibraryUIChangeObserver, OS_dispatch_queue;


#import "PXCMMInvitationsDataSourceManager.h"
#import "PXCMMMomentShareInvitationsDataSourceState.h"
#import "PXCMMMomentShareInvitationsDataSource.h"

@interface PXCMMMomentShareInvitationsDataSourceManager : PXCMMInvitationsDataSourceManager <PXPhotoLibraryUIChangeObserver>

 {
    PHPhotoLibrary *_photoLibrary;
    NSObject<OS_dispatch_queue> *_workerQueue;
    BOOL _isLoading;
    BOOL _hasCreatedInitialDataSource;
    PXCMMMomentShareInvitationsDataSourceState *_state;
    NSMutableOrderedSet *_remainingMomentShareObjectIDsToFetch;
}


@property (readonly, nonatomic) PXCMMMomentShareInvitationsDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_dataSourceManagerWithPredicate:(id)arg0 ;
+(id)emptyDataSourceManager;
+(id)mostRecentCreationDate;
-(id)_initWithFetchResult:(id)arg0 ;
-(id)createInitialDataSource;
-(id)init;
-(id)momentShares;
-(id)prepareForPhotoLibraryChange:(id)arg0 ;
-(void)_handleFinishedFetchingBatch:(id)arg0 preparedChangeDetails:(id)arg1 forFetchResult:(id)arg2 changedObjects:(id)arg3 ;
-(void)_startLoadingIfNeeded;
-(void)_workerQueue_fetchRemainingMomentSharesInBatchesWithMomentShares:(id)arg0 ;
-(void)dealloc;
-(void)photoLibraryDidChangeOnMainQueue:(id)arg0 withPreparedInfo:(id)arg1 ;


@end


#endif