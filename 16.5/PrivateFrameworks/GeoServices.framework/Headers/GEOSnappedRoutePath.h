// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOSNAPPEDROUTEPATH_H
#define GEOSNAPPEDROUTEPATH_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "GEOComposedRoute.h"
#import "GEOMapRequest.h"
#import "GEOComposedRouteSection.h"

@interface GEOSnappedRoutePath : NSObject {
    GEOComposedRoute *_route;
    GEOMapRequest *_edgeSearchRequest;
    *__CFSet _observers;
    unique_ptr<geo::RouteMapMatchingSection, std::default_delete<geo::RouteMapMatchingSection>> _mapMatchingSection;
    BOOL _hasCompletedMapMatching;
    unsigned int _unsnappedPointCount;
    *GeoCodecsVectorTilePoint3D _unsnappedPoints;
}


@property (readonly) NSArray *edges; // ivar: _edges
@property (readonly) BOOL hasCompletedMapMatching;
@property (readonly) BOOL isMapMatched;
@property (readonly) BOOL isMapMatching;
@property (readonly) *RouteMapMatchingSection mapMatchingSection;
@property (readonly) unsigned int routeEndIndex; // ivar: _routeEndIndex
@property (readonly) unsigned int routeStartIndex; // ivar: _routeStartIndex
@property (readonly, weak) GEOComposedRouteSection *section; // ivar: _section


-(BOOL)hasObserver:(id)arg0 ;
-(BOOL)unregisterObserver:(id)arg0 ;
-(float)_calculateEdgeLengthFrom:(*void)arg0 to:(*void)arg1 startCoord:(struct PolylineCoordinate *)arg2 endCoord:(struct PolylineCoordinate *)arg3 ;
-(id)description;
-(id)initWithRoute:(id)arg0 section:(id)arg1 routeStartIndex:(unsigned int)arg2 routeEndIndex:(unsigned int)arg3 ;
-(void)_debugPrintEdge:(id)arg0 ;
-(void)dealloc;
-(void)matchWithDecoder:(id)arg0 completionHandler:(id)arg1 ;
-(void)registerObserver:(id)arg0 ;


@end


#endif