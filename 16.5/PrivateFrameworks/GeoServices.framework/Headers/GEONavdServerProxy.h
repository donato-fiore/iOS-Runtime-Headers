// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEONAVDSERVERPROXY_H
#define GEONAVDSERVERPROXY_H


#import <Foundation/Foundation.h>


@interface GEONavdServerProxy : NSObject



-(id)init;
-(void)close;
-(void)didPostUINotification:(NSUInteger)arg0 forDestination:(id)arg1 fromClient:(id)arg2 ;
-(void)forceCacheRefresh;
-(void)getDirectionsForClient:(id)arg0 withRouteHypothesisRequest:(id)arg1 andCallback:(id)arg2 ;
-(void)onlyPerformLocalUpdatesForPlannedDestination:(id)arg0 client:(id)arg1 ;
-(void)open;
-(void)requestRefreshForPlannedDestination:(id)arg0 client:(id)arg1 ;
-(void)shouldPostDarwinNotificationForNextUpdate:(BOOL)arg0 ;
-(void)startMonitoringDestination:(id)arg0 forClient:(id)arg1 uuid:(id)arg2 handler:(id)arg3 ;
-(void)statusWithCallback:(id)arg0 ;
-(void)stopMonitoringDestination:(id)arg0 forClient:(id)arg1 uuid:(id)arg2 ;


@end


#endif