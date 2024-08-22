// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSRETRYABLECKFETCHRECORDZONECHANGESOPERATION_H
#define WBSRETRYABLECKFETCHRECORDZONECHANGESOPERATION_H

@class NSDictionary, NSArray;


#import "WBSRetryableCKDatabaseOperation.h"

@interface WBSRetryableCKFetchRecordZoneChangesOperation : WBSRetryableCKDatabaseOperation

@property (copy, nonatomic) NSDictionary *configurationsByRecordZoneID; // ivar: _configurationsByRecordZoneID
@property (nonatomic) BOOL fetchAllChanges; // ivar: _fetchAllChanges
@property (copy, nonatomic) id *fetchRecordZoneChangesCompletionBlock; // ivar: _fetchRecordZoneChangesCompletionBlock
@property (copy, nonatomic) id *recordWasChangedBlock; // ivar: _recordWasChangedBlock
@property (copy, nonatomic) id *recordWithIDWasDeletedBlock; // ivar: _recordWithIDWasDeletedBlock
@property (copy, nonatomic) id *recordZoneChangeTokensUpdatedBlock; // ivar: _recordZoneChangeTokensUpdatedBlock
@property (copy, nonatomic) id *recordZoneFetchCompletionBlock; // ivar: _recordZoneFetchCompletionBlock
@property (copy, nonatomic) NSArray *recordZoneIDs; // ivar: _recordZoneIDs


-(id)_makeOperation;
-(void)_setUpOperation:(id)arg0 ;


@end


#endif