// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSBLUETOOTHWIRELESSSPLITTERMONITOR_H
#define CSBLUETOOTHWIRELESSSPLITTERMONITOR_H



#import "CSEventMonitor.h"

@interface CSBluetoothWirelessSplitterMonitor : CSEventMonitor



+(id)sharedInstance;
-(NSUInteger)splitterState;
-(void)_startMonitoringWithQueue:(id)arg0 ;
-(void)_stopMonitoring;
-(void)splitterState:(id)arg0 ;
-(void)updateSplitterState:(NSUInteger)arg0 shouldDisableSpeakerVerificationInSplitterMode:(BOOL)arg1 ;


@end


#endif