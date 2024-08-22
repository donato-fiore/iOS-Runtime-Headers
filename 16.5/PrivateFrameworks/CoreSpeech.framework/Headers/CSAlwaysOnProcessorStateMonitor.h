// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSALWAYSONPROCESSORSTATEMONITOR_H
#define CSALWAYSONPROCESSORSTATEMONITOR_H



#import "CSEventMonitor.h"

@interface CSAlwaysOnProcessorStateMonitor : CSEventMonitor {
    BOOL _isListeningEnabled;
    int _notifyToken;
}




+(id)sharedInstance;
-(BOOL)isEnabled;
-(id)init;
-(void)_didReceiveAOPListeningStateChange:(BOOL)arg0 ;
-(void)_notifyObserver:(id)arg0 withEnabled:(BOOL)arg1 ;
-(void)_startMonitoringWithQueue:(id)arg0 ;
-(void)_stopMonitoring;


@end


#endif