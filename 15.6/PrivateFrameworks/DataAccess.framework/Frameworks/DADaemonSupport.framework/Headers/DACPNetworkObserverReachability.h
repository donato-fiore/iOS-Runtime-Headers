// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DACPNETWORKOBSERVERREACHABILITY_H
#define DACPNETWORKOBSERVERREACHABILITY_H



#import "DAReachability.h"

@interface DACPNetworkObserverReachability : DAReachability {
    BOOL _monitoringReachability;
}




-(BOOL)_monitoringReachability;
-(void)_reachabilityChanged:(id)arg0 ;
-(void)_startMonitoringReachability;
-(void)_stopMonitoringReachability;


@end


#endif