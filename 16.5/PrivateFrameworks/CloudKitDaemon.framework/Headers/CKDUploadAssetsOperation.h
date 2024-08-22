// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDUPLOADASSETSOPERATION_H
#define CKDUPLOADASSETSOPERATION_H

@class NSDictionary, NSArray, NSMutableArray, NSMapTable;
@protocol OS_dispatch_queue;


#import "CKDDatabaseOperation.h"
#import "CKDAssetRequestPlanner.h"
#import "CKDCancelTokenGroup.h"

@interface CKDUploadAssetsOperation : CKDDatabaseOperation

@property (retain, nonatomic) CKDAssetRequestPlanner *assetRequestPlanner; // ivar: _assetRequestPlanner
@property (retain, nonatomic) NSDictionary *assetUUIDToExpectedProperties; // ivar: _assetUUIDToExpectedProperties
@property (retain, nonatomic) NSArray *assetsToUpload; // ivar: _assetsToUpload
@property (nonatomic) BOOL atomic; // ivar: _atomic
@property (retain, nonatomic) CKDCancelTokenGroup *cancelTokens; // ivar: _cancelTokens
@property (nonatomic) NSUInteger maxPackageUploadsPerBatch; // ivar: _maxPackageUploadsPerBatch
@property (retain, nonatomic) NSMutableArray *openedPackages; // ivar: _openedPackages
@property (retain, nonatomic) NSMutableArray *packageManifests; // ivar: _packageManifests
@property (retain, nonatomic) NSDictionary *packageUUIDToExpectedProperties; // ivar: _packageUUIDToExpectedProperties
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (nonatomic) BOOL shouldCloneFileInAssetCache; // ivar: _shouldCloneFileInAssetCache
@property (nonatomic) NSUInteger state;
@property (nonatomic) BOOL temporary; // ivar: _temporary
@property (copy, nonatomic) id *uploadCompletionBlock; // ivar: _uploadCompletionBlock
@property (copy, nonatomic) id *uploadPreparationBlock; // ivar: _uploadPreparationBlock
@property (copy, nonatomic) id *uploadProgressBlock; // ivar: _uploadProgressBlock
@property (retain, nonatomic) NSMapTable *uploadTasksByPackages; // ivar: _uploadTasksByPackages


+(NSInteger)isPredominatelyDownload;
-(BOOL)_didFetchUploadTokensForAssetTokenRequest:(id)arg0 error:(id)arg1 newError:(*id)arg2 ;
-(BOOL)_fetchConfiguration;
-(BOOL)_fetchUploadTokens;
-(BOOL)_openPackage:(id)arg0 ;
-(BOOL)_planSectionsForPackage:(id)arg0 error:(*id)arg1 ;
-(BOOL)_prepareForUpload;
-(BOOL)_upload;
-(BOOL)makeStateTransition;
-(BOOL)supportsClearAssetEncryption;
-(id)CKStatusReportLogGroups;
-(id)initWithOperationInfo:(id)arg0 container:(id)arg1 ;
-(id)nameForState:(NSUInteger)arg0 ;
-(int)operationType;
-(void)_closeAllPackages;
-(void)_closePackage:(id)arg0 ;
-(void)_collectMetricsFromCompletedItemGroup:(id)arg0 ;
-(void)_collectMetricsFromCompletedItemGroupSet:(id)arg0 ;
-(void)_collectMetricsFromMMCSOperationMetrics:(id)arg0 ;
-(void)_didGetChunkKeysForAssetBatch:(id)arg0 error:(id)arg1 ;
-(void)_didMakeProgressForAsset:(id)arg0 progress:(CGFloat)arg1 ;
-(void)_didMakeProgressForMMCSItem:(id)arg0 ;
-(void)_didMakeProgressForMMCSSectionItem:(id)arg0 task:(id)arg1 ;
-(void)_didPrepareAsset:(id)arg0 ;
-(void)_didPrepareAssetBatch:(id)arg0 error:(id)arg1 ;
-(void)_didPutChunkKeysForAssetBatch:(id)arg0 error:(id)arg1 ;
-(void)_didUploadAsset:(id)arg0 error:(id)arg1 ;
-(void)_didUploadClonedPackageWithTask:(id)arg0 ;
-(void)_didUploadMMCSItem:(id)arg0 error:(id)arg1 ;
-(void)_didUploadMMCSItems:(id)arg0 error:(id)arg1 ;
-(void)_didUploadMMCSSectionItem:(id)arg0 task:(id)arg1 error:(id)arg2 ;
-(void)_didUploadMMCSSectionItems:(id)arg0 task:(id)arg1 error:(id)arg2 ;
-(void)_didUploadPackageWithTask:(id)arg0 ;
-(void)_failAllItemsInAssetBatch:(id)arg0 error:(id)arg1 ;
-(void)_finishOnCallbackQueueWithError:(id)arg0 ;
-(void)_removePackageManifests;
-(void)_uploadPackageSection:(id)arg0 task:(id)arg1 completionBlock:(id)arg2 ;
-(void)_uploadPackageSectionsWithEnumerator:(id)arg0 task:(id)arg1 completionBlock:(id)arg2 ;
-(void)_uploadPackageSectionsWithPendingTasks:(id)arg0 uploadingTasks:(id)arg1 completedTasks:(id)arg2 ;
-(void)_uploadPackageSectionsWithTask:(id)arg0 completionBlock:(id)arg1 ;
-(void)cancel;
-(void)finishWithError:(id)arg0 ;
-(void)main;


@end


#endif