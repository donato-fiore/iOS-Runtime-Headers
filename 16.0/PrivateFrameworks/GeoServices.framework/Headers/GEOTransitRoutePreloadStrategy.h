// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOTRANSITROUTEPRELOADSTRATEGY_H
#define GEOTRANSITROUTEPRELOADSTRATEGY_H

@class NSMutableDictionary, NSString;
@protocol GEOResourceManifestTileGroupObserver, GEORoutePreloadStrategy, OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "GEOTransitSuggestedRoute.h"
#import "_GEOTransitRoutePreloaderData.h"
#import "GEOMapServiceTraits.h"
#import "GEORoutePreloader.h"
#import "GEOComposedRoute.h"

@interface GEOTransitRoutePreloadStrategy : NSObject <GEOResourceManifestTileGroupObserver, GEORoutePreloadStrategy>

 {
    GEOTransitSuggestedRoute *_suggestedRoute;
    _GEOTransitRoutePreloaderData *_reserved;
    GEOMapServiceTraits *_traits;
    CGFloat _endRoutePosition;
    NSUInteger _indexOfLastStepWithPreparedBatch;
    CGFloat _radialDistanceToImplicateTilesMeters;
    NSInteger _tilesRequested;
    BOOL _shouldPreloadEntireRoute;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_source> *_geodCrashTimer;
    CGFloat _currentRoutePosition;
    int _downloadState;
    CGFloat _stepSizeInMeters;
    BOOL _enabled;
    NSMutableDictionary *_tileSetStyles;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) GEORoutePreloader *preloader; // ivar: _preloader
@property (retain, nonatomic) GEOComposedRoute *route; // ivar: _route
@property (readonly) Class superclass;


-(NSInteger)tilesRequested;
-(id)init;
-(struct PolylineCoordinate )_polylineCoordinateForDouble:(CGFloat)arg0 ;
-(void)_cancelAllBatches;
-(void)_geodCrashed;
-(void)_ignoreAlreadyRequestedTilesAndUpdateGlobalListWithNonDuplicatesForTileKeyList:(id)arg0 ;
-(void)_loadPlacecardsForBatch:(id)arg0 ;
-(void)_loadTilesForBatch:(id)arg0 ;
-(void)_makeBatchForTilesAroundStationsForSteps:(id)arg0 ;
-(void)_makeBatchesForSteps:(id)arg0 ;
-(void)_makePreloadBatchForPlaceDataOnSteps:(id)arg0 ;
-(void)_makePreloadBatchForSteps:(id)arg0 ;
-(void)_makePreloadBatchForTilesOnRouteWithSteps:(id)arg0 andPriority:(unsigned int)arg1 ;
-(void)_performNextRequests;
-(void)_processBatches;
-(void)_processedFinishedBatch:(id)arg0 withPartialStatus:(NSUInteger)arg1 ;
-(void)_resetErrorCounts;
-(void)_retryFailuresWithErrorsReset:(BOOL)arg0 ;
-(void)_start;
-(void)_stop;
-(void)addTileSetStyle:(int)arg0 betweenZoom:(unsigned int)arg1 andZoom:(unsigned int)arg2 ;
-(void)observedNetworkQualityDidChangeFrom:(NSUInteger)arg0 to:(NSUInteger)arg1 ;
-(void)performTearDown;
-(void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg0 ;
-(void)setShouldPreloadEntireRoute:(BOOL)arg0 ;
-(void)setTraits:(id)arg0 ;
-(void)start;
-(void)stop;
-(void)updateWithRoute:(id)arg0 routeMatch:(id)arg1 ;
-(void)updateWithRouteMatch:(id)arg0 ;


@end


#endif