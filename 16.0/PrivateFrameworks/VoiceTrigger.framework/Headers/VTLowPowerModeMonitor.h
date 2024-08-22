// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VTLOWPOWERMODEMONITOR_H
#define VTLOWPOWERMODEMONITOR_H



#import "VTEventMonitor.h"

@interface VTLowPowerModeMonitor : VTEventMonitor {
    unsigned char _powerMode;
}




+(id)sharedInstance;
-(BOOL)isLowPowerMode;
-(id)init;
-(unsigned char)_checkPowerMode;
-(unsigned char)powerMode;
-(void)_didReceiveLowPowerModeChanged;
-(void)_didReceiveLowPowerModeChangedInQueue:(unsigned char)arg0 ;
-(void)_notifyObserver:(id)arg0 withPowerMode:(unsigned char)arg1 ;
-(void)_startMonitoringWithQueue:(id)arg0 ;
-(void)_stopMonitoring;


@end


#endif