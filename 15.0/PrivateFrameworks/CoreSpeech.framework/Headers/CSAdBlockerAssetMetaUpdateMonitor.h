// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CSADBLOCKERASSETMETAUPDATEMONITOR_H
#define CSADBLOCKERASSETMETAUPDATEMONITOR_H



#import "CSEventMonitor.h"

@interface CSAdBlockerAssetMetaUpdateMonitor : CSEventMonitor {
    int _notifyToken;
}




+(id)sharedInstance;
-(char *)_asssetMetaUpdatedKey;
-(id)init;
-(void)_didReceiveNewAdBlockerAssetMetaData;
-(void)_notifyObserver:(id)arg0 ;
-(void)_startMonitoringWithQueue:(id)arg0 ;
-(void)_stopMonitoring;


@end


#endif