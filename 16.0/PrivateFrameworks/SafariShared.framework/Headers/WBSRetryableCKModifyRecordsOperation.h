// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSRETRYABLECKMODIFYRECORDSOPERATION_H
#define WBSRETRYABLECKMODIFYRECORDSOPERATION_H

@class NSData, NSArray;


#import "WBSRetryableCKDatabaseOperation.h"

@interface WBSRetryableCKModifyRecordsOperation : WBSRetryableCKDatabaseOperation

@property (nonatomic) BOOL atomic; // ivar: _atomic
@property (copy, nonatomic) NSData *clientChangeTokenData; // ivar: _clientChangeTokenData
@property (copy, nonatomic) id *modifyRecordsCompletionBlock; // ivar: _modifyRecordsCompletionBlock
@property (copy, nonatomic) id *perRecordDeleteBlock; // ivar: _perRecordDeleteBlock
@property (copy, nonatomic) id *perRecordProgressBlock; // ivar: _perRecordProgressBlock
@property (copy, nonatomic) id *perRecordSaveBlock; // ivar: _perRecordSaveBlock
@property (copy, nonatomic) NSArray *recordIDsToDelete; // ivar: _recordIDsToDelete
@property (copy, nonatomic) NSArray *recordsToSave; // ivar: _recordsToSave
@property (nonatomic) NSInteger savePolicy; // ivar: _savePolicy


-(id)_makeOperation;
-(void)_setUpOperation:(id)arg0 ;


@end


#endif