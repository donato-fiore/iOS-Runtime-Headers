// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PTUTIL_H
#define PTUTIL_H

@protocol MTLDeviceSPI, MTLLibrary, MTLComputePipelineState;

#import <Foundation/Foundation.h>


@interface PTUtil : NSObject {
    id<MTLDeviceSPI> *_device;
    id<MTLLibrary> *_defaultLibrary;
    id<MTLComputePipelineState> *_renderDisparity;
    id<MTLComputePipelineState> *_kernelCopy;
    id<MTLComputePipelineState> *_multiplyTex;
    id<MTLComputePipelineState> *_addConstant;
    id<MTLComputePipelineState> *_reciprocal;
    id<MTLComputePipelineState> *_fillWithColor;
    id<MTLComputePipelineState> *_drawTurboLegend;
    id<MTLComputePipelineState> *_drawTurboLegendYUV;
    id<MTLComputePipelineState> *_gaussianNoise;
    id<MTLComputePipelineState> *_sobelFilter;
    id<MTLComputePipelineState> *_bicubicResample;
    id<MTLComputePipelineState> *_renderRect;
}




+(id)findMipmapLevel:(id)arg0 largerThan:(struct ? )arg1 ;
+(id)temporaryDirectory:(id)arg0 ;
-(id)initWithDevice:(id)arg0 library:(id)arg1 pipelineLibrary:(id)arg2 ;
-(id)precomputeNoise:(struct ? )arg0 channels:(int)arg1 seed:(NSInteger)arg2 ;
-(int)_drawTurboLegendTick:(id)arg0 outTexture:(id)arg1 rect:(struct ? )arg2 maxValue:(float)arg3 ;
-(int)addConstant:(id)arg0 inTex:(id)arg1 outTex:(id)arg2 value:(float)arg3 ;
-(int)bicubicResample:(id)arg0 inTex:(id)arg1 outTex:(id)arg2 ;
-(int)copyTex:(id)arg0 inTex:(id)arg1 outTex:(id)arg2 ;
-(int)drawTurboLegend:(id)arg0 outLuma:(id)arg1 outChroma:(id)arg2 rect:(struct ? )arg3 maxValue:(float)arg4 ;
-(int)drawTurboLegend:(id)arg0 outRGBA:(id)arg1 rect:(struct ? )arg2 maxValue:(float)arg3 ;
-(int)fillWithColor:(id)arg0 color:(id)arg1 outTex;
-(int)gaussianNoise:(id)arg0 inNoise:(id)arg1 outTex:(id)arg2 ;
-(int)multiplyTex:(id)arg0 inTex:(id)arg1 outTex:(id)arg2 multiplier:(float)arg3 ;
-(int)reciprocalTex:(id)arg0 inTex:(id)arg1 outTex:(id)arg2 epsilon:(float)arg3 ;
-(int)renderDisparity:(id)arg0 outDestLuma:(id)arg1 outDestChroma:(id)arg2 region:(struct ? )arg3 commandBuffer:(id)arg4 ;
-(int)renderRect:(id)arg0 rect:(BOOL)arg1 color:(id)arg2 filloutTexture;
-(int)sobelFilterSingleChannelColor:(id)arg0 input:(id)arg1 output:(id)arg2 scale:(float)arg3 ;


@end


#endif