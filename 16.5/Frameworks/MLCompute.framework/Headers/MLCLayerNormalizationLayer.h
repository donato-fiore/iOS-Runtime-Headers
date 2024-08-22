// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MLCLAYERNORMALIZATIONLAYER_H
#define MLCLAYERNORMALIZATIONLAYER_H

@class NSArray;


#import "MLCLayer.h"
#import "MLCTensor.h"
#import "MLCTensorParameter.h"

@interface MLCLayerNormalizationLayer : MLCLayer

@property (readonly, retain, nonatomic) MLCTensor *beta; // ivar: _beta
@property (readonly, retain, nonatomic) MLCTensorParameter *betaParameter; // ivar: _betaParameter
@property (readonly, retain, nonatomic) MLCTensor *gamma; // ivar: _gamma
@property (readonly, retain, nonatomic) MLCTensorParameter *gammaParameter; // ivar: _gammaParameter
@property (readonly, copy, nonatomic) NSArray *normalizedShape; // ivar: _normalizedShape
@property (readonly, nonatomic) float varianceEpsilon; // ivar: _varianceEpsilon


+(id)layerWithNormalizedShape:(id)arg0 beta:(id)arg1 gamma:(id)arg2 varianceEpsilon:(float)arg3 ;
-(BOOL)allocateDataForOptimizer:(id)arg0 ;
-(BOOL)compileForDevice:(id)arg0 sourceTensors:(id)arg1 resultTensor:(id)arg2 ;
-(BOOL)isSupportedShapeForTensorSources:(id)arg0 ;
-(BOOL)isValidTrainingParameters;
-(NSUInteger)allocatedDataSizeForTraining:(BOOL)arg0 optimizer:(id)arg1 ;
-(NSUInteger)parametersCount;
-(NSUInteger)resultSizeFromSourceSize:(NSUInteger)arg0 dimension:(NSUInteger)arg1 ;
-(id)description;
-(id)initWithNormalizedShape:(id)arg0 beta:(id)arg1 gamma:(id)arg2 varianceEpsilon:(float)arg3 ;
-(id)summarizedDOTDescription;
-(void)linkAssociatedTensors;
-(void)unlinkAssociatedTensors;


@end


#endif