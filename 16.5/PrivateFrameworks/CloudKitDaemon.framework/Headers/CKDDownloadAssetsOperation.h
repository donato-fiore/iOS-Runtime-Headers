// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDDOWNLOADASSETSOPERATION_H
#define CKDDOWNLOADASSETSOPERATION_H

@class NSMutableArray, NSArray, NSMapTable, NSMutableDictionary;
@protocol OS_dispatch_queue;


#import "CKDDatabaseOperation.h"
#import "CKDCancelTokenGroup.h"

@interface CKDDownloadAssetsOperation : CKDDatabaseOperation

@property (retain, nonatomic) NSMutableArray *MMCSItemsToDownload; // ivar: _MMCSItemsToDownload
@property (retain, nonatomic) NSMutableArray *MMCSItemsToDownloadInMemory; // ivar: _MMCSItemsToDownloadInMemory
@property (retain, nonatomic) NSArray *assetURLInfosToFillOut; // ivar: _assetURLInfosToFillOut
@property (retain, nonatomic) NSArray *assetsToDownload; // ivar: _assetsToDownload
@property (retain, nonatomic) NSMutableArray *assetsToDownloadFromTranscoder; // ivar: _assetsToDownloadFromTranscoder
@property (retain, nonatomic) NSMutableArray *assetsToDownloadFromTranscoderInMemory; // ivar: _assetsToDownloadFromTranscoderInMemory
@property (retain, nonatomic) NSArray *assetsToDownloadInMemory; // ivar: _assetsToDownloadInMemory
@property (retain, nonatomic) CKDCancelTokenGroup *cancelTokens; // ivar: _cancelTokens
@property (copy, nonatomic) id *downloadCommandBlock; // ivar: _downloadCommandBlock
@property (copy, nonatomic) id *downloadCompletionBlock; // ivar: _downloadCompletionBlock
@property (copy, nonatomic) id *downloadPreparationBlock; // ivar: _downloadPreparationBlock
@property (copy, nonatomic) id *downloadProgressBlock; // ivar: _downloadProgressBlock
@property (retain, nonatomic) NSMapTable *downloadTasksByPackages; // ivar: _downloadTasksByPackages
@property (retain, nonatomic) NSMutableDictionary *keyOrErrorForHostname; // ivar: _keyOrErrorForHostname
@property (nonatomic) NSUInteger maxPackageDownloadsPerBatch; // ivar: _maxPackageDownloadsPerBatch
@property (retain, nonatomic) NSArray *packageIndexSets; // ivar: _packageIndexSets
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (nonatomic) BOOL shouldCloneFileInAssetCache; // ivar: _shouldCloneFileInAssetCache
@property (nonatomic) NSUInteger state;
@property (copy, nonatomic) id *urlFilledOutBlock; // ivar: _urlFilledOutBlock


-(BOOL)_download;
-(BOOL)_postProcess;
-(BOOL)_prepareForDownload;
-(BOOL)makeStateTransition;
-(BOOL)shouldDownloadAssetFromTranscoder:(id)arg0 ;
-(BOOL)supportsClearAssetEncryption;
-(id)CKStatusReportLogGroups;
-(id)_tryToFillInTheDerivativeTemplateWithAsset:(id)arg0 ;
-(id)activityCreate;
-(id)initWithOperationInfo:(id)arg0 container:(id)arg1 ;
-(id)nameForState:(NSUInteger)arg0 ;
-(void)_collectMetricsFromCompletedItemGroup:(id)arg0 ;
-(void)_collectMetricsFromCompletedItemGroupSet:(id)arg0 ;
-(void)_collectMetricsFromMMCSOperationMetrics:(id)arg0 ;
-(void)_didCommandForAsset:(id)arg0 command:(id)arg1 ;
-(void)_didCommandForMMCSItem:(id)arg0 command:(id)arg1 ;
-(void)_didDownloadAsset:(id)arg0 error:(id)arg1 ;
-(void)_didDownloadMMCSItem:(id)arg0 inMemory:(BOOL)arg1 error:(id)arg2 ;
-(void)_didDownloadMMCSItems:(id)arg0 inMemory:(BOOL)arg1 error:(id)arg2 ;
-(void)_didDownloadMMCSSectionItem:(id)arg0 task:(id)arg1 error:(id)arg2 ;
-(void)_didDownloadMMCSSectionItems:(id)arg0 task:(id)arg1 error:(id)arg2 ;
-(void)_didMakeProgressForAsset:(id)arg0 progress:(CGFloat)arg1 ;
-(void)_didMakeProgressForMMCSItem:(id)arg0 inMemory:(BOOL)arg1 ;
-(void)_didMakeProgressForMMCSSectionItem:(id)arg0 task:(id)arg1 ;
-(void)_didPrepareAsset:(id)arg0 ;
-(void)_downloadMMCSItems:(id)arg0 downloadTasksByPackages:(id)arg1 shouldFetchAssetContentInMemory:(BOOL)arg2 ;
-(void)_downloadPackageSectionAtIndex:(NSInteger)arg0 task:(id)arg1 completionBlock:(id)arg2 ;
-(void)_downloadPackageSectionsWithPendingTasks:(id)arg0 downloadingTasks:(id)arg1 completedTasks:(id)arg2 ;
-(void)_downloadPackageSectionsWithSectionEnumerator:(id)arg0 task:(id)arg1 completionBlock:(id)arg2 ;
-(void)_downloadPackageSectionsWithTask:(id)arg0 completionBlock:(id)arg1 ;
-(void)_downloadTranscodedAsset:(id)arg0 inMemory:(BOOL)arg1 ;
-(void)_finishOnCallbackQueueWithError:(id)arg0 ;
-(void)_removeUntrackedMMCSItems:(id)arg0 ;
-(void)cancel;
-(void)main;


@end


#endif