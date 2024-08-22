// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSAUDIOROUTECHANGEMONITORIMPL_H
#define CSAUDIOROUTECHANGEMONITORIMPL_H

@protocol OS_dispatch_queue;


#import "CSAudioRouteChangeMonitor.h"

@interface CSAudioRouteChangeMonitorImpl : CSAudioRouteChangeMonitor {
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _isHearstConnected;
    BOOL _isHearstRouted;
    BOOL _isJarvisConnected;
    BOOL _isSiriInputSourceOutOfBand;
}




-(BOOL)_fetchHearstConnectionState;
-(BOOL)_fetchHearstRoutedState;
-(BOOL)_fetchJarvisConnectionState;
-(BOOL)_fetchSiriInputSourceOutOfBandState;
-(BOOL)carPlayConnected;
-(BOOL)hearstConnected;
-(BOOL)hearstRouted;
-(BOOL)jarvisConnected;
-(BOOL)siriInputSourceOutOfBand;
-(id)init;
-(void)_notifyHearstConnectionState:(BOOL)arg0 ;
-(void)_notifyHearstRoutedState:(BOOL)arg0 ;
-(void)_notifyJarvisConnectionState:(BOOL)arg0 ;
-(void)_notifySiriInputSourceOutOfBandState:(BOOL)arg0 ;
-(void)_startMonitoringWithQueue:(id)arg0 ;
-(void)_startObservingAudioRouteChange;
-(void)_startObservingSystemControllerLifecycle;
-(void)_stopMonitoring;
-(void)_systemControllerDied:(id)arg0 ;
-(void)carPlayAuxStreamSupportDidChange:(id)arg0 ;
-(void)carPlayIsConnectedDidChange:(id)arg0 ;
-(void)getHearstConnected:(id)arg0 ;
-(void)getHearstRouted:(id)arg0 ;
-(void)getJarvisConnected:(id)arg0 ;
-(void)getSiriInputSourceOutOfBand:(id)arg0 ;
-(void)pickableRoutesDidChange:(id)arg0 ;
-(void)preferredExternalRouteDidChange:(id)arg0 ;


@end


#endif