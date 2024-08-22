// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTLPOINTERTYPE_H
#define MTLPOINTERTYPE_H



#import "MTLType.h"

@interface MTLPointerType : MTLType

@property (readonly) NSUInteger access;
@property (readonly) NSUInteger alignment;
@property (readonly) NSUInteger dataSize;
@property (readonly) BOOL elementIsArgumentBuffer;
@property (readonly) NSUInteger elementType;


+(id)alloc;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
-(id)elementArrayType;
-(id)elementStructType;


@end


#endif