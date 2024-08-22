// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTKMESHBUFFERZONE_H
#define MTKMESHBUFFERZONE_H

@class NSMutableOrderedSet, NSString;
@protocol MDLMeshBufferZone, MDLMeshBufferAllocator, MTLBuffer;

#import <Foundation/Foundation.h>


@interface MTKMeshBufferZone : NSObject <MDLMeshBufferZone>

 {
    NSMutableOrderedSet *_buffers;
    BOOL _destroyInvoked;
}


@property (readonly, nonatomic) NSObject<MDLMeshBufferAllocator> *allocator; // ivar: _allocator
@property (readonly, nonatomic) NSObject<MTLBuffer> *buffer; // ivar: _buffer
@property (readonly, nonatomic) NSUInteger capacity; // ivar: _capacity
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithCapacity:(NSUInteger)arg0 allocator:(id)arg1 ;
-(id)newBufferWithLength:(NSUInteger)arg0 type:(NSUInteger)arg1 ;
-(void)destroyBuffer:(id)arg0 ;


@end


#endif