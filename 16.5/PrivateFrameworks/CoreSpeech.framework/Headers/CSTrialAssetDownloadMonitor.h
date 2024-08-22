// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSTRIALASSETDOWNLOADMONITOR_H
#define CSTRIALASSETDOWNLOADMONITOR_H

@class NSDictionary;


#import "CSEventMonitor.h"

@interface CSTrialAssetDownloadMonitor : CSEventMonitor {
    NSDictionary *_trialClientDict;
}




+(id)sharedInstance;
-(BOOL)_handleSiriAttAssetTrailDownloadForNamespace:(id)arg0 ;
-(BOOL)_validateDownloadedAssetForAssetType:(NSUInteger)arg0 ;
-(id)_trailStageDirectoryForAsset:(id)arg0 ;
-(id)init;
-(void)_notifyTrialAssetDownloadForAssetType:(NSUInteger)arg0 ;
-(void)_startMonitoringWithQueue:(id)arg0 ;
-(void)downloadAndNotifyTrialAssetsUpdateForNamespace:(id)arg0 onQueue:(id)arg1 ;


@end


#endif