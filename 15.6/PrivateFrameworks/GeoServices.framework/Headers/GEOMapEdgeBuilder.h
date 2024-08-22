// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOMAPEDGEBUILDER_H
#define GEOMAPEDGEBUILDER_H



#import "GEOMapRequest.h"
#import "GEOMapTileFinder.h"
#import "GEOMapAccess.h"

@interface GEOMapEdgeBuilder : GEOMapRequest {
    BOOL _buildAhead;
    BOOL _buildBehind;
    Matrix<float, 2, 1> _firstTilePoint;
    Matrix<float, 2, 1> _lastTilePoint;
    GEOMapTileFinder *_currentTileFinder;
    unordered_set<_GEOTileKey, std::hash<GEOTileKey>, std::equal_to<GEOTileKey>, std::allocator<_GEOTileKey>> _tileKeysSeen;
    BOOL _searchDirection;
}


@property (nonatomic) NSUInteger buildDirection; // ivar: _buildDirection
@property (copy, nonatomic) id *edgeHandler; // ivar: _edgeHandler
@property (readonly, nonatomic) GEOMapAccess *map;


-(BOOL)_edgeStart:(*void)arg0 end:(*void)arg1 connectsTo:(*void)arg2 ;
-(BOOL)_findEdgeAhead;
-(BOOL)_findEdgeAheadInTile:(id)arg0 ;
-(BOOL)_findEdgeBehind;
-(BOOL)_findEdgeBehindInTile:(id)arg0 ;
-(BOOL)_findNextEdge;
-(BOOL)_pointConnects:(*void)arg0 rect:(struct ? *)arg1 to:(struct ? *)arg2 ;
-(BOOL)_shouldFindEdgeAhead;
-(BOOL)_shouldFindEdgeBehind;
-(NSUInteger)_maxTileCount;
-(id)_firstTile;
-(id)_lastTile;
-(id)_tileFinderForMap:(id)arg0 center:(struct ? )arg1 radius:(CGFloat)arg2 ;
-(id)initWithMap:(id)arg0 ;
-(struct Matrix<float, 2, 1> )_firstPoint;
-(struct Matrix<float, 2, 1> )_lastPoint;
-(void)_buildCompleteEdge;
-(void)_findTilesAdjacentToTile:(struct _GEOTileKey *)arg0 containingPoint:(*void)arg1 findAhead:(BOOL)arg2 ;
-(void)buildEdge:(id)arg0 ;
-(void)cancel;


@end


#endif