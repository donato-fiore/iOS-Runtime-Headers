// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VTAUDIOROUTECHANGEMONITOR_H
#define VTAUDIOROUTECHANGEMONITOR_H



#import "VTEventMonitor.h"

@interface VTAudioRouteChangeMonitor : VTEventMonitor {
    NSUInteger _hearstConnection;
}




+(id)sharedInstance;
-(BOOL)_hasDoAPSupport:(struct __CFDictionary *)arg0 ;
-(BOOL)_hasInEarDetectSupport:(struct __CFDictionary *)arg0 ;
-(BOOL)_isActiveRoute:(struct __CFDictionary *)arg0 ;
-(NSUInteger)_updateHearstConnectionStatus;
-(NSUInteger)hearstConnectionStatus;
-(id)_CMSessionDispatchQueue;
-(id)init;
-(void)_notifyObserver:(id)arg0 ;
-(void)_startMonitoringWithQueue:(id)arg0 ;
-(void)_stopMonitoring;
-(void)updateExternalRouteConnectionStatus;


@end


#endif