// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCCKCONTENTQUERYOPERATION_H
#define FCCKCONTENTQUERYOPERATION_H

@class CKQuery, CKQueryCursor, NSArray, NSDictionary;


#import "FCNetworkOperation.h"
#import "FCCKContentDatabase.h"
#import "FCEdgeCacheHint.h"

@interface FCCKContentQueryOperation : FCNetworkOperation {
    BOOL _ignoreCache;
    int _networkEventType;
    FCCKContentDatabase *_database;
    CKQuery *_query;
    CKQueryCursor *_cursor;
    NSUInteger _resultsLimit;
    NSArray *_desiredKeys;
    id *_recordFetchedBlock;
    id *_queryCompletionBlock;
    NSArray *_requestUUIDs;
    NSDictionary *_additionalRequestHTTPHeaders;
    FCEdgeCacheHint *_edgeCacheHint;
    NSUInteger _queryPriority;
    NSArray *_networkEvents;
    CKQueryCursor *_resultCursor;
}




-(BOOL)validateOperation;
-(id)init;
-(id)throttleGroup;
-(void)operationWillFinishWithError:(id)arg0 ;
-(void)performOperation;


@end


#endif