// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSEARCHPARSECANALYTICSUTILITIES_H
#define PXSEARCHPARSECANALYTICSUTILITIES_H


#import <Foundation/Foundation.h>


@interface PXSearchParsecAnalyticsUtilities : NSObject



+(NSUInteger)_wordCountForSearchString:(id)arg0 ;
+(id)SFSearchResultFromRecentSearchText:(id)arg0 recentSearchSuggestions:(id)arg1 queryId:(NSInteger)arg2 ;
+(id)SFSearchResultFromSearchResultObject:(id)arg0 queryId:(NSInteger)arg1 ;
+(id)SFSearchResultFromSearchSuggestion:(id)arg0 isZeroKeyword:(BOOL)arg1 queryId:(NSInteger)arg2 ;
+(id)SFSearchResultFromUISearchToken:(id)arg0 queryId:(NSInteger)arg1 ;
+(id)SFSearchResultFromZeroKeyword:(id)arg0 queryId:(NSInteger)arg1 ;
+(id)_baseSFSearchResultForQueryId:(NSInteger)arg0 ;
+(id)_descriptionForAssetAggregationSearchResult:(id)arg0 ;
+(id)_descriptionForCollectionSearchResult:(id)arg0 ;
+(id)_descriptionForSearchUserCategory:(NSUInteger)arg0 ;
+(id)_descriptionForSectionType:(NSUInteger)arg0 ;
+(id)_descriptionForZeroKeywordSectionType:(NSInteger)arg0 ;
+(id)_identifierForSearchResultObject:(id)arg0 ;
+(id)_identifierForSearchSuggestion:(id)arg0 ;
+(id)_identifierForZeroKeyword:(id)arg0 ;
+(id)_resultRankingFeedbacksFromSFSearchResults:(id)arg0 ;
+(id)_resultSectionForSearchSuggestions:(id)arg0 isZeroKeywordSection:(BOOL)arg1 queryId:(NSInteger)arg2 ;
+(id)_resultSectionForZeroKeywordSection:(id)arg0 sectionIsVisible:(BOOL)arg1 queryId:(NSInteger)arg2 ;
+(id)_searchResultDescriptionForSearchResultObject:(id)arg0 ;
+(id)_searchResultDescriptionForZeroKeyword:(id)arg0 ;
+(id)_sectionRankingFeedbackWithResultSection:(id)arg0 localSectionPosition:(NSUInteger)arg1 ;
+(id)_tokenCategoryTypesForSearchTokens:(id)arg0 ;
+(id)_visibleIndexPathsForSearchResultsFromVisibleIndexPaths:(id)arg0 queryHasSuggestions:(BOOL)arg1 ;
+(id)commandFeedbackFromSFSearchResult:(id)arg0 ;
+(id)descriptionForSearchString:(id)arg0 searchTokens:(id)arg1 ;
+(id)resultSectionForSearchSection:(id)arg0 sectionIsVisible:(BOOL)arg1 queryId:(NSInteger)arg2 ;
+(id)sectionRankingFeedbackWithSearchSuggestions:(id)arg0 searchResultSections:(id)arg1 visibleIndexPaths:(id)arg2 queryId:(NSInteger)arg3 ;
+(id)sectionRankingFeedbackWithSearchZeroKeywordSections:(id)arg0 visibleIndexPaths:(id)arg1 queryId:(NSInteger)arg2 ;
+(id)visibleSFSearchResultsFromSearchSuggestions:(id)arg0 searchResultSections:(id)arg1 visibleIndexPaths:(id)arg2 queryId:(NSInteger)arg3 ;
+(id)visibleSFSearchResultsFromZeroKeywordSections:(id)arg0 visibleIndexPaths:(id)arg1 queryId:(NSInteger)arg2 ;


@end


#endif