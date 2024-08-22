// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXSPEECHASSETMONITORHELPER_H
#define AXSPEECHASSETMONITORHELPER_H

@class AXAssetsService;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AXSpeechAssetMonitorHelper : NSObject {
    CGFloat _lastVoiceAssetUpdateTime;
    *__SCNetworkReachability _reachability;
    AXAssetsService *_assetService;
}


@property (retain, nonatomic) NSObject<OS_dispatch_queue> *longOperationQueue; // ivar: _longOperationQueue
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *migrationQueue; // ivar: _migrationQueue


+(id)sharedInstance;
-(BOOL)_platformSupportsMobileAssetVoices;
-(id)_assetUpdaterClient;
-(id)init;
-(id)speechAssetUpdaterClient;
-(void)_monitorForNetworkChanges;
-(void)_monitorSpeechAssetChanges;
-(void)_registerForReachabilityNotifications;
-(void)_unregisterForReachabilityNotifications;
-(void)_updateSpeechSourceIdentifiersIfNeeded;
-(void)clearCurrentVoicesAndRefreshTTSVoiceListOnNextBoot;
-(void)startMigrationOnDeviceUnlock;


@end


#endif