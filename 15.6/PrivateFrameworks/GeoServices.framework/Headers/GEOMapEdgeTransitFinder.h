// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOMAPEDGETRANSITFINDER_H
#define GEOMAPEDGETRANSITFINDER_H



#import "GEOMapEdgeFinder.h"

@interface GEOMapEdgeTransitFinder : GEOMapEdgeFinder {
    unordered_set<geo::TransitEdgePiece, std::hash<geo::TransitEdgePiece>, std::equal_to<geo::TransitEdgePiece>, std::allocator<geo::TransitEdgePiece>> _piecesConsidered;
}




-(BOOL)_checkEdgeForDuplicates:(*void)arg0 ;
-(id)initWithMap:(id)arg0 center:(struct ? )arg1 radius:(CGFloat)arg2 ;
-(void)_buildersInTile:(id)arg0 localPoint:(*void)arg1 localRadiusSqr:(float)arg2 localSearch:(*void)arg3 handler:(id)arg4 ;


@end


#endif