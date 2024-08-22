// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FCCKPRIVATEDELETERECORDZONESOPERATION_H
#define FCCKPRIVATEDELETERECORDZONESOPERATION_H

@class NSArray;


#import "FCCKPrivateDatabaseOperation.h"

@interface FCCKPrivateDeleteRecordZonesOperation : FCCKPrivateDatabaseOperation

@property (copy, nonatomic) id *deleteRecordZonesCompletionBlock; // ivar: _deleteRecordZonesCompletionBlock
@property (copy, nonatomic) NSArray *recordZoneIDsToDelete; // ivar: _recordZoneIDsToDelete
@property (retain, nonatomic) NSArray *resultDeletedRecordZoneIDs; // ivar: _resultDeletedRecordZoneIDs
@property (nonatomic) BOOL secureDatabaseOnly; // ivar: _secureDatabaseOnly


-(BOOL)validateOperation;
-(void)operationWillFinishWithError:(id)arg0 ;
-(void)performOperation;


@end


#endif