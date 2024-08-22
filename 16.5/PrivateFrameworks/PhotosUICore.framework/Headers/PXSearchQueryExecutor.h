// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSEARCHQUERYEXECUTOR_H
#define PXSEARCHQUERYEXECUTOR_H

@class PSIQuery, PLSearchProcessor, NSDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PXSearchQuery.h"
#import "PXSearchIndexManager.h"
#import "PXSearchQueryResultsProcessor.h"

@interface PXSearchQueryExecutor : NSObject

@property (retain, nonatomic) PSIQuery *currentPSIQuery; // ivar: _currentPSIQuery
@property (copy, nonatomic) PXSearchQuery *currentSearchQuery; // ivar: _currentSearchQuery
@property (readonly, nonatomic) PLSearchProcessor *plSearchProcessor; // ivar: _plSearchProcessor
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queryQueue; // ivar: _queryQueue
@property (readonly, nonatomic) BOOL requestSceneAncestryInformation; // ivar: _requestSceneAncestryInformation
@property (readonly, copy, nonatomic) id *resultsHandler; // ivar: _resultsHandler
@property (copy, nonatomic) NSDictionary *sceneAncestryInformation; // ivar: _sceneAncestryInformation
@property (readonly, nonatomic) PXSearchIndexManager *searchIndexManager; // ivar: _searchIndexManager
@property (retain, nonatomic) PXSearchQueryResultsProcessor *searchResultsProcessor; // ivar: _searchResultsProcessor
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(BOOL)_isCollectionSpotlightSearchableItem:(id)arg0 ;
+(BOOL)_sectionIsHighlightsSection:(id)arg0 ;
+(id)_assetSearchResultsForSpotlightSearchableItems:(id)arg0 ;
+(id)_collectionSearchResultForSpotlightSearchableItem:(id)arg0 ;
+(id)_collectionSearchResultsForSpotlightSearchableItems:(id)arg0 ;
+(void)_searchResultsForSpotlightSearchableItems:(id)arg0 outAssetSearchResults:(*id)arg1 outCollectionSearchResults:(*id)arg2 ;
-(id)_backendQueryFromSearchQuery:(id)arg0 ;
-(id)_limitedSearchSuggestions:(id)arg0 limit:(NSUInteger)arg1 ;
-(id)_searchSuggestionsFromPSIQuery:(id)arg0 searchSections:(id)arg1 suggestionLimit:(NSUInteger)arg2 ;
-(id)init;
-(id)initWithSearchIndexManager:(id)arg0 requestSceneAncestryInformation:(BOOL)arg1 resultsHandler:(id)arg2 ;
-(void)_executePhotosIndexSearchQuery:(id)arg0 ;
-(void)_executeSpotlightSearchQuery:(id)arg0 ;
-(void)_processedQueryResultsForSearchQuery:(id)arg0 psiQuery:(id)arg1 assetResults:(id)arg2 assetResultsForCompletions:(id)arg3 collectionResults:(id)arg4 topAssetsResult:(id)arg5 topCollectionResults:(id)arg6 ;
-(void)_setupSearchResultsProcessor;
-(void)executeSearchQuery:(id)arg0 ;


@end


#endif