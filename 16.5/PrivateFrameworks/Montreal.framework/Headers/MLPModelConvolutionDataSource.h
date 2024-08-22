// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MLPMODELCONVOLUTIONDATASOURCE_H
#define MLPMODELCONVOLUTIONDATASOURCE_H

@class MPSVector, MPSCNNConvolutionDescriptor, NSString, MPSNNOptimizerAdam, MPSCNNConvolutionWeightsAndBiasesState, NSData;
@protocol MPSCNNConvolutionDataSource, MTLBuffer;

#import <Foundation/Foundation.h>

#import "MLPDeviceHandler.h"

@interface MLPModelConvolutionDataSource : NSObject <MPSCNNConvolutionDataSource>



@property (readonly) NSObject<MTLBuffer> *biasBuffer; // ivar: _biasBuffer
@property (readonly, nonatomic) MPSVector *biasMomentumVector; // ivar: _biasMomentumVector
@property (readonly, nonatomic) MPSVector *biasVelocityVector; // ivar: _biasVelocityVector
@property (readonly) MPSCNNConvolutionDescriptor *convDesc; // ivar: _convDesc
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) MLPDeviceHandler *deviceHandler; // ivar: _deviceHandler
@property (readonly) NSUInteger hash;
@property *void initialBias; // ivar: _initialBias
@property *void initialWeights; // ivar: _initialWeights
@property (readonly) NSUInteger inputFeatureChannels; // ivar: _inputFeatureChannels
@property (readonly) NSUInteger kernelHeight; // ivar: _kernelHeight
@property (readonly) NSString *kernelParamsBinaryName; // ivar: _kernelParamsBinaryName
@property (readonly) NSUInteger kernelWidth; // ivar: _kernelWidth
@property (readonly, nonatomic) MPSNNOptimizerAdam *optimizer; // ivar: _optimizer
@property (readonly) MLPModelOptimizerOptions optimizerOptions; // ivar: _optimizerOptions
@property (readonly) NSUInteger outputFeatureChannels; // ivar: _outputFeatureChannels
@property (readonly) unsigned int seed; // ivar: _seed
@property (readonly) NSUInteger sizeBias; // ivar: _sizeBias
@property (readonly) NSUInteger sizeWeights; // ivar: _sizeWeights
@property (readonly, nonatomic) MPSCNNConvolutionWeightsAndBiasesState *state; // ivar: _state
@property (readonly) Class superclass;
@property (readonly) NSObject<MTLBuffer> *weightBuffer; // ivar: _weightBuffer
@property (readonly, nonatomic) MPSVector *weightMomentumVector; // ivar: _weightMomentumVector
@property (readonly, nonatomic) MPSVector *weightVelocityVector; // ivar: _weightVelocityVector
@property (readonly) NSData *weightsInWHIOOrder;


-(*float)biasTerms;
-(*void)weights;
-(BOOL)load;
-(NSUInteger)bias_size;
-(NSUInteger)weight_size;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)descriptor;
-(id)initWithKernelWidth:(NSUInteger)arg0 kernelHeight:(NSUInteger)arg1 inputFeatureChannels:(NSUInteger)arg2 outputFeatureChannels:(NSUInteger)arg3 stride:(NSUInteger)arg4 kernelParamsBinaryName:(id)arg5 initialWeights:(*void)arg6 initialBias:(*void)arg7 deviceHandler:(id)arg8 optimizerOptions:(struct MLPModelOptimizerOptions )arg9 ;
-(id)label;
-(id)updateWithCommandBuffer:(id)arg0 gradientState:(id)arg1 ;
-(id)updateWithCommandBuffer:(id)arg0 gradientState:(id)arg1 sourceState:(id)arg2 ;
-(unsigned int)dataType;
-(void)bootstrapBias:(*id)arg0 length:(NSUInteger)arg1 device:(id)arg2 stdDev:(float)arg3 values:(*void)arg4 ;
-(void)bootstrapBuffer:(id)arg0 length:(NSUInteger)arg1 device:(id)arg2 stdDev:(float)arg3 ;
-(void)bootstrapWeights:(*id)arg0 length:(NSUInteger)arg1 device:(id)arg2 stdDev:(float)arg3 values:(*void)arg4 ;
-(void)checkpointWithCommandQueue:(id)arg0 ;
-(void)purge;


@end


#endif