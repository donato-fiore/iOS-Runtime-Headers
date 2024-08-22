// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CSADBLOCKERASSETDOWNLOADMONITOR_H
#define CSADBLOCKERASSETDOWNLOADMONITOR_H

@class NSString;
@protocol CSTrialAssetDownloadMonitorDelegate;


#import "CSEventMonitor.h"
#import "CSTrialAssetDownloadMonitor.h"

@interface CSAdBlockerAssetDownloadMonitor : CSEventMonitor <CSTrialAssetDownloadMonitorDelegate>

 {
    int _notifyToken;
    NSUInteger _lastUpdatedAssetType;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CSTrialAssetDownloadMonitor *monitor; // ivar: _monitor
@property (readonly) Class superclass;


+(id)sharedInstance;
-(char *)_notificationKey;
-(id)init;
-(void)_didInstalledNewAdBlockerAsset;
-(void)_notifyObserver:(id)arg0 ;
-(void)_startMonitoringWithQueue:(id)arg0 ;
-(void)_stopMonitoring;
-(void)trialAssetDownloadMonitorDelegate:(id)arg0 didInstallNewAsset:(BOOL)arg1 assetType:(NSUInteger)arg2 ;


@end


#endif