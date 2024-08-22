// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEONAVIGATIONWALKINGMAPMATCHER_H
#define GEONAVIGATIONWALKINGMAPMATCHER_H



#import "GEONavigationMapMatcher.h"

@interface GEONavigationWalkingMapMatcher : GEONavigationMapMatcher {
    NSUInteger _numProgressionsOffRoute;
}




-(id)_routeMatcherForRoute:(id)arg0 ;
-(id)matchLocation:(id)arg0 transportType:(int)arg1 ;
-(int)transportType;


@end


#endif