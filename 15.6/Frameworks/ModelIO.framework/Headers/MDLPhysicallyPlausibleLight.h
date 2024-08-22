// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MDLPHYSICALLYPLAUSIBLELIGHT_H
#define MDLPHYSICALLYPLAUSIBLELIGHT_H



#import "MDLLight.h"

@interface MDLPhysicallyPlausibleLight : MDLLight

@property (nonatomic) float attenuationEndDistance; // ivar: _attenuationEndDistance
@property (nonatomic) float attenuationFalloffExponent; // ivar: _attenuationFalloffExponent
@property (nonatomic) float attenuationStartDistance; // ivar: _attenuationStartDistance
@property (nonatomic) *CGColor color;
@property (nonatomic) float innerConeAngle; // ivar: _innerConeAngle
@property (nonatomic) float lumens; // ivar: _lumens
@property (nonatomic) float outerConeAngle; // ivar: _outerConeAngle


-(id)init;


@end


#endif