// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKPUBLISHASSETSOPERATION_H
#define CKPUBLISHASSETSOPERATION_H

@class NSDictionary, NSMutableDictionary, NSArray;
@protocol CKPublishAssetsOperationCallbacks;


#import "CKDatabaseOperation.h"
#import "CKPublishAssetsOperationInfo.h"

@interface CKPublishAssetsOperation : CKDatabaseOperation <CKPublishAssetsOperationCallbacks>



@property (nonatomic) NSUInteger URLOptions; // ivar: _URLOptions
@property (copy, nonatomic) id *assetPublishedBlock; // ivar: _assetPublishedBlock
@property (readonly, nonatomic) NSObject<CKPublishAssetsOperationCallbacks> *clientOperationCallbackProxy;
@property (copy, nonatomic) NSDictionary *fileNamesByAssetFieldNames; // ivar: _fileNamesByAssetFieldNames
@property (readonly, nonatomic) CKPublishAssetsOperationInfo *operationInfo;
@property (retain, nonatomic) NSMutableDictionary *perItemErrorsByRecordID; // ivar: _perItemErrorsByRecordID
@property (copy, nonatomic) id *publishAssetCompletionBlock; // ivar: _publishAssetCompletionBlock
@property (retain, nonatomic) NSArray *recordIDs; // ivar: _recordIDs
@property (nonatomic) NSUInteger requestedTTL; // ivar: _requestedTTL


+(void)applyDaemonCallbackInterfaceTweaks:(id)arg0 ;
-(BOOL)CKOperationShouldRun:(*id)arg0 ;
-(BOOL)hasCKOperationCallbacksSet;
-(id)activityCreate;
-(id)initWithRecordIDs:(id)arg0 ;
-(void)_finishOnCallbackQueueWithError:(id)arg0 ;
-(void)fillFromOperationInfo:(id)arg0 ;
-(void)fillOutOperationInfo:(id)arg0 ;
-(void)handleAssetPublishCompletionForRecordID:(id)arg0 publishedAsset:(id)arg1 recordKey:(id)arg2 error:(id)arg3 ;
-(void)performCKOperation;


@end


#endif