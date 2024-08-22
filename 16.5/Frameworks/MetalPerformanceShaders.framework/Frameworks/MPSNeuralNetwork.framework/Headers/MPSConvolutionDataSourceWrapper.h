// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPSCONVOLUTIONDATASOURCEWRAPPER_H
#define MPSCONVOLUTIONDATASOURCEWRAPPER_H

@class NSString;
@protocol MPSCNNConvolutionDataSource;

#import <Foundation/Foundation.h>

#import "MPSCNNConvolutionDescriptor.h"
#import "MPSNNNeuronDescriptor.h"

@interface MPSConvolutionDataSourceWrapper : NSObject <MPSCNNConvolutionDataSource>

 {
    id<MPSCNNConvolutionDataSource> *_dataSource;
    MPSCNNConvolutionDescriptor *_convolution;
    NSObject *_batchNorm;
    MPSNNNeuronDescriptor *_neuron;
    atomic<long> _loadCount;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)wrapperForDataSource:(id)arg0 ;
-(*float)biasTerms;
-(*float)lookupTableForUInt8Kernel;
-(*id)rangesForUInt8Kernel;
-(*void)weights;
-(BOOL)appendBatchNorm:(id)arg0 ;
-(BOOL)appendNeuron:(struct NeuronInfo *)arg0 ;
-(BOOL)appendNeuronDescriptor:(id)arg0 ;
-(BOOL)hasBatchNorm;
-(BOOL)load;
-(BOOL)respondsToSelector:(SEL)arg0 ;
-(BOOL)updateWithGradientState:(id)arg0 sourceState:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptor;
-(id)initWithDataSource:(id)arg0 ;
-(id)label;
-(id)updateWithCommandBuffer:(id)arg0 gradientState:(id)arg1 sourceState:(id)arg2 ;
-(struct NeuronInfo )neuronInfo;
-(unsigned int)dataType;
-(unsigned int)weightsQuantizationType;
-(void)dealloc;
-(void)initialize;
-(void)purge;


@end


#endif