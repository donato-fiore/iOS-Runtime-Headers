// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCCKBATCHEDMULTIFETCHQUERYOPERATION_H
#define FCCKBATCHEDMULTIFETCHQUERYOPERATION_H

@class NSArray, NSDictionary;


#import "FCOperation.h"
#import "FCCKContentDatabase.h"
#import "FCEdgeCacheHint.h"
#import "FCThreadSafeMutableArray.h"
#import "FCThreadSafeMutableSet.h"

@interface FCCKBatchedMultiFetchQueryOperation : FCOperation {
    BOOL _ignoreCache;
    int _networkEventType;
    FCCKContentDatabase *_database;
    NSArray *_recordIDs;
    NSArray *_recordSpecs;
    NSUInteger _maxBatchSize;
    NSDictionary *_knownRecordIDsToEtags;
    FCEdgeCacheHint *_edgeCacheHint;
    NSArray *_networkEvents;
    id *_batchCompletionHandler;
    id *_queryCompletionHandler;
    FCThreadSafeMutableArray *_remainingRecordIDBatches;
    FCThreadSafeMutableArray *_resultRecords;
    FCThreadSafeMutableSet *_resultMissingRecordIDs;
    FCThreadSafeMutableArray *_allErrors;
}




-(BOOL)validateOperation;
-(id)init;
-(void)operationWillFinishWithError:(id)arg0 ;
-(void)performOperation;
-(void)prepareOperation;


@end


#endif