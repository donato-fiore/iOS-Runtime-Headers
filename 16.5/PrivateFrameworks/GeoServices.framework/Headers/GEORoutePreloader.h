// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOROUTEPRELOADER_H
#define GEOROUTEPRELOADER_H

@class NSArray, geo_isolater, NSString;
@protocol GEOTileLoaderObserver, OS_dispatch_queue, GEORoutePreloaderDelegate;

#import <Foundation/Foundation.h>

#import "GEORoutePreloaderStatisticsInfo.h"
#import "GEOApplicationAuditToken.h"
#import "GEOComposedRoute.h"

@interface GEORoutePreloader : NSObject <GEOTileLoaderObserver>

 {
    NSObject<OS_dispatch_queue> *_workQueue;
    NSArray *_strategies;
    BOOL _running;
    NSUInteger _networkQuality;
    GEOOnce_s _didTearDown;
    geo_isolater *_deviceQualitiesIsolation;
    int _batteryNotificationToken;
    BOOL _pluggedIn;
    GEORoutePreloaderStatisticsInfo *_statistics;
}


@property (readonly, nonatomic) GEOApplicationAuditToken *auditToken; // ivar: _auditToken
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<GEORoutePreloaderDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger networkQuality;
@property (readonly, nonatomic) GEOComposedRoute *route; // ivar: _route
@property (readonly) Class superclass;


-(BOOL)isPluggedIn;
-(id)init;
-(id)initWithRoute:(id)arg0 strategies:(id)arg1 ;
-(id)initWithRoute:(id)arg0 strategies:(id)arg1 auditToken:(id)arg2 ;
-(void)_networkReachabilityChanged:(id)arg0 ;
-(void)_performTearDown;
-(void)_registerForBatteryStatusChanges;
-(void)_registerForNetworkQualityObservation;
-(void)_start;
-(void)_stop;
-(void)_unregisterForBatteryStatusChanges;
-(void)_unregisterForNetworkQualityObservation;
-(void)_updateBatteryState;
-(void)_updateObservedNetworkPerformanceForDownload:(NSUInteger)arg0 duration:(CGFloat)arg1 ;
-(void)dealloc;
-(void)incrementTileLoadStatistic:(NSInteger)arg0 amount:(NSUInteger)arg1 ;
-(void)preloadStrategy:(id)arg0 failedToLoadTileKey:(struct _GEOTileKey *)arg1 error:(id)arg2 ;
-(void)preloadStrategy:(id)arg0 loadedTileKey:(struct _GEOTileKey *)arg1 source:(NSInteger)arg2 sizeInBytes:(NSUInteger)arg3 ;
-(void)start;
-(void)stop;
-(void)tearDown;
-(void)tileLoader:(id)arg0 failedTileKey:(struct _GEOTileKey *)arg1 error:(id)arg2 withOptions:(NSUInteger)arg3 ;
-(void)tileLoader:(id)arg0 loadedTileKey:(struct _GEOTileKey *)arg1 sizeInBytes:(NSUInteger)arg2 fromSource:(NSInteger)arg3 withOptions:(NSUInteger)arg4 ;
-(void)updateObservedNetworkPerformanceForDownload:(NSUInteger)arg0 duration:(CGFloat)arg1 ;
-(void)updateObservedNetworkPerformanceWithServerError;
-(void)updateWithRouteMatch:(id)arg0 ;


@end


#endif