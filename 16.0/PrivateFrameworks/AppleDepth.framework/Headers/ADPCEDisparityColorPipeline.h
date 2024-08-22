// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ADPCEDISPARITYCOLORPIPELINE_H
#define ADPCEDISPARITYCOLORPIPELINE_H

@protocol MTLDevice, MTLComputePipelineState;

#import <Foundation/Foundation.h>

#import "ADNetworkProvider.h"
#import "ADEspressoPCEDisparityColorInferenceDescriptor.h"
#import "ADPCEDisparityColorPipelineParameters.h"

@interface ADPCEDisparityColorPipeline : NSObject {
    ADNetworkProvider *_networkProvider;
    ADEspressoPCEDisparityColorInferenceDescriptor *_inferenceDesc;
    id<MTLDevice> *_metalDevice;
    id<MTLComputePipelineState>" _preprocessPipelineForRawPCE;
    id<MTLComputePipelineState>" _preprocessPipelineForFloatPCE;
    id<MTLComputePipelineState> *_postptocessPipeline;
}


@property (copy, nonatomic) ADPCEDisparityColorPipelineParameters *pipelineParameters; // ivar: _pipelineParameters


-(NSInteger)adjustForEngine:(NSUInteger)arg0 ;
-(NSInteger)encodeDisparityPostprocessingToCommandBuffer:(id)arg0 input:(id)arg1 output:(id)arg2 ;
-(NSInteger)encodeDisparityPreprocessingToCommandBuffer:(id)arg0 input:(id)arg1 normalizationMultiplier:(float)arg2 normalizationOffset:(float)arg3 invalidValue:(unsigned short)arg4 rotation:(NSInteger)arg5 output:(id)arg6 ;
-(NSInteger)rebuildMetalPreprocessingKernels;
-(float)disparityScaleForLayout:(NSUInteger)arg0 ;
-(id)inferenceDescriptor;
-(id)init;
-(id)initForInputSource:(NSUInteger)arg0 ;
-(id)initForInputSource:(NSUInteger)arg0 metalDevice:(id)arg1 ;
-(id)initWithParameters:(id)arg0 ;
-(id)initWithParameters:(id)arg0 inputSource:(NSUInteger)arg1 ;
-(id)initWithParameters:(id)arg0 inputSource:(NSUInteger)arg1 metalDevice:(id)arg2 ;


@end


#endif