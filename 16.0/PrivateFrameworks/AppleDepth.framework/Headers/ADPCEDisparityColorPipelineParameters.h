// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ADPCEDISPARITYCOLORPIPELINEPARAMETERS_H
#define ADPCEDISPARITYCOLORPIPELINEPARAMETERS_H



#import "ADPipelineParameters.h"

@interface ADPCEDisparityColorPipelineParameters : ADPipelineParameters

@property (nonatomic) float disparityScaleForModelZoom; // ivar: _disparityScaleForModelZoom
@property (nonatomic) float maxDisparity; // ivar: _maxDisparity
@property (nonatomic) float minDisparity; // ivar: _minDisparity
@property (nonatomic) float pceBias; // ivar: _pceBias
@property (nonatomic) NSUInteger trainingWidth; // ivar: _trainingWidth


-(id)init;


@end


#endif