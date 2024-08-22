// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WEBMEDIASESSIONHELPER_H
#define WEBMEDIASESSIONHELPER_H


#import <Foundation/Foundation.h>


@interface WebMediaSessionHelper : NSObject {
    *void _callback;
    RetainPtr<AVRouteDetector> _routeDetector;
    BOOL _monitoringAirPlayRoutes;
    BOOL _startMonitoringAirPlayRoutesPending;
}




-(BOOL)hasWirelessTargetsAvailable;
-(id)initWithCallback:(*void)arg0 ;
-(void)activeOutputDeviceDidChange:(id)arg0 ;
-(void)applicationDidBecomeActive:(id)arg0 ;
-(void)applicationDidEnterBackground:(id)arg0 ;
-(void)applicationWillEnterForeground:(id)arg0 ;
-(void)applicationWillResignActive:(id)arg0 ;
-(void)carPlayIsConnectedDidChange:(id)arg0 ;
-(void)clearCallback;
-(void)dealloc;
-(void)mediaServerConnectionDied:(id)arg0 ;
-(void)startMonitoringAirPlayRoutes;
-(void)stopMonitoringAirPlayRoutes;
-(void)wirelessRoutesAvailableDidChange:(id)arg0 ;


@end


#endif