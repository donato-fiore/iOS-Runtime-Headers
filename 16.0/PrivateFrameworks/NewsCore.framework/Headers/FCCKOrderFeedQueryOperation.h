// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCCKORDERFEEDQUERYOPERATION_H
#define FCCKORDERFEEDQUERYOPERATION_H

@class NSArray, NSDictionary, NSError;


#import "FCOperation.h"
#import "FCCKContentDatabase.h"
#import "FCEdgeCacheHint.h"

@interface FCCKOrderFeedQueryOperation : FCOperation {
    FCCKContentDatabase *_database;
    NSArray *_feedRequests;
    NSArray *_desiredKeys;
    NSUInteger _resultsLimit;
    NSUInteger _queryPriority;
    NSArray *_articleLinkKeys;
    NSDictionary *_additionalRequestHTTPHeaders;
    FCEdgeCacheHint *_edgeCacheHint;
    NSArray *_networkEvents;
    id *_queryCompletionHandler;
    NSArray *_resultFeedItemAndArticleRecords;
    NSArray *_resultTagRecords;
    NSArray *_resultIssueRecords;
    NSArray *_resultFeedResponses;
    NSError *_resultError;
}




-(BOOL)validateOperation;
-(void)operationWillFinishWithError:(id)arg0 ;
-(void)performOperation;
-(void)prepareOperation;
-(void)resetForRetry;


@end


#endif