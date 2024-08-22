// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CVAFILTERRENDERCOMPOSITE_H
#define CVAFILTERRENDERCOMPOSITE_H

@class NSString;
@protocol MTLComputePipelineState;

#import <Foundation/Foundation.h>


@interface CVAFilterRenderComposite : NSObject {
    id<MTLComputePipelineState> *_renderingCompositeFixUpAddNoiseKernel;
    id<MTLComputePipelineState> *_renderingCompositeFixupAndBGColorMapKernel;
    id<MTLComputePipelineState> *_renderingCompositeFixupAndFGColorMapKernel;
    id<MTLComputePipelineState> *_renderingCompositeFixupAndColorMapKernel;
    id<MTLComputePipelineState> *_renderingCompositeApplyColorCubes;
}


@property (readonly) NSString *label; // ivar: _label


-(id)initWithDevice:(id)arg0 library:(id)arg1 pipelineLibrary:(id)arg2 error:(*id)arg3 ;
-(void)encodeColorCubesToCommandBuffer:(id)arg0 sdofYTexture:(id)arg1 sdofUVTexture:(id)arg2 alphaTexture:(id)arg3 fgColorLut:(id)arg4 bgColorLut:(id)arg5 dstColorTex:(id)arg6 dstColorTex_plane1:(id)arg7 ;
-(void)encodeToCommandBuffer:(id)arg0 srcForegroundTex:(id)arg1 srcBackgroundTex:(id)arg2 srcCocTex:(id)arg3 dstYTex:(id)arg4 dstUVTex:(id)arg5 fgColorLut:(id)arg6 bgColorLut:(id)arg7 frameNumber:(unsigned int)arg8 seedGeneratorFactor:(unsigned int)arg9 noiseBits:(int)arg10 noiseBitsFactor:(float)arg11 cubeIntensity:(float)arg12 maxBlurRadius:(struct optional<float> )arg13 ;


@end


#endif