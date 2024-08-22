// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MLCDEVICEGPUHEAPALLOCATOR_H
#define MLCDEVICEGPUHEAPALLOCATOR_H

@class NSString;
@protocol MPSImageAllocator, MTLHeap;

#import <Foundation/Foundation.h>


@interface MLCDeviceGPUHeapAllocator : NSObject <MPSImageAllocator>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<MTLHeap> *heap; // ivar: _heap
@property (readonly, nonatomic) NSUInteger heapSize; // ivar: _heapSize
@property (nonatomic) BOOL isDebuggingEnabled; // ivar: _isDebuggingEnabled
@property (readonly, nonatomic) NSUInteger numResources; // ivar: _numResources
@property (nonatomic) NSUInteger resourceOffset; // ivar: _resourceOffset
@property (readonly, nonatomic) NSUInteger resourceSize; // ivar: _resourceSize
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)allocateBuffer:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)imageBatchForCommandBuffer:(id)arg0 imageDescriptor:(id)arg1 kernel:(id)arg2 count:(NSUInteger)arg3 ;
-(id)imageForCommandBuffer:(id)arg0 imageDescriptor:(id)arg1 kernel:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDevice:(id)arg0 heapSize:(NSUInteger)arg1 resourceSize:(NSUInteger)arg2 numResources:(NSUInteger)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif