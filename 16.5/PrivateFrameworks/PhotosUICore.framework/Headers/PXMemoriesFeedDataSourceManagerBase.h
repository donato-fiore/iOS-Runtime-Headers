// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXMEMORIESFEEDDATASOURCEMANAGERBASE_H
#define PXMEMORIESFEEDDATASOURCEMANAGERBASE_H

@class NSString, PHFetchResult, NSDate, PHPhotoLibrary;
@protocol PXPhotoLibraryUIChangeObserver, PXMemoryForYouDataSourceManager;


#import "PXSectionedDataSourceManager.h"
#import "PXMemoriesFeedDataSource.h"
#import "PXDiscoveryFeedDataSourceManager.h"

@interface PXMemoriesFeedDataSourceManagerBase : PXSectionedDataSourceManager <PXPhotoLibraryUIChangeObserver, PXMemoryForYouDataSourceManager>

 {
    BOOL _memoryGenerationHasStarted;
}


@property (nonatomic, getter=_isGeneratingAdditionalEntries, setter=_setGeneratingAdditionalEntries:) BOOL _generatingAdditionalEntries; // ivar: __generatingAdditionalEntries
@property (readonly, nonatomic) PXMemoriesFeedDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) PXDiscoveryFeedDataSourceManager *discoveryDataSourceManager; // ivar: _discoveryDataSourceManager
@property (nonatomic) NSUInteger firstUngroupedMemoryIndex; // ivar: _firstUngroupedMemoryIndex
@property (readonly, nonatomic) BOOL hasAnyMemories;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PHFetchResult *memoriesFetchResult; // ivar: _memoriesFetchResult
@property (readonly, nonatomic) NSDate *mostRecentCreationDate;
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary; // ivar: _photoLibrary
@property (readonly) Class superclass;


+(BOOL)shouldGroupTogetherMemoriesWithCreationDate:(id)arg0 andCreationDate:(id)arg1 ;
+(id)_updatedFetchResultsForMemoriesForDatasource:(id)arg0 changeDetails:(id)arg1 changeInstance:(id)arg2 ;
+(id)baseFetchOptionsWithPhotoLibrary:(id)arg0 ;
+(id)generateEntriesFromMemories:(id)arg0 startingFromIndex:(NSUInteger)arg1 maximumNumberOfEntries:(NSUInteger)arg2 finalMemoryIndex:(*NSUInteger)arg3 ;
-(id)createInitialDataSource;
-(id)fetchOptions;
-(id)initWithPhotoLibrary:(id)arg0 ;
-(id)pauseChangeDeliveryWithTimeout:(CGFloat)arg0 identifier:(id)arg1 ;
-(id)prepareForPhotoLibraryChange:(id)arg0 ;
-(void)_clearPendingNotificationForMemory:(id)arg0 ;
-(void)generateAdditionalEntriesIfPossible;
-(void)handleChangedKeyAssetsForMemories:(id)arg0 ;
-(void)handleIncrementalFetchResultChange:(id)arg0 updatedFetchResultsForMemoriesWithChangedKeyAssets:(id)arg1 ;
-(void)handleNonIncrementalFetchResultChange:(id)arg0 ;
-(void)loadMoreContentWithCompletionHandler:(id)arg0 ;
-(void)photoLibraryDidChangeOnMainQueue:(id)arg0 withPreparedInfo:(id)arg1 ;
-(void)reloadMemories:(BOOL)arg0 ;
-(void)resumeChangeDeliveryAndBackgroundLoading:(id)arg0 ;
-(void)startGeneratingMemories;
-(void)startObservingChanges;
-(void)updateCurrentMemoriesNonPendingAndNotificationStatus;


@end


#endif