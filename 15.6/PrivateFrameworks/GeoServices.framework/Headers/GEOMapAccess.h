// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOMAPACCESS_H
#define GEOMAPACCESS_H

@protocol OS_dispatch_queue, GEOMapAccessRestrictions;


#import "GEOMapRequestManager.h"

@interface GEOMapAccess : GEOMapRequestManager {
    NSObject<OS_dispatch_queue> *_callbackQueue;
}


@property (readonly, nonatomic) BOOL allowsNetworkTileLoad;
@property (readonly, nonatomic) NSUInteger buildingsZoomLevel;
@property (readonly, nonatomic) unsigned int maxTransitZoomLevel;
@property (readonly, nonatomic) unsigned int maxZoomLevel;
@property (readonly, nonatomic) unsigned int minZoomLevel;
@property (weak, nonatomic) NSObject<GEOMapAccessRestrictions> *restrictions; // ivar: _restrictions
@property (readonly, nonatomic) NSUInteger roadsZoomLevel;
@property (copy, nonatomic) id *tileErrorHandler; // ivar: _tileErrorHandler
@property (readonly, nonatomic) NSUInteger transitZoomLevel;
@property (nonatomic) BOOL useMapMatchingTilesetForRoads; // ivar: _useMapMatchingTilesetForRoads
@property (nonatomic) unsigned int zoomLevel;


+(BOOL)supportsBuildingMapAccess;
+(BOOL)supportsRealisticMap;
+(BOOL)supportsRoadMapAccess;
+(BOOL)supportsTransitMap;
+(BOOL)supportsTransitMapAccess;
+(id)map;
+(id)realisticMap;
+(id)transitMap;
-(BOOL)_hasLoadedTilesNearCoordinate:(struct ? )arg0 radius:(CGFloat)arg1 zoomLevel:(NSUInteger)arg2 tileStyle:(int)arg3 tileSize:(int)arg4 tileScale:(int)arg5 ;
-(BOOL)hasLoadedBuildingTilesNearCoordinate:(struct ? )arg0 radius:(CGFloat)arg1 ;
-(BOOL)hasLoadedRoadTilesNearCoordinate:(struct ? )arg0 radius:(CGFloat)arg1 ;
-(BOOL)hasLoadedTransitTilesNearCoordinate:(struct ? )arg0 radius:(CGFloat)arg1 ;
// -(id)_findTransitPointWithID:(NSUInteger)arg0 near:(struct ? )arg1 type:(NSUInteger)arg2 pointHandler:(id)arg3 completionHandler:(unk)arg4  ;
// -(id)_findTransitPointsWithin:(CGFloat)arg0 of:(struct ? )arg1 type:(NSUInteger)arg2 pointHandler:(id)arg3 completionHandler:(unk)arg4  ;
-(id)_transitPointForTransitMapNode:(struct shared_ptr<geo::MapNodeTransit> )arg0 ;
-(id)buildMapEdgeTransitFrom:(struct TransitEdgePiece *)arg0 edgeHandler:(id)arg1 ;
-(id)callbackQueue;
// -(id)findBuildingsWithin:(CGFloat)arg0 of:(struct ? )arg1 buildingHandler:(id)arg2 completionHandler:(unk)arg3  ;
// -(id)findClosestNamedFeaturesAtCoordinate:(struct ? )arg0 roadHandler:(id)arg1 pointHandler:(unk)arg2 polygonHandler:(id)arg3 completionHandler:(unk)arg4  ;
// -(id)findClosestRoadAtCoordinate:(struct ? )arg0 roadHandler:(id)arg1 completionHandler:(unk)arg2  ;
// -(id)findRoadEdgesWithin:(CGFloat)arg0 of:(struct ? )arg1 edgeHandler:(id)arg2 completionHandler:(unk)arg3  ;
// -(id)findRoadTilesWithin:(CGFloat)arg0 of:(struct ? )arg1 tileHander:(id)arg2 completionHandler:(unk)arg3  ;
// -(id)findRoadsWithin:(CGFloat)arg0 of:(struct ? )arg1 handler:(id)arg2 completionHandler:(unk)arg3  ;
// -(id)findTransitEdgesWithin:(CGFloat)arg0 of:(struct ? )arg1 edgeHandler:(id)arg2 completionHandler:(unk)arg3  ;
// -(id)findTransitHallWithID:(NSUInteger)arg0 near:(struct ? )arg1 hallHandler:(id)arg2 completionHandler:(unk)arg3  ;
// -(id)findTransitHallsWithin:(CGFloat)arg0 of:(struct ? )arg1 hallHandler:(id)arg2 completionHandler:(unk)arg3  ;
// -(id)findTransitLinksWithin:(CGFloat)arg0 of:(struct ? )arg1 linkHandler:(id)arg2 completionHandler:(unk)arg3  ;
// -(id)findTransitNodeWithID:(NSUInteger)arg0 near:(struct ? )arg1 nodeHandler:(id)arg2 completionHandler:(unk)arg3  ;
// -(id)findTransitNodesWithin:(CGFloat)arg0 of:(struct ? )arg1 nodeHandler:(id)arg2 completionHandler:(unk)arg3  ;
// -(id)findTransitPointWithID:(NSUInteger)arg0 near:(struct ? )arg1 pointHandler:(id)arg2 completionHandler:(unk)arg3  ;
// -(id)findTransitPointWithParentID:(NSUInteger)arg0 near:(struct ? )arg1 type:(NSUInteger)arg2 pointHandler:(id)arg3 completionHandler:(unk)arg4  ;
// -(id)findTransitPointsWithin:(CGFloat)arg0 of:(struct ? )arg1 pointHandler:(id)arg2 completionHandler:(unk)arg3  ;
// -(id)findTransitStationWithID:(NSUInteger)arg0 near:(struct ? )arg1 stationHandler:(id)arg2 completionHandler:(unk)arg3  ;
// -(id)findTransitStationsWithin:(CGFloat)arg0 of:(struct ? )arg1 stationHandler:(id)arg2 completionHandler:(unk)arg3  ;
// -(id)findTransitStopWithID:(NSUInteger)arg0 near:(struct ? )arg1 stopHandler:(id)arg2 completionHandler:(unk)arg3  ;
// -(id)findTransitStopsWithin:(CGFloat)arg0 of:(struct ? )arg1 stopHandler:(id)arg2 completionHandler:(unk)arg3  ;
-(id)init;
-(void)preloadBuildingTilesNearCoordinate:(struct ? )arg0 radius:(CGFloat)arg1 completionHandler:(id)arg2 ;
-(void)preloadRoadTilesNearCoordinate:(struct ? )arg0 radius:(CGFloat)arg1 completionHandler:(id)arg2 ;
-(void)preloadTransitTilesNearCoordinate:(struct ? )arg0 radius:(CGFloat)arg1 completionHandler:(id)arg2 ;
-(void)setCallbackQueue:(id)arg0 ;


@end


#endif