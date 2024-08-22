// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCPCNNPOOLINGBLOCK_H
#define VCPCNNPOOLINGBLOCK_H



#import "VCPCNNBlock.h"

@interface VCPCNNPoolingBlock : VCPCNNBlock {
    int _px;
    int _py;
    int _chunk;
}




+(id)poolingBlockWithPoolX:(int)arg0 poolY:(int)arg1 chunk:(int)arg2 ;
-(BOOL)supportGPU;
-(BOOL)useGPU;
-(id)initWithParameters:(int)arg0 poolY:(int)arg1 chunk:(int)arg2 ;
-(int)constructBlock:(id)arg0 context:(id)arg1 ;
-(int)forward;


@end


#endif