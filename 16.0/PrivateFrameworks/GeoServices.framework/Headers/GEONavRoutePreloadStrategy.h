// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEONAVROUTEPRELOADSTRATEGY_H
#define GEONAVROUTEPRELOADSTRATEGY_H

@class NSMutableArray, NSMutableDictionary, NSString;
@protocol GEOResourceManifestTileGroupObserver, GEORoutePreloadStrategy, OS_dispatch_queue, OS_dispatch_source, GEORoutePreloadCamera;

#import <Foundation/Foundation.h>

#import "GEOTileKeyList.h"
#import "GEOSPRMetroAvailabilityFetcher.h"
#import "GEOMapAssetMetadataFetcher.h"
#import "GEORoutePreloader.h"
#import "GEOComposedRoute.h"

@interface GEONavRoutePreloadStrategy : NSObject <GEOResourceManifestTileGroupObserver, GEORoutePreloadStrategy>

 {
    NSObject<OS_dispatch_queue> *_workQueue;
    NSUInteger _signpostID;
    CGFloat _currentRoutePosition;
    int _downloadState;
    GEOTileKeyList *_tilesLoadingOrLoaded;
    GEOTileKeyList *_tilesReceived;
    NSUInteger _tilesLoadedFromNetwork;
    NSMutableArray *_steps;
    unsigned int _stepGeneration;
    NSInteger _currentLoadingSteps;
    BOOL _useCellularCoverage;
    BOOL _anyErrors;
    BOOL _finished;
    CGFloat _beginTime;
    CGFloat _mostRecentErrorTime;
    BOOL _hadEnoughTilesToDisableNetworking;
    NSObject<OS_dispatch_source> *_geodCrashTimer;
    CGFloat _maneuverSizeInMeters;
    BOOL _enabled;
    CGFloat _stepSizeInMeters;
    NSMutableDictionary *_tileSetStyles;
    GEOSPRMetroAvailabilityFetcher *_sprAvailabilityFetcher;
    GEOMapAssetMetadataFetcher *_assetMetadataFetcher;
}


@property (retain, nonatomic) NSObject<GEORoutePreloadCamera> *camera; // ivar: _camera
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL forceDisableMetros; // ivar: _forceDisableMetros
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) GEORoutePreloader *preloader; // ivar: _preloader
@property (retain, nonatomic) GEOComposedRoute *route; // ivar: _route
@property (nonatomic) BOOL shouldLoadAssets; // ivar: _shouldLoadAssets
@property (readonly) Class superclass;


-(id)init;
-(void)_accumulateSteps;
-(void)_cancelAllSteps;
-(void)_cancelRequestsBehindCurrentPosition;
-(void)_cancelStep:(id)arg0 ;
-(void)_geodCrashed;
-(void)_loadStep:(id)arg0 requireWiFi:(BOOL)arg1 ;
-(void)_performNextRequests;
-(void)_performTileRequestsWithCurrentRoutePositionStepIndex:(NSInteger)arg0 firstErrorStepIndex:(NSInteger)arg1 firstLoadStepIndex:(NSInteger)arg2 loadStepsAhead:(NSInteger)arg3 loadStepsAheadIfNoWiFi:(NSInteger)arg4 ;
-(void)_resetErrCounts;
-(void)_retryFailuresWithErrorsReset:(BOOL)arg0 ;
-(void)_start;
-(void)_stop;
-(void)addTileSetStyle:(int)arg0 betweenZoom:(unsigned int)arg1 andZoom:(unsigned int)arg2 ;
-(void)addTileSetStyle:(int)arg0 betweenZoom:(unsigned int)arg1 andZoom:(unsigned int)arg2 restrictions:(NSUInteger)arg3 ;
-(void)observedNetworkQualityDidChangeFrom:(NSUInteger)arg0 to:(NSUInteger)arg1 ;
-(void)performTearDown;
-(void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg0 ;
-(void)start;
-(void)stop;
-(void)updateWithRoute:(id)arg0 routeMatch:(id)arg1 ;
-(void)updateWithRouteMatch:(id)arg0 ;


@end


#endif