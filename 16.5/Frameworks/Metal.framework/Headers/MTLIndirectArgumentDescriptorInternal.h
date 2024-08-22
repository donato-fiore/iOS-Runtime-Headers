// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTLINDIRECTARGUMENTDESCRIPTORINTERNAL_H
#define MTLINDIRECTARGUMENTDESCRIPTORINTERNAL_H



#import "MTLIndirectArgumentDescriptor.h"

@interface MTLIndirectArgumentDescriptorInternal : MTLIndirectArgumentDescriptor {
    MTLArgumentDescriptorPrivate _private;
}




+(id)indirectArgumentDescriptor;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)access;
-(NSUInteger)arrayLength;
-(NSUInteger)constantBlockAlignment;
-(NSUInteger)dataType;
-(NSUInteger)hash;
-(NSUInteger)index;
-(NSUInteger)textureType;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)formattedDescription:(NSUInteger)arg0 ;
-(id)init;
-(void)setAccess:(NSUInteger)arg0 ;
-(void)setArrayLength:(NSUInteger)arg0 ;
-(void)setConstantBlockAlignment:(NSUInteger)arg0 ;
-(void)setDataType:(NSUInteger)arg0 ;
-(void)setIndex:(NSUInteger)arg0 ;
-(void)setTextureType:(NSUInteger)arg0 ;


@end


#endif