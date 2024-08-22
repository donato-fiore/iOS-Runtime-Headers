// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MTLHEAP_H
#define _MTLHEAP_H

@class MTLObjectWithLabel;



@interface _MTLHeap : MTLObjectWithLabel {
    NSUInteger _heapResourceOptions;
    NSInteger _heapType;
}


@property (readonly) NSUInteger cpuCacheMode;
@property (readonly, nonatomic) NSUInteger gpuAddress; // ivar: _gpuAddress
@property (readonly) NSUInteger hazardTrackingMode;
@property (readonly) NSUInteger resourceOptions;
@property (readonly) NSUInteger storageMode;
@property (readonly) NSInteger type;
@property (readonly) NSUInteger unfilteredResourceOptions;


-(id)description;
-(id)formattedDescription:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithType:(NSInteger)arg0 options:(NSUInteger)arg1 ;
-(id)newAccelerationStructureWithDescriptor:(id)arg0 ;
-(id)newAccelerationStructureWithDescriptor:(id)arg0 offset:(NSUInteger)arg1 ;
-(id)newAccelerationStructureWithSize:(NSUInteger)arg0 ;
-(id)newAccelerationStructureWithSize:(NSUInteger)arg0 offset:(NSUInteger)arg1 ;
-(id)newAccelerationStructureWithSize:(NSUInteger)arg0 offset:(NSUInteger)arg1 resourceIndex:(NSUInteger)arg2 ;
-(id)newAccelerationStructureWithSize:(NSUInteger)arg0 resourceIndex:(NSUInteger)arg1 ;
-(id)newBufferWithLength:(NSUInteger)arg0 options:(NSUInteger)arg1 atOffset:(NSUInteger)arg2 ;
-(id)newBufferWithLength:(NSUInteger)arg0 options:(NSUInteger)arg1 offset:(NSUInteger)arg2 ;
-(id)newTextureWithDescriptor:(id)arg0 atOffset:(NSUInteger)arg1 ;
-(id)newTextureWithDescriptor:(id)arg0 offset:(NSUInteger)arg1 ;


@end


#endif