// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTLINDIRECTARGUMENTDESCRIPTOR_H
#define MTLINDIRECTARGUMENTDESCRIPTOR_H



#import "MTLArgumentDescriptor.h"

@interface MTLIndirectArgumentDescriptor : MTLArgumentDescriptor

@property (nonatomic) NSUInteger access;
@property (nonatomic) NSUInteger arrayLength;
@property (nonatomic) NSUInteger constantBlockAlignment;
@property (nonatomic) NSUInteger dataType;
@property (nonatomic) NSUInteger index;
@property (nonatomic) NSUInteger textureType;


+(id)alloc;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)indirectArgumentDescriptor;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif