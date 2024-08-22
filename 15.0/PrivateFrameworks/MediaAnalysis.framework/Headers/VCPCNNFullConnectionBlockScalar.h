// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCPCNNFULLCONNECTIONBLOCKSCALAR_H
#define VCPCNNFULLCONNECTIONBLOCKSCALAR_H



#import "VCPCNNFullConnectionBlock.h"

@interface VCPCNNFullConnectionBlockScalar : VCPCNNFullConnectionBlock



-(int)forward;
-(int)loadWeights:(struct __sFILE *)arg0 inputDim:(int)arg1 outputDim:(int)arg2 quantFactor:(int)arg3 ;


@end


#endif