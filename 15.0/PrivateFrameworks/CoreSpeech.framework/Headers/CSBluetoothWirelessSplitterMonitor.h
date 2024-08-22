// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CSBLUETOOTHWIRELESSSPLITTERMONITOR_H
#define CSBLUETOOTHWIRELESSSPLITTERMONITOR_H



#import "CSEventMonitor.h"

@interface CSBluetoothWirelessSplitterMonitor : CSEventMonitor {
    int _notifyToken;
}




+(id)sharedInstance;
-(id)init;
-(void)_didReceiveWirelessSplitterStateChange;
-(void)_notifyObserver:(id)arg0 splitterState:(NSUInteger)arg1 shouldDisableSpeakerVerificationInSplitterMode:(BOOL)arg2 ;
-(void)_startMonitoringWithQueue:(id)arg0 ;
-(void)_stopMonitoring;
-(void)splitterState:(id)arg0 ;


@end


#endif