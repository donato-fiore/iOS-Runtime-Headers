// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VKROUTEANNOTATION_H
#define VKROUTEANNOTATION_H

@class GEOComposedRouteAnnotation, GEOMiniCard, GEOStyleAttributes;


#import "VKTrafficFeature.h"

@interface VKRouteAnnotation : VKTrafficFeature {
    GEOComposedRouteAnnotation *_routeAnnotation;
}


@property (readonly, nonatomic) GEOMiniCard *infoCard;
@property (readonly, nonatomic, getter=_originalStyleAttributes) GEOStyleAttributes *originalStyleAttributes; // ivar: _originalStyleAttributes


-(id)initWithRouteAnnotation:(id)arg0 onRoute:(id)arg1 ;
-(void)dealloc;
-(void)populateDebugNode:(*void)arg0 ;


@end


#endif