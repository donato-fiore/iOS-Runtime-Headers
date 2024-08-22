// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSCLAMSHELLSTATEMONITOR_H
#define CSCLAMSHELLSTATEMONITOR_H



#import "CSEventMonitor.h"

@interface CSClamshellStateMonitor : CSEventMonitor



+(id)sharedInstance;
-(BOOL)isClamshellClosed;
-(id)init;
-(void)_didReceiveClamshellStateChangeNotification:(BOOL)arg0 ;
-(void)_notifyObserver:(id)arg0 withClamshellState:(BOOL)arg1 ;
-(void)_startMonitoringWithQueue:(id)arg0 ;
-(void)_stopMonitoring;


@end


#endif