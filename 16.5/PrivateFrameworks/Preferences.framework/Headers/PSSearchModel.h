// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PSSEARCHMODEL_H
#define PSSEARCHMODEL_H

@class NSMutableSet, NSMapTable, NSMutableArray, NSString, NSOperationQueue, NSArray;
@protocol PSSearchIndexOperationDelegate, PSSearchOperationDelegate, PSSpecifierObserver, OS_dispatch_queue, PSSearchModelDataSource;

#import <Foundation/Foundation.h>

#import "PSSearchResults.h"
#import "PSSearchOperation.h"

@interface PSSearchModel : NSObject <PSSearchIndexOperationDelegate, PSSearchOperationDelegate, PSSpecifierObserver>

 {
    NSMutableSet *_delegates;
    NSMapTable *_specifierDataSources;
    NSMutableSet *_entriesBeingIndexed;
    NSMutableSet *_indexingEntriesWithLoadedDataSources;
    NSMutableSet *_removedEntriesStillIndexing;
    NSMutableArray *_deferredSpecifierUpdates;
    PSSearchResults *_currentResults;
    NSString *_queryForCurrentResults;
    NSMutableSet *_entriesPendingSearch;
    NSMutableSet *_removedEntriesStillSearching;
    NSObject<OS_dispatch_queue> *_searchStateAccessQueue;
    BOOL _hasLoadedRootEntries;
    BOOL _hasStartedIndexing;
    NSOperationQueue *_indexOperationQueue;
    NSOperationQueue *_searchOperationQueue;
}


@property (retain) PSSearchOperation *activeSearchOperation; // ivar: _activeSearchOperation
@property (copy) NSString *currentQuery; // ivar: _currentQuery
@property (readonly) PSSearchResults *currentResults;
@property (weak, nonatomic) NSObject<PSSearchModelDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasCompletedIndexing;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isIndexing) BOOL indexing; // ivar: _indexing
@property (readonly, nonatomic, getter=isLoadingResults) BOOL loadingResults;
@property (readonly, nonatomic) NSInteger observerType;
@property (readonly, nonatomic) NSArray *rootEntries; // ivar: _rootEntries
@property (nonatomic) BOOL showSectionInDetailText; // ivar: _showSectionInDetailText
@property (readonly) Class superclass;
@property (nonatomic) BOOL waitUntilFinished; // ivar: _waitUntilFinished


+(id)sharedInstance;
-(id)_defaultSearchResultsSectionComparator:(SEL)arg0 ;
-(id)_rootSpecifiers;
-(id)_searchEntriesForSpecifierDataSource:(id)arg0 ;
-(id)init;
-(id)recursiveDescription;
-(id)searchOperation:(id)arg0 filteredEntriesForEntries:(id)arg1 ;
-(void)_addSearchEntries:(id)arg0 parent:(id)arg1 usingBlock:(id)arg2 ;
-(void)_addSpecifierDataSource:(id)arg0 forSearchEntry:(id)arg1 ;
-(void)_beginIndexingIfNecessary;
-(void)_beginSearchingEntriesForCurrentQuery:(id)arg0 newSearch:(BOOL)arg1 ;
-(void)_cancelAllSearchOperations;
-(void)_enumerateDelegatesUsingBlock:(id)arg0 ;
-(void)_finishedIndexingEntry:(id)arg0 ;
-(void)_loadChildrenForEntry:(id)arg0 ;
-(void)_performDeferredUpdatesForEntry:(id)arg0 ;
-(void)_performSpecifierUpdates:(id)arg0 forSearchEntries:(id)arg1 ;
-(void)_reloadSearchEntries:(id)arg0 ;
-(void)_removeSearchEntries:(id)arg0 usingBlock:(id)arg1 ;
// -(void)_removeSearchEntries:(id)arg0 usingBlock:(id)arg1 forReload:(unk)arg2  ;
-(void)_updateWithNewSearchResults:(id)arg0 forQuery:(id)arg1 newSearch:(BOOL)arg2 ;
-(void)_updatedEntry:(id)arg0 withChildren:(id)arg1 ;
-(void)addDelegate:(id)arg0 ;
-(void)addRootSpecifier:(id)arg0 ;
-(void)dataSource:(id)arg0 performUpdates:(id)arg1 ;
-(void)dealloc;
-(void)invalidateSpecifiersForDataSource:(id)arg0 ;
-(void)preheat;
-(void)reloadRootSpecifier:(id)arg0 ;
-(void)removeDelegate:(id)arg0 ;
-(void)removeRootSpecifier:(id)arg0 ;
-(void)searchForQuery:(id)arg0 ;
-(void)searchIndexOperation:(id)arg0 didFindSpecifierDataSource:(id)arg1 ;
-(void)searchIndexOperationDidCancel:(id)arg0 ;
-(void)searchIndexOperationDidFinish:(id)arg0 searchEntries:(id)arg1 ;
-(void)searchOperation:(id)arg0 configureSearchResults:(id)arg1 ;
-(void)searchOperationDidBegin:(id)arg0 ;
-(void)searchOperationDidCancel:(id)arg0 ;
-(void)searchOperationDidFinish:(id)arg0 withResults:(id)arg1 ;


@end


#endif