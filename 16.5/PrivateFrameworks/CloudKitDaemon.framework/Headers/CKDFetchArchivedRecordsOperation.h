// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDFETCHARCHIVEDRECORDSOPERATION_H
#define CKDFETCHARCHIVEDRECORDSOPERATION_H

@class NSString;
@protocol CKDOperationPipelining, OS_dispatch_queue, CKFetchArchivedRecordsOperationCallbacks;


#import "CKDFetchBatchedRecordsOperation.h"

@interface CKDFetchArchivedRecordsOperation : CKDFetchBatchedRecordsOperation <CKDOperationPipelining>



@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (retain, nonatomic) NSObject<CKFetchArchivedRecordsOperationCallbacks> *clientOperationCallbackProxy;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *pipeliningDescription;
@property (copy, nonatomic) id *recordFetchedBlock; // ivar: _recordFetchedBlock
@property (copy, nonatomic) id *serverChangeTokenUpdatedBlock; // ivar: _serverChangeTokenUpdatedBlock
@property (readonly) Class superclass;


-(id)_createAndConfigureURLRequestForZoneIDs:(id)arg0 optionsByZoneID:(id)arg1 ;
-(id)_optionsForZonesWithPendingChangesAfterRequest:(id)arg0 ;
-(id)activityCreate;
-(id)initWithOperationInfo:(id)arg0 container:(id)arg1 ;
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