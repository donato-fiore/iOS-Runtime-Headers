// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCCKPRIVATEBATCHEDSAVERECORDSOPERATION_H
#define FCCKPRIVATEBATCHEDSAVERECORDSOPERATION_H

@class NSArray, NSMutableArray, NSMutableDictionary;


#import "FCOperation.h"
#import "FCCKPrivateDatabase.h"

@interface FCCKPrivateBatchedSaveRecordsOperation : FCOperation

@property (retain, nonatomic) FCCKPrivateDatabase *database; // ivar: _database
@property (nonatomic) BOOL handleIdentityLoss; // ivar: _handleIdentityLoss
@property (copy, nonatomic) NSArray *recordsToSave; // ivar: _recordsToSave
@property (retain, nonatomic) NSMutableArray *remainingBatchesOfRecordsToSave; // ivar: _remainingBatchesOfRecordsToSave
@property (retain, nonatomic) NSMutableDictionary *resultErrorsByRecordID; // ivar: _resultErrorsByRecordID
@property (retain, nonatomic) NSMutableArray *resultSavedRecords; // ivar: _resultSavedRecords
@property (nonatomic) NSInteger savePolicy; // ivar: _savePolicy
@property (copy, nonatomic) id *saveRecordsCompletionBlock; // ivar: _saveRecordsCompletionBlock
@property (nonatomic) BOOL skipPreflight; // ivar: _skipPreflight


-(BOOL)validateOperation;
-(id)init;
-(void)_continueModifying;
-(void)_subdivideRemainingBatches;
-(void)operationWillFinishWithError:(id)arg0 ;
-(void)performOperation;
-(void)resetForRetry;


@end


#endif