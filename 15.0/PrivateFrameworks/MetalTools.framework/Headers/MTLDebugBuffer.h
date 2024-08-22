// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTLDEBUGBUFFER_H
#define MTLDEBUGBUFFER_H

@class NSMutableArray;
@protocol MTLDebugResourcePurgeable;


#import "MTLToolsBuffer.h"
#import "MTLDebugDevice.h"
#import "MTLDebugResource.h"

@interface MTLDebugBuffer : MTLToolsBuffer <MTLDebugResourcePurgeable>

 {
    NSUInteger _length;
    MTLDebugDevice *_debugDevice;
    NSMutableArray *_debugMarkers;
    atomic<int> _purgeableStateToken;
    BOOL _purgeableStateHasBeenSet;
}


@property (readonly, nonatomic) MTLDebugResource *common; // ivar: _common
@property (nonatomic) BOOL isContentExposedToCPU; // ivar: _isContentExposedToCPU
@property (readonly, nonatomic) *void pointer; // ivar: _pointer


-(*void)contents;
-(BOOL)doesAliasAllResources:(*id)arg0 count:(NSUInteger)arg1 ;
-(BOOL)doesAliasAnyResources:(*id)arg0 count:(NSUInteger)arg1 ;
-(BOOL)doesAliasResource:(id)arg0 ;
-(BOOL)purgeableStateValidForRendering;
-(NSUInteger)gpuAddress;
-(NSUInteger)length;
-(NSUInteger)parentGPUAddress;
-(NSUInteger)parentGPUSize;
-(NSUInteger)resourceIndex;
-(NSUInteger)setPurgeableState:(NSUInteger)arg0 ;
-(id)copyDebugMarkers;
-(id)description;
-(id)initWithBuffer:(id)arg0 device:(id)arg1 bytes:(*void)arg2 options:(NSUInteger)arg3 ;
-(id)initWithBuffer:(id)arg0 device:(id)arg1 options:(NSUInteger)arg2 ;
-(id)initWithBuffer:(id)arg0 heap:(id)arg1 device:(id)arg2 options:(NSUInteger)arg3 ;
-(id)newLinearTextureWithDescriptor:(id)arg0 offset:(NSUInteger)arg1 bytesPerRow:(NSUInteger)arg2 bytesPerImage:(NSUInteger)arg3 ;
-(id)newTextureWithDescriptor:(id)arg0 offset:(NSUInteger)arg1 bytesPerRow:(NSUInteger)arg2 ;
-(void)addDebugMarker:(id)arg0 range:(struct _NSRange )arg1 ;
-(void)dealloc;
-(void)didModifyRange:(struct _NSRange )arg0 ;
-(void)lockPurgeableState;
-(void)makeAliasable;
-(void)removeAllDebugMarkers;
-(void)setParentGPUAddress:(NSUInteger)arg0 ;
-(void)setParentGPUSize:(NSUInteger)arg0 ;
-(void)unlockPurgeableState;


@end


#endif