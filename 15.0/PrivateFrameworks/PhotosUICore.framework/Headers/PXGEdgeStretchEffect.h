// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXGEDGESTRETCHEFFECT_H
#define PXGEDGESTRETCHEFFECT_H



#import "PXGEffect.h"
#import "PXGShader.h"
#import "PXGUniform.h"

@interface PXGEdgeStretchEffect : PXGEffect {
    PXGShader *_shader;
    PXGUniform *_sampleRect;
}


@property (nonatomic) CGRect sampleRect;


-(id)initWithEntityManager:(id)arg0 ;
-(id)shader;


@end


#endif