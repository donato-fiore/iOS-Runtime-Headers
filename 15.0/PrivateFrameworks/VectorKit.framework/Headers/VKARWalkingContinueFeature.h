// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VKARWALKINGCONTINUEFEATURE_H
#define VKARWALKINGCONTINUEFEATURE_H

@class NSString, GEOComposedRoute;


#import "VKARWalkingFeature.h"

@interface VKARWalkingContinueFeature : VKARWalkingFeature {
    _retain_ptr<GEOComposedRoute *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> _route;
    _retain_ptr<NSString *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> _displayText;
}


@property (readonly, nonatomic) NSString *displayText;
@property (readonly, nonatomic) GEOPolylineCoordinateRange range; // ivar: _range
@property (readonly, nonatomic) GEOComposedRoute *route;


-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithRoute:(id)arg0 range:(struct GEOPolylineCoordinateRange )arg1 displayText:(id)arg2 ;


@end


#endif