// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOMAPTRANSITGEOMETRYFINDER_H
#define GEOMAPTRANSITGEOMETRYFINDER_H



#import "GEOMapRequest.h"
#import "GEOMapTileFinder.h"

@interface GEOMapTransitGeometryFinder : GEOMapRequest {
    GEOMapTileFinder *_tileFinder;
    NSUInteger _transitID;
}




-(id)initWithMap:(id)arg0 transitID:(NSUInteger)arg1 coordinate:(struct ? )arg2 ;
-(void)cancel;
-(void)findTransitGeometryWithHandler:(id)arg0 ;


@end


#endif