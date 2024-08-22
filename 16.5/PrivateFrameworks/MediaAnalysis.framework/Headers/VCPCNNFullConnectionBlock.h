// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCPCNNFULLCONNECTIONBLOCK_H
#define VCPCNNFULLCONNECTIONBLOCK_H



#import "VCPCNNBlock.h"

@interface VCPCNNFullConnectionBlock : VCPCNNBlock {
    *float _weight;
    *float _bias;
    int _numNeurons;
    int _neuronType;
}




+(id)fcBlockWithNumNeurons:(int)arg0 NeuronType:(int)arg1 ;
-(BOOL)supportGPU;
-(BOOL)useGPU;
-(id)initWithParameters:(int)arg0 NeuronType:(int)arg1 ;
-(int)constructBlock:(id)arg0 context:(id)arg1 ;
-(int)loadWeights:(struct __sFILE *)arg0 inputDim:(int)arg1 outputDim:(int)arg2 quantFactor:(int)arg3 ;
-(int)readFromDisk:(struct __sFILE *)arg0 quantFactor:(short)arg1 ;
-(int)readWeightsBias:(struct __sFILE *)arg0 weights:(*float)arg1 bias:(*float)arg2 inputDim:(int)arg3 outputDim:(int)arg4 quantFactor:(int)arg5 ;
-(void)dealloc;


@end


#endif