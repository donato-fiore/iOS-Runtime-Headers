// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ADPCESTEREOCOLORPIPELINE_H
#define ADPCESTEREOCOLORPIPELINE_H



#import "ADPCEDisparityColorPipeline.h"
#import "ADPCEStereoColorPipelineParameters.h"

@interface ADPCEStereoColorPipeline : ADPCEDisparityColorPipeline

@property (copy, nonatomic) ADPCEStereoColorPipelineParameters *pipelineParameters;


-(id)inferenceDescriptor;
-(id)initForInputSource:(NSUInteger)arg0 ;
-(id)initWithParameters:(id)arg0 ;
-(id)initWithParameters:(id)arg0 inputSource:(NSUInteger)arg1 ;


@end


#endif