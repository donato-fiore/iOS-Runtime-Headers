// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKSERIALIZERECORDMODIFICATIONSOPERATION_H
#define CKSERIALIZERECORDMODIFICATIONSOPERATION_H

@class NSArray, NSData;
@protocol CKSerializeRecordModificationsOperationCallbacks;


#import "CKDatabaseOperation.h"
#import "CKSerializeRecordModificationsOperationInfo.h"

@interface CKSerializeRecordModificationsOperation : CKDatabaseOperation <CKSerializeRecordModificationsOperationCallbacks>



@property (readonly, nonatomic) NSObject<CKSerializeRecordModificationsOperationCallbacks> *clientOperationCallbackProxy;
@property (readonly, nonatomic) CKSerializeRecordModificationsOperationInfo *operationInfo;
@property (retain, nonatomic) NSArray *recordIDsToDelete; // ivar: _recordIDsToDelete
@property (retain, nonatomic) NSArray *recordsToSave; // ivar: _recordsToSave
@property (copy, nonatomic) id *serializeCompletionBlock; // ivar: _serializeCompletionBlock
@property (copy, nonatomic) NSData *serializedModifications; // ivar: _serializedModifications


-(BOOL)CKOperationShouldRun:(*id)arg0 ;
-(BOOL)hasCKOperationCallbacksSet;
-(id)activityCreate;
-(id)init;
-(id)initWithRecordsToSave:(id)arg0 recordIDsToDelete:(id)arg1 ;
-(void)_finishOnCallbackQueueWithError:(id)arg0 ;
-(void)fillFromOperationInfo:(id)arg0 ;
-(void)fillOutOperationInfo:(id)arg0 ;
-(void)handleSerialization:(id)arg0 error:(id)arg1 ;
-(void)performCKOperation;


@end


#endif