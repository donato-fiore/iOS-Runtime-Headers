// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCPCNNFULLCONNECTIONBLOCKGPU_H
#define VCPCNNFULLCONNECTIONBLOCKGPU_H

@class MPSCNNFullyConnected;


#import "VCPCNNFullConnectionBlock.h"

@interface VCPCNNFullConnectionBlockGPU : VCPCNNFullConnectionBlock {
    MPSCNNFullyConnected *_mpsFullConn;
}




-(int)convVCPNeuronTypeToMPS:(int)arg0 ;
-(int)forward;
-(int)loadWeights:(struct __sFILE *)arg0 inputDim:(int)arg1 outputDim:(int)arg2 quantFactor:(int)arg3 ;
-(int)setupMPS;
-(int)shuffleWeights:(*float)arg0 fromSrc:(*float)arg1 inputChannels:(int)arg2 inputHeight:(int)arg3 inputWidth:(int)arg4 outputChannels:(int)arg5 ;


@end


#endif