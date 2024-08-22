// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTKMESHBUFFER_H
#define MTKMESHBUFFER_H

@class NSString;
@protocol MDLMeshBuffer, MDLNamed, MTLBuffer, MDLMeshBufferZone;

#import <Foundation/Foundation.h>

#import "MTKMeshBufferAllocator.h"

@interface MTKMeshBuffer : NSObject <MDLMeshBuffer, MDLNamed>



@property (readonly, nonatomic) MTKMeshBufferAllocator *allocator; // ivar: _allocator
@property (readonly, nonatomic) NSObject<MTLBuffer> *buffer; // ivar: _buffer
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger length; // ivar: _length
@property (copy, nonatomic) NSString *name;
@property (readonly, nonatomic) NSUInteger offset; // ivar: _offset
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger type; // ivar: _type
@property (readonly, nonatomic) NSObject<MDLMeshBufferZone> *zone; // ivar: _zone


-(id)_initWithBytes:(*void)arg0 length:(NSUInteger)arg1 offset:(NSUInteger)arg2 allocator:(id)arg3 zone:(id)arg4 type:(NSUInteger)arg5 ;
-(id)_initWithData:(id)arg0 allocator:(id)arg1 type:(NSUInteger)arg2 ;
-(id)_initWithLength:(NSUInteger)arg0 allocator:(id)arg1 type:(NSUInteger)arg2 ;
-(id)_initWithLength:(NSUInteger)arg0 offset:(NSUInteger)arg1 zone:(id)arg2 type:(NSUInteger)arg3 ;
-(id)_newMap;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)map;
-(void)dealloc;
-(void)fillData:(id)arg0 offset:(NSUInteger)arg1 ;


@end


#endif