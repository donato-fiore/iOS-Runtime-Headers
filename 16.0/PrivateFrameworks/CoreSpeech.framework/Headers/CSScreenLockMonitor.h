// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSSCREENLOCKMONITOR_H
#define CSSCREENLOCKMONITOR_H



#import "CSEventMonitor.h"

@interface CSScreenLockMonitor : CSEventMonitor {
    BOOL _isScreenLocked;
}




+(id)sharedInstance;
-(BOOL)_queryIsScreenLocked;
-(BOOL)isScreenLocked;
-(id)init;
-(void)_notifyObserver:(id)arg0 isScreenLocked:(BOOL)arg1 ;
-(void)_startMonitoringWithQueue:(id)arg0 ;
-(void)_stopMonitoring;
-(void)dealloc;
-(void)screenLockStateChanged;


@end


#endif