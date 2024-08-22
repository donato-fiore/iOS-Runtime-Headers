// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _GEOROUTEMATCHUPDATER_H
#define _GEOROUTEMATCHUPDATER_H


#import <Foundation/Foundation.h>

#import "GEOTransitRouteMatcher.h"
#import "GEOComposedRoute.h"
#import "GEOMapFeatureAccess.h"
#import "GEOMotionContext.h"

@interface _GEORouteMatchUpdater : NSObject {
    GEOTransitRouteMatcher *_routeMatcher;
    GEOComposedRoute *_route;
    GEOMapFeatureAccess *_mapFeatureAccess;
    GEOMotionContext *_motionContext;
    CGFloat _stationRadius;
}




-(BOOL)_isLocation:(id)arg0 nearStation:(id)arg1 ;
-(BOOL)_isLocation:(id)arg0 nearStop:(id)arg1 ;
-(BOOL)_isLocation:(id)arg0 nearTransitPoint:(struct ? )arg1 transitID:(NSUInteger)arg2 featureSize:(CGFloat)arg3 ;
-(BOOL)updateRouteMatch:(id)arg0 previousRouteMatch:(id)arg1 forLocation:(id)arg2 ;
-(CGFloat)_stationRadiusForStation:(id)arg0 accessPoint:(id)arg1 adjacentWalkingLegCoordinate:(struct ? )arg2 ;
-(NSUInteger)priority;
-(id)initWithTransitRouteMatcher:(id)arg0 ;


@end


#endif