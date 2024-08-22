// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOMAPFEATUREACCESS_H
#define GEOMAPFEATUREACCESS_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "GEOTileLoader.h"

@interface GEOMapFeatureAccess : NSObject {
    NSObject<OS_dispatch_queue> *_callbackQueue;
    GEOTileLoader *_tileLoader;
    CGFloat _syncTimeout;
}


@property (nonatomic) BOOL allowNetworkTileLoad; // ivar: _allowNetworkTileLoad
@property (nonatomic) BOOL allowStaleData; // ivar: _allowStaleData
@property (nonatomic) BOOL cachedTilesCallbackImmediately; // ivar: _cachedTilesCallbackImmediately
@property (nonatomic) BOOL flipNegativeTravelDirectionRoads; // ivar: _flipNegativeTravelDirectionRoads
@property (nonatomic) BOOL joinAllRoadsByMuid; // ivar: _joinAllRoadsByMuid
@property (nonatomic) CGFloat syncTimeout;
@property (nonatomic) BOOL visitDoubleTravelDirectionRoadsTwice; // ivar: _visitDoubleTravelDirectionRoadsTwice


+(struct ? )tileSetInfoForStyle:(int)arg0 scale:(int)arg1 ;
// -(id)_findChildrenOfTransitPoint:(id)arg0 handler:(id)arg1 completionHandler:(unk)arg2  ;
// -(id)_findParentOfTransitPoint:(id)arg0 handler:(id)arg1 completionHandler:(unk)arg2  ;
// -(id)_findTransitPointsOfType:(NSUInteger)arg0 nearCoordinate:(struct ? )arg1 radius:(CGFloat)arg2 handler:(id)arg3 completionHandler:(unk)arg4  ;
-(id)_openTileLoaderWithCompletionHandler:(SEL)arg0 ;
-(id)_requestParameters;
-(id)_synchronousFindWithHandler:(id)arg0 ;
// -(id)findAllRoadsAtNextIntersectionOf:(id)arg0 handler:(id)arg1 completionHandler:(unk)arg2  ;
// -(id)findAllRoadsAtPreviousIntersectionOf:(id)arg0 handler:(id)arg1 completionHandler:(unk)arg2  ;
// -(id)findBuildingsNear:(struct ? )arg0 radius:(CGFloat)arg1 handler:(id)arg2 completionHandler:(unk)arg3  ;
// -(id)findBuildingsNear:(struct ? )arg0 radius:(CGFloat)arg1 tileSetStyle:(int)arg2 handler:(id)arg3 completionHandler:(unk)arg4  ;
// -(id)findRoadWithID:(NSUInteger)arg0 handler:(id)arg1 completionHandler:(unk)arg2  ;
// -(id)findRoadWithMuid:(NSUInteger)arg0 nearCoordinate:(struct ? )arg1 handler:(id)arg2 completionHandler:(unk)arg3  ;
// -(id)findRoadsFromJunction:(id)arg0 handler:(id)arg1 completionHandler:(unk)arg2  ;
// -(id)findRoadsFromNextIntersectionOf:(id)arg0 handler:(id)arg1 completionHandler:(unk)arg2  ;
// -(id)findRoadsFromPreviousIntersectionOf:(id)arg0 handler:(id)arg1 completionHandler:(unk)arg2  ;
// -(id)findRoadsNear:(struct ? )arg0 radius:(CGFloat)arg1 handler:(id)arg2 completionHandler:(unk)arg3  ;
// -(id)findRoadsToJunction:(id)arg0 handler:(id)arg1 completionHandler:(unk)arg2  ;
// -(id)findRoadsToNextIntersectionOf:(id)arg0 handler:(id)arg1 completionHandler:(unk)arg2  ;
// -(id)findRoadsToPreviousIntersectionOf:(id)arg0 handler:(id)arg1 completionHandler:(unk)arg2  ;
// -(id)findRunningTrackFlagsNear:(struct ? )arg0 radius:(CGFloat)arg1 handler:(id)arg2 completionHandler:(unk)arg3  ;
// -(id)findRunningTracksNear:(struct ? )arg0 radius:(CGFloat)arg1 handler:(id)arg2 completionHandler:(unk)arg3  ;
// -(id)findTransitAccessPointsForStation:(id)arg0 handler:(id)arg1 completionHandler:(unk)arg2  ;
-(id)findTransitGeometryForPoint:(id)arg0 completionHandler:(id)arg1 ;
// -(id)findTransitHallForStop:(id)arg0 handler:(id)arg1 completionHandler:(unk)arg2  ;
// -(id)findTransitHallsForStation:(id)arg0 handler:(id)arg1 completionHandler:(unk)arg2  ;
// -(id)findTransitHallsNear:(struct ? )arg0 radius:(CGFloat)arg1 handler:(id)arg2 completionHandler:(unk)arg3  ;
// -(id)findTransitLinksNear:(struct ? )arg0 radius:(CGFloat)arg1 handler:(id)arg2 completionHandler:(unk)arg3  ;
// -(id)findTransitPointWithID:(NSUInteger)arg0 near:(struct ? )arg1 pointHandler:(id)arg2 completionHandler:(unk)arg3  ;
// -(id)findTransitStationForHall:(id)arg0 handler:(id)arg1 completionHandler:(unk)arg2  ;
// -(id)findTransitStationsNear:(struct ? )arg0 radius:(CGFloat)arg1 handler:(id)arg2 completionHandler:(unk)arg3  ;
// -(id)findTransitStopsForHall:(id)arg0 handler:(id)arg1 completionHandler:(unk)arg2  ;
// -(id)findTransitStopsNear:(struct ? )arg0 radius:(CGFloat)arg1 handler:(id)arg2 completionHandler:(unk)arg3  ;
-(id)init;
-(id)initWithQueue:(id)arg0 ;
-(id)initWithQueue:(id)arg0 memoryCacheCountLimit:(NSUInteger)arg1 memoryCacheCostLimit:(NSUInteger)arg2 ;
-(id)roadTileKeysNear:(struct ? )arg0 radius:(CGFloat)arg1 ;
-(id)synchronousFindRoadWithID:(NSUInteger)arg0 ;
-(id)synchronousFindRoadWithMuid:(NSUInteger)arg0 nearCoordinate:(struct ? )arg1 ;
-(id)synchronousFindRoadsFromNextIntersectionOf:(id)arg0 ;
-(id)synchronousFindRoadsFromPreviousIntersectionOf:(id)arg0 ;
-(id)synchronousFindRoadsNear:(struct ? )arg0 radius:(CGFloat)arg1 ;
-(id)synchronousFindRoadsToNextIntersectionOf:(id)arg0 ;
-(id)synchronousFindRoadsToPreviousIntersectionOf:(id)arg0 ;
-(void)_clearStandardTilesWithType:(int)arg0 ;
-(void)_preloadTilesNear:(struct ? )arg0 radius:(CGFloat)arg1 preloadToDiskOnly:(BOOL)arg2 tileSetStyle:(int)arg3 tileScale:(int)arg4 completionHandler:(id)arg5 ;
-(void)clearAllTiles;
-(void)clearBuildingTiles;
-(void)clearRoadTiles;
-(void)clearRunningTrackTiles;
-(void)clearTransitTiles;
-(void)preloadBuildingTilesNear:(struct ? )arg0 radius:(CGFloat)arg1 completionHandler:(id)arg2 ;
-(void)preloadBuildingTilesNear:(struct ? )arg0 radius:(CGFloat)arg1 preloadToDiskOnly:(BOOL)arg2 completionHandler:(id)arg3 ;
-(void)preloadBuildingTilesNear:(struct ? )arg0 radius:(CGFloat)arg1 tileSetStyle:(int)arg2 preloadToDiskOnly:(BOOL)arg3 completionHandler:(id)arg4 ;
-(void)preloadRoadTilesNear:(struct ? )arg0 radius:(CGFloat)arg1 completionHandler:(id)arg2 ;
-(void)preloadRoadTilesNear:(struct ? )arg0 radius:(CGFloat)arg1 preloadToDiskOnly:(BOOL)arg2 completionHandler:(id)arg3 ;
-(void)preloadTransitTilesNear:(struct ? )arg0 radius:(CGFloat)arg1 completionHandler:(id)arg2 ;
-(void)preloadTransitTilesNear:(struct ? )arg0 radius:(CGFloat)arg1 preloadToDiskOnly:(BOOL)arg2 completionHandler:(id)arg3 ;


@end


#endif