// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CSAUDIOROUTECHANGEMONITOR_H
#define CSAUDIOROUTECHANGEMONITOR_H



#import "CSEventMonitor.h"

@interface CSAudioRouteChangeMonitor : CSEventMonitor



+(id)sharedInstance;
-(BOOL)hearstConnected;
-(BOOL)jarvisConnected;
-(void)_startMonitoringWithQueue:(id)arg0 ;
-(void)_stopMonitoring;
-(void)getHearstConnected:(id)arg0 ;
-(void)getJarvisConnected:(id)arg0 ;


@end


#endif