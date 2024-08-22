// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MDLLIGHTPROBE_H
#define MDLLIGHTPROBE_H

@class NSMutableData, NSData;
@protocol MDLTransformComponent;


#import "MDLLight.h"
#import "MDLTexture.h"

@interface MDLLightProbe : MDLLight {
    NSMutableData *_sphericalHarmonicsCoefficients;
    id<MDLTransformComponent> *_transform;
}


@property (readonly, retain, nonatomic) MDLTexture *irradianceTexture; // ivar: _irradianceTexture
@property (readonly, retain, nonatomic) MDLTexture *reflectiveTexture; // ivar: _reflectiveTexture
@property (readonly, copy, nonatomic) NSData *sphericalHarmonicsCoefficients;
@property (readonly, nonatomic) NSUInteger sphericalHarmonicsLevel; // ivar: _sphericalHarmonicsLevel


+(id)calculateIrradianceGradientUsingSamples:(id)arg0 ofSize:(NSUInteger)arg1 fromSHwithLevel;
+(id)lightProbeWithTextureSize:(NSInteger)arg0 forLocation:(id)arg1 lightsToConsider:(id)arg2 objectsToConsider:(id)arg3 reflectiveCubemap:(id)arg4 irradianceCubemap:(id)arg5 ;
+(struct CGColor *)sampleSHAt:(id)arg0 usingCoefficients:(NSUInteger)arg1 withLevel;
-(id)initWithReflectiveTexture:(id)arg0 irradianceTexture:(id)arg1 ;
-(id)transform;
-(void)generateIrradianceTextureFromReflective;
-(void)generateSphericalHarmonicsFromIrradiance:(NSUInteger)arg0 ;
-(void)setTransform:(id)arg0 ;


@end


#endif