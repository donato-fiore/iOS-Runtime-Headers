// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTLVERTEXATTRIBUTEINTERNAL_H
#define MTLVERTEXATTRIBUTEINTERNAL_H

@class NSString;


#import "MTLVertexAttribute.h"

@interface MTLVertexAttributeInternal : MTLVertexAttribute {
    unsigned char _flags;
    NSString *_name;
    NSUInteger _attributeIndex;
    NSUInteger _attributeType;
}




-(BOOL)isActive;
-(BOOL)isPatchControlPointData;
-(BOOL)isPatchData;
-(NSUInteger)attributeIndex;
-(NSUInteger)attributeType;
-(id)description;
-(id)formattedDescription:(NSUInteger)arg0 ;
-(id)initWithName:(id)arg0 attributeIndex:(NSUInteger)arg1 attributeType:(NSUInteger)arg2 flags:(struct MTLAttributeFlags )arg3 ;
-(id)name;
-(void)dealloc;
-(void)setAttributeType:(NSUInteger)arg0 ;


@end


#endif