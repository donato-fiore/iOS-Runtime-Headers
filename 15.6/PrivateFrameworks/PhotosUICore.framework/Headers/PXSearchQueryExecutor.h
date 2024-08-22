// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXSEARCHQUERYEXECUTOR_H
#define PXSEARCHQUERYEXECUTOR_H

@class PLSearchProcessor, NSDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PXSearchQuery.h"
#import "PXSearchIndexManager.h"
#import "PXSearchQueryResultsProcessor.h"

@interface PXSearchQueryExecutor : NSObject

@property (copy, nonatomic) PXSearchQuery *currentSearchQuery; // ivar: _currentSearchQuery
@property (readonly, nonatomic) PLSearchProcessor *plSearchProcessor; // ivar: _plSearchProcessor
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queryQueue; // ivar: _queryQueue
@property (readonly, nonatomic) BOOL requestSceneAncestryInformation; // ivar: _requestSceneAncestryInformation
@property (readonly, copy, nonatomic) id *resultsHandler; // ivar: _resultsHandler
@property (copy, nonatomic) NSDictionary *sceneAncestryInformation; // ivar: _sceneAncestryInformation
@property (readonly, nonatomic) PXSearchIndexManager *searchIndexManager; // ivar: _searchIndexManager
@property (retain, nonatomic) PXSearchQueryResultsProcessor *searchResultsProcessor; // ivar: _searchResultsProcessor
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(BOOL)_sectionIsHighlightsSection:(id)arg0 ;
-(id)_backendQueryFromSearchQuery:(id)arg0 ;
-(id)_limitedSearchSuggestions:(id)arg0 limit:(NSUInteger)arg1 ;
-(id)_searchSuggestionsFromPSIQuery:(id)arg0 searchSections:(id)arg1 suggestionLimit:(NSUInteger)arg2 ;
-(id)init;
-(id)initWithSearchIndexManager:(id)arg0 requestSceneAncestryInformation:(BOOL)arg1 resultsHandler:(id)arg2 ;
-(void)_processedQueryResultsForSearchQuery:(id)arg0 psiQuery:(id)arg1 assetResults:(id)arg2 collectionResults:(id)arg3 topAssetsResult:(id)arg4 topCollectionResults:(id)arg5 ;
-(void)_setupSearchResultsProcessor;
-(void)executeSearchQuery:(id)arg0 ;


@end


#endif