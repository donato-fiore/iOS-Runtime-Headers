// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PTOPTICALFLOW_H
#define PTOPTICALFLOW_H

@protocol MTLDevice, MTLComputePipelineState, MTLTexture;

#import <Foundation/Foundation.h>

#import "LKTFlowGPU.h"

@interface PTOpticalFlow : NSObject {
    id<MTLDevice> *_device;
    id<MTLComputePipelineState> *_warpTexture;
    LKTFlowGPU *_lktflowgpuContext;
    id<MTLTexture> *_displacementFWD;
    int _colorWidth;
    int _colorHeight;
    BOOL _allocateDisplacementFWD;
    BOOL _inverseFlow;
}




-(id)displacementFWD;
-(id)initWithDevice:(id)arg0 colorSize:(struct ? )arg1 lktPreset:(NSInteger)arg2 ;
-(id)initWithDevice:(id)arg0 colorSize:(struct ? )arg1 lktPreset:(NSInteger)arg2 allocateDisplacementFWD:(BOOL)arg3 needConversionBGRA2YUVA:(BOOL)arg4 inverseFlow:(BOOL)arg5 ;
-(id)toTextureArray:(id)arg0 ;
-(short)estimateDisplacementFWD:(id)arg0 sourceRGBA:(id)arg1 destRGBA:(id)arg2 ;
-(short)estimateDisplacementStream:(id)arg0 destRGBA:(id)arg1 outDisplacement:(id)arg2 ;
-(short)estimateDisplacementStream:(id)arg0 index:(int)arg1 doOpticalFlow:(BOOL)arg2 destRGBA:(id)arg3 ;
-(short)setDisplacementFWD:(id)arg0 ;
-(short)warp:(id)arg0 inTexture:(id)arg1 inDisplacement:(id)arg2 outTextureWarped:(id)arg3 ;
-(void)reset;


@end


#endif