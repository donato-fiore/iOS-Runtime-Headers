// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCPCNNPOOLINGBLOCKGPU_H
#define VCPCNNPOOLINGBLOCKGPU_H

@class MPSCNNPoolingMax;


#import "VCPCNNPoolingBlock.h"

@interface VCPCNNPoolingBlockGPU : VCPCNNPoolingBlock {
    MPSCNNPoolingMax *_mpsPooling;
}




-(int)forward;


@end


#endif