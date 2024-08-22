// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VTFIRSTUNLOCKMONITOR_H
#define VTFIRSTUNLOCKMONITOR_H



#import "VTEventMonitor.h"

@interface VTFirstUnlockMonitor : VTEventMonitor {
    int _notifyToken;
    BOOL _firstUnlocked;
}




+(id)sharedInstance;
-(BOOL)_checkFirstUnlocked;
-(BOOL)isFirstUnlocked;
-(id)init;
-(void)_didReceiveFirstUnlock:(BOOL)arg0 ;
-(void)_didReceiveFirstUnlockInQueue:(BOOL)arg0 ;
-(void)_notifyObserver:(id)arg0 withUnlocked:(BOOL)arg1 ;
-(void)_startMonitoringWithQueue:(id)arg0 ;
-(void)_stopMonitoring;


@end


#endif