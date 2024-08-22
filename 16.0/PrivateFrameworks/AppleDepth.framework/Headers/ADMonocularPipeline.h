// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ADMONOCULARPIPELINE_H
#define ADMONOCULARPIPELINE_H

@class ADImageDescriptor;

#import <Foundation/Foundation.h>

#import "ADNetworkProvider.h"
#import "ADEspressoMonocularInferenceDescriptor.h"
#import "ADMonocularPipelineParameters.h"

@interface ADMonocularPipeline : NSObject {
    NSInteger _prioritization;
    ADNetworkProvider *_networkProvider;
    ADEspressoMonocularInferenceDescriptor *_inferenceDesc;
    ADImageDescriptor *_processedDepthDesc;
}


@property (copy, nonatomic) ADMonocularPipelineParameters *pipelineParameters; // ivar: _pipelineParameters


-(NSInteger)postProcessWithDepth:(struct __CVBuffer *)arg0 depthOutput:(struct __CVBuffer *)arg1 ;
-(id)inferenceDescriptor;
-(id)initWithInputPrioritization:(NSInteger)arg0 ;
-(id)initWithInputPrioritization:(NSInteger)arg0 andParameters:(id)arg1 ;
-(id)processedDepthOutputDescriptor;


@end


#endif