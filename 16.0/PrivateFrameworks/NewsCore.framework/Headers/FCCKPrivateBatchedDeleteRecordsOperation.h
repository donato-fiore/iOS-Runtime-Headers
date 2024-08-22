// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCCKPRIVATEBATCHEDDELETERECORDSOPERATION_H
#define FCCKPRIVATEBATCHEDDELETERECORDSOPERATION_H

@class NSArray, NSMutableArray, NSMutableDictionary;


#import "FCOperation.h"
#import "FCCKPrivateDatabase.h"

@interface FCCKPrivateBatchedDeleteRecordsOperation : FCOperation

@property (retain, nonatomic) FCCKPrivateDatabase *database; // ivar: _database
@property (copy, nonatomic) id *deleteRecordsCompletionBlock; // ivar: _deleteRecordsCompletionBlock
@property (nonatomic) BOOL handleIdentityLoss; // ivar: _handleIdentityLoss
@property (copy, nonatomic) NSArray *recordIDsToDelete; // ivar: _recordIDsToDelete
@property (retain, nonatomic) NSMutableArray *remainingBatchesOfRecordIDsToDelete; // ivar: _remainingBatchesOfRecordIDsToDelete
@property (retain, nonatomic) NSMutableArray *resultDeletedRecordIDs; // ivar: _resultDeletedRecordIDs
@property (retain, nonatomic) NSMutableDictionary *resultErrorsByRecordID; // ivar: _resultErrorsByRecordID
@property (nonatomic) BOOL skipPreflight; // ivar: _skipPreflight


-(BOOL)validateOperation;
-(id)init;
-(void)_continueModifying;
-(void)operationWillFinishWithError:(id)arg0 ;
-(void)performOperation;
-(void)resetForRetry;


@end


#endif