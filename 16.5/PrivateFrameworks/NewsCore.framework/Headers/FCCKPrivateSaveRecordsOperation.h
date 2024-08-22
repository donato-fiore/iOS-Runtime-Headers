// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCCKPRIVATESAVERECORDSOPERATION_H
#define FCCKPRIVATESAVERECORDSOPERATION_H

@class NSArray;


#import "FCCKPrivateDatabaseOperation.h"

@interface FCCKPrivateSaveRecordsOperation : FCCKPrivateDatabaseOperation

@property (nonatomic) BOOL canBypassEncryptionRequirement; // ivar: _canBypassEncryptionRequirement
@property (copy, nonatomic) NSArray *recordsToSave; // ivar: _recordsToSave
@property (retain, nonatomic) NSArray *resultSavedRecords; // ivar: _resultSavedRecords
@property (nonatomic) NSInteger savePolicy; // ivar: _savePolicy
@property (copy, nonatomic) id *saveRecordsCompletionBlock; // ivar: _saveRecordsCompletionBlock


-(BOOL)validateOperation;
-(void)operationWillFinishWithError:(id)arg0 ;
-(void)performOperation;


@end


#endif