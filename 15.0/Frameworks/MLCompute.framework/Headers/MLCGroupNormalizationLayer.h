// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MLCGROUPNORMALIZATIONLAYER_H
#define MLCGROUPNORMALIZATIONLAYER_H



#import "MLCLayer.h"
#import "MLCTensor.h"
#import "MLCTensorParameter.h"

@interface MLCGroupNormalizationLayer : MLCLayer

@property (readonly, retain, nonatomic) MLCTensor *beta; // ivar: _beta
@property (readonly, retain, nonatomic) MLCTensorParameter *betaParameter; // ivar: _betaParameter
@property (readonly, nonatomic) NSUInteger featureChannelCount; // ivar: _featureChannelCount
@property (readonly, retain, nonatomic) MLCTensor *gamma; // ivar: _gamma
@property (readonly, retain, nonatomic) MLCTensorParameter *gammaParameter; // ivar: _gammaParameter
@property (readonly, nonatomic) NSUInteger groupCount; // ivar: _groupCount
@property (readonly, nonatomic) float varianceEpsilon; // ivar: _varianceEpsilon


+(id)layerWithFeatureChannelCount:(NSUInteger)arg0 groupCount:(NSUInteger)arg1 beta:(id)arg2 gamma:(id)arg3 varianceEpsilon:(float)arg4 ;
-(BOOL)allocateDataForOptimizer:(id)arg0 ;
-(BOOL)compileForDevice:(id)arg0 sourceTensors:(id)arg1 resultTensor:(id)arg2 ;
-(BOOL)isSupportedShapeForTensorSources:(id)arg0 ;
-(BOOL)isValidTrainingParameters;
-(NSUInteger)allocatedDataSizeForTraining:(BOOL)arg0 optimizer:(id)arg1 ;
-(NSUInteger)parametersCount;
-(NSUInteger)resultSizeFromSourceSize:(NSUInteger)arg0 dimension:(NSUInteger)arg1 ;
-(id)description;
-(id)initWithFeatureChannelCount:(NSUInteger)arg0 groupCount:(NSUInteger)arg1 beta:(id)arg2 gamma:(id)arg3 varianceEpsilon:(float)arg4 ;
-(id)summarizedDOTDescription;
-(void)linkAssociatedTensors;
-(void)unlinkAssociatedTensors;


@end


#endif