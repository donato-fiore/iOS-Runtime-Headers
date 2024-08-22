// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ADMONOCULAREXECUTORPARAMETERS_H
#define ADMONOCULAREXECUTORPARAMETERS_H



#import "ADExecutorParameters.h"
#import "ADMonocularPipelineParameters.h"

@interface ADMonocularExecutorParameters : ADExecutorParameters

@property (readonly, retain, nonatomic) ADMonocularPipelineParameters *pipelineParameters; // ivar: _pipelineParameters


-(id)initForPipeline:(id)arg0 ;


@end


#endif