// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSRETRYABLECKFETCHDATABASECHANGESOPERATION_H
#define WBSRETRYABLECKFETCHDATABASECHANGESOPERATION_H

@class CKServerChangeToken;


#import "WBSRetryableCKDatabaseOperation.h"

@interface WBSRetryableCKFetchDatabaseChangesOperation : WBSRetryableCKDatabaseOperation

@property (copy, nonatomic) id *changeTokenUpdatedBlock; // ivar: _changeTokenUpdatedBlock
@property (nonatomic) BOOL fetchAllChanges; // ivar: _fetchAllChanges
@property (copy, nonatomic) id *fetchDatabaseChangesCompletionBlock; // ivar: _fetchDatabaseChangesCompletionBlock
@property (copy, nonatomic) CKServerChangeToken *previousServerChangeToken; // ivar: _previousServerChangeToken
@property (copy, nonatomic) id *recordZoneWithIDChangedBlock; // ivar: _recordZoneWithIDChangedBlock
@property (copy, nonatomic) id *recordZoneWithIDWasDeletedBlock; // ivar: _recordZoneWithIDWasDeletedBlock
@property (copy, nonatomic) id *recordZoneWithIDWasDeletedDueToUserEncryptedDataResetBlock; // ivar: _recordZoneWithIDWasDeletedDueToUserEncryptedDataResetBlock
@property (copy, nonatomic) id *recordZoneWithIDWasPurgedBlock; // ivar: _recordZoneWithIDWasPurgedBlock
@property (nonatomic) NSUInteger resultsLimit; // ivar: _resultsLimit


-(id)_makeOperation;
-(void)_setUpOperation:(id)arg0 ;


@end


#endif