// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKSYNCENGINEFETCHCHANGESOPERATION_H
#define CKSYNCENGINEFETCHCHANGESOPERATION_H

@class NSOperation, NSError, NSOperationQueue, NSSet;


#import "CKDatabase.h"
#import "CKOperationGroup.h"
#import "CKServerChangeToken.h"

@interface CKSyncEngineFetchChangesOperation : NSOperation {
    int _executionState;
}


@property (readonly, nonatomic) CKDatabase *database; // ivar: _database
@property (copy, nonatomic) id *databaseChangeTokenUpdatedBlock; // ivar: _databaseChangeTokenUpdatedBlock
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (copy, nonatomic) id *fetchChangesCompletionBlock; // ivar: _fetchChangesCompletionBlock
@property (copy, nonatomic) id *fetchDatabaseChangesCompletionBlock; // ivar: _fetchDatabaseChangesCompletionBlock
@property (retain, nonatomic) CKOperationGroup *group; // ivar: _group
@property (retain, nonatomic) NSOperationQueue *operationQueue; // ivar: _operationQueue
@property (copy, nonatomic) CKServerChangeToken *previousDatabaseServerChangeToken; // ivar: _previousDatabaseServerChangeToken
@property (copy, nonatomic) id *recordWasChangedBlock; // ivar: _recordWasChangedBlock
@property (copy, nonatomic) id *recordWithIDWasDeletedBlock; // ivar: _recordWithIDWasDeletedBlock
@property (copy, nonatomic) id *recordZoneChangeTokensUpdatedBlock; // ivar: _recordZoneChangeTokensUpdatedBlock
@property (copy, nonatomic) id *recordZoneChangesConfigurationBlock; // ivar: _recordZoneChangesConfigurationBlock
@property (copy, nonatomic) id *recordZoneFetchCompletionBlock; // ivar: _recordZoneFetchCompletionBlock
@property (copy, nonatomic) id *recordZoneWithIDChangedBlock; // ivar: _recordZoneWithIDChangedBlock
@property (copy, nonatomic) id *recordZoneWithIDWasDeletedBlock; // ivar: _recordZoneWithIDWasDeletedBlock
@property (copy, nonatomic) id *recordZoneWithIDWasPurgedBlock; // ivar: _recordZoneWithIDWasPurgedBlock
@property (nonatomic) BOOL shouldFetchDatabaseChanges; // ivar: _shouldFetchDatabaseChanges
@property (copy, nonatomic) id *willEnqueueOperationBlock; // ivar: _willEnqueueOperationBlock
@property (retain, nonatomic) NSSet *zoneIDs; // ivar: _zoneIDs


+(NSUInteger)maxZonesPerOperation;
+(void)setMaxZonesPerOperation:(NSUInteger)arg0 ;
-(BOOL)isAsynchronous;
-(BOOL)isExecuting;
-(BOOL)isFinished;
-(id)cancelledError;
-(id)init;
-(id)initWithDatabase:(id)arg0 ;
-(void)cancel;
-(void)fetchDatabaseChangesThenRecordZoneChanges;
-(void)fetchRecordZoneChanges;
-(void)finishWithError:(id)arg0 ;
-(void)start;
-(void)transitionToExecuting;
-(void)transitionToFinished;


@end


#endif