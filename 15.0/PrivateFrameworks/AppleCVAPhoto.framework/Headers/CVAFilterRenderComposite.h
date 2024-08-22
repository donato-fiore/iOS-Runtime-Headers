// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


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
}


@property (readonly) NSString *label; // ivar: _label


-(id)initWithDevice:(id)arg0 library:(id)arg1 pipelineLibrary:(id)arg2 error:(*id)arg3 ;
-(void)encodeToCommandBuffer:(id)arg0 srcForegroundTex:(id)arg1 srcBackgroundTex:(id)arg2 srcCocTex:(id)arg3 dstYTex:(id)arg4 dstUVTex:(id)arg5 fgColorLut:(id)arg6 bgColorLut:(id)arg7 frameNumber:(unsigned int)arg8 seedGeneratorFactor:(unsigned int)arg9 noiseBits:(int)arg10 noiseBitsFactor:(float)arg11 cubeIntensity:(float)arg12 maxBlurRadius:(struct optional<float> )arg13 ;


@end


#endif