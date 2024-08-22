// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOMAPEDGEROADFINDER_H
#define GEOMAPEDGEROADFINDER_H



#import "GEOMapEdgeFinder.h"

@interface GEOMapEdgeRoadFinder : GEOMapEdgeFinder {
    unordered_set<GEORoadEdge *, std::hash<GEORoadEdge *>, std::equal_to<GEORoadEdge *>, std::allocator<GEORoadEdge *>> _roadsConsidered;
}




-(BOOL)_checkEdgeForDuplicates:(*void)arg0 ;
-(id)initWithMap:(id)arg0 center:(struct ? )arg1 radius:(CGFloat)arg2 ;
-(void)_buildersInTile:(id)arg0 localPoint:(*void)arg1 localRadiusSqr:(float)arg2 localSearch:(*void)arg3 handler:(id)arg4 ;
-(void)dealloc;


@end


#endif