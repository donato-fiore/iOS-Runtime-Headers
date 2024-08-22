// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CMISHARPNESSSCORE_H
#define CMISHARPNESSSCORE_H

@protocol MTLComputePipelineState;

#import <Foundation/Foundation.h>

#import "FigMetalContext.h"
#import "FigMetalAllocator.h"

@interface CMISharpnessScore : NSObject {
    FigMetalContext *_metal;
    float _kernelWeight;
    id<MTLComputePipelineState>" _sharpnessScoreCalculatorShaderFloat;
    id<MTLComputePipelineState>" _sharpnessScoreCalculatorShaderUInt;
    id<MTLComputePipelineState> *_sumScoreStep1Shader;
    id<MTLComputePipelineState> *_sumScoreStep2Shader;
    int _counter;
}


@property (retain, nonatomic) FigMetalAllocator *allocator;


+(NSUInteger)bytesRequiredForProcessingImageWith:(int)arg0 height:(int)arg1 ;
+(id)externalMemoryDescriptorForConfiguration:(id)arg0 ;
-(id)computePipelineFor:(NSUInteger)arg0 sourceComponent:(int)arg1 ;
-(id)initWithOptionalCommandQueue:(id)arg0 externalMemoryResource:(id)arg1 kernelWeights:(id)arg2 ;
-(id)initWithOptionalCommandQueue:(id)arg0 kernelWeights:(id)arg1 ;
-(int)_calculateFromTexture:(id)arg0 toImageScore:(*float)arg1 andFromRoi:(id)arg2 toRoiScore:(id)arg3 sourceComponent:(int)arg4 binning:(int)arg5 firstPixel:(int)arg6 ;
-(int)_computeSharpnessScore:(id)arg0 outputTexture:(id)arg1 sourceComponent:(int)arg2 binning:(int)arg3 firstPixel:(int)arg4 ;
-(int)_sumScoreForRoi:(struct CGRect )arg0 roiId:(int)arg1 scoreTexture:(id)arg2 output:(*float)arg3 ;
-(int)calculateFromPixelBuffer:(struct __CVBuffer *)arg0 toImageScore:(*float)arg1 andFromRoi:(id)arg2 toRoiScore:(id)arg3 sourceComponent:(int)arg4 ;
-(int)calculateFromRawTexture:(id)arg0 toImageScore:(*float)arg1 andFromRoi:(id)arg2 toRoiScore:(id)arg3 sourceComponent:(int)arg4 isQuadra:(BOOL)arg5 firstPixel:(int)arg6 ;
-(int)calculateFromTexture:(id)arg0 toImageScore:(*float)arg1 andFromRoi:(id)arg2 toRoiScore:(id)arg3 sourceComponent:(int)arg4 ;
-(void)_getDefaultConvolutionWeights:(*float)arg0 ;


@end


#endif