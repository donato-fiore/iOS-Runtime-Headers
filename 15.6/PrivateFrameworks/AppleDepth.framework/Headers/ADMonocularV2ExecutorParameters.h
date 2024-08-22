// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ADMONOCULARV2EXECUTORPARAMETERS_H
#define ADMONOCULARV2EXECUTORPARAMETERS_H



#import "ADExecutorParameters.h"
#import "ADMonocularV2PipelineParameters.h"

@interface ADMonocularV2ExecutorParameters : ADExecutorParameters

@property (readonly, retain, nonatomic) ADMonocularV2PipelineParameters *pipelineParameters; // ivar: _pipelineParameters


-(id)initForPipeline:(id)arg0 ;


@end


#endif