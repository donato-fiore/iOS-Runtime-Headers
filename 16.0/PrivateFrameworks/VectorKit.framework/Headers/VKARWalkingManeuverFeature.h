// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VKARWALKINGMANEUVERFEATURE_H
#define VKARWALKINGMANEUVERFEATURE_H

@class NSString;


#import "VKARWalkingFeature.h"

@interface VKARWalkingManeuverFeature : VKARWalkingFeature {
    _retain_ptr<NSString *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc> _displayText;
}


@property ? coordinate;
@property (readonly, nonatomic) NSString *displayText;
@property (readonly, nonatomic) CGFloat maneuverHeading; // ivar: _maneuverHeading
@property (readonly, nonatomic) ? position; // ivar: _position
@property (readonly, nonatomic) PolylineCoordinate routeCoordinate; // ivar: _routeCoordinate


-(BOOL)isEqual:(id)arg0 ;
-(id)initWithDisplayLocation:(struct ? )arg0 routeCoordinate:(struct PolylineCoordinate )arg1 maneuverHeading:(CGFloat)arg2 displayText:(id)arg3 ;
-(id)initWithDisplayLocation:(struct ? )arg0 routeCoordinate:(struct PolylineCoordinate )arg1 maneuverHeading:(CGFloat)arg2 displayText:(id)arg3 maneuverPriority:(NSUInteger)arg4 ;


@end


#endif