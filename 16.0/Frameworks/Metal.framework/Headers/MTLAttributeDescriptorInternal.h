// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTLATTRIBUTEDESCRIPTORINTERNAL_H
#define MTLATTRIBUTEDESCRIPTORINTERNAL_H



#import "MTLAttributeDescriptor.h"

@interface MTLAttributeDescriptorInternal : MTLAttributeDescriptor {
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