// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ARDIRECTIONALLIGHTESTIMATE_H
#define ARDIRECTIONALLIGHTESTIMATE_H

@class NSData;
@protocol NSCopying;


#import "ARLightEstimate.h"

@interface ARDirectionalLightEstimate : ARLightEstimate <NSCopying>

 {
    ? _sphericalHarmonicIntensity;
    NSData *_sphericalHarmonicsCoefficients;
    ? _primaryLightDirection;
}


@property (nonatomic) CGFloat confidenceRating; // ivar: _confidenceRating
@property ? primaryLightDirection;
@property (readonly, nonatomic) CGFloat primaryLightIntensity; // ivar: _primaryLightIntensity
@property (readonly, copy, nonatomic) NSData *sphericalHarmonicsCoefficients;
@property (nonatomic) CGFloat timestamp; // ivar: _timestamp


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDirectionalLightEstimate:(id)arg0 ;
-(id)initWithSphericalHarmonics:(struct ? )arg0 ambientIntensity:(CGFloat)arg1 temperature:(CGFloat)arg2 ;
-(id)lightEstimateByApplyingRotation:(struct ? )arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif