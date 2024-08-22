// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKMARKASSETBROKENOPERATION_H
#define CKMARKASSETBROKENOPERATION_H

@class NSString;
@protocol CKMarkAssetBrokenOperationCallbacks;


#import "CKDatabaseOperation.h"
#import "CKMarkAssetBrokenOperationInfo.h"
#import "CKRecordID.h"
#import "CKUploadRequestConfiguration.h"

@interface CKMarkAssetBrokenOperation : CKDatabaseOperation <CKMarkAssetBrokenOperationCallbacks>



@property (nonatomic) BOOL bypassPCSEncryptionForTouchRepairZone; // ivar: _bypassPCSEncryptionForTouchRepairZone
@property (readonly, nonatomic) NSObject<CKMarkAssetBrokenOperationCallbacks> *clientOperationCallbackProxy;
@property (retain, nonatomic) NSString *field; // ivar: _field
@property (nonatomic) NSInteger listIndex; // ivar: _listIndex
@property (copy, nonatomic) id *markAssetBrokenCompletionBlock; // ivar: _markAssetBrokenCompletionBlock
@property (readonly, nonatomic) CKMarkAssetBrokenOperationInfo *operationInfo;
@property (retain, nonatomic) CKRecordID *recordID; // ivar: _recordID
@property (retain, nonatomic) CKRecordID *repairRecordID; // ivar: _repairRecordID
@property (readonly, copy, nonatomic) CKUploadRequestConfiguration *resolvedUploadRequestConfiguration;
@property (nonatomic) BOOL simulateCorruptAsset; // ivar: _simulateCorruptAsset
@property (nonatomic) BOOL touchRepairZone; // ivar: _touchRepairZone
@property (copy, nonatomic) CKUploadRequestConfiguration *uploadRequestConfiguration; // ivar: _uploadRequestConfiguration
@property (nonatomic) BOOL writeRepairRecord; // ivar: _writeRepairRecord


+(void)applyDaemonCallbackInterfaceTweaks:(id)arg0 ;
-(BOOL)CKOperationShouldRun:(*id)arg0 ;
-(BOOL)hasCKOperationCallbacksSet;
-(id)activityCreate;
-(id)initWithNoRecord;
-(id)initWithRecordID:(id)arg0 field:(id)arg1 ;
-(id)initWithRecordID:(id)arg0 field:(id)arg1 listIndex:(NSInteger)arg2 ;
-(void)_finishOnCallbackQueueWithError:(id)arg0 ;
-(void)fillFromOperationInfo:(id)arg0 ;
-(void)fillOutOperationInfo:(id)arg0 ;
-(void)handleMarkAssetBrokenCompletionWithRepairRecordID:(id)arg0 error:(id)arg1 ;
-(void)performCKOperation;


@end


#endif