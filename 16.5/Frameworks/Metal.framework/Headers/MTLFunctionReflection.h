// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTLFUNCTIONREFLECTION_H
#define MTLFUNCTIONREFLECTION_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface MTLFunctionReflection : NSObject

@property (readonly) NSArray *arguments;
@property (readonly) NSArray *bindings;
@property (readonly) NSUInteger primitiveKind;
@property (readonly) NSArray *tags;


+(id)alloc;
+(id)allocWithZone:(struct _NSZone *)arg0 ;


@end


#endif