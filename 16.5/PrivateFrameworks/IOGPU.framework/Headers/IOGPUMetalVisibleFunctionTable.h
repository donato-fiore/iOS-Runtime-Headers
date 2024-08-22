// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IOGPUMETALVISIBLEFUNCTIONTABLE_H
#define IOGPUMETALVISIBLEFUNCTIONTABLE_H

@class NSString;
@protocol MTLVisibleFunctionTableSPI, MTLDevice, MTLBuffer, MTLHeap;


#import "IOGPUMetalBuffer.h"

@interface IOGPUMetalVisibleFunctionTable : IOGPUMetalBuffer <MTLVisibleFunctionTableSPI>



@property (readonly) NSUInteger allocatedSize;
@property (readonly) NSUInteger cpuCacheMode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSObject<MTLDevice> *device;
@property (retain, nonatomic) NSObject<MTLBuffer> *globalBuffer;
@property (nonatomic) NSUInteger globalBufferOffset;
@property (readonly, nonatomic) NSUInteger gpuHandle;
@property (readonly) MTLResourceID gpuResourceID;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hazardTrackingMode;
@property (readonly) NSObject<MTLHeap> *heap;
@property (readonly) NSUInteger heapOffset;
@property (copy) NSString *label;
@property (readonly, nonatomic) NSUInteger resourceIndex;
@property (readonly) NSUInteger resourceOptions;
@property (readonly) NSUInteger storageMode;
@property (readonly) Class superclass;
@property (readonly) NSUInteger uniqueIdentifier;


-(void)setBuffer:(id)arg0 offset:(NSUInteger)arg1 atIndex:(NSUInteger)arg2 ;
-(void)setBuffers:(*id)arg0 offsets:(*NSUInteger)arg1 withRange:(struct _NSRange )arg2 ;
-(void)setFunction:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)setFunctions:(*id)arg0 withRange:(struct _NSRange )arg1 ;
-(void)setValue:(NSUInteger)arg0 atIndex:(NSUInteger)arg1 ;
-(void)setValue:(NSUInteger)arg0 withRange:(struct _NSRange )arg1 ;
-(void)setVisibleFunctionTable:(id)arg0 atBufferIndex:(NSUInteger)arg1 ;
-(void)setVisibleFunctionTables:(*id)arg0 withBufferRange:(struct _NSRange )arg1 ;


@end


#endif