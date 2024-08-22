// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FCCKPRIVATESAVERECORDZONESOPERATION_H
#define FCCKPRIVATESAVERECORDZONESOPERATION_H

@class NSArray;


#import "FCCKPrivateDatabaseOperation.h"

@interface FCCKPrivateSaveRecordZonesOperation : FCCKPrivateDatabaseOperation

@property (nonatomic) BOOL canBypassEncryptionRequirement; // ivar: _canBypassEncryptionRequirement
@property (copy, nonatomic) NSArray *recordZonesToSave; // ivar: _recordZonesToSave
@property (retain, nonatomic) NSArray *resultSavedRecordZones; // ivar: _resultSavedRecordZones
@property (copy, nonatomic) id *saveRecordZonesCompletionBlock; // ivar: _saveRecordZonesCompletionBlock


-(BOOL)validateOperation;
-(void)operationWillFinishWithError:(id)arg0 ;
-(void)performOperation;


@end


#endif