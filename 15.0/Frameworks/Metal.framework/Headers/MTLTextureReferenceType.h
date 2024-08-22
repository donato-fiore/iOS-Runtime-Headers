// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTLTEXTUREREFERENCETYPE_H
#define MTLTEXTUREREFERENCETYPE_H



#import "MTLType.h"

@interface MTLTextureReferenceType : MTLType

@property (readonly) NSUInteger access;
@property (readonly) BOOL isDepthTexture;
@property (readonly) NSUInteger textureDataType;
@property (readonly) NSUInteger textureType;


+(id)alloc;
+(id)allocWithZone:(struct _NSZone *)arg0 ;


@end


#endif