// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CSBLUETOOTHWIRELESSSPLITTERMONITORIMPIOS_H
#define CSBLUETOOTHWIRELESSSPLITTERMONITORIMPIOS_H



#import "CSBluetoothWirelessSplitterMonitor.h"

@interface CSBluetoothWirelessSplitterMonitorImpIOS : CSBluetoothWirelessSplitterMonitor {
    int _notifyToken;
    NSUInteger _splitterState;
}




-(NSUInteger)splitterState;
-(id)init;
-(void)_didReceiveWirelessSplitterStateChange;
-(void)_notifyObserver:(id)arg0 splitterState:(NSUInteger)arg1 shouldDisableSpeakerVerificationInSplitterMode:(BOOL)arg2 ;
-(void)_startMonitoringWithQueue:(id)arg0 ;
-(void)_stopMonitoring;
-(void)splitterState:(id)arg0 ;
-(void)updateSplitterState:(NSUInteger)arg0 shouldDisableSpeakerVerificationInSplitterMode:(BOOL)arg1 ;


@end


#endif