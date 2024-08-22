// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCCKMULTIFEEDQUERYOPERATION_H
#define FCCKMULTIFEEDQUERYOPERATION_H

@class NSArray, NSError;


#import "FCOperation.h"
#import "FCCKContentDatabase.h"

@interface FCCKMultiFeedQueryOperation : FCOperation {
    FCCKContentDatabase *_database;
    NSArray *_feedRequests;
    NSUInteger _resultsLimit;
    NSArray *_desiredKeys;
    NSInteger _sortingFunction;
    NSUInteger _queryPriority;
    NSArray *_articleLinkKeys;
    id *_queryCompletionHandler;
    NSArray *_networkEvents;
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