// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXASSETUPDATEMONITOR_H
#define AXASSETUPDATEMONITOR_H

@class NSHashTable, NSArray, AXDispatchTimer, NSString;
@protocol AXAssetControllerObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AXAssetController.h"
#import "AXAssetPolicy.h"

@interface AXAssetUpdateMonitor : NSObject <AXAssetControllerObserver>

 {
    os_unfair_lock_s _assetsLock;
    NSHashTable *_updateObservers;
    NSArray *_cachedInstalledAssets;
    AXDispatchTimer *_refreshDispatchTimer;
    NSObject<OS_dispatch_queue> *_workerQueue;
}


@property (retain, nonatomic) AXAssetController *assetController; // ivar: _assetController
@property (readonly, nonatomic) AXAssetPolicy *assetPolicy;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasInProgressDownloads;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) BOOL userInitiated;


+(id)assetMonitorWithPolicy:(id)arg0 ;
+(id)assetMonitorWithPolicy:(id)arg0 qosClass:(unsigned int)arg1 ;
+(id)assetMonitorWithPolicy:(id)arg0 qosClass:(unsigned int)arg1 targetQueue:(id)arg2 ;
-(id)_initWithAssetPolicy:(id)arg0 qosClass:(unsigned int)arg1 targetQueue:(id)arg2 ;
-(id)_purgeUnneededAssetsFromInstalledAssets:(id)arg0 ;
-(void)_performWithinLock:(id)arg0 ;
-(void)_updateCachedInstalledAssets:(id)arg0 ;
-(void)_workerQueue_refreshAssetsAfterDelay:(CGFloat)arg0 canRefreshCatalog:(BOOL)arg1 ;
-(void)addUpdateObserver:(id)arg0 ;
-(void)assetController:(id)arg0 didFinishDownloadingAsset:(id)arg1 wasSuccessful:(BOOL)arg2 error:(id)arg3 hasRemainingDownloads:(BOOL)arg4 ;
-(void)assetController:(id)arg0 didFinishRefreshingAssets:(id)arg1 wasSuccessful:(BOOL)arg2 error:(id)arg3 ;
-(void)logInfo:(id)arg0 ;
-(void)refreshAssetsAfterDelay:(CGFloat)arg0 ;
-(void)removeUpdateObserver:(id)arg0 ;
-(void)stop;


@end


#endif