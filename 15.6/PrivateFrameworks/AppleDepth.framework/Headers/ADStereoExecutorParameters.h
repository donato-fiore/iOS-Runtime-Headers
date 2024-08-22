// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ADSTEREOEXECUTORPARAMETERS_H
#define ADSTEREOEXECUTORPARAMETERS_H



#import "ADExecutorParameters.h"
#import "ADStereoPipelineParameters.h"

@interface ADStereoExecutorParameters : ADExecutorParameters

@property (readonly, retain, nonatomic) ADStereoPipelineParameters *pipelineParameters; // ivar: _pipelineParameters


-(id)initForPipeline:(id)arg0 ;


@end


#endif