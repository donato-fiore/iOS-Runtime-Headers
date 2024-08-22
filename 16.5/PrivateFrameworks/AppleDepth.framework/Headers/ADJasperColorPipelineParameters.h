// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ADJASPERCOLORPIPELINEPARAMETERS_H
#define ADJASPERCOLORPIPELINEPARAMETERS_H

@class ADAggregationParameters, ADJasperPointCloudFilterParameters;


#import "ADPipelineParameters.h"

@interface ADJasperColorPipelineParameters : ADPipelineParameters

@property (retain, nonatomic) ADAggregationParameters *aggregationParameters; // ivar: _aggregationParameters
@property (nonatomic) float confidenceBucketingHighThreshold; // ivar: _confidenceBucketingHighThreshold
@property (nonatomic) float confidenceBucketingLowThreshold; // ivar: _confidenceBucketingLowThreshold
@property (nonatomic) NSUInteger confidenceUnits; // ivar: _confidenceUnits
@property (nonatomic) float defaultAlphaForDepthWarping; // ivar: _defaultAlphaForDepthWarping
@property (retain, nonatomic) ADJasperPointCloudFilterParameters *pointCloudFilter; // ivar: _pointCloudFilter


-(id)init;


@end


#endif