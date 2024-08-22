// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKASSETREPAIRSCHEDULER_H
#define CKASSETREPAIRSCHEDULER_H

@class NSOperationQueue, NSMutableDictionary, NSMutableSet, NSURL;
@protocol OS_dispatch_queue, OS_dispatch_source, CKAssetRepairSchedulerDelegate;

#import <Foundation/Foundation.h>

#import "CKContainer.h"
#import "CKUploadRequestConfiguration.h"

@interface CKAssetRepairScheduler : NSObject {
    CKContainer *_container;
    CKUploadRequestConfiguration *_repairContainerOverrides;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSOperationQueue *_requestOperationQueue;
    NSOperationQueue *_uploadOperationQueue;
    NSObject<OS_dispatch_source> *_uploadPendingRequestTimer;
    NSObject<OS_dispatch_source> *_uploadSuspensionTimer;
    NSMutableDictionary *_remainingAssetsToRequestCallbacks;
    NSMutableDictionary *_assetCache;
    NSMutableSet *_confirmedMissingAssets;
    NSMutableSet *_assetsBeingRequested;
    NSMutableSet *_assetsBeingUploaded;
    NSMutableDictionary *_retryCountForAssets;
}


@property (nonatomic) NSInteger cacheCountLimit; // ivar: _cacheCountLimit
@property (nonatomic) CGFloat defaultSuspensionTime; // ivar: _defaultSuspensionTime
@property (weak) NSObject<CKAssetRepairSchedulerDelegate> *delegate; // ivar: _delegate
@property (nonatomic) NSInteger repairBatchCountLimit; // ivar: _repairBatchCountLimit
@property (nonatomic) NSInteger repairRetryCount; // ivar: _repairRetryCount
@property (nonatomic) CGFloat requestTimeout; // ivar: _requestTimeout
@property (copy, nonatomic) NSURL *temporaryAssetDirectory; // ivar: _temporaryAssetDirectory


+(NSInteger)canCopyFromFileURL:(id)arg0 toDirectoryURL:(id)arg1 ;
+(NSInteger)estimatedSizeForAssetOrPackage:(id)arg0 ;
+(NSUInteger)remainingCapacityAtURL:(id)arg0 error:(*id)arg1 ;
+(id)nameForEvent:(NSInteger)arg0 ;
-(BOOL)hasPendingWork;
-(id)allRemainingRequestableAssets;
-(id)allRemainingUploadableAssets;
-(id)clonedAsset:(id)arg0 withError:(*id)arg1 ;
-(id)initWithContainer:(id)arg0 repairContainerOverrides:(id)arg1 ;
-(void)addUploadRequestsWithMetadata:(id)arg0 requestBlocks:(id)arg1 ;
-(void)cancelAllOperations;
-(void)clearAssetCache;
-(void)dealloc;
-(void)removeUploadRequestWithRecordID:(id)arg0 ;
-(void)tickle;


@end


#endif