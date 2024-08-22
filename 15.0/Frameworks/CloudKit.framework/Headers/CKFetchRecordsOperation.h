// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKFETCHRECORDSOPERATION_H
#define CKFETCHRECORDSOPERATION_H

@class NSMutableSet, NSMutableDictionary, NSDictionary, NSArray;
@protocol CKFetchRecordsOperationCallbacks, CKOperationInMemoryAssets;


#import "CKDatabaseOperation.h"
#import "CKFetchRecordsOperationInfo.h"

@interface CKFetchRecordsOperation : CKDatabaseOperation <CKFetchRecordsOperationCallbacks, CKOperationInMemoryAssets>

 {
    NSMutableSet *_packagesToDestroy;
    NSMutableDictionary *_recordErrors;
}


@property (retain, nonatomic) NSMutableDictionary *assetInfoByArrayIndexByRecordKeyByRecordID; // ivar: _assetInfoByArrayIndexByRecordKeyByRecordID
@property (copy, nonatomic) NSDictionary *assetTransferOptionsByRecordTypeAndKey; // ivar: _assetTransferOptionsByRecordTypeAndKey
@property (readonly, nonatomic) NSObject<CKFetchRecordsOperationCallbacks> *clientOperationCallbackProxy;
@property (copy, nonatomic) NSArray *desiredKeys; // ivar: _desiredKeys
@property (copy, nonatomic) NSDictionary *desiredPackageFileIndices; // ivar: _desiredPackageFileIndices
@property (nonatomic) BOOL dropInMemoryAssetContentASAP; // ivar: _dropInMemoryAssetContentASAP
@property (copy, nonatomic) id *fetchRecordsCompletionBlock; // ivar: _fetchRecordsCompletionBlock
@property (nonatomic) BOOL isFetchCurrentUserOperation; // ivar: _isFetchCurrentUserOperation
@property (readonly, nonatomic) CKFetchRecordsOperationInfo *operationInfo;
@property (copy, nonatomic) id *perRecordCompletionBlock; // ivar: _perRecordCompletionBlock
@property (copy, nonatomic) id *perRecordProgressBlock; // ivar: _perRecordProgressBlock
@property (copy, nonatomic) NSArray *recordIDs; // ivar: _recordIDs
@property (copy, nonatomic) NSDictionary *recordIDsToETags; // ivar: _recordIDsToETags
@property (retain, nonatomic) NSMutableDictionary *recordIDsToRecords; // ivar: _recordIDsToRecords
@property (copy, nonatomic) NSDictionary *recordIDsToVersionETags; // ivar: _recordIDsToVersionETags
@property (nonatomic) BOOL shouldFetchAssetContent; // ivar: _shouldFetchAssetContent
@property (nonatomic) BOOL shouldFetchAssetContentInMemory; // ivar: _shouldFetchAssetContentInMemory
@property (retain, nonatomic) NSDictionary *webSharingIdentityDataByRecordID; // ivar: _webSharingIdentityDataByRecordID


+(id)fetchCurrentUserRecordOperation;
+(void)applyDaemonCallbackInterfaceTweaks:(id)arg0 ;
-(BOOL)CKOperationShouldRun:(*id)arg0 ;
-(BOOL)claimPackagesInRecord:(id)arg0 error:(*id)arg1 ;
-(BOOL)hasCKOperationCallbacksSet;
-(id)activityCreate;
-(id)init;
-(id)initWithRecordIDs:(id)arg0 ;
-(void)_finishOnCallbackQueueWithError:(id)arg0 ;
-(void)fillFromOperationInfo:(id)arg0 ;
-(void)fillOutOperationInfo:(id)arg0 ;
-(void)handleAssetDataForRecordID:(id)arg0 recordKey:(id)arg1 arrayIndex:(NSInteger)arg2 data:(id)arg3 offset:(NSUInteger)arg4 ;
-(void)handleFetchForRecordID:(id)arg0 didProgress:(CGFloat)arg1 ;
-(void)handleFetchForRecordID:(id)arg0 record:(id)arg1 error:(id)arg2 ;
-(void)performCKOperation;


@end


#endif