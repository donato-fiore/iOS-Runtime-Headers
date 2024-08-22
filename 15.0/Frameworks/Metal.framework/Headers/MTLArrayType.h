// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTLARRAYTYPE_H
#define MTLARRAYTYPE_H



#import "MTLType.h"

@interface MTLArrayType : MTLType

@property (readonly) NSUInteger argumentIndexStride;
@property (readonly) NSUInteger arrayLength;
@property (readonly) NSUInteger elementType;
@property (readonly) NSUInteger stride;


+(id)alloc;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
-(id)elementArrayType;
-(id)elementIndirectArgumentType;
-(id)elementPointerType;
-(id)elementStructType;
-(id)elementTextureReferenceType;


@end


#endif