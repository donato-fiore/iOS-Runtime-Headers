// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTLTOOLSHEAP_H
#define MTLTOOLSHEAP_H

@class NSString;
@protocol MTLHeapSPI, MTLDevice;


#import "MTLToolsObject.h"

@interface MTLToolsHeap : MTLToolsObject <MTLHeapSPI>



@property (readonly) NSUInteger cpuCacheMode;
@property (readonly) NSUInteger currentAllocatedSize;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSObject<MTLDevice> *device;
@property (readonly, nonatomic) NSUInteger gpuAddress;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hazardTrackingMode;
@property (copy) NSString *label;
@property (readonly) NSUInteger resourceOptions;
@property (readonly) NSUInteger size;
@property (readonly) NSUInteger storageMode;
@property (readonly) Class superclass;
@property (readonly) NSInteger type;
@property (readonly) NSUInteger unfilteredResourceOptions;
@property (readonly) NSUInteger usedSize;


-(NSUInteger)maxAvailableSizeWithAlignment:(NSUInteger)arg0 ;
-(NSUInteger)setPurgeableState:(NSUInteger)arg0 ;
-(id)_newToolsBuffer:(id)arg0 ;
-(id)_newToolsTexture:(id)arg0 ;
-(id)formattedDescription:(NSUInteger)arg0 ;
-(id)newBufferWithLength:(NSUInteger)arg0 options:(NSUInteger)arg1 ;
-(id)newBufferWithLength:(NSUInteger)arg0 options:(NSUInteger)arg1 offset:(NSUInteger)arg2 ;
-(id)newTextureWithDescriptor:(id)arg0 ;
-(id)newTextureWithDescriptor:(id)arg0 offset:(NSUInteger)arg1 ;


@end


#endif