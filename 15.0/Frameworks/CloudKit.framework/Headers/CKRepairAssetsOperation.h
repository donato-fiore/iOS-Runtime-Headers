// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKREPAIRASSETSOPERATION_H
#define CKREPAIRASSETSOPERATION_H

@class NSArray, NSMutableDictionary;
@protocol CKRepairAssetsOperationCallbacks;


#import "CKDatabaseOperation.h"
#import "CKRepairAssetsOperationInfo.h"
#import "CKUploadRequestConfiguration.h"

@interface CKRepairAssetsOperation : CKDatabaseOperation <CKRepairAssetsOperationCallbacks>



@property (retain, nonatomic) NSArray *assetMetadata; // ivar: _assetMetadata
@property (retain, nonatomic) NSArray *assets; // ivar: _assets
@property (readonly, nonatomic) NSObject<CKRepairAssetsOperationCallbacks> *clientOperationCallbackProxy;
@property (readonly, nonatomic) CKRepairAssetsOperationInfo *operationInfo;
@property (retain, nonatomic) NSArray *packageMetadata; // ivar: _packageMetadata
@property (retain, nonatomic) NSArray *packages; // ivar: _packages
@property (retain, nonatomic) NSMutableDictionary *perItemErrorsByRecordID; // ivar: _perItemErrorsByRecordID
@property (copy, nonatomic) id *repairAssetsCompletionBlock; // ivar: _repairAssetsCompletionBlock
@property (readonly, copy, nonatomic) CKUploadRequestConfiguration *resolvedUploadRequestConfiguration;
@property (retain, nonatomic) NSArray *unavailableAssets; // ivar: _unavailableAssets
@property (retain, nonatomic) NSArray *unavailablePackages; // ivar: _unavailablePackages
@property (copy, nonatomic) CKUploadRequestConfiguration *uploadRequestConfiguration; // ivar: _uploadRequestConfiguration


+(void)applyDaemonCallbackInterfaceTweaks:(id)arg0 ;
-(BOOL)CKOperationShouldRun:(*id)arg0 ;
-(BOOL)hasCKOperationCallbacksSet;
-(id)activityCreate;
-(id)includedMetadata;
-(id)initWithAssets:(id)arg0 packages:(id)arg1 assetMetadata:(id)arg2 packageMetadata:(id)arg3 unavailableAssets:(id)arg4 unavailablePackages:(id)arg5 ;
-(void)_finishOnCallbackQueueWithError:(id)arg0 ;
-(void)fillFromOperationInfo:(id)arg0 ;
-(void)fillOutOperationInfo:(id)arg0 ;
-(void)handleAssetRepairCompletionForRecordID:(id)arg0 error:(id)arg1 ;
-(void)performCKOperation;


@end


#endif