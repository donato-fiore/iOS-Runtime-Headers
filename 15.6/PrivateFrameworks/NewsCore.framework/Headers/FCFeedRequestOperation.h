// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCFEEDREQUESTOPERATION_H
#define FCFEEDREQUESTOPERATION_H

@class NSMutableArray, NSDictionary, NSMutableDictionary, NSArray;
@protocol FCCoreConfiguration, FCContentContext;


#import "FCOperation.h"
#import "FCHeldRecords.h"
#import "FCEdgeCacheHint.h"
#import "FCFeedDatabase.h"

@interface FCFeedRequestOperation : FCOperation {
    NSMutableArray *_mutableNetworkEvents;
    NSDictionary *_feedRequestsByFeedID;
    NSDictionary *_databaseLookupsByFeedID;
    NSUInteger _queryBudget;
    NSMutableDictionary *_resultFeedResponses;
    FCHeldRecords *_resultHeldArticleRecords;
    FCHeldRecords *_resultHeldTagRecords;
    FCHeldRecords *_resultHeldIssueRecords;
}


@property (retain, nonatomic) NSObject<FCCoreConfiguration> *configuration; // ivar: _configuration
@property (retain, nonatomic) NSObject<FCContentContext> *context; // ivar: _context
@property (copy, nonatomic) FCEdgeCacheHint *edgeCacheHint; // ivar: _edgeCacheHint
@property (nonatomic) NSUInteger expectedNetworkEventCount; // ivar: _expectedNetworkEventCount
@property (retain, nonatomic) FCFeedDatabase *feedDatabase; // ivar: _feedDatabase
@property (copy, nonatomic) NSArray *feedRequests; // ivar: _feedRequests
@property (copy, nonatomic) NSArray *feedTransformations; // ivar: _feedTransformations
@property (nonatomic) NSUInteger maxCount; // ivar: _maxCount
@property (readonly, nonatomic) NSArray *networkEvents;
@property (nonatomic) NSInteger options; // ivar: _options
@property (copy, nonatomic) id *requestCompletionHandler; // ivar: _requestCompletionHandler
@property (copy, nonatomic) id *requestCompletionHandlerWithHeldRecords; // ivar: _requestCompletionHandlerWithHeldRecords


+(id)feedRequestContentEnvironmentTokenWithContext:(id)arg0 ;
+(void)initialize;
+(void)prewarm;
-(BOOL)canRetryWithError:(id)arg0 retryAfter:(*id)arg1 ;
-(BOOL)validateOperation;
-(NSUInteger)maxRetries;
-(id)init;
-(void)operationWillFinishWithError:(id)arg0 ;
-(void)performOperation;
-(void)prepareOperation;
-(void)resetForRetry;


@end


#endif