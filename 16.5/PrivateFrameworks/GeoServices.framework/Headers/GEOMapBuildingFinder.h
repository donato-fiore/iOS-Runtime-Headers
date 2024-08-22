// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOMAPBUILDINGFINDER_H
#define GEOMAPBUILDINGFINDER_H



#import "GEOMapRequest.h"
#import "GEOMapTileFinder.h"

@interface GEOMapBuildingFinder : GEOMapRequest {
    GEOMapTileFinder *_tileFinder;
    ? _centerCoordinate;
    CGFloat _radius;
}




-(id)initWithMap:(id)arg0 centerCoordinate:(struct ? )arg1 radius:(CGFloat)arg2 ;
-(void)cancel;
-(void)findBuildingsWithHandler:(id)arg0 ;


@end


#endif