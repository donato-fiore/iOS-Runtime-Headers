// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MLCCOMPUTEENGINECOMMON_H
#define MLCCOMPUTEENGINECOMMON_H


#import <Foundation/Foundation.h>


@interface MLCComputeEngineCommon : NSObject



+(BOOL)doesActivationRequireInput:(id)arg0 forInference:(BOOL)arg1 ;
+(BOOL)forwardSourceTensorToChildLayersFrom:(id)arg0 stopGradientTensorList:(id)arg1 ;
+(BOOL)isResultTensorInStopGradientTensorList:(id)arg0 resultTensor:(id)arg1 forInference:(BOOL)arg2 ;
+(void)applyPatternMatcherForGraph:(id)arg0 stopGradientTensorList:(id)arg1 startAtLayerIndex:(NSUInteger)arg2 forInference:(BOOL)arg3 ;
+(void)updateLayersAndTensorsForComplexActivationFunction:(id)arg0 inputTensor:(id)arg1 ;
+(void)updateTensorsForFusedPaddingAndConvolutionLayer:(id)arg0 layerNext:(id)arg1 ;
+(void)updateTensorsForThreeFusedLayers:(id)arg0 layerNext:(id)arg1 layerNext2:(id)arg2 ;
+(void)updateTensorsForTwoFusedLayers:(id)arg0 layerNext:(id)arg1 ;


@end


#endif