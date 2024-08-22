// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCCKPRIVATEFETCHRECORDZONECHANGESOPERATION_H
#define FCCKPRIVATEFETCHRECORDZONECHANGESOPERATION_H

@class NSArray, CKRecordZoneID;


#import "FCCKPrivateDatabaseOperation.h"
#import "FCCKPrivateDatabaseServerChangeToken.h"

@interface FCCKPrivateFetchRecordZoneChangesOperation : FCCKPrivateDatabaseOperation

@property (copy, nonatomic) NSArray *desiredKeys; // ivar: _desiredKeys
@property (nonatomic) BOOL fetchAllChanges; // ivar: _fetchAllChanges
@property (nonatomic) BOOL fetchNewestChangesFirst; // ivar: _fetchNewestChangesFirst
@property (copy, nonatomic) id *fetchRecordZoneChangesCompletionBlock; // ivar: _fetchRecordZoneChangesCompletionBlock
@property (copy, nonatomic) FCCKPrivateDatabaseServerChangeToken *previousServerChangeToken; // ivar: _previousServerChangeToken
@property (copy, nonatomic) CKRecordZoneID *recordZoneID; // ivar: _recordZoneID
@property (retain, nonatomic) NSArray *resultChangedRecords; // ivar: _resultChangedRecords
@property (retain, nonatomic) NSArray *resultDeletedRecordIDs; // ivar: _resultDeletedRecordIDs
@property (nonatomic) BOOL resultMoreComing; // ivar: _resultMoreComing
@property (retain, nonatomic) FCCKPrivateDatabaseServerChangeToken *resultServerChangeToken; // ivar: _resultServerChangeToken


-(BOOL)validateOperation;
-(id)_configurationForDestination:(NSInteger)arg0 ;
-(void)operationWillFinishWithError:(id)arg0 ;
-(void)performOperation;


@end


#endif