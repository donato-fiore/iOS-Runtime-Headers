// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSCORESPEECHDAEMONSTATEMONITOR_H
#define CSCORESPEECHDAEMONSTATEMONITOR_H



#import "CSEventMonitor.h"

@interface CSCoreSpeechDaemonStateMonitor : CSEventMonitor {
    int _notifyToken;
}




+(id)sharedInstance;
-(id)init;
-(void)_didReceiveDaemonStateChanged:(NSUInteger)arg0 ;
-(void)_notifyObserver:(id)arg0 withDaemonState:(NSUInteger)arg1 ;
-(void)_startMonitoringWithQueue:(id)arg0 ;
-(void)_stopMonitoring;
-(void)notifyDaemonStateChanged:(NSUInteger)arg0 ;


@end


#endif