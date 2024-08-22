// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSSOFTWAREUPDATECHECKINGMONITOR_H
#define CSSOFTWAREUPDATECHECKINGMONITOR_H



#import "CSEventMonitor.h"

@interface CSSoftwareUpdateCheckingMonitor : CSEventMonitor {
    int _notifyToken;
    BOOL _isSoftwareUpdateCheckingRunning;
}




+(id)sharedInstance;
-(BOOL)_checkSoftwareUpdateCheckingState;
-(BOOL)isSoftwareUpdateCheckingRunning;
-(id)init;
-(unsigned char)_softwareUpdateCheckingState;
-(void)_didReceiveSoftwareUpdateCheckingStateChanged:(BOOL)arg0 ;
-(void)_didReceiveSoftwareUpdateCheckingStateChangedInQueue:(BOOL)arg0 ;
-(void)_notifyObserver:(id)arg0 withSoftwareUpdateCheckingRunning:(BOOL)arg1 ;
-(void)_startMonitoringWithQueue:(id)arg0 ;
-(void)_stopMonitoring;


@end


#endif