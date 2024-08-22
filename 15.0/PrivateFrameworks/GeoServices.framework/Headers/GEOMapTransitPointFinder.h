// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOMAPTRANSITPOINTFINDER_H
#define GEOMAPTRANSITPOINTFINDER_H



#import "GEOMapRequest.h"
#import "GEOMapTileFinder.h"
#import "GEOMapAccess.h"

@interface GEOMapTransitPointFinder : GEOMapRequest {
    GEOMapTileFinder *_tileFinder;
    ? _centerPoint;
    CGFloat _mapRadius;
    NSUInteger _pointID;
    NSUInteger _parentID;
}


@property (readonly, nonatomic) GEOMapAccess *map;


-(id)initWithMap:(id)arg0 approxLocation:(struct ? )arg1 parentID:(NSUInteger)arg2 ;
-(id)initWithMap:(id)arg0 approxLocation:(struct ? )arg1 pointID:(NSUInteger)arg2 ;
-(id)initWithMap:(id)arg0 center:(struct ? )arg1 radius:(CGFloat)arg2 ;
-(void)_validatePoint:(*void)arg0 rect:(struct ? )arg1 localSearch:(struct Box<float, 2> )arg2 validPointHandler:(id)arg3 ;
-(void)cancel;
// -(void)findTransitPointsOfType:(NSUInteger)arg0 nodeHandler:(id)arg1 accessPointHandler:(unk)arg2  ;


@end


#endif