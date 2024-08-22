// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _GEOROUTEMATCHUPDATER_FERRYPROGRESSION_H
#define _GEOROUTEMATCHUPDATER_FERRYPROGRESSION_H

@class GEORouteMatchUpdater;


#import "GEOComposedRouteStep.h"

@interface _GEORouteMatchUpdater_FerryProgression : GEORouteMatchUpdater {
    GEOComposedRouteStep *_boardStep;
    GEOComposedRouteStep *_alightStep;
    ? _alightLocationCoordinate;
    CGFloat _startProgressionDistanceToDestination;
    NSUInteger _progressionCount;
}




-(BOOL)updateRouteMatch:(id)arg0 previousRouteMatch:(id)arg1 forLocation:(id)arg2 ;
-(NSUInteger)priority;
-(id)initWithRoute:(id)arg0 tripSegment:(id)arg1 ;


@end


#endif