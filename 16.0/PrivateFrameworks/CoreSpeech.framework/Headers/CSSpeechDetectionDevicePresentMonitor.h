// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSSPEECHDETECTIONDEVICEPRESENTMONITOR_H
#define CSSPEECHDETECTIONDEVICEPRESENTMONITOR_H



#import "CSEventMonitor.h"

@interface CSSpeechDetectionDevicePresentMonitor : CSEventMonitor



+(id)sharedInstance;
-(BOOL)isPresent;
-(id)init;
-(void)_startMonitoringWithQueue:(id)arg0 ;
-(void)_startObservingSpeechDetectionVADPresence;
-(void)_startObservingSystemControllerLifecycle;
-(void)_stopMonitoring;
-(void)_systemControllerDied:(id)arg0 ;
-(void)handleSpeechDetectionVADPresentChange:(id)arg0 ;


@end


#endif