// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPSCNNBATCHNORMALIZATION_H
#define MPSCNNBATCHNORMALIZATION_H

@protocol MTLBuffer, MPSCNNBatchNormalizationDataSource;


#import "MPSCNNKernel.h"
#import "MPSNNNeuronDescriptor.h"

@interface MPSCNNBatchNormalization : MPSCNNKernel {
    *void _gamma;
    *void _beta;
    *void _meanDS;
    *void _varDS;
    BOOL _stateNeedsToLoad;
    MPSNNNeuronDescriptor *_fusedNeuronDescriptor;
    id<MTLBuffer> *_preluBuffer;
}


@property (readonly, retain, nonatomic) NSObject<MPSCNNBatchNormalizationDataSource> *dataSource; // ivar: _dataSource
@property (nonatomic) float epsilon; // ivar: _epsilon
@property (readonly, nonatomic) NSUInteger numberOfFeatureChannels; // ivar: _numberOfFeatureChannels


+(struct MPSLibraryInfo *)libraryInfo:(*void)arg0 ;
-(BOOL)isResultStateReusedAcrossBatch;
-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)debugDescription;
-(id)encodeBatchToCommandBuffer:(id)arg0 sourceImages:(id)arg1 batchNormalizationState:(id)arg2 ;
-(id)encodeBatchToCommandBuffer:(id)arg0 sourceImages:(id)arg1 destinationStates:(*id)arg2 destinationStateIsTemporary:(BOOL)arg3 ;
-(id)encodeToCommandBuffer:(id)arg0 sourceImage:(id)arg1 batchNormalizationState:(id)arg2 ;
-(id)encodeToCommandBuffer:(id)arg0 sourceImage:(id)arg1 destinationState:(*id)arg2 destinationStateIsTemporary:(BOOL)arg3 ;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 dataSource:(id)arg1 ;
-(id)initWithDevice:(id)arg0 dataSource:(id)arg1 fusedNeuronDescriptor:(id)arg2 ;
-(id)resultStateForSourceImage:(id)arg0 sourceStates:(id)arg1 destinationImage:(id)arg2 ;
-(id)temporaryResultStateForCommandBuffer:(id)arg0 sourceImage:(id)arg1 sourceStates:(id)arg2 destinationImage:(id)arg3 ;
-(void)dealloc;
-(void)encodeBatchToCommandBuffer:(id)arg0 sourceImages:(id)arg1 batchNormalizationState:(id)arg2 destinationImages:(id)arg3 ;
-(void)encodeBatchToCommandBuffer:(id)arg0 sourceImages:(id)arg1 destinationStates:(id)arg2 destinationImages:(id)arg3 ;
-(void)encodeToCommandBuffer:(id)arg0 sourceImage:(id)arg1 batchNormalizationState:(id)arg2 destinationImage:(id)arg3 ;
-(void)encodeToCommandBuffer:(id)arg0 sourceImage:(id)arg1 destinationState:(id)arg2 destinationImage:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)reloadDataSource:(id)arg0 ;
-(void)reloadDataSourceDeprecated:(id)arg0 doReloadWeights:(BOOL)arg1 doReloadStats:(BOOL)arg2 ;
-(void)reloadGammaAndBetaFromDataSource;
-(void)reloadGammaAndBetaWithCommandBuffer:(id)arg0 gammaAndBetaState:(id)arg1 ;
-(void)reloadMeanAndVarianceFromDataSource;
-(void)reloadMeanAndVarianceWithCommandBuffer:(id)arg0 meanAndVarianceState:(id)arg1 ;


@end


#endif