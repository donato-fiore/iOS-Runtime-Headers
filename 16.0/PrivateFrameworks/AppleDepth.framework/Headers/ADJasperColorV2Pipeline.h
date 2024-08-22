// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ADJASPERCOLORV2PIPELINE_H
#define ADJASPERCOLORV2PIPELINE_H


#import <Foundation/Foundation.h>

#import "ADNetworkProvider.h"
#import "ADEspressoJasperColorV2InferenceDescriptor.h"
#import "ADJasperColorV2PipelineParameters.h"

@interface ADJasperColorV2Pipeline : NSObject {
    NSInteger _prioritization;
    ADNetworkProvider *_networkProvider;
    ADEspressoJasperColorV2InferenceDescriptor *_inferenceDesc;
}


@property (copy, nonatomic) ADJasperColorV2PipelineParameters *pipelineParameters; // ivar: _pipelineParameters


-(NSInteger)changePointCloudPOV:(id)arg0 targetCamera:(id)arg1 jasperToCameraTransform:(struct ? )arg2 outputPointCloud:(id)arg3 ;
-(NSInteger)postProcessDepth:(struct __CVBuffer *)arg0 output:(struct __CVBuffer *)arg1 ;
-(NSInteger)postProcessDepth:(struct __CVBuffer *)arg0 output:(struct __CVBuffer *)arg1 depthRoi:(struct CGRect )arg2 ;
-(NSInteger)postProcessDepth:(struct __CVBuffer *)arg0 uncertainty:(struct __CVBuffer *)arg1 filteredPointCloud:(id)arg2 outputDepth:(struct __CVBuffer *)arg3 outputUncertainty:(struct __CVBuffer *)arg4 depthRoi:(struct CGRect )arg5 ;
-(NSInteger)postProcessUncertainty:(struct __CVBuffer *)arg0 outputConfidence:(struct __CVBuffer *)arg1 confidenceUnits:(NSUInteger)arg2 ;
-(NSInteger)projectJasperPoints:(id)arg0 cropTo:(struct CGRect )arg1 rotateBy:(NSInteger)arg2 projectedPointsBuffer:(struct __CVBuffer *)arg3 filteredPoints:(*id)arg4 ;
-(id)inferenceDescriptor;
-(id)initWithInputPrioritization:(NSInteger)arg0 espressoEngine:(NSUInteger)arg1 ;
-(id)initWithInputPrioritization:(NSInteger)arg0 espressoEngine:(NSUInteger)arg1 andParameters:(id)arg2 ;


@end


#endif