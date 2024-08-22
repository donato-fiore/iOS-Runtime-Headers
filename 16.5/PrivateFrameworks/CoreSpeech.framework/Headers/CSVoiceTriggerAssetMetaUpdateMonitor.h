// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSVOICETRIGGERASSETMETAUPDATEMONITOR_H
#define CSVOICETRIGGERASSETMETAUPDATEMONITOR_H



#import "CSEventMonitor.h"

@interface CSVoiceTriggerAssetMetaUpdateMonitor : CSEventMonitor {
    int _notifyToken;
}




+(id)sharedInstance;
-(char *)_asssetMetaUpdatedKey;
-(id)init;
-(void)_didReceiveNewVoiceTriggerAssetMetaData;
-(void)_notifyObserver:(id)arg0 ;
-(void)_startMonitoringWithQueue:(id)arg0 ;
-(void)_stopMonitoring;
-(void)notifyNewVoiceTriggerAssetMetaDataUpdated;


@end


#endif