// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKDFETCHDATABASECHANGESOPERATION_H
#define CKDFETCHDATABASECHANGESOPERATION_H

@class NSString, CKServerChangeToken, NSMutableArray;
@protocol CKDOperationPipelining, OS_dispatch_queue, CKFetchDatabaseChangesOperationCallbacks, OS_dispatch_group;


#import "CKDDatabaseOperation.h"

@interface CKDFetchDatabaseChangesOperation : CKDDatabaseOperation <CKDOperationPipelining>



@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (retain, nonatomic) NSObject<CKFetchDatabaseChangesOperationCallbacks> *clientOperationCallbackProxy;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL fetchAllChanges; // ivar: _fetchAllChanges
@property (retain, nonatomic) NSObject<OS_dispatch_group> *fetchZonesGroup; // ivar: _fetchZonesGroup
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger numRequestsSent; // ivar: _numRequestsSent
@property (readonly, nonatomic) NSString *pipeliningDescription;
@property (retain, nonatomic) CKServerChangeToken *previousServerChangeToken; // ivar: _previousServerChangeToken
@property (copy, nonatomic) id *recordZoneWithIDChangedBlock; // ivar: _recordZoneWithIDChangedBlock
@property (copy, nonatomic) id *recordZoneWithIDWasDeletedBlock; // ivar: _recordZoneWithIDWasDeletedBlock
@property (copy, nonatomic) id *recordZoneWithIDWasDeletedDueToEncryptedDataResetBlock; // ivar: _recordZoneWithIDWasDeletedDueToEncryptedDataResetBlock
@property (copy, nonatomic) id *recordZoneWithIDWasPurgedBlock; // ivar: _recordZoneWithIDWasPurgedBlock
@property (retain, nonatomic) NSMutableArray *requestInfos; // ivar: _requestInfos
@property (nonatomic) NSUInteger resultsLimit; // ivar: _resultsLimit
@property (retain, nonatomic) CKServerChangeToken *serverChangeToken; // ivar: _serverChangeToken
@property (copy, nonatomic) id *serverChangeTokenUpdatedBlock; // ivar: _serverChangeTokenUpdatedBlock
@property (nonatomic) NSInteger status; // ivar: _status
@property (readonly) Class superclass;


-(BOOL)shouldReturnServerChangeTokensToAdopter;
-(id)activityCreate;
-(id)analyticsPayload;
-(id)initWithOperationInfo:(id)arg0 container:(id)arg1 ;
-(int)operationType;
-(void)_finishOnCallbackQueueWithError:(id)arg0 ;
-(void)_handleAnonymousZoneDataObjects:(id)arg0 schedulerInfo:(id)arg1 ;
-(void)_handleFetchDatabaseChangesRequestFinishedWithSchedulerInfo:(id)arg0 ;
-(void)_sendFetchDatabaseChangesRequestWithChangeToken:(id)arg0 previousRequestSchedulerInfo:(id)arg1 ;
-(void)main;


@end


#endif