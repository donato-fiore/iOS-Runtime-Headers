// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSEARCHCPANALYTICSSESSION_H
#define PXSEARCHCPANALYTICSSESSION_H


#import <Foundation/Foundation.h>

#import "PXSearchActiveSearch.h"
#import "PXSearchQuery.h"

@interface PXSearchCPAnalyticsSession : NSObject

@property (nonatomic) NSUInteger beginType; // ivar: _beginType
@property (nonatomic) NSUInteger firstAssetActionResultType; // ivar: _firstAssetActionResultType
@property (nonatomic) NSUInteger firstAssetActionType; // ivar: _firstAssetActionType
@property (nonatomic) NSUInteger firstEnteredCollectionResultType; // ivar: _firstEnteredCollectionResultType
@property (nonatomic) BOOL isValid; // ivar: _isValid
@property (retain, nonatomic) PXSearchActiveSearch *lastActiveSearch; // ivar: _lastActiveSearch
@property (retain, nonatomic) PXSearchQuery *lastSearch; // ivar: _lastSearch
@property (nonatomic) NSUInteger numberOfCompletionSelections; // ivar: _numberOfCompletionSelections
@property (nonatomic) NSUInteger numberOfNextTokenSelections; // ivar: _numberOfNextTokenSelections
@property (nonatomic) NSUInteger numberOfSearches; // ivar: _numberOfSearches
@property (nonatomic) NSUInteger numberOfSearchesUntilFirstAssetAction; // ivar: _numberOfSearchesUntilFirstAssetAction
@property (nonatomic) NSUInteger numberOfSearchesUntilFirstEnteredCollection; // ivar: _numberOfSearchesUntilFirstEnteredCollection
@property (nonatomic) NSUInteger numberOfSearchesUntilFirstOneUpInTopAssets; // ivar: _numberOfSearchesUntilFirstOneUpInTopAssets
@property (nonatomic) NSUInteger numberOfSearchesUntilFirstSuccess; // ivar: _numberOfSearchesUntilFirstSuccess
@property (nonatomic) NSUInteger numberOfSearchesWithNoResults; // ivar: _numberOfSearchesWithNoResults
@property (nonatomic) NSUInteger numberOfSearchesWithWordEmbeddings; // ivar: _numberOfSearchesWithWordEmbeddings
@property (nonatomic) NSUInteger numberOfWordEmbeddingSelections; // ivar: _numberOfWordEmbeddingSelections
@property (nonatomic) CGFloat startTime; // ivar: _startTime
@property (nonatomic) BOOL successful; // ivar: _successful
@property (nonatomic) CGFloat timeIntervalFirstAssetAction; // ivar: _timeIntervalFirstAssetAction
@property (nonatomic) CGFloat timeIntervalFirstEnteredCollection; // ivar: _timeIntervalFirstEnteredCollection
@property (nonatomic) CGFloat timeIntervalFirstOneUpInTopAssets; // ivar: _timeIntervalFirstOneUpInTopAssets
@property (nonatomic) CGFloat timeIntervalSuccess; // ivar: _timeIntervalSuccess
@property (nonatomic) BOOL userInteractedWithCurrentSearch; // ivar: _userInteractedWithCurrentSearch


+(id)_bucketedTimeInterval:(CGFloat)arg0 ;
+(id)_cappedSearchCount:(NSUInteger)arg0 ;
+(id)_stringForActionType:(NSUInteger)arg0 ;
+(id)_stringForResultType:(NSUInteger)arg0 ;
+(id)_stringForSessionBeginType:(NSUInteger)arg0 ;
+(void)logNoSearchResultsFoundSiriSearch;
-(id)initWithBeginType:(NSUInteger)arg0 ;
-(void)_logSuccess;
-(void)endAndInvalidateSession;
-(void)logActiveSearch:(id)arg0 ;
-(void)logAssetAction:(NSUInteger)arg0 inResult:(NSUInteger)arg1 ;
-(void)logEnteredCollectionResult:(NSUInteger)arg0 ;
-(void)logNoSearchResultsFound;
-(void)logOneUpInTopAssets;
-(void)logSearch:(id)arg0 ;
-(void)logSearchNextTokenSuggestionTapped;
-(void)logSearchWordCompletionTapped;
-(void)logSearchWordEmbeddingSelected;
-(void)logSearchWordEmbeddingsPresented;


@end


#endif