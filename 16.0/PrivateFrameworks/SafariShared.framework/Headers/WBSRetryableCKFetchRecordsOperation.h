// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSRETRYABLECKFETCHRECORDSOPERATION_H
#define WBSRETRYABLECKFETCHRECORDSOPERATION_H

@class NSArray;


#import "WBSRetryableCKDatabaseOperation.h"

@interface WBSRetryableCKFetchRecordsOperation : WBSRetryableCKDatabaseOperation

@property (copy, nonatomic) NSArray *desiredKeys; // ivar: _desiredKeys
@property (copy, nonatomic) id *fetchRecordsCompletionBlock; // ivar: _fetchRecordsCompletionBlock
@property (copy, nonatomic) id *perRecordCompletionBlock; // ivar: _perRecordCompletionBlock
@property (copy, nonatomic) id *perRecordProgressBlock; // ivar: _perRecordProgressBlock
@property (copy, nonatomic) NSArray *recordIDs; // ivar: _recordIDs


-(id)_makeOperation;
-(void)_setUpOperation:(id)arg0 ;


@end


#endif