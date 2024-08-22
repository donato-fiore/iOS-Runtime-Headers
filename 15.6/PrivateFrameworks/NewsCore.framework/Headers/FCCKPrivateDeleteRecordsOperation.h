// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCCKPRIVATEDELETERECORDSOPERATION_H
#define FCCKPRIVATEDELETERECORDSOPERATION_H

@class NSArray;


#import "FCCKPrivateDatabaseOperation.h"

@interface FCCKPrivateDeleteRecordsOperation : FCCKPrivateDatabaseOperation

@property (copy, nonatomic) id *deleteRecordsCompletionBlock; // ivar: _deleteRecordsCompletionBlock
@property (copy, nonatomic) NSArray *recordIDsToDelete; // ivar: _recordIDsToDelete
@property (retain, nonatomic) NSArray *resultDeletedRecordIDs; // ivar: _resultDeletedRecordIDs
@property (retain, nonatomic) NSArray *resultSavedRecords; // ivar: _resultSavedRecords


-(BOOL)validateOperation;
-(void)operationWillFinishWithError:(id)arg0 ;
-(void)performOperation;


@end


#endif