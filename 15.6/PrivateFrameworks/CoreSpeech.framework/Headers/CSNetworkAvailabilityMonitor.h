// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CSNETWORKAVAILABILITYMONITOR_H
#define CSNETWORKAVAILABILITYMONITOR_H



#import "CSEventMonitor.h"

@interface CSNetworkAvailabilityMonitor : CSEventMonitor {
    int _notifyToken;
}




+(id)sharedInstance;
-(BOOL)isAvailable;
-(id)init;
-(void)_availabilityChanged;
-(void)_didReceivedNetworkAvailabilityChangedNotification:(BOOL)arg0 ;
-(void)_notifyObserver:(id)arg0 withNetworkAvailability:(BOOL)arg1 ;
-(void)_startMonitoringWithQueue:(id)arg0 ;
-(void)_stopMonitoring;


@end


#endif