// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSVOICETRIGGERASSETDOWNLOADMONITOR_H
#define CSVOICETRIGGERASSETDOWNLOADMONITOR_H



#import "CSEventMonitor.h"

@interface CSVoiceTriggerAssetDownloadMonitor : CSEventMonitor {
    int _notifyToken;
}




+(id)sharedInstance;
-(char *)_notificationKey;
-(id)init;
-(void)_didInstalledNewVoiceTriggerAsset;
-(void)_notifyObserver:(id)arg0 ;
-(void)_startMonitoringWithQueue:(id)arg0 ;
-(void)_stopMonitoring;


@end


#endif