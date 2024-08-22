// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSRETRYABLECKMODIFYRECORDZONESOPERATION_H
#define WBSRETRYABLECKMODIFYRECORDZONESOPERATION_H

@class NSArray;


#import "WBSRetryableCKDatabaseOperation.h"

@interface WBSRetryableCKModifyRecordZonesOperation : WBSRetryableCKDatabaseOperation

@property (copy, nonatomic) id *modifyRecordZonesCompletionBlock; // ivar: _modifyRecordZonesCompletionBlock
@property (copy, nonatomic) id *perRecordZoneDeleteBlock; // ivar: _perRecordZoneDeleteBlock
@property (copy, nonatomic) id *perRecordZoneSaveBlock; // ivar: _perRecordZoneSaveBlock
@property (copy, nonatomic) NSArray *recordZoneIDsToDelete; // ivar: _recordZoneIDsToDelete
@property (copy, nonatomic) NSArray *recordZonesToSave; // ivar: _recordZonesToSave


-(id)_makeOperation;
-(void)_setUpOperation:(id)arg0 ;


@end


#endif