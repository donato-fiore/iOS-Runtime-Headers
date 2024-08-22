// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTLGPUDEBUGPARALLELRENDERCOMMANDENCODER_H
#define MTLGPUDEBUGPARALLELRENDERCOMMANDENCODER_H

@class MTLRenderPassDescriptor;


#import "MTLToolsParallelRenderCommandEncoder.h"

@interface MTLGPUDebugParallelRenderCommandEncoder : MTLToolsParallelRenderCommandEncoder {
    unsigned int _encoderID;
    MTLRenderPassDescriptor *_descriptor;
}




-(id)initWithParallelRenderCommandEncoder:(id)arg0 parent:(id)arg1 descriptor:(id)arg2 encoderID:(unsigned int)arg3 ;
-(id)renderCommandEncoder;
-(void)dealloc;


@end


#endif