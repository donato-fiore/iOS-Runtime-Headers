// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef INPAINTINGESPRESSOHELPERS_H
#define INPAINTINGESPRESSOHELPERS_H


#import <Foundation/Foundation.h>


@interface InpaintingEspressoHelpers : NSObject



+(*void)createEspressoContextForCPUEngine:(*int)arg0 ;
+(*void)createEspressoContextUsingFastestDevicePresent__engineUsed:(*int)arg0 ;
+(BOOL)bindEspressoInputBufferForInputName:(id)arg0 buffer:(struct vImage_Buffer )arg1 preprocessingParams:(struct ? )arg2 network:(struct ? )arg3 noAlphaPremultiply:(BOOL)arg4 error:(*id)arg5 ;
+(BOOL)createSingleNetworkPlanFromResourceDescriptor:(id)arg0 resourceFileName:(id)arg1 lowPriorityMode:(BOOL)arg2 cpuOnlyModel:(BOOL)arg3 membraneModel:(BOOL)arg4 modelInputPixelFormat:(int)arg5 modelOutputPixelFormat:(int)arg6 inputBlobNames:(id)arg7 outputBlobNames:(id)arg8 storeInEspressoResources:(id)arg9 error:(*id)arg10 ;
+(BOOL)selectConfigurationAndBuildPlanForNetwork:(id)arg0 configurationName:(id)arg1 error:(*id)arg2 ;
+(id)convertEspressoOutput:(struct ? )arg0 intoOutputImageWrapper:(id)arg1 usingOutputPixelsRange:(int)arg2 andOutputFormat:(int)arg3 error:(*id)arg4 ;
+(id)generatePoissonMembraneOnBGRA8VTargetImage:(id)arg0 forSourceImage:(id)arg1 usingMaskOutline:(id)arg2 atProcessingResolution:(int)arg3 withOutputFormat:(int)arg4 outputImage:(id)arg5 andModel:(id)arg6 error:(*id)arg7 ;
+(id)pathForEspressoNetworkModelFileWithName:(id)arg0 error:(*id)arg1 ;
+(id)performInpaintingOnBGRA8VImage:(id)arg0 usingMask:(id)arg1 atProcessingResolution:(int)arg2 withOutputFormat:(int)arg3 outputImage:(id)arg4 andModel:(id)arg5 error:(*id)arg6 ;
+(id)performInpaintingOnImage:(id)arg0 usingMask:(id)arg1 atProcessingResolution:(int)arg2 withModel:(id)arg3 error:(*id)arg4 ;
+(int)selectModelProcessingResolutionBasedOnEdgeSize:(CGFloat)arg0 amongResolutions:(id)arg1 ;


@end


#endif