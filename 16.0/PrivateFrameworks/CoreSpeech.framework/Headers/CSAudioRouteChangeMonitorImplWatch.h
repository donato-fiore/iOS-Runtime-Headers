// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSAUDIOROUTECHANGEMONITORIMPLWATCH_H
#define CSAUDIOROUTECHANGEMONITORIMPLWATCH_H

@protocol OS_dispatch_queue;


#import "CSAudioRouteChangeMonitor.h"

@interface CSAudioRouteChangeMonitorImplWatch : CSAudioRouteChangeMonitor {
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _isHearstConnected;
    BOOL _isHearstRouted;
}




-(BOOL)_fetchHearstRoutedState;
-(BOOL)carPlayConnected;
-(BOOL)hearstConnected;
-(BOOL)hearstRouted;
-(BOOL)jarvisConnected;
-(id)init;
-(void)_notifyHearstRoutedState:(BOOL)arg0 ;
-(void)_startMonitoringWithQueue:(id)arg0 ;
-(void)_startObservingAudioRouteChange;
-(void)_startObservingSystemControllerLifecycle;
-(void)_stopMonitoring;
-(void)_systemControllerDied:(id)arg0 ;
-(void)activeAudioRouteDidChange:(id)arg0 ;
-(void)getHearstConnected:(id)arg0 ;
-(void)getHearstRouted:(id)arg0 ;
-(void)getJarvisConnected:(id)arg0 ;


@end


#endif