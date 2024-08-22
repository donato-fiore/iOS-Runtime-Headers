// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCPCNNCONVBLOCKVECTOR_H
#define VCPCNNCONVBLOCKVECTOR_H



#import "VCPCNNConvBlock.h"

@interface VCPCNNConvBlockVector : VCPCNNConvBlock {
    *unk CalculateDotProductOfChunk;
}




+(BOOL)isFilterSizeSupported:(int)arg0 ;
-(id)initWithParameters:(int)arg0 filterNum:(int)arg1 chunk:(int)arg2 reLU:(BOOL)arg3 padding:(BOOL)arg4 groups:(int)arg5 stride:(int)arg6 batchNorm:(BOOL)arg7 ;
-(int)chunkFourForward;
-(int)forward;
-(int)readFromDisk:(struct __sFILE *)arg0 quantFactor:(short)arg1 ;
-(int)straightForwardForChunkFour;


@end


#endif