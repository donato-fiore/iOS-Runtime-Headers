// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _GEOTRANSITROUTESTEPINFO_H
#define _GEOTRANSITROUTESTEPINFO_H


#import <Foundation/Foundation.h>

#import "GEOTransitStep.h"
#import "GEOStep.h"

@interface _GEOTransitRouteStepInfo : NSObject

@property (readonly, nonatomic) CGFloat distance;
@property (nonatomic) unsigned int duration; // ivar: _duration
@property (nonatomic) _NSRange maneuverPointRange; // ivar: _maneuverPointRange
@property (nonatomic) _NSRange pointRange; // ivar: _pointRange
@property (nonatomic) NSInteger routeSegmentType; // ivar: _routeSegmentType
@property (retain, nonatomic) GEOTransitStep *transitStep; // ivar: _transitStep
@property (retain, nonatomic) GEOStep *walkingStep; // ivar: _walkingStep


-(NSUInteger)numPoints;


@end


#endif