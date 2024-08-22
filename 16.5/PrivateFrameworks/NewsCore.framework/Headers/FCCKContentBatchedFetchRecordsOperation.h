// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCCKCONTENTBATCHEDFETCHRECORDSOPERATION_H
#define FCCKCONTENTBATCHEDFETCHRECORDSOPERATION_H

@class NSArray;


#import "FCOperation.h"
#import "FCCKContentDatabase.h"
#import "FCThreadSafeMutableArray.h"
#import "FCThreadSafeMutableDictionary.h"

@interface FCCKContentBatchedFetchRecordsOperation : FCOperation {
    FCCKContentDatabase *_database;
    NSArray *_recordIDs;
    NSArray *_desiredKeys;
    NSUInteger _maxBatchSize;
    id *_fetchRecordsCompletionBlock;
    FCThreadSafeMutableArray *_remainingRecordIDBatches;
    FCThreadSafeMutableDictionary *_recordsByRecordID;
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