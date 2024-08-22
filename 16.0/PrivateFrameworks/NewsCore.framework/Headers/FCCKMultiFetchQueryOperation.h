// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCCKMULTIFETCHQUERYOPERATION_H
#define FCCKMULTIFETCHQUERYOPERATION_H

@class NSArray, NSDictionary, NSMutableArray, NSMutableSet;


#import "FCOperation.h"
#import "FCCKContentDatabase.h"
#import "FCEdgeCacheHint.h"

@interface FCCKMultiFetchQueryOperation : FCOperation {
    BOOL _ignoreCache;
    int _networkEventType;
    FCCKContentDatabase *_database;
    NSArray *_recordIDs;
    NSArray *_recordSpecs;
    NSDictionary *_knownRecordIDsToEtags;
    FCEdgeCacheHint *_edgeCacheHint;
    NSArray *_networkEvents;
    id *_queryCompletionHandler;
    NSDictionary *_recordSpecsByType;
    NSMutableArray *_resultFetchedRecords;
    NSMutableSet *_resultMissingRecordIDs;
}




-(BOOL)validateOperation;
-(void)operationWillFinishWithError:(id)arg0 ;
-(void)performOperation;
-(void)prepareOperation;


@end


#endif