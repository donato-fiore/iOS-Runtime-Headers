// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HLPHELPSEARCHINDEXCONTROLLER_H
#define HLPHELPSEARCHINDEXCONTROLLER_H

@class CSSearchQuery, CSPrivateSearchableIndex, NSDictionary, NSArray, NSMutableArray;


#import "HLPRemoteDataController.h"
#import "HLPHelpBookController.h"

@interface HLPHelpSearchIndexController : HLPRemoteDataController {
    CSSearchQuery *_spotlightSearchQuery;
}


@property (retain, nonatomic) HLPHelpBookController *helpBookController; // ivar: _helpBookController
@property (retain, nonatomic) CSPrivateSearchableIndex *privateSearchableIndex; // ivar: _privateSearchableIndex
@property (retain, nonatomic) NSDictionary *searchIndex; // ivar: _searchIndex
@property (readonly, nonatomic) NSArray *spotlightSearchResults;
@property (retain, nonatomic) NSMutableArray *spotlightSearchScores; // ivar: _spotlightSearchScores
@property (nonatomic) BOOL useCSSearch; // ivar: _useCSSearch


+(id)_stopwordsForLanguage:(id)arg0 ;
-(CGFloat)_relevanceScore:(CGFloat)arg0 forRankingQueries:(id)arg1 ;
-(id)_csQueryStringForSearchTerm:(id)arg0 ;
-(id)_fetchAttributesForCSSearchQuery;
-(id)_rankingQueriesForSearchTerm:(id)arg0 ;
-(id)_strippedSearchTermFromSearchTerm:(id)arg0 ;
-(id)_tokenizeSearchTerm:(id)arg0 ;
-(id)getAllIdentifiersFromTree:(id)arg0 withMaxDepth:(int)arg1 ;
-(id)mergeDictionary:(id)arg0 withDictionary:(id)arg1 ;
-(id)resultsWithSearchText:(id)arg0 localeCode:(id)arg1 searchTerms:(*id)arg2 ;
-(id)searchTermsForSearchText:(id)arg0 localeCode:(id)arg1 ;
-(id)searchTree:(id)arg0 forQueryWord:(id)arg1 withMaxDepth:(int)arg2 ;
-(void)CSSearchForSearchText:(id)arg0 completionHandler:(id)arg1 ;
-(void)_hpdResultsFromCSSearchableItems:(id)arg0 rankingQueries:(id)arg1 ;
-(void)cancelSpotlightSearch;
-(void)dealloc;
-(void)fetchDataWithDataType:(NSInteger)arg0 identifier:(id)arg1 completionHandler:(id)arg2 ;
-(void)processData:(id)arg0 formattedData:(id)arg1 ;
-(void)processFileURLWithCompletionHandler:(id)arg0 ;


@end


#endif