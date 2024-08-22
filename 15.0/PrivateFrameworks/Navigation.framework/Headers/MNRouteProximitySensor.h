// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MNROUTEPROXIMITYSENSOR_H
#define MNROUTEPROXIMITYSENSOR_H

@class GEOLocation, GEORouteMatch, GEORouteMatcher, GEOComposedRouteStep, GEOComposedRoute;

#import <Foundation/Foundation.h>


@interface MNRouteProximitySensor : NSObject {
    CGFloat _proximityThreshold;
    GEOLocation *_location;
    GEORouteMatch *_routeMatch;
    GEORouteMatcher *_routeMatcher;
}


@property (readonly, nonatomic) GEOLocation *closestPointOnRoute;
@property (readonly, nonatomic) GEOComposedRouteStep *closestStepOnRoute;
@property (readonly, nonatomic) CGFloat courseOnRoute;
@property (readonly, nonatomic) CGFloat distanceFromDestination;
@property (readonly, nonatomic) CGFloat distanceFromOrigin;
@property (readonly, nonatomic) CGFloat distanceFromRoute;
@property (readonly, nonatomic) GEOLocation *location;
@property (readonly, nonatomic) NSUInteger proximity; // ivar: _proximity
@property (nonatomic) CGFloat proximityThreshold;
@property (readonly, nonatomic) CGFloat remainingTimeOnRoute;
@property (readonly, nonatomic) GEOComposedRoute *route;


-(id)init;
-(id)initWithRoute:(id)arg0 ;
-(void)_updateProximity;
-(void)_updateRouteMatch;
-(void)updateForLocation:(id)arg0 ;


@end


#endif