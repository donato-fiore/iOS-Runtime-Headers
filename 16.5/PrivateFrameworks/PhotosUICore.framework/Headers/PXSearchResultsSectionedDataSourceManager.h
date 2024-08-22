// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSEARCHRESULTSSECTIONEDDATASOURCEMANAGER_H
#define PXSEARCHRESULTSSECTIONEDDATASOURCEMANAGER_H

@class PHCachingImageManager, NSString, NSDictionary, PSIDatabase, NSTimer, PLSearchMetadataStore;
@protocol PXSearchResultsSectionedDataSourceChangeObserver, OS_dispatch_semaphore;

#import <Foundation/Foundation.h>

#import "PXSearchActiveSearch.h"
#import "PXSearchResultsSectionedDataSource.h"

@interface PXSearchResultsSectionedDataSourceManager : NSObject <PXSearchResultsSectionedDataSourceChangeObserver>



@property (retain, nonatomic) PXSearchActiveSearch *activeSearch; // ivar: _activeSearch
@property (retain, nonatomic) PHCachingImageManager *cachingImageManager; // ivar: _cachingImageManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSDictionary *debugDictionary;
@property (weak, nonatomic) NSObject<PXSearchResultsSectionedDataSourceChangeObserver> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isIndexing; // ivar: _isIndexing
@property (readonly, nonatomic) BOOL resultsReady;
@property (retain, nonatomic) PSIDatabase *searchIndex; // ivar: _searchIndex
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *searchIndexReadySemaphore; // ivar: _searchIndexReadySemaphore
@property (retain, nonatomic) NSTimer *searchIndexStatusTimer; // ivar: _searchIndexStatusTimer
@property (retain, nonatomic) PLSearchMetadataStore *searchMetadataStore; // ivar: _searchMetadataStore
@property (retain, nonatomic) PXSearchResultsSectionedDataSource *searchResultsDataSource; // ivar: _searchResultsDataSource
@property (readonly) Class superclass;


-(BOOL)queryHasChanged:(id)arg0 maxSuggestionCount:(NSInteger)arg1 ;
-(id)initWithSearchSectionedDataSource:(id)arg0 ;
-(void)dealloc;
-(void)mergePendingChanges;
-(void)prepareDataSourceWithCompletion:(id)arg0 ;
-(void)searchResultsDataSource:(id)arg0 didChangeThumbnailAssetsForSearchResult:(id)arg1 atIndexes:(id)arg2 ;
-(void)searchResultsDataSource:(id)arg0 didChangeThumbnailAssetsForSearchResult:(id)arg1 topAssetsSectionExists:(BOOL)arg2 ;
-(void)searchResultsDataSource:(id)arg0 didFetchAssetsForSearchResult:(id)arg1 indexPath:(id)arg2 ;
-(void)searchResultsDataSourceHasPendingChanges:(id)arg0 shouldMergePendingChanges:(BOOL)arg1 ;
-(void)startMonitoringSearchIndexStatusWithCompletion:(id)arg0 ;
-(void)stopMonitoringSearchIndexStatus;
-(void)verifySearchDataSourceDidLoad;


@end


#endif