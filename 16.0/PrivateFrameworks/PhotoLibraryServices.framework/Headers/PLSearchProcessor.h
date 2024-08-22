// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLSEARCHPROCESSOR_H
#define PLSEARCHPROCESSOR_H


#import <Foundation/Foundation.h>

#import "PSIDatabase.h"

@interface PLSearchProcessor : NSObject

@property (readonly, nonatomic) PSIDatabase *searchIndex; // ivar: _searchIndex


+(id)_OCRProcessedGroupResultsFromGroupResults:(id)arg0 query:(id)arg1 ;
+(id)_groupResultFromCombinedGroupResults:(id)arg0 query:(id)arg1 ;
+(id)_singleOCRGroupResultFromOCRGroupResults:(id)arg0 query:(id)arg1 ;
+(id)searchProcessorLog;
-(BOOL)_categoryMaskIsCombinable:(NSUInteger)arg0 ;
-(BOOL)_shouldOmitSectionForCategoryMask:(NSUInteger)arg0 ;
-(CGFloat)_scoreForSearchIndexCategory:(NSUInteger)arg0 ;
-(id)_alphabeticalSortDescriptors;
-(id)_combinedFilenameSearchResultsFromSearchResults:(id)arg0 inQuery:(id)arg1 ;
-(id)_completionFilenameResultsForFilenameResults:(id)arg0 ;
-(id)_dateSortDescriptors;
-(id)_numberOfAssetsSortDescriptors;
-(id)_searchResultsByCategoryMasksForSearchResults:(id)arg0 ;
-(id)_sortDescriptorsForCategoryMask:(NSUInteger)arg0 ;
-(id)completionSuggestionsForQuery:(id)arg0 withSearchSections:(id)arg1 numberOfSuggestions:(NSUInteger)arg2 ;
-(id)initWithDatabase:(id)arg0 ;
-(id)searchResultSectionsForQuery:(id)arg0 withAssetResults:(id)arg1 assetResultsForCompletions:(id)arg2 collectionResults:(id)arg3 combineAssetSections:(BOOL)arg4 ;
-(id)updatedSearchSections:(id)arg0 withTopCollectionResults:(id)arg1 ;
-(void)_extractSearchResultsFromGroupResults:(id)arg0 withQuery:(id)arg1 resultsHandler:(id)arg2 ;
-(void)performQuery:(id)arg0 withResultsHandler:(id)arg1 ;


@end


#endif