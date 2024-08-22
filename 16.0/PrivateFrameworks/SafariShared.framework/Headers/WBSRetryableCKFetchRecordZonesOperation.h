// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSRETRYABLECKFETCHRECORDZONESOPERATION_H
#define WBSRETRYABLECKFETCHRECORDZONESOPERATION_H

@class NSArray;


#import "WBSRetryableCKDatabaseOperation.h"

@interface WBSRetryableCKFetchRecordZonesOperation : WBSRetryableCKDatabaseOperation

@property (copy, nonatomic) id *fetchRecordZonesCompletionBlock; // ivar: _fetchRecordZonesCompletionBlock
@property (copy, nonatomic) id *perRecordZoneCompletionBlock; // ivar: _perRecordZoneCompletionBlock
@property (copy, nonatomic) NSArray *recordZoneIDs; // ivar: _recordZoneIDs


-(id)_makeOperation;
-(void)_setUpOperation:(id)arg0 ;


@end


#endif