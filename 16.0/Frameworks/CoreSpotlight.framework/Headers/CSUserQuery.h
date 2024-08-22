// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSUSERQUERY_H
#define CSUSERQUERY_H

@class NSString, NSMutableArray, NSMutableSet, NSArray;
@protocol OS_dispatch_semaphore;


#import "CSSearchQuery.h"
#import "CSSearchQueryContext.h"
#import "_CSContactSearch.h"
#import "_CSMultiQuery.h"

@interface CSUserQuery : CSSearchQuery {
    CSSearchQueryContext *_clientContext;
    NSString *_searchString;
    NSMutableArray *_nlpSuggestions;
    NSMutableArray *_templateSuggestions;
    NSMutableArray *_suggestions;
    NSMutableArray *_completions;
    _CSContactSearch *_contactSearch;
    _CSMultiQuery *_contactCountingQuerySearchFrom;
    _CSMultiQuery *_contactCountingQuerySearchTo;
    NSMutableSet *_instantAnswers;
    NSInteger _foundSuggestionCount;
    BOOL _queryRewritten;
    NSInteger _currentTokenKind;
    NSInteger _currentTokenScope;
}


@property (copy, nonatomic) NSArray *contactSearchResults; // ivar: _contactSearchResults
@property (readonly, nonatomic) NSObject<OS_dispatch_semaphore> *contactSearchSemaphore; // ivar: _contactSearchSemaphore
@property (readonly, nonatomic) NSUInteger contactSearchSemaphoreWaitTime; // ivar: _contactSearchSemaphoreWaitTime
@property (copy) id *foundInstantAnswersHandler; // ivar: _foundInstantAnswersHandler
@property (readonly) NSInteger foundSuggestionCount;
@property (copy) id *foundSuggestionsHandler; // ivar: _foundSuggestionsHandler


+(id)advancedComponentsWithSearchString:(id)arg0 parseResult:(id)arg1 parseOptions:(id)arg2 queryContext:(id)arg3 ;
+(id)dedupSuggestions:(id)arg0 seenContactInfoToSuggestion:(id)arg1 ;
+(id)dedupedSuggestions:(id)arg0 options:(id)arg1 ;
+(id)flattenCSFieldSpecifications:(id)arg0 ;
+(id)orderedSuggestions:(id)arg0 options:(id)arg1 ;
+(id)parseResultWithSearchString:(id)arg0 parseOptions:(id)arg1 queryContext:(id)arg2 isZKW:(BOOL)arg3 ;
+(id)parseSearchString:(id)arg0 parseOptions:(id)arg1 queryContext:(id)arg2 ;
+(id)queryContextWithUserQueryString:(id)arg0 searchString:(id)arg1 clientContext:(id)arg2 ;
+(id)suggestionsByDetectingEmailIntentForPeopleSuggestions:(id)arg0 ;
+(id)trimSuggestions:(id)arg0 options:(id)arg1 peopleSelectedScope:(NSInteger)arg2 ;
+(void)filteredTemplateSuggestions:(id)arg0 nlpSuggestions:(id)arg1 ;
+(void)updateWithTemplateSuggestions:(id)arg0 searchString:(id)arg1 currentSuggestion:(id)arg2 ;
-(BOOL)queryRewritten;
-(id)clientContext;
-(id)filterQueries;
-(id)foundCompletions;
-(id)foundNLPSuggestions;
-(id)foundSuggestions;
-(id)foundTemplateSuggestions;
-(id)initWithQueryString:(id)arg0 context:(id)arg1 ;
-(id)initWithQueryString:(id)arg0 queryContext:(id)arg1 ;
-(id)initWithSearchString:(id)arg0 keyboardLanguage:(id)arg1 attributes:(id)arg2 ;
-(id)initWithUserQueryString:(id)arg0 queryContext:(id)arg1 ;
-(id)initWithUserQueryString:(id)arg0 userQueryContext:(id)arg1 ;
-(id)initWithUserString:(id)arg0 queryContext:(id)arg1 ;
-(id)keyboardLanguage;
-(id)peopleSuggestionsWithContactSearchResults:(id)arg0 ;
-(id)processFromContacts:(id)arg0 resultsFromMultiQuery:(id)arg1 contactsFrom:(id)arg2 processedContacts:(id)arg3 ;
-(id)processToContacts:(id)arg0 resultsToMultiQuery:(id)arg1 contactsTo:(id)arg2 processedContacts:(id)arg3 ;
-(id)queryContext;
-(id)queryStringWithQueryContext:(id)arg0 searchString:(id)arg1 options:(id)arg2 ;
-(void)cancel;
-(void)filterContactPeopleSuggestions:(id)arg0 cachedSuggestionsEmailToScope:(id)arg1 completionHandler:(id)arg2 ;
-(void)handleCompletion:(id)arg0 ;
-(void)handleFoundCompletions:(id)arg0 ;
-(void)handleFoundInstantAnswers:(id)arg0 ;
-(void)handleFoundItems:(id)arg0 ;
-(void)handleFoundNLPSuggestions:(id)arg0 ;
-(void)handleFoundSuggestions:(id)arg0 ;
-(void)handleFoundTemplateSuggestions:(id)arg0 ;
-(void)handleQueryRewritten;
-(void)handleSuggestions;
-(void)prepareSearch;
-(void)processInstantAnswersWithFoundItems:(id)arg0 ;
-(void)setFilterQueries:(id)arg0 ;
-(void)start;
-(void)startContactSearchIfNeeded;
-(void)startContactSearchWithUserQuery:(id)arg0 maxCount:(NSInteger)arg1 ;
-(void)updateRecentSuggestions:(id)arg0 ;
-(void)userEngagedWithResult:(id)arg0 interactionType:(int)arg1 ;
-(void)userEngagedWithResult:(id)arg0 visibleResults:(id)arg1 interactionType:(int)arg2 ;
-(void)userEngagedWithSuggestion:(id)arg0 visibleSuggestions:(id)arg1 interactionType:(int)arg2 ;
-(void)willStartQuery;


@end


#endif