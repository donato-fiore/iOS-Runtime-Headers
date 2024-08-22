// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PSIQUERY_H
#define PSIQUERY_H

@class NSArray, NSMutableDictionary, NSDictionary, NSSet, NSString;
@protocol PSIQueryDelegate;

#import <Foundation/Foundation.h>

#import "PSIParse.h"
#import "PSITokenizer.h"

@interface PSIQuery : NSObject {
    id<PSIQueryDelegate> *_delegate;
    PSIParse *_baseParse;
    BOOL _baseParseCouldHaveResults;
    NSArray *_implicitelyTokenizedParses;
    BOOL _implicitlyTokenizedParsesCouldHaveResults;
    NSArray *_datedParses;
    NSArray *_implicitlyTokenizedDatedParses;
    NSArray *_wordEmbeddingParses;
    NSArray *_identifierTokens;
    NSMutableDictionary *_groupIdsByTokenKey;
    NSDictionary *_substitutionsByStringToken;
    NSArray *_socialGroupPersonIdentifiers;
    uint8_t _didStart;
    uint8_t _isCanceled;
}


@property (nonatomic) BOOL calculateTokenCounts; // ivar: _calculateTokenCounts
@property (readonly, getter=isCanceled) BOOL canceled;
@property (copy, nonatomic) NSArray *dedupedGroupResults; // ivar: _dedupedGroupResults
@property (nonatomic) BOOL enableImplicitTokenization; // ivar: _enableImplicitTokenization
@property (nonatomic) BOOL exactMatchIgnoreUntokenizedCharacters; // ivar: _exactMatchIgnoreUntokenizedCharacters
@property (readonly, nonatomic) BOOL implicitTokenizationIncludeBaseParseResults;
@property (nonatomic) BOOL implicitTokenizationLastTokenUsesPrefixMatch; // ivar: _implicitTokenizationLastTokenUsesPrefixMatch
@property (nonatomic) BOOL implicitTokenizationUsePrefixMatch; // ivar: _implicitTokenizationUsePrefixMatch
@property (nonatomic) BOOL lastImplicitTokenAllowsWordEmbeddings; // ivar: _lastImplicitTokenAllowsWordEmbeddings
@property (nonatomic) NSUInteger mergeFilterTokenAssetIDsIntervalID; // ivar: _mergeFilterTokenAssetIDsIntervalID
@property (retain, nonatomic) NSArray *nextKeywordSuggestions; // ivar: _nextKeywordSuggestions
@property (nonatomic) NSUInteger numberOfNextKeywordSuggestionToProcess; // ivar: _numberOfNextKeywordSuggestionToProcess
@property (nonatomic) BOOL preventUnnecessaryImplicitTokenization; // ivar: _preventUnnecessaryImplicitTokenization
@property (readonly, copy, nonatomic) NSArray *queryTokens; // ivar: _queryTokens
@property (copy, nonatomic) NSSet *sceneIdentifiers; // ivar: _sceneIdentifiers
@property (readonly, copy, nonatomic) NSString *searchText; // ivar: _searchText
@property (copy, nonatomic) NSSet *socialGroupExtendedAssetIds; // ivar: _socialGroupExtendedAssetIds
@property (copy, nonatomic) NSSet *socialGroupExtendedCollectionIds; // ivar: _socialGroupExtendedCollectionIds
@property (retain, nonatomic) NSDictionary *substitutions; // ivar: _substitutions
@property (readonly, nonatomic) PSITokenizer *tokenizer;
@property (readonly, nonatomic) BOOL useWildcardText; // ivar: _useWildcardText
@property (nonatomic) BOOL usesPrefixBasedWordEmbedding; // ivar: _usesPrefixBasedWordEmbedding
@property (nonatomic) NSUInteger wordEmbeddingMode; // ivar: _wordEmbeddingMode


+(BOOL)_shouldApplyFilterTokensForGroupArrays:(id)arg0 searchTokens:(id)arg1 filterGroupIds:(id)arg2 ;
+(BOOL)enumerateDatedParsesWithParse:(id)arg0 currentTokenIndex:(NSUInteger)arg1 potentialComboAttributes:(id)arg2 usingBlock:(id)arg3 ;
+(BOOL)tokenIsEligibleForDateParsing:(id)arg0 ;
+(id)_indexesOfFilterTokensInSearchTokens:(id)arg0 ;
+(id)_indexesToRemoveForDuplicatedFilterGroupsinGroupArrays:(id)arg0 searchTokens:(id)arg1 ;
+(id)dateAttributesFromToken:(id)arg0 ;
+(id)dateFilterByCombiningDateFilter:(id)arg0 withDateFilter:(id)arg1 ;
+(id)dateFilterWithAttributes:(id)arg0 ;
+(id)dateFilterWithAttributes:(id)arg0 andAttributes:(id)arg1 ;
+(id)datedParsesWithParses:(id)arg0 ;
+(id)parsedDatesFromText:(id)arg0 ;
+(struct _NSRange )searchTextExtendedRangeForParse:(id)arg0 ;
+(void)_aggregateAssetIdsOnFilterGroupsInGroupArrays:(id)arg0 searchTokens:(id)arg1 groupIdToOriginalAssetIdsMap:(*id)arg2 ;
+(void)_restoreAssetIdsForGroupsInGroupArrays:(id)arg0 atRemovalIndexes:(id)arg1 groupIdToOriginalAssetIdsMap:(id)arg2 searchTokens:(id)arg3 ;
+(void)bootstrap;
-(BOOL)_enumerateImplicitlyTokenizedParsesWithBaseParse:(id)arg0 usingBlock:(id)arg1 ;
-(BOOL)recursiveAddToGroupResults:(id)arg0 aggregate:(id)arg1 atIndex:(NSUInteger)arg2 outOf:(NSUInteger)arg3 inGroupArrays:(id)arg4 dateFilter:(id)arg5 datedTokens:(id)arg6 ;
-(id)description;
-(id)implicitlyTokenizedParsesWithBaseParse:(id)arg0 ;
-(id)initWithQueryTokens:(id)arg0 searchText:(id)arg1 useWildcardText:(BOOL)arg2 delegate:(id)arg3 ;
-(id)processParse:(id)arg0 ;
-(id)suggestionWhitelistedScenes;
-(struct __CFSet *)_idsOfGroupsMatchingString:(id)arg0 categories:(id)arg1 textIsSearchable:(BOOL)arg2 isFilterTypeToken:(BOOL)arg3 ;
-(struct __CFSet *)_idsOfGroupsMatchingToken:(id)arg0 ;
-(void)_postProcessPersonGroupsInGroupArrays:(id)arg0 ;
-(void)bootstrap;
-(void)cancel;
-(void)computeSuggestions;
-(void)enumerateParsesWithMode:(NSUInteger)arg0 usingBlock:(id)arg1 ;
-(void)processDates;
-(void)processImplicitTokenization;
-(void)processWordEmbeddings;
-(void)runWithResultsHandler:(id)arg0 ;


@end


#endif