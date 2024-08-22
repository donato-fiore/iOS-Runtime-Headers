// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCPCNNCONVBLOCKBINARY_H
#define VCPCNNCONVBLOCKBINARY_H

@class MPSCNNBinaryConvolution;


#import "VCPCNNBlock.h"

@interface VCPCNNConvBlockBinary : VCPCNNBlock {
    int _filterSize;
    int _filterNum;
    *unsigned int _filterWeightsBinary;
    int _filterWeightSize;
    *float _filterScaling;
    *float _bias;
    int _padding;
    NSUInteger _convType;
    BOOL _reLU;
    MPSCNNBinaryConvolution *_mpsBinaryConv;
}




-(BOOL)supportGPU;
-(BOOL)useGPU;
-(id)initWithParameters:(int)arg0 filterNum:(int)arg1 convType:(NSUInteger)arg2 reLU:(BOOL)arg3 padding:(BOOL)arg4 ;
-(int)constructBlock:(id)arg0 context:(id)arg1 ;
-(int)fillConvWeightsGPU;
-(int)forward;
-(int)gpuForward;
-(int)readFromDisk:(struct __sFILE *)arg0 quantFactor:(short)arg1 ;
-(void)dealloc;


@end


#endif