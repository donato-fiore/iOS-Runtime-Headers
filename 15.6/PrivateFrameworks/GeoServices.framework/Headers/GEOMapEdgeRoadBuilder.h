// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOMAPEDGEROADBUILDER_H
#define GEOMAPEDGEROADBUILDER_H



#import "GEOMapEdgeBuilder.h"
#import "GEOVectorTile.h"

@interface GEOMapEdgeRoadBuilder : GEOMapEdgeBuilder {
    deque<GEORoadEdge *, std::allocator<GEORoadEdge *>> _edges;
    GEOVectorTile *_retainedTile;
}




-(BOOL)_findEdgeAheadInTile:(id)arg0 ;
-(BOOL)_findEdgeBehindInTile:(id)arg0 ;
-(BOOL)_shouldFindEdgeAhead;
-(BOOL)_shouldFindEdgeBehind;
-(NSUInteger)_connectionTypeForEdge:(id)arg0 points:(struct GeoCodecsVectorTilePoint *)arg1 connectingTilePoint:(struct Matrix<float, 2, 1> )arg2 ;
-(NSUInteger)_maxTileCount;
-(id)_firstTile;
-(id)_lastTile;
-(id)_tileFinderForMap:(id)arg0 center:(struct ? )arg1 radius:(CGFloat)arg2 ;
-(id)initWithMap:(id)arg0 roadFeature:(id)arg1 shouldFlip:(BOOL)arg2 ;
-(struct Matrix<float, 2, 1> )_firstPoint;
-(struct Matrix<float, 2, 1> )_lastPoint;
-(void)_buildCompleteEdge;
-(void)dealloc;


@end


#endif