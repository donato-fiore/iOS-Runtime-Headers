// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MDLPHOTOMETRICLIGHT_H
#define MDLPHOTOMETRICLIGHT_H

@class NSMutableData, NSData;


#import "MDLPhysicallyPlausibleLight.h"
#import "MDLTexture.h"

@interface MDLPhotometricLight : MDLPhysicallyPlausibleLight {
    *void _iesLight;
    NSMutableData *_sphericalHarmonicsCoefficients;
}


@property (readonly, retain, nonatomic) MDLTexture *lightCubeMap; // ivar: _lightCubeMap
@property (readonly, copy, nonatomic) NSData *sphericalHarmonicsCoefficients;
@property (readonly, nonatomic) NSUInteger sphericalHarmonicsLevel; // ivar: _sphericalHarmonicsLevel


-(float)computeInnerAngle;
-(id)computeSceneKitRenderingTexture:(NSUInteger)arg0 ;
-(id)generateTexture:(NSUInteger)arg0 ;
-(id)initWithIESProfile:(id)arg0 ;
-(struct CGColor *)evaluatedColorFromSHVector;
-(void)computeLumens;
-(void)generateCubemapFromLight:(NSUInteger)arg0 ;
-(void)generateSphericalHarmonicsFromLight:(NSUInteger)arg0 ;


@end


#endif