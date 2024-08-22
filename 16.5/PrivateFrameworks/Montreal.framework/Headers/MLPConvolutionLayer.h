// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MLPCONVOLUTIONLAYER_H
#define MLPCONVOLUTIONLAYER_H



#import "MLPConvolutionBase.h"
#import "MLPModelConvolutionDataSource.h"

@interface MLPConvolutionLayer : MLPConvolutionBase

@property (retain) MLPModelConvolutionDataSource *dataSource; // ivar: _dataSource
@property *void initialBias; // ivar: _initialBias
@property *void initialWeights; // ivar: _initialWeights


-(id)backward:(id)arg0 inputGradient:(id)arg1 ;
-(id)forward:(id)arg0 input:(id)arg1 labels:(id)arg2 runInference:(BOOL)arg3 ;
-(id)generateNode:(id)arg0 model:(id)arg1 weightIter:(*NSUInteger)arg2 ;
-(id)initWithName:(id)arg0 inputLength:(NSUInteger)arg1 inputChannels:(NSUInteger)arg2 kernelWidth:(NSUInteger)arg3 kernelHeight:(NSUInteger)arg4 kernelStride:(NSUInteger)arg5 outputChannels:(NSUInteger)arg6 neuronType:(int)arg7 neuronParams:(id)arg8 ;
-(id)initWithName:(id)arg0 parameters:(struct ? *)arg1 ;
-(id)initWithName:(id)arg0 previousLayer:(id)arg1 kernelWidth:(NSUInteger)arg2 kernelHeight:(NSUInteger)arg3 kernelStride:(NSUInteger)arg4 outputChannels:(NSUInteger)arg5 neuronType:(int)arg6 neuronParams:(id)arg7 ;
-(void)createKernel;
-(void)updatePrimaryCurrentState:(id)arg0 index:(id)arg1 inference:(BOOL)arg2 ;


@end


#endif