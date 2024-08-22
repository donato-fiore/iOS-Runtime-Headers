// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SPCORESPOTLIGHTTASK_H
#define SPCORESPOTLIGHTTASK_H

@class NSString, NSMutableArray, CSSearchQueryContext;

#import <Foundation/Foundation.h>

#import "SPQueryResultsQueue.h"

@interface SPCoreSpotlightTask : NSObject

@property BOOL canceled; // ivar: _canceled
@property (readonly) NSString *clientBundleID;
@property (copy, nonatomic) id *completionBlock; // ivar: _completionBlock
@property (nonatomic) BOOL finished; // ivar: _finished
@property (nonatomic) BOOL hasPausedResults; // ivar: _hasPausedResults
@property (retain, nonatomic) NSMutableArray *jobs; // ivar: _jobs
@property (retain, nonatomic) NSMutableArray *matchInfo; // ivar: _matchInfo
@property (retain, nonatomic) CSSearchQueryContext *queryContext; // ivar: _queryContext
@property (nonatomic) NSInteger queryID; // ivar: _queryID
@property (retain, nonatomic) NSString *queryString; // ivar: _queryString
@property (retain, nonatomic) SPQueryResultsQueue *resultsQueue; // ivar: _resultsQueue
@property (copy, nonatomic) id *scheduleBlock; // ivar: _scheduleBlock
@property (nonatomic) *__SIQuery siQuery; // ivar: _siQuery
@property (nonatomic) CGFloat startTime; // ivar: _startTime
@property (nonatomic) BOOL willAsyncStart; // ivar: _willAsyncStart


+(id)_makeAdditionalQueryStringForQueryContext:(id)arg0 ;
+(id)_makeBundleQueryStringForField:(id)arg0 withBundleIDs:(id)arg1 ;
+(id)_makeBundleQueryStringForQueryContext:(id)arg0 ;
+(id)_makeDisabledBundlesQueryStringForQueryContext:(id)arg0 ;
+(id)_makeFilterQueryStringForQueryContext:(id)arg0 ;
+(id)_makePrefsQueryStringWithBundleIDs:(id)arg0 ;
+(id)_sodiumBundlesWithQueryContext:(id)arg0 ;
+(struct __SIQuery *)_makeSIQueryWithQueryString:(id)arg0 queryContext:(id)arg1 ;
-(BOOL)addJob:(id)arg0 ;
-(id)initWithQueryString:(id)arg0 queryContext:(id)arg1 ;
-(struct __CFArray *)copyMatchInfo;
-(void)addMatchInfo:(struct _MDPlistContainer *)arg0 ;
-(void)cancel;
-(void)dealloc;
-(void)finishWithError:(id)arg0 ;
-(void)pauseResults;
-(void)removeJob:(id)arg0 ;
-(void)resumeResults;
-(void)schedule;
-(void)start;


@end


#endif