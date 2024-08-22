// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ADJASPERCOLORV2EXECUTORPARAMETERS_H
#define ADJASPERCOLORV2EXECUTORPARAMETERS_H



#import "ADExecutorParameters.h"
#import "ADJasperColorV2PipelineParameters.h"

@interface ADJasperColorV2ExecutorParameters : ADExecutorParameters

@property (nonatomic) BOOL outputHighConfidencePixelsOnly;
@property (readonly, retain, nonatomic) ADJasperColorV2PipelineParameters *pipelineParameters; // ivar: _pipelineParameters


-(id)initForPipeline:(id)arg0 ;


@end


#endif