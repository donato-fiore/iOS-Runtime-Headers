// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDESERIALIZERECORDMODIFICATIONSOPERATION_H
#define CKDESERIALIZERECORDMODIFICATIONSOPERATION_H

@class NSArray, NSData;
@protocol CKDeserializeRecordModificationsOperationCallbacks;


#import "CKDatabaseOperation.h"
#import "CKDeserializeRecordModificationsOperationInfo.h"

@interface CKDeserializeRecordModificationsOperation : CKDatabaseOperation <CKDeserializeRecordModificationsOperationCallbacks>



@property (readonly, nonatomic) NSObject<CKDeserializeRecordModificationsOperationCallbacks> *clientOperationCallbackProxy;
@property (copy, nonatomic) id *deserializeCompletionBlock; // ivar: _deserializeCompletionBlock
@property (readonly, nonatomic) CKDeserializeRecordModificationsOperationInfo *operationInfo;
@property (copy, nonatomic) NSArray *recordIDsToDelete; // ivar: _recordIDsToDelete
@property (copy, nonatomic) NSArray *recordsToSave; // ivar: _recordsToSave
@property (retain, nonatomic) NSData *serializedModifications; // ivar: _serializedModifications


+(void)applyDaemonCallbackInterfaceTweaks:(id)arg0 ;
-(BOOL)CKOperationShouldRun:(*id)arg0 ;
-(BOOL)hasCKOperationCallbacksSet;
-(id)activityCreate;
-(id)init;
-(id)initWithSerializedModifications:(id)arg0 ;
-(void)_finishOnCallbackQueueWithError:(id)arg0 ;
-(void)fillFromOperationInfo:(id)arg0 ;
-(void)fillOutOperationInfo:(id)arg0 ;
-(void)handleDeserializationOfSaves:(id)arg0 deletes:(id)arg1 error:(id)arg2 ;
-(void)performCKOperation;


@end


#endif