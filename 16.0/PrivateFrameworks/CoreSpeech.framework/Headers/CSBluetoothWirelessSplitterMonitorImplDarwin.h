// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSBLUETOOTHWIRELESSSPLITTERMONITORIMPLDARWIN_H
#define CSBLUETOOTHWIRELESSSPLITTERMONITORIMPLDARWIN_H



#import "CSBluetoothWirelessSplitterMonitor.h"

@interface CSBluetoothWirelessSplitterMonitorImplDarwin : CSBluetoothWirelessSplitterMonitor {
    NSUInteger _splitterState;
    BOOL _shouldDisableSpeakerVerificationInSplitterMode;
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