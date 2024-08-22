// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTLTOOLSINDIRECTCOMMANDBUFFER_H
#define MTLTOOLSINDIRECTCOMMANDBUFFER_H

@class NSString;
@protocol MTLIndirectCommandBufferSPI, MTLDevice, MTLHeap;


#import "MTLToolsResource.h"

@interface MTLToolsIndirectCommandBuffer : MTLToolsResource <MTLIndirectCommandBufferSPI>



@property (readonly) NSUInteger allocatedSize;
@property (readonly) NSUInteger cpuCacheMode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSObject<MTLDevice> *device;
@property (readonly, nonatomic) NSUInteger gpuAddress;
@property (readonly) NSUInteger gpuHandle;
@property (readonly) MTLResourceID gpuResourceID;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hazardTrackingMode;
@property (readonly) NSObject<MTLHeap> *heap;
@property (readonly) NSUInteger heapOffset;
@property (copy) NSString *label;
@property (readonly, nonatomic) NSUInteger resourceIndex;
@property (readonly) NSUInteger resourceOptions;
@property (readonly) NSUInteger size;
@property (readonly) NSUInteger storageMode;
@property (readonly) Class superclass;
@property (readonly) NSUInteger uniqueIdentifier;


-(id)indirectComputeCommandAtIndex:(NSUInteger)arg0 ;
-(id)indirectRenderCommandAtIndex:(NSUInteger)arg0 ;
-(void)getHeader:(**void)arg0 headerSize:(*NSUInteger)arg1 ;
-(void)resetWithRange:(struct _NSRange )arg0 ;


@end


#endif