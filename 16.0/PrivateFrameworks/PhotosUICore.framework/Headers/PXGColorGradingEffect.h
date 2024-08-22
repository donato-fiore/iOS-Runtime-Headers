// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXGCOLORGRADINGEFFECT_H
#define PXGCOLORGRADINGEFFECT_H



#import "PXGEffect.h"
#import "PXGShader.h"
#import "PXGUniform.h"
#import "PXGColorLookupCube.h"

@interface PXGColorGradingEffect : PXGEffect {
    PXGShader *_shader;
    PXGUniform *_cubeUniform;
    PXGUniform *_valuesUniform;
    PXGUniform *_grayUniform;
}


@property (retain, nonatomic) PXGColorLookupCube *colorLookupCube; // ivar: _colorLookupCube
@property (nonatomic) float intensity; // ivar: _intensity


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithEntityManager:(id)arg0 ;
-(id)shader;


@end


#endif