// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCCKCONTENTBATCHEDREFRESHRECORDSOPERATION_H
#define FCCKCONTENTBATCHEDREFRESHRECORDSOPERATION_H

@class NSArray, NSDictionary, CKRecordID;


#import "FCOperation.h"
#import "FCCKContentDatabase.h"
#import "FCThreadSafeMutableArray.h"
#import "FCThreadSafeMutableSet.h"
#import "FCThreadSafeMutableDictionary.h"

@interface FCCKContentBatchedRefreshRecordsOperation : FCOperation {
    BOOL _checkForDeletions;
    FCCKContentDatabase *_database;
    NSArray *_recordIDs;
    NSDictionary *_changeTagsByRecordID;
    NSArray *_desiredKeys;
    CKRecordID *_canaryRecordID;
    id *_refreshRecordsCompletionBlock;
    FCThreadSafeMutableArray *_remainingRecordIDBatches;
    FCThreadSafeMutableSet *_refreshedRecordIDs;
    FCThreadSafeMutableDictionary *_updatedRecordsByRecordID;
    FCThreadSafeMutableSet *_deletedRecordIDs;
    FCThreadSafeMutableDictionary *_errorsByRecordID;
    FCThreadSafeMutableArray *_allOperationErrors;
}




-(BOOL)validateOperation;
-(id)init;
-(void)operationWillFinishWithError:(id)arg0 ;
-(void)performOperation;
-(void)prepareOperation;


@end


#endif