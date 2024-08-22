// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSCOMPLETIONQUERY_H
#define WBSCOMPLETIONQUERY_H

@class NSString, NSSet, NSURLRequest, NSArray;

#import <Foundation/Foundation.h>


@interface WBSCompletionQuery : NSObject {
    NSString *_normalizedQueryStringForParsec;
    NSSet *_cachedBagOfWords;
    time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>> _timestamp;
    duration<long long, std::ratio<1, 1000>> _searchSuggestionProviderLatency;
    duration<long long, std::ratio<1, 1000>> _parsecLatency;
}


@property (nonatomic, getter=isForLastSearch) BOOL forLastSearch; // ivar: _forLastSearch
@property (nonatomic) NSUInteger indexInFeedbackArray; // ivar: _indexInFeedbackArray
@property (readonly, nonatomic) NSString *normalizedQueryStringForParsec;
@property (copy, nonatomic) NSString *parsecFeedbackQueryIdentifier; // ivar: _parsecFeedbackQueryIdentifier
@property ? parsecLatency;
@property (copy, nonatomic) NSURLRequest *parsecSearchRequest; // ivar: _parsecSearchRequest
@property (readonly, nonatomic) NSInteger queryID; // ivar: _queryID
@property (copy, nonatomic) NSArray *queryItems; // ivar: _queryItems
@property (readonly, nonatomic) NSString *queryString; // ivar: _queryString
@property (readonly, nonatomic) NSString *queryStringBeforeRewriting; // ivar: _queryStringBeforeRewriting
@property (copy) NSArray *querySuggestions; // ivar: _querySuggestions
@property (copy, nonatomic) NSString *rewrittenQueryStringFromParsec; // ivar: _rewrittenQueryStringFromParsec
@property (copy, nonatomic) NSString *searchSuggestionProviderIdentifier; // ivar: _searchSuggestionProviderIdentifier
@property ? searchSuggestionProviderLatency;
@property ? timestamp;
@property (nonatomic) NSUInteger triggerEvent; // ivar: _triggerEvent


+(id)recentAndSuggestedCompletionStringsByMergingRecentSearches:(id)arg0 withSuggestions:(id)arg1 literalSearch:(id)arg2 ;
-(id)_initWithQueryString:(id)arg0 queryID:(NSInteger)arg1 timestamp:(struct time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>> )arg2 indexInFeedbackArray:(NSUInteger)arg3 triggerEvent:(NSUInteger)arg4 ;
-(id)initWithNewQueryString:(id)arg0 queryBeforeRewriting:(id)arg1 ;
-(id)initWithQueryString:(id)arg0 ;
-(id)initWithQueryString:(id)arg0 queryID:(NSInteger)arg1 ;
-(id)initWithQueryString:(id)arg0 queryID:(NSInteger)arg1 triggerEvent:(NSUInteger)arg2 ;
-(id)initWithQueryString:(id)arg0 triggerEvent:(NSUInteger)arg1 ;


@end


#endif