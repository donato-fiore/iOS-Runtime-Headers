// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FCCKCONTENTBATCHEDREFRESHRECORDSOPERATION_H
#define FCCKCONTENTBATCHEDREFRESHRECORDSOPERATION_H

@class NSArray, NSDictionary, CKRecordID, NSMutableArray, NSMutableSet, NSMutableDictionary, NSError;


#import "FCOperation.h"
#import "FCCKContentDatabase.h"

@interface FCCKContentBatchedRefreshRecordsOperation : FCOperation {
    BOOL _checkForDeletions;
    FCCKContentDatabase *_database;
    NSArray *_recordIDs;
    NSDictionary *_changeTagsByRecordID;
    NSArray *_desiredKeys;
    CKRecordID *_canaryRecordID;
    id *_refreshRecordsCompletionBlock;
    NSMutableArray *_remainingRecordIDBatches;
    NSMutableSet *_refreshedRecordIDs;
    NSMutableDictionary *_updatedRecordsByRecordID;
    NSMutableSet *_deletedRecordIDs;
    NSMutableDictionary *_errorsByRecordID;
    NSError *_operationError;
}




-(BOOL)validateOperation;
-(id)init;
-(void)operationWillFinishWithError:(id)arg0 ;
-(void)performOperation;
-(void)prepareOperation;
-(void)resetForRetry;


@end


#endif