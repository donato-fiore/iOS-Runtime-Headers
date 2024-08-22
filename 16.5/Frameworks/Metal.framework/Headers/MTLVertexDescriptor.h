// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTLVERTEXDESCRIPTOR_H
#define MTLVERTEXDESCRIPTOR_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "MTLVertexAttributeDescriptorArray.h"
#import "MTLVertexBufferLayoutDescriptorArray.h"

@interface MTLVertexDescriptor : NSObject <NSCopying>



@property (readonly) MTLVertexAttributeDescriptorArray *attributes;
@property (readonly) MTLVertexBufferLayoutDescriptorArray *layouts;


+(id)alloc;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)vertexDescriptor;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)formattedDescription:(NSUInteger)arg0 ;
-(void)reset;


@end


#endif