// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTLDEBUGINDIRECTCOMMANDBUFFER_H
#define MTLDEBUGINDIRECTCOMMANDBUFFER_H

@class NSMutableArray, MTLIndirectCommandBufferDescriptor;
@protocol MTLDebugResourcePurgeable, MTLIndirectCommandBuffer;


#import "MTLToolsIndirectCommandBuffer.h"

@interface MTLDebugIndirectCommandBuffer : MTLToolsIndirectCommandBuffer <MTLDebugResourcePurgeable>

 {
    NSMutableArray *_optimizedRangeList;
    MTLIndirectCommandBufferDescriptor *_desc;
    NSUInteger _maxCommandCount;
    id<MTLIndirectCommandBuffer> *_iCB;
    BOOL _isRender;
    atomic<int> _purgeableStateToken;
    BOOL _purgeableStateHasBeenSet;
}


@property (readonly) MTLIndirectCommandBufferDescriptor *descriptor;
@property (readonly) NSMutableArray *optimizedRangeList;


-(BOOL)purgeableStateValidForRendering;
-(NSUInteger)setPurgeableState:(NSUInteger)arg0 ;
-(id)indirectComputeCommandAtIndex:(NSUInteger)arg0 ;
-(id)indirectRenderCommandAtIndex:(NSUInteger)arg0 ;
-(id)initWithIndirectCommandBuffer:(id)arg0 device:(id)arg1 descriptor:(id)arg2 maxCommandCount:(NSUInteger)arg3 options:(NSUInteger)arg4 ;
-(void)dealloc;
-(void)lockPurgeableState;
-(void)resetWithRange:(struct _NSRange )arg0 ;
-(void)unlockPurgeableState;


@end


#endif