// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TCMPSINSTANCENORMDATALOADER_H
#define TCMPSINSTANCENORMDATALOADER_H

@class NSMutableData, NSString, NSMutableArray, MPSVectorDescriptor, MPSCNNInstanceNormalization, MPSNNOptimizerAdam;
@protocol MPSCNNInstanceNormalizationDataSource, MTLCommandQueue;

#import <Foundation/Foundation.h>


@interface TCMPSInstanceNormDataLoader : NSObject <MPSCNNInstanceNormalizationDataSource>

 {
    NSMutableData *_gamma_weights;
    NSMutableData *_beta_weights;
    NSString *_name;
    NSMutableArray *_style_props;
    NSMutableData *_gammaPlaceHolder;
    NSMutableData *_betaPlaceHolder;
    MPSVectorDescriptor *_vDesc;
    MPSCNNInstanceNormalization *_instanceNormFilter;
    id<MTLCommandQueue> *_cq;
    MPSNNOptimizerAdam *_adamGamma;
    MPSNNOptimizerAdam *_adamBeta;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger numberOfFeatureChannels; // ivar: _numberOfFeatureChannels
@property (nonatomic) NSUInteger styleIndex; // ivar: _styleIndex
@property (nonatomic) NSUInteger styles; // ivar: _styles
@property (readonly) Class superclass;


-(*float)beta;
-(*float)betaWeights;
-(*float)gamma;
-(*float)gammaWeights;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithParams:(id)arg0 gammaWeights:(*float)arg1 betaWeights:(*float)arg2 numberFeatureChannels:(NSUInteger)arg3 styles:(NSUInteger)arg4 device:(id)arg5 cmd_queue:(id)arg6 ;
-(id)label;
-(id)updateGammaAndBetaWithCommandBuffer:(id)arg0 instanceNormalizationStateBatch:(id)arg1 ;
-(void)checkpoint;
-(void)checkpointWithCommandQueue:(id)arg0 ;
-(void)loadBeta:(*float)arg0 ;
-(void)loadGamma:(*float)arg0 ;
-(void)setLearningRate:(float)arg0 ;


@end


#endif