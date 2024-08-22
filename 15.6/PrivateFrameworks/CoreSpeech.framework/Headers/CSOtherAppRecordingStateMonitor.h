// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CSOTHERAPPRECORDINGSTATEMONITOR_H
#define CSOTHERAPPRECORDINGSTATEMONITOR_H



#import "CSEventMonitor.h"

@interface CSOtherAppRecordingStateMonitor : CSEventMonitor



+(id)sharedInstance;
-(BOOL)isOtherAppRecording;
-(id)init;
-(void)_startMonitoringWithQueue:(id)arg0 ;
-(void)_startObservingOtherAppRecordingState;
-(void)_startObservingSystemControllerLifecycle;
-(void)_stopMonitoring;
-(void)_systemControllerDied:(id)arg0 ;
-(void)handleOtherAppRecordingStateChange:(id)arg0 ;


@end


#endif