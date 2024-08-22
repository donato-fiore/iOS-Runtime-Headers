// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCPCNNFLATTENBLOCK_H
#define VCPCNNFLATTENBLOCK_H



#import "VCPCNNBlock.h"

@interface VCPCNNFlattenBlock : VCPCNNBlock {
    int _chunk;
}




-(id)initWithParameters:(int)arg0 ;
-(int)constructBlock:(id)arg0 context:(id)arg1 ;
-(int)forward;


@end


#endif