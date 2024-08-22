// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCH3DFRAMEBUFFERGAUSSIANBLURANDBLENDPIPELINE_H
#define TSCH3DFRAMEBUFFERGAUSSIANBLURANDBLENDPIPELINE_H



#import "TSCH3DFramebufferGaussianBlurPipeline.h"
#import "TSCH3DFramebuffer.h"

@interface TSCH3DFramebufferGaussianBlurAndBlendPipeline : TSCH3DFramebufferGaussianBlurPipeline

@property (nonatomic) float blendFactor; // ivar: _blendFactor
@property (retain, nonatomic) TSCH3DFramebuffer *blendTexture; // ivar: _blendTexture


+(id)effectsArray;
-(void)updateShaderEffectsStates;


@end


#endif