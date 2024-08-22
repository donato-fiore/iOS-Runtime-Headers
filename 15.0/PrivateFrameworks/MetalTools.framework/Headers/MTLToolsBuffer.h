// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTLTOOLSBUFFER_H
#define MTLTOOLSBUFFER_H

@class NSString;
@protocol MTLBuffer, MTLDevice, MTLHeap;


#import "MTLToolsResource.h"

@interface MTLToolsBuffer : MTLToolsResource <MTLBuffer>



@property (readonly) NSUInteger allocatedSize;
@property (readonly) NSUInteger cpuCacheMode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSObject<MTLDevice> *device;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hazardTrackingMode;
@property (readonly) NSObject<MTLHeap> *heap;
@property (readonly) NSUInteger heapOffset;
@property (copy) NSString *label;
@property (readonly) NSUInteger length;
@property (readonly) NSUInteger resourceOptions;
@property (readonly) NSUInteger storageMode;
@property (readonly) Class superclass;


-(*void)contents;
-(NSUInteger)gpuAddress;
-(NSUInteger)parentGPUAddress;
-(NSUInteger)parentGPUSize;
-(id)formattedDescription:(NSUInteger)arg0 ;
-(id)newLinearTextureWithDescriptor:(id)arg0 offset:(NSUInteger)arg1 bytesPerRow:(NSUInteger)arg2 bytesPerImage:(NSUInteger)arg3 ;
-(id)newTextureWithDescriptor:(id)arg0 offset:(NSUInteger)arg1 bytesPerRow:(NSUInteger)arg2 ;
-(struct __IOSurface *)iosurface;
-(void)addDebugMarker:(id)arg0 range:(struct _NSRange )arg1 ;
-(void)dealloc;
-(void)didModifyRange:(struct _NSRange )arg0 ;
-(void)removeAllDebugMarkers;
-(void)setParentGPUAddress:(NSUInteger)arg0 ;
-(void)setParentGPUSize:(NSUInteger)arg0 ;


@end


#endif