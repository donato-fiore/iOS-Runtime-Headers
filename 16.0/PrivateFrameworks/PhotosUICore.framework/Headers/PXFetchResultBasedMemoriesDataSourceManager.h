// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXFETCHRESULTBASEDMEMORIESDATASOURCEMANAGER_H
#define PXFETCHRESULTBASEDMEMORIESDATASOURCEMANAGER_H

@class NSMutableOrderedSet, NSString, PHFetchResult;
@protocol PXPhotoLibraryUIChangeObserver, OS_dispatch_queue;


#import "PXMemoriesDataSourceManager.h"
#import "PXMemoriesDataSourceState.h"

@interface PXFetchResultBasedMemoriesDataSourceManager : PXMemoriesDataSourceManager <PXPhotoLibraryUIChangeObserver>

 {
    NSObject<OS_dispatch_queue> *_workerQueue;
    BOOL _isWorking;
    BOOL _hasCreatedInitialDataSource;
}


@property (retain, setter=_setRemainingMemoriesToFetch:) NSMutableOrderedSet *_remainingMemoriesToFetch; // ivar: __remainingMemoriesToFetch
@property (retain, nonatomic, setter=_setState:) PXMemoriesDataSourceState *_state; // ivar: __state
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL loadFromEnd; // ivar: _loadFromEnd
@property (readonly, nonatomic) PHFetchResult *memories;
@property (readonly) Class superclass;


-(id)_createMemoriesDataSourceFromCurrentState;
-(id)createInitialDataSource;
-(id)initWithMemoriesFetchResult:(id)arg0 ;
-(id)prepareForPhotoLibraryChange:(id)arg0 ;
-(void)_handleFinishedFetchingBatch:(id)arg0 preparedChangeDetails:(id)arg1 forFetchResult:(id)arg2 ;
-(void)_workerQueue_fetchRemainingMemoriesInBatchesFromTheEnd:(BOOL)arg0 ;
-(void)photoLibraryDidChangeOnMainQueue:(id)arg0 withPreparedInfo:(id)arg1 ;
-(void)startLoadingIfNeeded;


@end


#endif