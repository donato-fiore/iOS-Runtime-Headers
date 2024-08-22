// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VTLANGUAGECODEUPDATEMONITOR_H
#define VTLANGUAGECODEUPDATEMONITOR_H



#import "VTEventMonitor.h"

@interface VTLanguageCodeUpdateMonitor : VTEventMonitor {
    int _notifyToken;
}




+(id)sharedInstance;
-(id)init;
-(void)_didReceiveLanguageCodeUpdate;
-(void)_notifyObserver:(id)arg0 withLanguageCode:(id)arg1 ;
-(void)_startMonitoringWithQueue:(id)arg0 ;
-(void)_stopMonitoring;


@end


#endif