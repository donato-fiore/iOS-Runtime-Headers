// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSHAREDLIBRARYSHARINGSUGGESTIONSDATASOURCEMANAGER_H
#define PXSHAREDLIBRARYSHARINGSUGGESTIONSDATASOURCEMANAGER_H

@class NSMutableDictionary, NSDate, NSString, PHPhotoLibrary;
@protocol PXSharedLibraryMutableSharingSuggestionsDataSourceManager, PXSharedLibrarySharingSuggestionsDataSourceDelegate, PXPhotoLibraryUIChangeObserver, PXChangeObserver, OS_dispatch_queue;


#import "PXSectionedDataSourceManager.h"
#import "PXSharedLibrarySharingSuggestionsCountsManager.h"
#import "PXSharedLibrarySharingSuggestionsDataSource.h"
#import "PXUpdater.h"

@interface PXSharedLibrarySharingSuggestionsDataSourceManager : PXSectionedDataSourceManager <PXSharedLibraryMutableSharingSuggestionsDataSourceManager, PXSharedLibrarySharingSuggestionsDataSourceDelegate, PXPhotoLibraryUIChangeObserver, PXChangeObserver>

 {
    os_unfair_lock_s _lock;
    NSMutableDictionary *_lock_promiseByContainer;
}


@property (retain, nonatomic) NSDate *aggregateBeforeDate; // ivar: _aggregateBeforeDate
@property (retain, nonatomic) NSDate *considerNewAfterDate; // ivar: _considerNewAfterDate
@property (readonly, nonatomic) PXSharedLibrarySharingSuggestionsCountsManager *countsManager; // ivar: _countsManager
@property (readonly, nonatomic) PXSharedLibrarySharingSuggestionsDataSource *currentDataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary; // ivar: _photoLibrary
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;
@property (readonly, nonatomic) PXUpdater *updater; // ivar: _updater


-(id)_createDataSourceWithSharingSuggestions:(id)arg0 ;
-(id)_promiseForContainer:(id)arg0 ;
-(id)createInitialDataSource;
-(id)dataSource:(id)arg0 promiseForContainer:(id)arg1 ;
-(id)init;
-(id)initWithPhotoLibrary:(id)arg0 ;
-(id)prepareForPhotoLibraryChange:(id)arg0 ;
-(void)_invalidatePromisesUnreadState;
-(void)_publishChangesForForContainers:(id)arg0 ;
-(void)_scheduleFulfillRemainingPromises;
-(void)_setNeedsUpdate;
-(void)_setPromise:(id)arg0 forContainer:(id)arg1 ;
-(void)_updatePromisesUnreadState;
-(void)didPerformChanges;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)performChanges:(id)arg0 ;
-(void)photoLibraryDidChangeOnMainQueue:(id)arg0 withPreparedInfo:(id)arg1 ;
-(void)setDataSource:(id)arg0 changeDetails:(id)arg1 ;


@end


#endif