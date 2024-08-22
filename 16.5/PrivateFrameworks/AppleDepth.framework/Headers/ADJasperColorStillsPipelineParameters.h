// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ADJASPERCOLORSTILLSPIPELINEPARAMETERS_H
#define ADJASPERCOLORSTILLSPIPELINEPARAMETERS_H

@class ADJasperPointCloudFilterParameters;


#import "ADPipelineParameters.h"

@interface ADJasperColorStillsPipelineParameters : ADPipelineParameters

@property (retain, nonatomic) ADJasperPointCloudFilterParameters *pointCloudFilter; // ivar: _pointCloudFilter
@property (retain, nonatomic) ADJasperPointCloudFilterParameters *pointCloudFilterForTransformCorrection; // ivar: _pointCloudFilterForTransformCorrection


-(id)init;


@end


#endif