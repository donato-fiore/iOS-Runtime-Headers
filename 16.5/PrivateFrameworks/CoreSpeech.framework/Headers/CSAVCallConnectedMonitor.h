// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSAVCALLCONNECTEDMONITOR_H
#define CSAVCALLCONNECTEDMONITOR_H



#import "CSEventMonitor.h"

@interface CSAVCallConnectedMonitor : CSEventMonitor {
    BOOL _hasConnectedAVCall;
}




+(id)sharedInstance;
-(BOOL)hasConnectedAVCall;
-(id)init;
-(void)_handleCallActiveDidChangeNotification:(id)arg0 ;
-(void)_startMonitoringWithQueue:(id)arg0 ;
-(void)_startObservingAVCallActiveChange;
-(void)_startObservingSystemControllerLifecycle;
-(void)_stopMonitoring;
-(void)_systemControllerDied:(id)arg0 ;


@end


#endif