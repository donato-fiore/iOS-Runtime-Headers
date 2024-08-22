// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MDLSCATTERINGFUNCTION_H
#define MDLSCATTERINGFUNCTION_H

@class NSString;
@protocol MDLNamed;

#import <Foundation/Foundation.h>

#import "MDLMaterialProperty.h"

@interface MDLScatteringFunction : NSObject <MDLNamed>

 {
    unique_ptr<ModelIO::BidirectionalScatteringDistributionFunction, std::default_delete<ModelIO::BidirectionalScatteringDistributionFunction>> _bsdf;
}


@property (readonly, retain, nonatomic) MDLMaterialProperty *ambientOcclusion; // ivar: _ambientOcclusion
@property (readonly, retain, nonatomic) MDLMaterialProperty *ambientOcclusionScale; // ivar: _ambientOcclusionScale
@property (readonly, retain, nonatomic) MDLMaterialProperty *baseColor; // ivar: _baseColor
@property (readonly, retain, nonatomic) MDLMaterialProperty *emission; // ivar: _emission
@property (readonly, retain, nonatomic) MDLMaterialProperty *interfaceIndexOfRefraction; // ivar: _interfaceIndexOfRefraction
@property (readonly, retain, nonatomic) MDLMaterialProperty *materialIndexOfRefraction; // ivar: _materialIndexOfRefraction
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, retain, nonatomic) MDLMaterialProperty *normal; // ivar: _normal
@property (readonly, retain, nonatomic) MDLMaterialProperty *specular; // ivar: _specular


-(id)init;


@end


#endif