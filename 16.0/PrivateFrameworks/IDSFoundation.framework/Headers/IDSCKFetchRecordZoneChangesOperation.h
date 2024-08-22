// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IDSCKFETCHRECORDZONECHANGESOPERATION_H
#define IDSCKFETCHRECORDZONECHANGESOPERATION_H



#import "IDSCKDatabaseOperation.h"

@interface IDSCKFetchRecordZoneChangesOperation : IDSCKDatabaseOperation

@property (nonatomic) BOOL fetchAllChanges; // ivar: _fetchAllChanges
@property (copy, nonatomic) id *fetchRecordZoneChangesCompletionBlock; // ivar: _fetchRecordZoneChangesCompletionBlock
@property (copy, nonatomic) id *recordChangedBlock; // ivar: _recordChangedBlock
@property (copy, nonatomic) id *recordWithIDWasDeletedBlock; // ivar: _recordWithIDWasDeletedBlock
@property (copy, nonatomic) id *recordZoneChangeTokensUpdatedBlock; // ivar: _recordZoneChangeTokensUpdatedBlock
@property (copy, nonatomic) id *recordZoneFetchCompletionBlock; // ivar: _recordZoneFetchCompletionBlock


+(Class)__class;
+(id)alloc;


@end


#endif