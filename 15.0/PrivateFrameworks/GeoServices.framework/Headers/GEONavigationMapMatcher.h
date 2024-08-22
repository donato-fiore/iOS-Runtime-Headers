// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEONAVIGATIONMAPMATCHER_H
#define GEONAVIGATIONMAPMATCHER_H


#import <Foundation/Foundation.h>

#import "GEOLocationShifter.h"
#import "GEONavigationMatchResult.h"
#import "GEORoadMatcher.h"
#import "GEOComposedRoute.h"
#import "GEORouteMatcher.h"

@interface GEONavigationMapMatcher : NSObject

@property (nonatomic) BOOL isSimulation; // ivar: _isSimulation
@property (retain, nonatomic) GEOLocationShifter *locationShifter; // ivar: _locationShifter
@property (retain, nonatomic) GEONavigationMatchResult *previousMatchResult; // ivar: _previousMatchResult
@property (retain, nonatomic) GEORoadMatcher *roadMatcher; // ivar: _roadMatcher
@property (retain, nonatomic) GEOComposedRoute *route; // ivar: _route
@property (retain, nonatomic) GEORouteMatcher *routeMatcher; // ivar: _routeMatcher


-(id)_routeMatcherForRoute:(id)arg0 ;
-(id)initWithRoute:(id)arg0 ;
-(id)matchLocation:(id)arg0 transportType:(int)arg1 ;
-(id)updateForReroute:(id)arg0 location:(id)arg1 ;
-(int)transportType;
-(void)resetToLocation:(id)arg0 ;
-(void)setShouldSnapRouteMatchToRoute:(BOOL)arg0 ;


@end


#endif