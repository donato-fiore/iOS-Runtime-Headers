// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AXSPEECHASSETMONITORHELPER_H
#define AXSPEECHASSETMONITORHELPER_H


#import <Foundation/Foundation.h>


@interface AXSpeechAssetMonitorHelper : NSObject {
    CGFloat _lastVoiceAssetUpdateTime;
    *__SCNetworkReachability _reachability;
}




+(id)sharedInstance;
-(BOOL)_areMobileAssetsPresent;
-(BOOL)_platformSupportsMobileAssetVoices;
-(id)_assetUpdaterClient;
-(id)init;
-(id)speechAssetUpdaterClient;
-(void)_checkClientForUpdates:(BOOL)arg0 ;
-(void)_checkForAssetUpdatesNowAndNextWeek;
-(void)_clientUpdateAvailableSpeechAssets;
-(void)_monitorForNetworkChanges;
-(void)_monitorSpeechAssetChanges;
-(void)_registerForReachabilityNotifications;
-(void)_unregisterForReachabilityNotifications;
-(void)clearCurrentVoicesAndRefreshTTSVoiceListOnNextBoot;
-(void)updateAvailableSpeechAssets;


@end


#endif