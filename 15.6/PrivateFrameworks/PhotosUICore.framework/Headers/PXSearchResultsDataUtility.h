// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXSEARCHRESULTSDATAUTILITY_H
#define PXSEARCHRESULTSDATAUTILITY_H


#import <Foundation/Foundation.h>


@interface PXSearchResultsDataUtility : NSObject



+(BOOL)sectionIsHighlightsSection:(id)arg0 ;
+(id)_bestParentWordEmbeddingsWithWordEmbeddings:(id)arg0 sceneAncestoryInformation:(id)arg1 ;
+(id)_localizedTitleForAssetCollection:(id)arg0 titleCategory:(*NSInteger)arg1 dateRangeFormatter:(id)arg2 ;
+(id)_symbolNameForSearchUserCategory:(NSUInteger)arg0 ;
+(id)fetchResultFromTopAssetsSearchResult:(id)arg0 ;
+(id)imageForSearchUserCategory:(NSUInteger)arg0 useSearchFieldStyle:(BOOL)arg1 ;
+(id)photosDetailsContextForPhotosUUIDs:(id)arg0 title:(id)arg1 ;
+(id)photosDetailsContextFromCollectionUUID:(id)arg0 collectionClass:(Class)arg1 dateRangeFormatter:(id)arg2 ;
+(id)photosDetailsContextFromMemoryUUID:(id)arg0 ;
+(id)recentSearchFromActiveSearch:(id)arg0 ;
+(id)searchTokenFromQueryToken:(id)arg0 ;
+(id)searchTokenFromWordEmbedding:(id)arg0 ;
+(id)searchTokenRepresentedObjectFromSearchText:(id)arg0 ;
+(id)searchTokenRepresentedObjectsFromSearchTokens:(id)arg0 ;
+(id)searchTokensFromSiriSearchRequest:(id)arg0 ;
+(id)sectionTitleFromSearchResultSection:(id)arg0 shouldCombineAssetsSections:(BOOL)arg1 ;
+(id)sortedWordEmbeddingsForCurrentQueryFromSubstitutions:(id)arg0 ;
+(id)stringWithStartDate:(id)arg0 endDate:(id)arg1 calendar:(id)arg2 dateComponents:(id)arg3 dateIntervalFormatter:(id)arg4 ;
+(id)subtitleForSearchResult:(id)arg0 ;
+(id)titleForSearchResult:(id)arg0 ;
+(id)wordEmbeddingSubstitutionsForSearchText:(id)arg0 wantsSubstitutedString:(BOOL)arg1 sceneAncestoryInformation:(id)arg2 substitutions:(id)arg3 ;
+(void)suggestionsDisplayDataFromToken:(id)arg0 searchText:(id)arg1 matchedColor:(id)arg2 remainingColor:(id)arg3 isTextCompletion:(BOOL)arg4 completion:(id)arg5 ;


@end


#endif