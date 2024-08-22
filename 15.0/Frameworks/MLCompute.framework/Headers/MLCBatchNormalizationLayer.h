// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MLCBATCHNORMALIZATIONLAYER_H
#define MLCBATCHNORMALIZATIONLAYER_H



#import "MLCLayer.h"
#import "MLCTensor.h"
#import "MLCTensorParameter.h"

@interface MLCBatchNormalizationLayer : MLCLayer

@property (readonly, retain, nonatomic) MLCTensor *beta; // ivar: _beta
@property (readonly, retain, nonatomic) MLCTensorParameter *betaParameter; // ivar: _betaParameter
@property (readonly, nonatomic) NSUInteger featureChannelCount; // ivar: _featureChannelCount
@property (readonly, retain, nonatomic) MLCTensor *gamma; // ivar: _gamma
@property (readonly, retain, nonatomic) MLCTensorParameter *gammaParameter; // ivar: _gammaParameter
@property (readonly, retain, nonatomic) MLCTensor *mean; // ivar: _mean
@property (readonly, nonatomic) float momentum; // ivar: _momentum
@property (readonly, retain, nonatomic) MLCTensor *variance; // ivar: _variance
@property (readonly, nonatomic) float varianceEpsilon; // ivar: _varianceEpsilon


+(id)layerWithFeatureChannelCount:(NSUInteger)arg0 mean:(id)arg1 variance:(id)arg2 beta:(id)arg3 gamma:(id)arg4 varianceEpsilon:(float)arg5 ;
+(id)layerWithFeatureChannelCount:(NSUInteger)arg0 mean:(id)arg1 variance:(id)arg2 beta:(id)arg3 gamma:(id)arg4 varianceEpsilon:(float)arg5 momentum:(float)arg6 ;
-(BOOL)allocateDataForOptimizer:(id)arg0 ;
-(BOOL)compileForDevice:(id)arg0 sourceTensors:(id)arg1 resultTensor:(id)arg2 ;
-(BOOL)isSupportedShapeForTensorSources:(id)arg0 ;
-(BOOL)isValidTrainingParameters;
-(NSUInteger)allocatedDataSizeForTraining:(BOOL)arg0 optimizer:(id)arg1 ;
-(NSUInteger)parametersCount;
-(id)description;
-(id)initWithFeatureChannelCount:(NSUInteger)arg0 mean:(id)arg1 variance:(id)arg2 beta:(id)arg3 gamma:(id)arg4 varianceEpsilon:(float)arg5 momentum:(float)arg6 ;
-(id)summarizedDOTDescription;
-(void)linkAssociatedTensors;
-(void)unlinkAssociatedTensors;


@end


#endif