// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOMAPEDGECONNECTIONFINDER_H
#define GEOMAPEDGECONNECTIONFINDER_H

@class NSMutableArray;


#import "GEOMapRequest.h"
#import "GEOMapAccess.h"
#import "GEOMapTileFinder.h"
#import "GEOVectorTile.h"

@interface GEOMapEdgeConnectionFinder : GEOMapRequest {
    GEOMapAccess *_map;
    GEOMapTileFinder *_tileFinder;
    NSMutableArray *_builders;
    GEOVectorTile *_tile;
    *GeoCodecsConnectivityJunction _junction;
    ? _coordinate;
}




-(id)initWithMap:(id)arg0 tile:(id)arg1 junction:(struct GeoCodecsConnectivityJunction *)arg2 coordinate:(struct ? )arg3 ;
// -(void)_findConnections:(id)arg0 incoming:(unk)arg1  ;
-(void)cancel;
-(void)findConnectionsIn:(id)arg0 ;
-(void)findConnectionsOut:(id)arg0 ;


@end


#endif