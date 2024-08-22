// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOMAPEDGETRANSITBUILDER_H
#define GEOMAPEDGETRANSITBUILDER_H



#import "GEOMapEdgeBuilder.h"

@interface GEOMapEdgeTransitBuilder : GEOMapEdgeBuilder {
    deque<geo::TransitEdgePiece, std::allocator<geo::TransitEdgePiece>> _pieces;
}




-(BOOL)_findEdgeAheadInTile:(id)arg0 ;
-(BOOL)_findEdgeBehindInTile:(id)arg0 ;
-(BOOL)_shouldFindEdgeAhead;
-(BOOL)_shouldFindEdgeBehind;
-(NSUInteger)_maxTileCount;
-(id)_firstTile;
-(id)_lastTile;
-(id)_tileFinderForMap:(id)arg0 center:(struct ? )arg1 radius:(CGFloat)arg2 ;
-(id)initWithMap:(id)arg0 firstPiece:(struct TransitEdgePiece *)arg1 ;
-(struct Matrix<float, 2, 1> )_firstPoint;
-(struct Matrix<float, 2, 1> )_lastPoint;
-(void)_buildCompleteEdge;


@end


#endif