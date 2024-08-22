// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOMAPTILEFINDER_H
#define GEOMAPTILEFINDER_H



#import "GEOMapRequest.h"
#import "GEOMapAccess.h"

@interface GEOMapTileFinder : GEOMapRequest {
    ? _center;
    CGFloat _radius;
    BOOL _isCanceling;
}


@property (readonly, nonatomic) GEOMapAccess *map;
@property (copy, nonatomic) id *tileHandler; // ivar: _tileHandler
@property (readonly, nonatomic) int tileScale; // ivar: _tileScale
@property (readonly, nonatomic) int tileSize; // ivar: _tileSize
@property (readonly, nonatomic) int tileStyle; // ivar: _tileStyle
@property (readonly, nonatomic) NSUInteger zoomLevel; // ivar: _zoomLevel


+(id)buildingsTileFinderForMap:(id)arg0 center:(struct ? )arg1 radius:(CGFloat)arg2 ;
+(id)detailedTransitTileFinderForMap:(id)arg0 center:(struct ? )arg1 radius:(CGFloat)arg2 ;
+(id)realisticTileFinderForMap:(id)arg0 center:(struct ? )arg1 radius:(CGFloat)arg2 ;
+(id)transitGeometryTileFinderForMap:(id)arg0 center:(struct ? )arg1 radius:(CGFloat)arg2 ;
-(id)_initWithMap:(id)arg0 zoomLevel:(NSUInteger)arg1 tileSize:(int)arg2 tileScale:(int)arg3 tileStyle:(int)arg4 center:(struct ? )arg5 radius:(CGFloat)arg6 ;
-(struct _GEOTileKey )_adjacentTileKey:(struct _GEOTileKey *)arg0 dirX:(int)arg1 dirY:(int)arg2 ;
-(void)_fetchDataForKeys:(*void)arg0 ;
-(void)cancel;
-(void)dealloc;
-(void)findTiles:(id)arg0 ;
// -(void)findTiles:(id)arg0 excludingKey:(unk)arg1  ;
-(void)findTilesAdjacentToTile:(struct _GEOTileKey *)arg0 containingPoint:(*void)arg1 tileHandler:(id)arg2 ;


@end


#endif