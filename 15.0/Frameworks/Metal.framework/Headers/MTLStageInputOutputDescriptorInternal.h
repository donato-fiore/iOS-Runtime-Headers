// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTLSTAGEINPUTOUTPUTDESCRIPTORINTERNAL_H
#define MTLSTAGEINPUTOUTPUTDESCRIPTORINTERNAL_H



#import "MTLStageInputOutputDescriptor.h"
#import "MTLBufferLayoutDescriptorArrayInternal.h"
#import "MTLAttributeDescriptorArrayInternal.h"

@interface MTLStageInputOutputDescriptorInternal : MTLStageInputOutputDescriptor {
    MTLBufferLayoutDescriptorArrayInternal *_vertexBufferArray;
    MTLAttributeDescriptorArrayInternal *_attributeArray;
    NSUInteger _indexBufferIndex;
    NSUInteger _indexType;
}




+(id)vertexDescriptor;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)validateWithVertexFunction:(id)arg0 error:(*id)arg1 renderPipelineDescriptor:(id)arg2 ;
-(NSUInteger)hash;
-(NSUInteger)indexBufferIndex;
-(NSUInteger)indexType;
-(id)attributes;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)formattedDescription:(NSUInteger)arg0 ;
-(id)init;
-(id)layouts;
-(id)newSerializedDescriptor;
-(void)dealloc;
-(void)reset;
-(void)setIndexBufferIndex:(NSUInteger)arg0 ;
-(void)setIndexType:(NSUInteger)arg0 ;


@end


#endif