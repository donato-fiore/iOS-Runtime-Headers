// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTLIOACCELINTERSECTIONFUNCTIONTABLE_H
#define MTLIOACCELINTERSECTIONFUNCTIONTABLE_H

@class MTLIOAccelVisibleFunctionTable<MTLVisibleFunctionTableSPI>, NSString;
@protocol MTLIntersectionFunctionTableSPI, MTLDevice, MTLBuffer, MTLHeap;


#import "MTLIOAccelResource.h"

@interface MTLIOAccelIntersectionFunctionTable : MTLIOAccelResource <MTLIntersectionFunctionTableSPI>

 {
    MTLIOAccelVisibleFunctionTable<MTLVisibleFunctionTableSPI> *_visibleFunctionTable;
}


@property (readonly) NSUInteger allocatedSize;
@property (readonly) NSUInteger cpuCacheMode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSObject<MTLDevice> *device;
@property (retain, nonatomic) NSObject<MTLBuffer> *globalBuffer;
@property (nonatomic) NSUInteger globalBufferOffset;
@property (readonly) NSUInteger gpuHandle;
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
@property (readonly, nonatomic) MTLIOAccelVisibleFunctionTable<MTLVisibleFunctionTableSPI> *visibleFunctionTable;


-(id)initWithVisibleFunctionTable:(id)arg0 ;
-(void)dealloc;
-(void)setBuffer:(id)arg0 offset:(NSUInteger)arg1 atIndex:(NSUInteger)arg2 ;
-(void)setBuffers:(*id)arg0 offsets:(*NSUInteger)arg1 withRange:(struct _NSRange )arg2 ;
-(void)setFunction:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)setFunctions:(*id)arg0 withRange:(struct _NSRange )arg1 ;
-(void)setOpaqueTriangleIntersectionFunctionWithSignature:(NSUInteger)arg0 atIndex:(NSUInteger)arg1 ;
-(void)setOpaqueTriangleIntersectionFunctionWithSignature:(NSUInteger)arg0 withRange:(struct _NSRange )arg1 ;


@end


#endif