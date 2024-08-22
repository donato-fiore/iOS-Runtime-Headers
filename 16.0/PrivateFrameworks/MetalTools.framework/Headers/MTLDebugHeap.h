// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTLDEBUGHEAP_H
#define MTLDEBUGHEAP_H

@protocol MTLDebugResourcePurgeable;


#import "MTLToolsHeap.h"
#import "MTLDebugDevice.h"

@interface MTLDebugHeap : MTLToolsHeap <MTLDebugResourcePurgeable>

 {
    atomic<int> _purgeableStateToken;
    BOOL _purgeableStateHasBeenSet;
}


@property (readonly, nonatomic) MTLDebugDevice *debugDevice; // ivar: _debugDevice


-(BOOL)purgeableStateValidForRendering;
-(NSUInteger)maxAvailableSizeWithAlignment:(NSUInteger)arg0 ;
-(NSUInteger)setPurgeableState:(NSUInteger)arg0 ;
-(id)_newDebugAccelerationStructure:(id)arg0 ;
-(id)initWithHeap:(id)arg0 device:(id)arg1 ;
-(id)newAccelerationStructureWithDescriptor:(id)arg0 ;
-(id)newAccelerationStructureWithDescriptor:(id)arg0 offset:(NSUInteger)arg1 ;
-(id)newAccelerationStructureWithSize:(NSUInteger)arg0 ;
-(id)newAccelerationStructureWithSize:(NSUInteger)arg0 offset:(NSUInteger)arg1 ;
-(id)newAccelerationStructureWithSize:(NSUInteger)arg0 offset:(NSUInteger)arg1 resourceIndex:(NSUInteger)arg2 ;
-(id)newAccelerationStructureWithSize:(NSUInteger)arg0 resourceIndex:(NSUInteger)arg1 ;
-(id)newBufferWithLength:(NSUInteger)arg0 options:(NSUInteger)arg1 ;
-(id)newBufferWithLength:(NSUInteger)arg0 options:(NSUInteger)arg1 offset:(NSUInteger)arg2 ;
-(id)newTextureWithDescriptor:(id)arg0 ;
-(id)newTextureWithDescriptor:(id)arg0 offset:(NSUInteger)arg1 ;
-(void)lockPurgeableState;
-(void)unlockPurgeableState;
-(void)validateHeapResourceOptions:(NSUInteger)arg0 isTexture:(BOOL)arg1 isIOSurface:(BOOL)arg2 context:(struct _MTLMessageContext *)arg3 ;
-(void)validateHeapTextureUsage:(NSUInteger)arg0 options:(NSUInteger)arg1 context:(struct _MTLMessageContext *)arg2 ;
-(void)validateOffset:(NSUInteger)arg0 withRequirements:(struct ? )arg1 ;
-(void)validatePixelFormatWithHeap:(NSUInteger)arg0 context:(struct _MTLMessageContext *)arg1 ;
-(void)validateRaytracingHeap;


@end


#endif