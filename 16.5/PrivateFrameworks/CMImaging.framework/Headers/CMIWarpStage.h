// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CMIWARPSTAGE_H
#define CMIWARPSTAGE_H

@protocol MTLComputePipelineState;

#import <Foundation/Foundation.h>

#import "FigMetalContext.h"

@interface CMIWarpStage : NSObject {
    FigMetalContext *_metal;
    id<MTLComputePipelineState> *_warpPipeline;
    id<MTLComputePipelineState> *_warpWithGDCPipeline;
    id<MTLComputePipelineState> *_gdcPipeline;
    id<MTLComputePipelineState> *_inverseGDCPipeline;
    id<MTLComputePipelineState> *_gdcYUVPipeline;
    id<MTLComputePipelineState> *_inverseGDCYUVPipeline;
    id<MTLComputePipelineState> *_simpleDemosaicPipeline;
}




-(id)initWithOptionalCommandQueue:(id)arg0 allocator:(id)arg1 ;
-(int)_compileShaders;
-(int)runGDC:(id)arg0 outputTex:(id)arg1 warpConfig:(struct CMIWarpConfig *)arg2 gdcParams:(struct ? *)arg3 inverseGDC:(BOOL)arg4 ;
-(int)runGDCWithInputLuma:(id)arg0 inputChromaTex:(id)arg1 outputLumaTex:(id)arg2 outputChromaTex:(id)arg3 warpConfig:(struct CMIWarpConfig *)arg4 gdcParams:(struct ? *)arg5 inverseGDC:(BOOL)arg6 ;
-(int)runWarpUsingTransform:(struct ? )arg0 inputBayerTex:(id)arg1 firstPix:(int)arg2 outputRGBTex:(id)arg3 ;
-(int)runWarpUsingTransform:(struct ? )arg0 inputLumaTex:(id)arg1 inputChromaTex:(id)arg2 outputLumaTex:(id)arg3 outputChromaTex:(id)arg4 ;
-(int)runWarpUsingTransform:(struct ? )arg0 inputLumaTex:(id)arg1 inputChromaTex:(id)arg2 outputLumaTex:(id)arg3 outputChromaTex:(id)arg4 inputFrameGDCParams:(struct ? *)arg5 outputFrameGDCParams:(struct ? *)arg6 ;
-(int)runWarpUsingTransform:(struct ? )arg0 inputTex:(id)arg1 outputTex:(id)arg2 ;
-(int)runWarpUsingTransform:(struct ? )arg0 inputTex:(id)arg1 outputTex:(id)arg2 inputFrameGDCParams:(struct ? *)arg3 outputFrameGDCParams:(struct ? *)arg4 ;


@end


#endif