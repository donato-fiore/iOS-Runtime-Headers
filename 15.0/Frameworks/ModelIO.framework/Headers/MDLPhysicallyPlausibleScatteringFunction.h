// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MDLPHYSICALLYPLAUSIBLESCATTERINGFUNCTION_H
#define MDLPHYSICALLYPLAUSIBLESCATTERINGFUNCTION_H



#import "MDLScatteringFunction.h"
#import "MDLMaterialProperty.h"

@interface MDLPhysicallyPlausibleScatteringFunction : MDLScatteringFunction {
    *PhysicallyPlausibleDistribution _physicalBSDF;
}


@property (readonly, retain, nonatomic) MDLMaterialProperty *anisotropic; // ivar: _anisotropic
@property (readonly, retain, nonatomic) MDLMaterialProperty *anisotropicRotation; // ivar: _anisotropicRotation
@property (readonly, retain, nonatomic) MDLMaterialProperty *clearcoat; // ivar: _clearcoat
@property (readonly, retain, nonatomic) MDLMaterialProperty *clearcoatGloss; // ivar: _clearcoatGloss
@property (readonly, retain, nonatomic) MDLMaterialProperty *metallic; // ivar: _metallic
@property (readonly, retain, nonatomic) MDLMaterialProperty *roughness; // ivar: _roughness
@property (readonly, retain, nonatomic) MDLMaterialProperty *sheen; // ivar: _sheen
@property (readonly, retain, nonatomic) MDLMaterialProperty *sheenTint; // ivar: _sheenTint
@property (readonly, retain, nonatomic) MDLMaterialProperty *specularAmount; // ivar: _specularAmount
@property (readonly, retain, nonatomic) MDLMaterialProperty *specularTint; // ivar: _specularTint
@property (readonly, retain, nonatomic) MDLMaterialProperty *subsurface; // ivar: _subsurface
@property (readonly, nonatomic) NSInteger version;


-(id)init;


@end


#endif