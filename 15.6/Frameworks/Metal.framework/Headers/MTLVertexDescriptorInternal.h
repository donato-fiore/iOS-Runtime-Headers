// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTLVERTEXDESCRIPTORINTERNAL_H
#define MTLVERTEXDESCRIPTORINTERNAL_H



#import "MTLVertexDescriptor.h"
#import "MTLVertexBufferLayoutDescriptorArrayInternal.h"
#import "MTLVertexAttributeDescriptorArrayInternal.h"

@interface MTLVertexDescriptorInternal : MTLVertexDescriptor {
    MTLVertexBufferLayoutDescriptorArrayInternal *_vertexBufferArray;
    MTLVertexAttributeDescriptorArrayInternal *_attributeArray;
}




+(id)vertexDescriptor;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)validateWithVertexFunction:(id)arg0 error:(*id)arg1 renderPipelineDescriptor:(id)arg2 ;
-(NSUInteger)hash;
-(id)attributes;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)formattedDescription:(NSUInteger)arg0 ;
-(id)init;
-(id)layouts;
-(id)newSerializedDescriptor;
-(void)dealloc;
-(void)reset;


@end


#endif