// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SISCENESEGMENTATION_H
#define SISCENESEGMENTATION_H

@class NSDictionary;
@protocol SITraceable;


#import "SIModel.h"
#import "SISceneSegmentationNetworkConfiguration.h"

@interface SISceneSegmentation : SIModel <SITraceable>

 {
    SISceneSegmentationNetworkConfiguration *_configuration;
    *float _uncertaintyThresholds;
    *float _probabilityThresholds;
    BOOL _supportUncertainty;
    char * _modelToGlobalMapping;
}


@property (readonly, nonatomic) NSDictionary *tracingEntry;


-(BOOL)supportUncertainty;
-(NSInteger)evaluateSemanticForImage:(struct __CVBuffer *)arg0 depthInput:(struct __CVBuffer *)arg1 semanticOutput:(struct __IOSurface *)arg2 confidenceOutput:(struct __IOSurface *)arg3 uncertaintyOutput:(struct __IOSurface *)arg4 ;
-(NSInteger)evaluateSemanticForImageData:(id)arg0 output:(id)arg1 ;
-(NSInteger)postprocessingIOSSemanticOutput:(struct __IOSurface *)arg0 confidenceOutput:(struct __IOSurface *)arg1 uncertaintyOutput:(struct __IOSurface *)arg2 ;
-(NSInteger)postprocessingOutput:(id)arg0 ;
-(NSInteger)postprocessingSemanticMultimodalOutput:(struct __IOSurface *)arg0 confidenceOutput:(struct __IOSurface *)arg1 ;
-(NSInteger)postprocessingSemanticOutput:(struct __IOSurface *)arg0 confidenceOutput:(struct __IOSurface *)arg1 ;
-(NSInteger)postprocessingSemanticOutput:(struct __IOSurface *)arg0 confidenceOutput:(struct __IOSurface *)arg1 uncertaintyOutput:(struct __IOSurface *)arg2 ;
-(id)description;
-(id)initWithNetworkConfiguration:(id)arg0 ;
-(struct CGSize )getInputResolution;
-(struct CGSize )getOutputResolution;
-(void)_initializeUncertaintyThresholds:(float)arg0 ;
-(void)dealloc;


@end


#endif