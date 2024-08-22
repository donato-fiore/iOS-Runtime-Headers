// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EMSEARCHABLEINDEXQUERY_H
#define EMSEARCHABLEINDEXQUERY_H

@class NSString, NSArray, NSProgress, NSLock, CSSearchQuery, EFPromise, NSError;
@protocol EFLoggable, EMSearchableIndexQueryBuilder, EFSignpostable, EFCancelable, NSProgressReporting, EFPubliclyDescribable, OS_os_activity;

#import <Foundation/Foundation.h>

#import "EMSearchableIndexQueryExpression.h"

@interface EMSearchableIndexQuery : NSObject <EFLoggable, EMSearchableIndexQueryBuilder, EFSignpostable, EFCancelable, NSProgressReporting, EFPubliclyDescribable>

 {
    NSObject<OS_os_activity> *activity;
}


@property (nonatomic) BOOL attribute; // ivar: _attribute
@property (copy, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (copy, nonatomic) id *changedAttributeResultsBlock; // ivar: _changedAttributeResultsBlock
@property (copy, nonatomic) id *changedItemsBlock; // ivar: _changedItemsBlock
@property (copy, nonatomic) id *completionBlock; // ivar: _completionBlock
@property (nonatomic) NSInteger count; // ivar: _count
@property (copy, nonatomic) id *countChangedBlock; // ivar: _countChangedBlock
@property (nonatomic) BOOL counting; // ivar: _counting
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;
@property (retain, nonatomic) EMSearchableIndexQueryExpression *expression; // ivar: _expression
@property (copy, nonatomic) id *failureBlock; // ivar: _failureBlock
@property (copy, nonatomic) NSArray *fetchAttributes; // ivar: _fetchAttributes
@property (copy, nonatomic) id *foundAttributeResultsBlock; // ivar: _foundAttributeResultsBlock
@property (copy, nonatomic) id *gatheredBlock; // ivar: _gatheredBlock
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSProgress *internalProgress; // ivar: _internalProgress
@property (readonly, nonatomic) BOOL isCancelled;
@property (readonly, nonatomic) BOOL isFinished;
@property (nonatomic) BOOL live; // ivar: _live
@property (nonatomic) BOOL liveQueryDidGather; // ivar: _liveQueryDidGather
@property (retain, nonatomic) NSLock *lock; // ivar: _lock
@property (copy, nonatomic) NSString *logIdentifier; // ivar: _logIdentifier
@property (copy, nonatomic) NSString *logPrefixString; // ivar: _logPrefixString
@property (nonatomic) NSInteger maxCount; // ivar: _maxCount
@property (retain, nonatomic) NSProgress *progress; // ivar: _progress
@property (copy, nonatomic) NSArray *protectionClasses; // ivar: _protectionClasses
@property (retain, nonatomic) CSSearchQuery *query; // ivar: _query
@property (nonatomic) BOOL queryDidMoveToFinishedState; // ivar: _queryDidMoveToFinishedState
@property (copy, nonatomic) NSString *queryStatus; // ivar: _queryStatus
@property (copy, nonatomic) NSArray *rankingQueries; // ivar: _rankingQueries
@property (copy, nonatomic) id *removedItemsBlock; // ivar: _removedItemsBlock
@property (copy, nonatomic) id *resultsBlock; // ivar: _resultsBlock
@property (retain, nonatomic) EFPromise *resultsPromise; // ivar: _resultsPromise
@property (readonly) NSUInteger signpostID;
@property (retain, nonatomic) NSError *simulatedFailedQueryError; // ivar: _simulatedFailedQueryError
@property (readonly) Class superclass;


+(CGFloat)intervalForSpotlightFailureSimulation;
+(id)_modifierStringFromModifiers:(NSUInteger)arg0 ;
+(id)_operandStringForOperand:(NSInteger)arg0 ;
+(id)_queryStringForPhrase:(id)arg0 attributes:(id)arg1 modifiers:(NSUInteger)arg2 phraseMatchFormatString:(id)arg3 ;
+(id)_queryStringForPhrase:(id)arg0 attributes:(id)arg1 modifiers:(NSUInteger)arg2 phraseMatchFormatString:(id)arg3 comparisonOperator:(NSInteger)arg4 ;
+(id)log;
+(id)queryStringByJoiningQueries:(id)arg0 withOperand:(NSInteger)arg1 ;
+(id)queryStringForPhrase:(id)arg0 attributes:(id)arg1 modifiers:(NSUInteger)arg2 languages:(id)arg3 ;
+(id)queryStringForPhrase:(id)arg0 attributes:(id)arg1 modifiers:(NSUInteger)arg2 languages:(id)arg3 phraseMatchFormatString:(id)arg4 comparisonOperator:(NSInteger)arg5 ;
+(id)queryWithExpression:(id)arg0 builder:(id)arg1 ;
+(id)searchWordsForPhrase:(id)arg0 languages:(id)arg1 ;
+(id)signpostLog;
-(BOOL)_isCancellationError:(id)arg0 ;
-(BOOL)_isFinishedQueryStatus:(id)arg0 ;
-(id)init;
-(id)initWithExpression:(id)arg0 builder:(id)arg1 ;
// -(id)initWithExpression:(id)arg0 builder:(id)arg1 queryContext:(unk)arg2 querySetup:(id)arg3  ;
-(void)_cancel;
-(void)_cancelQuery;
-(void)_changeCount:(NSInteger)arg0 ;
-(void)_changedAttribute:(id)arg0 values:(id)arg1 ;
-(void)_changedItems:(id)arg0 ;
-(void)_completed;
-(void)_failedWithError:(id)arg0 ;
-(void)_foundAttribute:(id)arg0 values:(id)arg1 ;
-(void)_foundItems:(id)arg0 ;
-(void)_gathered;
-(void)_logSignpostForSearchQueryDidFinishWithStatus:(id)arg0 ;
-(void)_logSignpostForSearchQueryDidReceiveFirstResultsWithItemCount:(NSUInteger)arg0 ;
-(void)_logSignpostForSearchQueryStart;
-(void)_performClientWork:(id)arg0 ;
-(void)_removedItems:(id)arg0 ;
-(void)_searchQueryDidChangeAttribute:(id)arg0 values:(id)arg1 ;
-(void)_searchQueryDidChangeCount:(NSInteger)arg0 ;
-(void)_searchQueryDidChangeItems:(id)arg0 ;
-(void)_searchQueryDidComplete;
-(void)_searchQueryDidFailWithError:(id)arg0 ;
-(void)_searchQueryDidFindAttribute:(id)arg0 values:(id)arg1 ;
-(void)_searchQueryDidFindItems:(id)arg0 ;
-(void)_searchQueryDidRemoveIdentifiers:(id)arg0 ;
-(void)_searchQueryGatherDidEnd;
-(void)cancel;
-(void)dealloc;
-(void)simulateFailedQueryWithError:(id)arg0 ;
-(void)start;


@end


#endif