// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ADJASPERCOLORSTILLSEXECUTORPARAMETERS_H
#define ADJASPERCOLORSTILLSEXECUTORPARAMETERS_H



#import "ADExecutorParameters.h"
#import "ADJasperColorStillsPipelineParameters.h"

@interface ADJasperColorStillsExecutorParameters : ADExecutorParameters

@property (nonatomic) BOOL performJasperToColorTransformCorrection; // ivar: _performJasperToColorTransformCorrection
@property (readonly, retain, nonatomic) ADJasperColorStillsPipelineParameters *pipelineParameters; // ivar: _pipelineParameters


-(id)initForPipeline:(id)arg0 ;


@end


#endif