// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CSUSERSESSIONACTIVEMONITOR_H
#define CSUSERSESSIONACTIVEMONITOR_H



#import "CSEventMonitor.h"

@interface CSUserSessionActiveMonitor : CSEventMonitor



+(id)sharedInstance;
-(BOOL)isUserActive;
-(void)_startMonitoringWithQueue:(id)arg0 ;
-(void)_stopMonitoring;


@end


#endif