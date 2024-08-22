// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CSBATTERYMONITOR_H
#define CSBATTERYMONITOR_H



#import "CSEventMonitor.h"

@interface CSBatteryMonitor : CSEventMonitor {
    int _notifyToken;
    unsigned char _batteryState;
}




+(id)sharedInstance;
-(id)init;
-(unsigned char)_checkBatteryState;
-(unsigned char)batteryState;
-(void)_didReceiveBatteryStatusChanged:(unsigned char)arg0 ;
-(void)_didReceiveBatteryStatusChangedInQueue:(unsigned char)arg0 ;
-(void)_notifyObserver:(id)arg0 withBatteryState:(unsigned char)arg1 ;
-(void)_startMonitoringWithQueue:(id)arg0 ;
-(void)_stopMonitoring;


@end


#endif