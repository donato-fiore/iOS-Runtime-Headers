// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATSTOREMEDIAASSETLINK_H
#define ATSTOREMEDIAASSETLINK_H

@class NSMutableSet, NSMutableOrderedSet, NSString;
@protocol ATStoreDownloadObserver, ICEnvironmentMonitorObserver, ATAssetLink, OS_dispatch_queue, ATAssetLinkDelegate;

#import <Foundation/Foundation.h>

#import "ATStoreDownloadService.h"

@interface ATStoreMediaAssetLink : NSObject <ATStoreDownloadObserver, ICEnvironmentMonitorObserver, ATAssetLink>

 {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_resumeQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSMutableSet *_enqueuedDownloadAssets;
    NSMutableSet *_enqueuedRestoreAssets;
    NSMutableSet *_cancelledAssets;
    NSMutableSet *_resumableAssets;
    NSMutableOrderedSet *_downloadsPendingEnqueue;
    ATStoreDownloadService *_downloadService;
    BOOL _resumeAssetDownloadsActivity;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ATAssetLinkDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isOpen) BOOL open; // ivar: _open
@property (readonly) Class superclass;


-(BOOL)_canEnqueueAssetUnderCurrentEnvironmentConditions:(id)arg0 didUpdatePauseReason:(*BOOL)arg1 ;
-(BOOL)canEnqueueAsset:(id)arg0 ;
-(BOOL)linkIsReady;
-(BOOL)open;
-(NSInteger)_ATAssetStateForStoreDownloadState:(NSInteger)arg0 ;
-(NSUInteger)maximumBatchSize;
-(NSUInteger)priority;
-(id)enqueueAssets:(id)arg0 force:(BOOL)arg1 ;
-(id)init;
-(void)ATStoreDownloadService:(id)arg0 didChangeStateForAsset:(id)arg1 oldState:(NSInteger)arg2 newState:(NSInteger)arg3 ;
-(void)ATStoreDownloadService:(id)arg0 didEnqueueAsset:(id)arg1 ;
-(void)ATStoreDownloadService:(id)arg0 didFinishAsset:(id)arg1 withError:(id)arg2 cancelPendingAssetsInBatch:(BOOL)arg3 ;
-(void)ATStoreDownloadService:(id)arg0 didResumeAsset:(id)arg1 ;
-(void)ATStoreDownloadService:(id)arg0 didUpdateProgressForAsset:(id)arg1 progress:(float)arg2 ;
-(void)_finishAsset:(id)arg0 error:(id)arg1 cancelPendingAssetsInBatch:(BOOL)arg2 ;
-(void)_setupActivityToResumeDownloads;
-(void)cancelAssets:(id)arg0 ;
-(void)close;
-(void)environmentMonitorDidChangeNetworkReachability:(id)arg0 ;
-(void)prioritizeAsset:(id)arg0 ;


@end


#endif