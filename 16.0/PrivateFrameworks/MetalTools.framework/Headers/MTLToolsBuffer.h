// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTLTOOLSBUFFER_H
#define MTLTOOLSBUFFER_H

@class NSString;
@protocol MTLBufferSPI, MTLDevice, MTLHeap;


#import "MTLToolsResource.h"

@interface MTLToolsBuffer : MTLToolsResource <MTLBufferSPI>



@property (readonly) NSUInteger allocatedSize;
@property (readonly) NSUInteger allocationID;
@property (readonly) NSUInteger cpuCacheMode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSObject<MTLDevice> *device;
@property (readonly) NSUInteger gpuAddress;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hazardTrackingMode;
@property (readonly) NSObject<MTLHeap> *heap;
@property (readonly) NSUInteger heapOffset;
@property (readonly) *__IOSurface iosurface;
@property (copy) NSString *label;
@property (readonly) NSUInteger length;
@property (nonatomic) NSUInteger parentGPUAddress;
@property (nonatomic) NSUInteger parentGPUSize;
@property (readonly) NSUInteger protectionOptions;
@property (readonly, nonatomic) NSUInteger resourceIndex;
@property (readonly) NSUInteger resourceOptions;
@property int responsibleProcess;
@property (readonly) NSUInteger storageMode;
@property (readonly) Class superclass;
@property (readonly) NSUInteger unfilteredResourceOptions;


-(*void)contents;
-(id)formattedDescription:(NSUInteger)arg0 ;
-(id)newLinearTextureWithDescriptor:(id)arg0 offset:(NSUInteger)arg1 bytesPerRow:(NSUInteger)arg2 bytesPerImage:(NSUInteger)arg3 ;
-(id)newTextureWithDescriptor:(id)arg0 offset:(NSUInteger)arg1 bytesPerRow:(NSUInteger)arg2 ;
-(struct __IOSurface *)_aneIOSurface;
-(void)addDebugMarker:(id)arg0 range:(struct _NSRange )arg1 ;
-(void)dealloc;
-(void)didModifyRange:(struct _NSRange )arg0 ;
-(void)removeAllDebugMarkers;


@end


#endif