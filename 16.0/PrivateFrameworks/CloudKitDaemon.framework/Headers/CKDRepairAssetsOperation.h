// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDREPAIRASSETSOPERATION_H
#define CKDREPAIRASSETSOPERATION_H

@class NSDictionary, NSMutableDictionary, NSArray, CKUploadRequestConfiguration, NSSet;
@protocol CKRepairAssetsOperationCallbacks;


#import "CKDDatabaseOperation.h"
#import "CKDOperation.h"

@interface CKDRepairAssetsOperation : CKDDatabaseOperation

@property (retain, nonatomic) NSDictionary *UUIDToAssetOrPackage; // ivar: _UUIDToAssetOrPackage
@property (copy, nonatomic) id *assetOrPackageRepairedBlock; // ivar: _assetOrPackageRepairedBlock
@property (retain, nonatomic) NSDictionary *assetOrPackageUUIDToMetadata; // ivar: _assetOrPackageUUIDToMetadata
@property (retain, nonatomic) NSMutableDictionary *assetOrPackageUUIDToOriginalRecord; // ivar: _assetOrPackageUUIDToOriginalRecord
@property (retain, nonatomic) NSDictionary *assetOrPackageUUIDToUploadError; // ivar: _assetOrPackageUUIDToUploadError
@property (retain, nonatomic) NSObject<CKRepairAssetsOperationCallbacks> *clientOperationCallbackProxy;
@property (retain, nonatomic) CKDOperation *fetchOperation; // ivar: _fetchOperation
@property (nonatomic) NSUInteger state;
@property (retain, nonatomic) NSArray *unavailableAssetsAndPackages; // ivar: _unavailableAssetsAndPackages
@property (retain, nonatomic) CKDOperation *updateOperation; // ivar: _updateOperation
@property (retain, nonatomic) CKDOperation *uploadOperation; // ivar: _uploadOperation
@property (retain, nonatomic) CKUploadRequestConfiguration *uploadRequestConfiguration; // ivar: _uploadRequestConfiguration
@property (retain, nonatomic) NSSet *uploadedAssetOrPackageUUIDs; // ivar: _uploadedAssetOrPackageUUIDs


-(BOOL)makeStateTransition;
-(id)activityCreate;
-(id)assetOrPackageForMetadata:(id)arg0 inRecord:(id)arg1 ;
-(id)initWithOperationInfo:(id)arg0 container:(id)arg1 ;
-(id)nameForState:(NSUInteger)arg0 ;
-(id)repairContainer;
-(void)_fetchAssetMetadata;
-(void)_finishOnCallbackQueueWithError:(id)arg0 ;
-(void)_updateMissingAssetServerStatus;
-(void)_uploadAssetsModify;
-(void)main;


@end


#endif