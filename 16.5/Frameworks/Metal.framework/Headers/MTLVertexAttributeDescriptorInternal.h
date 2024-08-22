// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTLVERTEXATTRIBUTEDESCRIPTORINTERNAL_H
#define MTLVERTEXATTRIBUTEDESCRIPTORINTERNAL_H



#import "MTLVertexAttributeDescriptor.h"

@interface MTLVertexAttributeDescriptorInternal : MTLVertexAttributeDescriptor {
    NSUInteger _vertexFormat;
    NSUInteger _offset;
    NSUInteger _bufferIndex;
}




-(NSUInteger)bufferIndex;
-(NSUInteger)format;
-(NSUInteger)offset;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)setBufferIndex:(NSUInteger)arg0 ;
-(void)setFormat:(NSUInteger)arg0 ;
-(void)setOffset:(NSUInteger)arg0 ;


@end


#endif