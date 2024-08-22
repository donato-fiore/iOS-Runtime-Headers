// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSHOSTPOWERSTATEMONITORIMPLDARWIN_H
#define CSHOSTPOWERSTATEMONITORIMPLDARWIN_H



#import "CSHostPowerStateMonitor.h"

@interface CSHostPowerStateMonitorImplDarwin : CSHostPowerStateMonitor {
    *IONotificationPort _notificationPort;
    unsigned int _serviceNotification;
    NSInteger _hostState;
}




+(id)sharedInstance;
-(NSInteger)currentDarwinHostState;
-(NSInteger)currentPowerState;
-(NSInteger)currentRawPowerState;
-(id)init;
-(int)_fetchHostStateWithService:(unsigned int)arg0 ;
-(void)_didReceiveDarwinHostStateChangeNotification:(NSInteger)arg0 ;
-(void)_notifyObserver:(id)arg0 withDarwinHostState:(NSInteger)arg1 ;
-(void)_startMonitoringWithQueue:(id)arg0 ;
-(void)_stopMonitoring;


@end


#endif