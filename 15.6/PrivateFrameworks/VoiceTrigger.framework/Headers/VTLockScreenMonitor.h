// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VTLOCKSCREENMONITOR_H
#define VTLOCKSCREENMONITOR_H



#import "VTEventMonitor.h"

@interface VTLockScreenMonitor : VTEventMonitor {
    int _notifyToken;
    unsigned char _lockScreenState;
}




+(id)sharedInstance;
-(id)init;
-(id)lockScreenStateDescription:(unsigned char)arg0 ;
-(unsigned char)_checkLockScreenState;
-(unsigned char)lockScreenState;
-(void)_didReceiveLockScreenStateChanged:(unsigned char)arg0 ;
-(void)_didReceiveLockScreenStateChangedInQueue:(unsigned char)arg0 ;
-(void)_notifyObserver:(id)arg0 withLockScreenState:(unsigned char)arg1 ;
-(void)_startMonitoringWithQueue:(id)arg0 ;
-(void)_stopMonitoring;


@end


#endif