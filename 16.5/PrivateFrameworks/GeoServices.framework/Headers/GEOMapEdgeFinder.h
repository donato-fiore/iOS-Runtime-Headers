// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOMAPEDGEFINDER_H
#define GEOMAPEDGEFINDER_H

@class NSMutableSet;


#import "GEOMapRequest.h"
#import "GEOMapTileFinder.h"
#import "GEOMapAccess.h"

@interface GEOMapEdgeFinder : GEOMapRequest {
    GEOMapTileFinder *_tileFinder;
    ? _centerPoint;
    CGFloat _mapRadius;
    NSMutableSet *_edgeBuilders;
}


@property (copy, nonatomic) id *edgeHandler; // ivar: _edgeHandler
@property (readonly, nonatomic) GEOMapAccess *map;


-(BOOL)_checkEdgeForDuplicates:(*void)arg0 ;
-(id)initWithMap:(id)arg0 center:(struct ? )arg1 radius:(CGFloat)arg2 ;
-(void)_buildersInTile:(id)arg0 localPoint:(*void)arg1 localRadiusSqr:(float)arg2 localSearch:(*void)arg3 handler:(id)arg4 ;
-(void)cancel;
-(void)findEdges:(id)arg0 ;


@end


#endif