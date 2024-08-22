// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATDEVICESYNCSESSIONASSETTASK_H
#define ATDEVICESYNCSESSIONASSETTASK_H

@class NSMutableOrderedSet, ATAssetLinkController, NSMutableDictionary, NSDictionary, NSMutableSet, ATThroughputCalculator, NSMapTable, NSMutableArray, NSString;
@protocol ATAssetLinkControllerObserver, ATAssetClient, OS_dispatch_queue;


#import "ATDeviceSyncSessionTask.h"

@interface ATDeviceSyncSessionAssetTask : ATDeviceSyncSessionTask <ATAssetLinkControllerObserver>

 {
    id<ATAssetClient> *_assetClient;
    NSMutableOrderedSet *_clientAssetsRemaining;
    NSMutableOrderedSet *_clientAssetsInProgress;
    NSMutableOrderedSet *_serverAssetsInProgress;
    ATAssetLinkController *_assetController;
    NSMutableDictionary *_detailedProgress;
    NSMutableDictionary *_syncProgresByAssetType;
    NSDictionary *_installedAssetMetrics;
    NSDictionary *_itemsWithEstimatedFileSize;
    NSMutableSet *_assetStreams;
    BOOL _addedTransportUpgradeException;
    CGFloat _taskStartTime;
    NSUInteger _totalAssetSize;
    ATThroughputCalculator *_throughputCalculator;
    NSMapTable *_assetToBytesMap;
    int _retrySendingAssetMetricsCount;
    BOOL _requestsComplete;
    BOOL _peerRequestsComplete;
    BOOL _deviceShouldReportSyncProgress;
    NSMutableDictionary *_progressMap;
    NSUInteger _successfullyCompletedItemCount;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSMutableArray *_finishedAssets;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSUInteger)_bytesDownloadedForAsset:(id)arg0 ;
-(id)_getMetricsWithCurrentProgressForInflightAssetsFromAssetMetrics:(id)arg0 ;
-(id)_getRawInstalledAssetMetricsFromAssetClient;
-(id)_prepareInstalledAssetMetricsWithSerializedOutputFromClientMetrics:(id)arg0 ;
-(id)_serializedAssetRequestsFromRequestDictionary:(id)arg0 ;
-(id)_serializedAssetSyncProgressFromAssetCacheDictionary:(id)arg0 ;
-(id)_serializedAssetsToDownloadDictionaryWithUpdatedProgressFromDownloadDictionary:(id)arg0 ;
-(id)_serializedDownloadedAssetsDictionaryFromDownloadedAssetsDictionary:(id)arg0 ;
-(id)_updateProgressAndGetFileProgressParamsForAsset:(id)arg0 ;
-(id)initWithDataClass:(id)arg0 onMessageLink:(id)arg1 ;
-(id)sessionGroupingKey;
-(void)_assetRequestsCompletedWithError:(id)arg0 ;
-(void)_finishTaskWithError:(id)arg0 ;
-(void)_handleAssetDownloadProgressed:(id)arg0 onMessageLink:(id)arg1 ;
-(void)_handleAssetRequest:(id)arg0 onMessagLink:(id)arg1 ;
-(void)_handleBeginAssetTaskRequest:(id)arg0 onMessagLink:(id)arg1 ;
-(void)_handleEndAssetTaskRequest:(id)arg0 onMessagLink:(id)arg1 ;
-(void)_handleFinishedAsset:(id)arg0 ;
-(void)_handleInstalledAssetMetricsChanged:(id)arg0 onMessageLink:(id)arg1 ;
-(void)_handleUpdateSessionTaskRequest:(id)arg0 onMessageLink:(id)arg1 ;
-(void)_handleUpdatedAsset:(id)arg0 ;
-(void)_loadInstalledAssetMetricsFromSyncClient;
-(void)_removeAssetFromProgressMap:(id)arg0 ;
-(void)_sendUpdatedInstallMetrics;
-(void)_shouldDeviceReportSyncProgress;
-(void)_updateCachedInstalledAssetMetricsWithNewMetrics:(id)arg0 ;
-(void)_updateDetailedProgressForCompletedAsset:(id)arg0 ;
-(void)_updateProgressWithBytesTransferred:(NSUInteger)arg0 forAsset:(id)arg1 ;
-(void)_updateProperties;
-(void)_updateTaskDescription;
-(void)assetLinkController:(id)arg0 didFinishAsset:(id)arg1 ;
-(void)assetLinkController:(id)arg0 didProcessFinishedAsset:(id)arg1 ;
-(void)assetLinkController:(id)arg0 didUpdateAsset:(id)arg1 ;
-(void)cancel;
-(void)messageLink:(id)arg0 didReceiveRequest:(id)arg1 ;
-(void)start;
-(void)updateProgressWithCount:(NSUInteger)arg0 totalItemCount:(NSUInteger)arg1 ;


@end


#endif