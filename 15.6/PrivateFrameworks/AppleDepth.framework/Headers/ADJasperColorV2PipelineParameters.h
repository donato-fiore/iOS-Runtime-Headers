// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ADJASPERCOLORV2PIPELINEPARAMETERS_H
#define ADJASPERCOLORV2PIPELINEPARAMETERS_H



#import "ADPipelineParameters.h"
#import "ADJasperPointCloudFilterParameters.h"

@interface ADJasperColorV2PipelineParameters : ADPipelineParameters

@property (nonatomic) float maxDepthThresholdForInvalidUncertainty; // ivar: _maxDepthThresholdForInvalidUncertainty
@property (nonatomic) float minDepthThresholdForInvalidUncertainty; // ivar: _minDepthThresholdForInvalidUncertainty
@property (nonatomic) unsigned int minRequiredJasperPoints; // ivar: _minRequiredJasperPoints
@property (nonatomic) BOOL outputHighConfidencePixelsOnly; // ivar: _outputHighConfidencePixelsOnly
@property (retain, nonatomic) ADJasperPointCloudFilterParameters *pointCloudFilter; // ivar: _pointCloudFilter
@property (nonatomic) float uncertaintyThreshold; // ivar: _uncertaintyThreshold


-(id)init;
-(id)initForPrioritization:(NSInteger)arg0 ;


@end


#endif