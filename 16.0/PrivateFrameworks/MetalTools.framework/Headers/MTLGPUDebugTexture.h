// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTLGPUDEBUGTEXTURE_H
#define MTLGPUDEBUGTEXTURE_H

@class NSString;
@protocol MTLGPUDebugResource, MTLTextureSPI, MTLDevice, MTLHeap;


#import "MTLToolsTexture.h"

@interface MTLGPUDebugTexture : MTLToolsTexture <MTLGPUDebugResource>

 {
    NSUInteger _identifier;
}


@property (readonly) NSUInteger allocatedSize;
@property (readonly) NSUInteger allocationID;
@property (retain, nonatomic) NSObject<MTLTextureSPI> *baseObject;
@property (readonly) NSUInteger cpuCacheMode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSObject<MTLDevice> *device;
@property (readonly, nonatomic) NSUInteger gpuAddress;
@property (readonly, nonatomic) NSUInteger gpuIdentifier;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hazardTrackingMode;
@property (readonly) NSObject<MTLHeap> *heap;
@property (readonly) NSUInteger heapOffset;
@property (copy) NSString *label;
@property (readonly, nonatomic) NSUInteger length;
@property (readonly) NSUInteger protectionOptions;
@property (readonly) NSUInteger resourceOptions;
@property int responsibleProcess;
@property (readonly) NSUInteger storageMode;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger underlyingGPUAddress;
@property (readonly) NSUInteger unfilteredResourceOptions;


-(NSUInteger)handleForOffset:(NSUInteger)arg0 ;
-(id)initWithTexture:(id)arg0 heap:(id)arg1 device:(id)arg2 ;
-(id)initWithTextureView:(id)arg0 parentBuffer:(id)arg1 heap:(id)arg2 device:(id)arg3 ;
-(id)initWithTextureView:(id)arg0 parentTexture:(id)arg1 heap:(id)arg2 device:(id)arg3 ;
-(id)newCompressedTextureViewWithPixelFormat:(NSUInteger)arg0 textureType:(NSUInteger)arg1 level:(NSUInteger)arg2 slice:(NSUInteger)arg3 ;
-(id)newTextureViewWithPixelFormat:(NSUInteger)arg0 ;
-(id)newTextureViewWithPixelFormat:(NSUInteger)arg0 resourceIndex:(NSUInteger)arg1 ;
-(id)newTextureViewWithPixelFormat:(NSUInteger)arg0 textureType:(NSUInteger)arg1 levels:(struct _NSRange )arg2 slices:(struct _NSRange )arg3 ;
-(id)newTextureViewWithPixelFormat:(NSUInteger)arg0 textureType:(NSUInteger)arg1 levels:(struct _NSRange )arg2 slices:(struct _NSRange )arg3 resourceIndex:(NSUInteger)arg4 ;
-(id)newTextureViewWithPixelFormat:(NSUInteger)arg0 textureType:(NSUInteger)arg1 levels:(struct _NSRange )arg2 slices:(struct _NSRange )arg3 swizzle:(struct ? )arg4 ;
-(id)newTextureViewWithPixelFormat:(NSUInteger)arg0 textureType:(NSUInteger)arg1 levels:(struct _NSRange )arg2 slices:(struct _NSRange )arg3 swizzle:(struct ? )arg4 resourceIndex:(NSUInteger)arg5 ;
-(void)useWithComputeEncoder:(id)arg0 usage:(NSUInteger)arg1 ;
-(void)useWithRenderEncoder:(id)arg0 usage:(NSUInteger)arg1 stages:(struct optional<unsigned long> )arg2 ;


@end


#endif