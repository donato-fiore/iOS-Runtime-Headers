// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTLSTRUCTMEMBER_H
#define MTLSTRUCTMEMBER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface MTLStructMember : NSObject

@property (readonly) NSUInteger argumentIndex;
@property (readonly) NSUInteger dataType;
@property (readonly) NSString *name;
@property (readonly) NSUInteger offset;


+(id)alloc;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
-(NSUInteger)renderTargetIndex;
-(id)arrayType;
-(id)indirectArgumentType;
-(id)pointerType;
-(id)structType;
-(id)textureReferenceType;


@end


#endif