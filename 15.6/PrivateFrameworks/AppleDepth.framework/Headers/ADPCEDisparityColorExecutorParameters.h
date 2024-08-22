// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ADPCEDISPARITYCOLOREXECUTORPARAMETERS_H
#define ADPCEDISPARITYCOLOREXECUTORPARAMETERS_H



#import "ADExecutorParameters.h"
#import "ADPCEDisparityColorPipelineParameters.h"

@interface ADPCEDisparityColorExecutorParameters : ADExecutorParameters

@property (nonatomic) unsigned short disparityInvalidValue; // ivar: _disparityInvalidValue
@property (nonatomic) BOOL disparityPreprocessingActive; // ivar: _disparityPreprocessingActive
@property (nonatomic) NSInteger disparityRotation; // ivar: _disparityRotation
@property (readonly, retain, nonatomic) ADPCEDisparityColorPipelineParameters *pipelineParameters; // ivar: _pipelineParameters
@property (nonatomic) BOOL temporalConsistencyActive; // ivar: _temporalConsistencyActive


-(id)initForPipeline:(id)arg0 inputSource:(NSUInteger)arg1 ;


@end


#endif