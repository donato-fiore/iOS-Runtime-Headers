// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MDLMESHBUFFERVIEWALLOCATOR_H
#define MDLMESHBUFFERVIEWALLOCATOR_H

@class NSString;
@protocol MDLMeshBufferAllocator;


#import "MDLBufferViewAllocator.h"

@interface MDLMeshBufferViewAllocator : MDLBufferViewAllocator <MDLMeshBufferAllocator>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)decodeMeshBufferWithCoder:(id)arg0 forKey:(id)arg1 ;
-(id)decodeMeshBuffersWithCoder:(id)arg0 forKey:(id)arg1 ;
-(id)newBuffer:(NSUInteger)arg0 type:(NSUInteger)arg1 ;
-(id)newBufferFromZone:(id)arg0 data:(id)arg1 type:(NSUInteger)arg2 ;
-(id)newBufferFromZone:(id)arg0 length:(NSUInteger)arg1 type:(NSUInteger)arg2 ;
-(id)newBufferViewAtRegionIndex:(NSInteger)arg0 type:(NSUInteger)arg1 ;
-(id)newBufferViewAtRegionIndex:(NSInteger)arg0 type:(NSUInteger)arg1 length:(NSInteger)arg2 offset:(NSInteger)arg3 ;
-(id)newBufferWithData:(id)arg0 type:(NSUInteger)arg1 ;
-(id)newZone:(NSUInteger)arg0 ;
-(id)newZoneForBuffersWithSize:(id)arg0 andType:(id)arg1 ;
-(void)encodeMeshBuffer:(id)arg0 withCoder:(id)arg1 forKey:(id)arg2 ;
-(void)encodeMeshBuffers:(id)arg0 withCoder:(id)arg1 forKey:(id)arg2 ;


@end


#endif