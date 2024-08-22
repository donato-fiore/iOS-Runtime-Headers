// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDFETCHRECORDZONECHANGESOPERATION_H
#define CKDFETCHRECORDZONECHANGESOPERATION_H

@class NSData, CKServerChangeToken, NSDictionary;


#import "CKDFetchBatchedRecordsOperation.h"

@interface CKDFetchRecordZoneChangesOperation : CKDFetchBatchedRecordsOperation

@property (nonatomic) NSInteger changeTypes; // ivar: _changeTypes
@property (nonatomic) BOOL clientIsUsingLegacyCKFetchRecordChangesOperationAPI; // ivar: _clientIsUsingLegacyCKFetchRecordChangesOperationAPI
@property (copy, nonatomic) id *recordChangedBlock; // ivar: _recordChangedBlock
@property (copy, nonatomic) id *recordDeletedBlock; // ivar: _recordDeletedBlock
@property (retain, nonatomic) NSData *resultClientChangeTokenData; // ivar: _resultClientChangeTokenData
@property (retain, nonatomic) CKServerChangeToken *resultServerChangeToken; // ivar: _resultServerChangeToken
@property (nonatomic) NSInteger resultStatus; // ivar: _resultStatus
@property (copy, nonatomic) id *serverChangeTokenUpdatedBlock; // ivar: _serverChangeTokenUpdatedBlock
@property (retain, nonatomic) NSDictionary *supplementalChangeTokenByZoneID; // ivar: _supplementalChangeTokenByZoneID


-(id)_createAndConfigureURLRequestForZoneIDs:(id)arg0 optionsByZoneID:(id)arg1 ;
-(id)_optionsForZonesWithPendingChangesAfterRequest:(id)arg0 ;
-(id)activityCreate;
-(id)analyticsPayload;
-(id)initWithOperationInfo:(id)arg0 container:(id)arg1 ;
-(id)pipeliningDescription;
-(int)operationType;
-(void)_finishOnCallbackQueueWithError:(id)arg0 ;
-(void)_noteChangedRecordWithID:(id)arg0 record:(id)arg1 error:(id)arg2 ;
-(void)_noteCompletedURLRequest:(id)arg0 withSchedulerInfo:(id)arg1 ;
-(void)_noteDeletedRecordWithID:(id)arg0 recordType:(id)arg1 ;
-(void)_noteOperationBeginning;
-(void)_noteOperationEnding;
-(void)_noteOperationFinishedBlockEnd;


@end


#endif