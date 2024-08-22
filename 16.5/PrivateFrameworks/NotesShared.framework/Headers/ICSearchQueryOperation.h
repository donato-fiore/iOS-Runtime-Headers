// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICSEARCHQUERYOPERATION_H
#define ICSEARCHQUERYOPERATION_H

@class NSOperation, NSError, NSString, NSMutableArray, NSMutableDictionary, NSArray;


#import "ICSearchQuery.h"
#import "ICTopHitSearchQuery.h"

@interface ICSearchQueryOperation : NSOperation

@property (readonly, nonatomic) BOOL allowEmptySearchString; // ivar: _allowEmptySearchString
@property (retain, nonatomic) ICSearchQuery *defaultQuery; // ivar: _defaultQuery
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (copy, nonatomic) id *foundItemsHandler; // ivar: _foundItemsHandler
@property (retain, nonatomic) ICSearchQuery *fuzzyQuery; // ivar: _fuzzyQuery
@property (copy, nonatomic) NSString *keyboardLanguage; // ivar: _keyboardLanguage
@property (nonatomic) BOOL modernResultsOnly; // ivar: _modernResultsOnly
@property (retain, nonatomic) ICSearchQuery *nlQuery; // ivar: _nlQuery
@property (nonatomic) BOOL performNLSearch; // ivar: _performNLSearch
@property (nonatomic) BOOL performTopHitSearch; // ivar: _performTopHitSearch
@property (nonatomic) NSUInteger rankingStrategy; // ivar: _rankingStrategy
@property (retain, nonatomic) NSMutableArray *relatedWordQueries; // ivar: _relatedWordQueries
@property (nonatomic) NSInteger requestIndex; // ivar: _requestIndex
@property (retain, nonatomic) NSMutableArray *results; // ivar: _results
@property (retain, nonatomic) NSMutableDictionary *resultsDictionary; // ivar: _resultsDictionary
@property (copy, nonatomic) NSString *searchString; // ivar: _searchString
@property (readonly, nonatomic) NSArray *searchSuggestions; // ivar: _searchSuggestions
@property (retain, nonatomic) ICSearchQuery *spellingQuery; // ivar: _spellingQuery
@property (retain, nonatomic) ICSearchQuery *substringQuery; // ivar: _substringQuery
@property (copy, nonatomic) NSString *suggestionsQueryString; // ivar: _suggestionsQueryString
@property (retain, nonatomic) ICTopHitSearchQuery *topHitQuery; // ivar: _topHitQuery
@property (retain, nonatomic) NSMutableDictionary *uniqueIdentifiersOfAttachmentsFoundInNotes; // ivar: _uniqueIdentifiersOfAttachmentsFoundInNotes


+(*void)nlpParser;
+(id)exactMatchingQueryStringForTitleSearchString:(id)arg0 ;
+(id)fuzzyMatchingQueryStringForSearchString:(id)arg0 ;
+(id)highlightStringForAttributedInputs:(id)arg0 ;
+(id)newOperationQueueWithName:(id)arg0 ;
+(id)nlpSerialQueue;
+(id)prefixMatchingQueryStringForSearchString:(id)arg0 ;
+(id)searchableItemsFromSortableItems:(id)arg0 ;
+(id)substringMatchingQueryStringForSearchString:(id)arg0 ;
+(void)initialize;
+(void)nlSearchQueryWithSearchString:(id)arg0 queryString:(*id)arg1 rankingQueries:(*id)arg2 highlightString:(*id)arg3 ;
-(NSUInteger)countOfNonSpaceCharsInSearchString;
-(id)init;
-(id)initWithQueryString:(id)arg0 rankingQueries:(id)arg1 ;
-(id)initWithQueryString:(id)arg0 rankingQueries:(id)arg1 attributes:(id)arg2 ;
-(id)initWithQueryString:(id)arg0 rankingQueries:(id)arg1 performTopHitSearch:(BOOL)arg2 modernResultsOnly:(BOOL)arg3 ;
-(id)initWithQueryString:(id)arg0 rankingQueries:(id)arg1 performTopHitSearch:(BOOL)arg2 modernResultsOnly:(BOOL)arg3 attributes:(id)arg4 ;
-(id)initWithSearchString:(id)arg0 performNLSearch:(BOOL)arg1 performTopHitSearch:(BOOL)arg2 suggestions:(id)arg3 suggestionsQueryString:(id)arg4 modernResultsOnly:(BOOL)arg5 ;
-(id)jointQueryWithSuggestions:(id)arg0 ;
-(id)retrieveNotesOfFoundAttachmentsForSearchResults:(id)arg0 ;
-(id)runICSearchQuery:(id)arg0 ;
-(void)appendSortableSearchableItemsToResults:(id)arg0 ;
-(void)cancel;
-(void)main;
-(void)performPrefixAndFuzzyAndSubstringQueries;
-(void)performRelatedWordQueriesIfNeeded;
-(void)performSpellCheckerAPIQueryIfNeeded;


@end


#endif