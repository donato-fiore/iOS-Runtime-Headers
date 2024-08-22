// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VTSOFTWAREUPDATECHECKINGMONITOR_H
#define VTSOFTWAREUPDATECHECKINGMONITOR_H



#import "VTEventMonitor.h"

@interface VTSoftwareUpdateCheckingMonitor : VTEventMonitor {
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