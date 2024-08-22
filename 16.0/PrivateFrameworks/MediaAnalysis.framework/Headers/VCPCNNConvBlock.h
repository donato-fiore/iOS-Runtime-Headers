// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCPCNNCONVBLOCK_H
#define VCPCNNCONVBLOCK_H



#import "VCPCNNBlock.h"
#import "VCPCNNData.h"

@interface VCPCNNConvBlock : VCPCNNBlock {
    int _filterSize;
    int _filterNum;
    VCPCNNData *_filter;
    VCPCNNData *_bias;
    int _chunk;
    BOOL _reLU;
    int _padding;
    int _padSize;
    int _stride;
    int _groups;
    BOOL _batchNorm;
}




+(Class)convBlockClass:(int)arg0 ;
+(id)convBlockWithFilterSize:(int)arg0 filterNum:(int)arg1 chunk:(int)arg2 reLU:(BOOL)arg3 padding:(BOOL)arg4 ;
+(id)convBlockWithFilterSize:(int)arg0 filterNum:(int)arg1 chunk:(int)arg2 reLU:(BOOL)arg3 padding:(BOOL)arg4 groups:(int)arg5 stride:(int)arg6 batchNorm:(BOOL)arg7 ;
-(BOOL)supportGPU;
-(BOOL)useGPU;
-(id)initWithParameters:(int)arg0 filterNum:(int)arg1 chunk:(int)arg2 reLU:(BOOL)arg3 padding:(BOOL)arg4 groups:(int)arg5 stride:(int)arg6 batchNorm:(BOOL)arg7 ;
-(int)constructBlock:(id)arg0 context:(id)arg1 ;


@end


#endif