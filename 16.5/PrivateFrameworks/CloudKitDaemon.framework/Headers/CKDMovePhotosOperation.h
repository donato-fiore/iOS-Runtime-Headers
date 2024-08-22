// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDMOVEPHOTOSOPERATION_H
#define CKDMOVEPHOTOSOPERATION_H

@class NSDictionary, CKRecordZoneID;
@protocol CKMovePhotosOperationCallbacks;


#import "CKDModifyRecordsOperation.h"

@interface CKDMovePhotosOperation : CKDModifyRecordsOperation

@property (retain, nonatomic) NSObject<CKMovePhotosOperationCallbacks> *clientOperationCallbackProxy;
@property (copy, nonatomic) NSDictionary *moveChangesByDestinationRecordID; // ivar: _moveChangesByDestinationRecordID
@property (copy, nonatomic) id *moveCompletionBlock; // ivar: _moveCompletionBlock
@property (nonatomic) NSInteger sourceDatabaseScope; // ivar: _sourceDatabaseScope
@property (copy, nonatomic) CKRecordZoneID *sourceZoneID; // ivar: _sourceZoneID


-(id)_createModifyRequestWithRecordsToSave:(id)arg0 recordsToDelete:(id)arg1 recordsToDeleteToEtags:(id)arg2 recordIDsToDeleteToSigningPCSIdentity:(id)arg3 handlersByRecordID:(id)arg4 sendMergeableDeltas:(BOOL)arg5 ;
-(id)activityCreate;
-(id)handlerForDeleteWithRecordID:(id)arg0 ;
-(id)handlerForSaveWithRecord:(id)arg0 ;
-(id)initWithOperationInfo:(id)arg0 container:(id)arg1 ;
-(int)operationType;
-(void)_finishOnCallbackQueueWithError:(id)arg0 ;
-(void)_handleRecordMoved:(id)arg0 handler:(id)arg1 responseCode:(id)arg2 recordForOplockFailure:(id)arg3 destinationServerRecord:(id)arg4 moveMarkerServerRecord:(id)arg5 ;
-(void)_reallyHandleRecordMoved:(id)arg0 handler:(id)arg1 responseCode:(id)arg2 recordForOplockFailure:(id)arg3 destinationServerRecord:(id)arg4 moveMarkerServerRecord:(id)arg5 ;
-(void)callbackWithMetadata:(id)arg0 error:(id)arg1 ;
-(void)main;
-(void)moveCallbackWithMetadata:(id)arg0 error:(id)arg1 ;


@end


#endif