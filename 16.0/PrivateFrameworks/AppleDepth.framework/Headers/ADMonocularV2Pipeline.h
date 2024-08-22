// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ADMONOCULARV2PIPELINE_H
#define ADMONOCULARV2PIPELINE_H


#import <Foundation/Foundation.h>

#import "ADNetworkProvider.h"
#import "ADEspressoMonocularV2InferenceDescriptor.h"
#import "ADMonocularV2PipelineParameters.h"

@interface ADMonocularV2Pipeline : NSObject {
    ADNetworkProvider *_networkProvider;
    ADEspressoMonocularV2InferenceDescriptor *_inferenceDesc;
}


@property (copy, nonatomic) ADMonocularV2PipelineParameters *pipelineParameters; // ivar: _pipelineParameters


-(NSInteger)adjustForEngine:(NSUInteger)arg0 ;
-(NSInteger)postProcessDisparity:(struct __CVBuffer *)arg0 output:(struct __CVBuffer *)arg1 ;
-(id)inferenceDescriptor;
-(id)initWithInputPrioritization:(NSInteger)arg0 ;
-(id)initWithInputPrioritization:(NSInteger)arg0 andParameters:(id)arg1 ;


@end


#endif