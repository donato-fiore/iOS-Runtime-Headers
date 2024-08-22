// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CVAVIDEOPIPELINELIBRARY_H
#define CVAVIDEOPIPELINELIBRARY_H


#import <Foundation/Foundation.h>


@interface CVAVideoPipelineLibrary : NSObject



+(id)colorCubePortraitGenericRequestForPortraitVideoPipeline:(id)arg0 sourceColorPixelBuffer:(struct __CVBuffer *)arg1 cubeData:(id)arg2 error:(*id)arg3 ;
+(id)colorCubePortraitRequestForPortraitVideoPipeline:(id)arg0 withWithSourceColorPixelBuffer:(struct __CVBuffer *)arg1 destinationColorPixelBuffer:(struct __CVBuffer *)arg2 cubeData:(id)arg3 ;
+(id)colorCubeRequest:(id)arg0 isMono:(BOOL)arg1 error:(*id)arg2 ;
+(id)colorCubeRequestWithBackgroundCube:(id)arg0 foregroundCube:(id)arg1 error:(*id)arg2 ;
+(id)contourLightRequestWithFace:(id)arg0 error:(*id)arg1 ;
+(id)contourLightRequestWithFace:(id)arg0 relightStyleStrength:(float)arg1 error:(*id)arg2 ;
+(id)disparityPostprocessingVideoPipelineWithProperties:(id)arg0 ;
+(id)disparityPostprocessingVideoPipelineWithProperties:(id)arg0 error:(*id)arg1 ;
+(id)mattingVideoPipelineWithProperties:(id)arg0 ;
+(id)mattingVideoPipelineWithProperties:(id)arg0 error:(*id)arg1 ;
+(id)opaqueBackgroundRequestWithMattingRequest:(id)arg0 error:(*id)arg1 ;
+(id)portraitRequestWithBackground:(id)arg0 light:(id)arg1 post:(id)arg2 error:(*id)arg3 ;
+(id)portraitVideoPipelineWithProperties:(id)arg0 ;
+(id)portraitVideoPipelineWithProperties:(id)arg0 error:(*id)arg1 ;
+(id)sourceImageRequest:(struct __CVBuffer *)arg0 error:(*id)arg1 ;
+(id)stageLightPortraitRequestWithMattingRequest:(id)arg0 destinationColorPixelBuffer:(struct __CVBuffer *)arg1 proxyCubeData:(id)arg2 cubeData:(id)arg3 ;
+(id)stageLightPortraitRequestWithMattingRequest:(id)arg0 destinationColorPixelBuffer:(struct __CVBuffer *)arg1 proxyCubeData:(id)arg2 cubeData:(id)arg3 vignetteIntensity:(float)arg4 stageLightIntensity:(float)arg5 ;
+(id)studioLightRequestWithFace:(id)arg0 error:(*id)arg1 ;
+(id)studioLightRequestWithFace:(id)arg0 relightStyleStrength:(float)arg1 error:(*id)arg2 ;
+(id)syntheticDepthOfFieldBackgroundRequestWithMattingRequest:(id)arg0 simulatedFocalRatio:(float)arg1 sourceColorGain:(float)arg2 sourceColorLux:(float)arg3 error:(*id)arg4 ;
+(id)syntheticDepthOfFieldPortraitRequestWithMattingRequest:(id)arg0 destinationColorPixelBuffer:(struct __CVBuffer *)arg1 backgroundColorCube:(id)arg2 foregroundColorCube:(id)arg3 colorCubeIntensity:(float)arg4 simulatedFocalRatio:(float)arg5 sourceColorGain:(float)arg6 sourceColorLux:(float)arg7 ;
+(id)videoPipelinePropertiesForDevice:(NSUInteger)arg0 ;
+(int)prewarm;


@end


#endif