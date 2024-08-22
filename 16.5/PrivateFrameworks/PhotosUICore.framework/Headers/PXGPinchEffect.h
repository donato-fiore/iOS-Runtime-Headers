// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXGPINCHEFFECT_H
#define PXGPINCHEFFECT_H



#import "PXGEffect.h"
#import "PXGShader.h"
#import "PXGUniform.h"

@interface PXGPinchEffect : PXGEffect {
    PXGShader *_shader;
    PXGUniform *_normalizedCenter;
    PXGUniform *_scale;
}


@property (nonatomic) CGPoint normalizedCenter;
@property (nonatomic) CGFloat scale;


-(id)initWithEntityManager:(id)arg0 ;
-(id)shader;


@end


#endif