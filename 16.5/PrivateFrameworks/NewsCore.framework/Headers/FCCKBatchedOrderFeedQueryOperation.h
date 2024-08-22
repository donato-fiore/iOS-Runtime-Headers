// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCCKBATCHEDORDERFEEDQUERYOPERATION_H
#define FCCKBATCHEDORDERFEEDQUERYOPERATION_H

@class NSArray, NSDictionary;


#import "FCOperation.h"
#import "FCCKContentDatabase.h"
#import "FCEdgeCacheHint.h"
#import "FCThreadSafeMutableArray.h"

@interface FCCKBatchedOrderFeedQueryOperation : FCOperation {
    FCCKContentDatabase *_database;
    NSArray *_feedRequests;
    NSArray *_desiredKeys;
    NSUInteger _resultsLimit;
    NSUInteger _queryPriority;
    NSArray *_articleLinkKeys;
    NSDictionary *_additionalRequestHTTPHeaders;
    FCEdgeCacheHint *_edgeCacheHint;
    id *_queryCompletionHandler;
}


@property (readonly, nonatomic) FCThreadSafeMutableArray *allErrors; // ivar: _allErrors
@property (readonly, nonatomic) FCThreadSafeMutableArray *allFeedItemAndArticleRecords; // ivar: _allFeedItemAndArticleRecords
@property (readonly, nonatomic) FCThreadSafeMutableArray *allFeedResponses; // ivar: _allFeedResponses
@property (readonly, nonatomic) FCThreadSafeMutableArray *allIssueRecords; // ivar: _allIssueRecords
@property (readonly, nonatomic) FCThreadSafeMutableArray *allNetworkEvents; // ivar: _allNetworkEvents
@property (readonly, nonatomic) FCThreadSafeMutableArray *allTagRecords; // ivar: _allTagRecords


-(id)init;
-(void)operationWillFinishWithError:(id)arg0 ;
-(void)performOperation;


@end


#endif