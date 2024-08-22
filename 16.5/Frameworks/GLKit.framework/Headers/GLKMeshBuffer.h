// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GLKMESHBUFFER_H
#define GLKMESHBUFFER_H

@class NSString;
@protocol MDLMeshBuffer, MDLMeshBufferZone;

#import <Foundation/Foundation.h>

#import "GLKMeshBufferAllocator.h"

@interface GLKMeshBuffer : NSObject <MDLMeshBuffer>

 {
    unsigned int _mapCount;
    *void _mapPtr;
    unsigned int _target;
}


@property (readonly, nonatomic) GLKMeshBufferAllocator *allocator; // ivar: _allocator
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) unsigned int glBufferName; // ivar: _glBufferName
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger length; // ivar: _length
@property (readonly, nonatomic) NSUInteger offset; // ivar: _offset
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger type; // ivar: _type
@property (readonly, nonatomic) NSObject<MDLMeshBufferZone> *zone; // ivar: _zone


-(id)_initWithBytes:(*void)arg0 length:(NSUInteger)arg1 offset:(NSUInteger)arg2 allocator:(id)arg3 zone:(id)arg4 type:(NSUInteger)arg5 ;
-(id)_initWithData:(id)arg0 allocator:(id)arg1 type:(NSUInteger)arg2 ;
-(id)_initWithLength:(NSUInteger)arg0 allocator:(id)arg1 type:(NSUInteger)arg2 ;
-(id)_initWithLength:(NSUInteger)arg0 offset:(NSUInteger)arg1 zone:(id)arg2 type:(NSUInteger)arg3 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)map;
-(void)dealloc;
-(void)fillData:(id)arg0 offset:(NSUInteger)arg1 ;


@end


#endif