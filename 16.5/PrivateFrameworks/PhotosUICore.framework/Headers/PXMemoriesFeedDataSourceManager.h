// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXMEMORIESFEEDDATASOURCEMANAGER_H
#define PXMEMORIESFEEDDATASOURCEMANAGER_H

@class NSString;
@protocol PXPhotoLibraryUIChangeObserver, OS_dispatch_queue;


#import "PXMemoriesFeedDataSourceManagerBase.h"

@interface PXMemoriesFeedDataSourceManager : PXMemoriesFeedDataSourceManagerBase <PXPhotoLibraryUIChangeObserver>

 {
    NSObject<OS_dispatch_queue> *_privateWorkQueue;
    NSUInteger _workTag;
}


@property (nonatomic, getter=_isGeneratingAdditionalEntries, setter=_setGeneratingAdditionalEntries:) BOOL _generatingAdditionalEntries; // ivar: __generatingAdditionalEntries
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSUInteger)_indexOfEntry:(id)arg0 inSortedEntries:(id)arg1 options:(NSUInteger)arg2 ;
-(NSUInteger)_indexOfEntryForMemory:(id)arg0 inSortedEntries:(id)arg1 options:(NSUInteger)arg2 ;
-(id)initWithPhotoLibrary:(id)arg0 ;
-(id)objectReferenceForMemory:(id)arg0 ;
-(void)_generateAdditionalEntriesWithOldDataSource:(id)arg0 startingIndex:(NSUInteger)arg1 sync:(BOOL)arg2 ;
-(void)_handleFinishedGeneratingAdditionalEntriesWithNewDataSource:(id)arg0 changeDetails:(id)arg1 firstUngroupedMemoryIndex:(NSUInteger)arg2 ;
-(void)generateAdditionalEntriesIfPossible;
-(void)generateAdditionalEntriesWithOldDataSource:(id)arg0 startingIndex:(NSUInteger)arg1 sync:(BOOL)arg2 ;
-(void)handleChangedKeyAssetsForMemories:(id)arg0 ;
-(void)handleIncrementalFetchResultChange:(id)arg0 updatedFetchResultsForMemoriesWithChangedKeyAssets:(id)arg1 ;
-(void)handleNonIncrementalFetchResultChange:(id)arg0 ;
-(void)reloadMemories:(BOOL)arg0 ;
-(void)startGeneratingMemories;


@end


#endif