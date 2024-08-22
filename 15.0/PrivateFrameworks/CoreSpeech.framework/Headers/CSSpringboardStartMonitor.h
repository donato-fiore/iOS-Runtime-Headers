// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CSSPRINGBOARDSTARTMONITOR_H
#define CSSPRINGBOARDSTARTMONITOR_H



#import "CSEventMonitor.h"

@interface CSSpringboardStartMonitor : CSEventMonitor {
    int _notifyToken;
    BOOL _isSpringBoardStarted;
}




+(id)sharedInstance;
-(BOOL)_checkSpringBoardStarted;
-(BOOL)isSpringboardStarted;
-(id)init;
-(void)_didReceiveSpringboardStarted:(BOOL)arg0 ;
-(void)_didReceiveSpringboardStartedInQueue:(BOOL)arg0 ;
-(void)_notifyObserver:(id)arg0 withStarted:(BOOL)arg1 ;
-(void)_startMonitoringWithQueue:(id)arg0 ;
-(void)_stopMonitoring;


@end


#endif