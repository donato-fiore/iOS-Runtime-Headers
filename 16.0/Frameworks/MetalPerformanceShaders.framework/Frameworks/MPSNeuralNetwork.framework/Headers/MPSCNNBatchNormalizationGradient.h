// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPSCNNBATCHNORMALIZATIONGRADIENT_H
#define MPSCNNBATCHNORMALIZATIONGRADIENT_H

@protocol MTLBuffer;


#import "MPSCNNGradientKernel.h"
#import "MPSNNNeuronDescriptor.h"

@interface MPSCNNBatchNormalizationGradient : MPSCNNGradientKernel {
    MPSNNNeuronDescriptor *_fusedNeuronDescriptor;
    id<MTLBuffer> *_preluBuffer;
}




+(struct MPSLibraryInfo *)libraryInfo:(*void)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 device:(id)arg1 ;
-(id)encodeBatchToCommandBuffer:(id)arg0 sourceGradients:(id)arg1 sourceImages:(id)arg2 batchNormalizationState:(id)arg3 ;
-(id)encodeToCommandBuffer:(id)arg0 sourceGradient:(id)arg1 sourceImage:(id)arg2 batchNormalizationState:(id)arg3 ;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 ;
-(id)initWithDevice:(id)arg0 fusedNeuronDescriptor:(id)arg1 ;
-(void)dealloc;
-(void)encodeBatchToCommandBuffer:(id)arg0 sourceGradients:(id)arg1 sourceImages:(id)arg2 batchNormalizationState:(id)arg3 destinationGradients:(id)arg4 ;
-(void)encodeToCommandBuffer:(id)arg0 sourceGradient:(id)arg1 sourceImage:(id)arg2 batchNormalizationState:(id)arg3 destinationGradient:(id)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif