// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTLFUNCTIONCONSTANT_H
#define MTLFUNCTIONCONSTANT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface MTLFunctionConstant : NSObject

@property (readonly) NSUInteger index;
@property (readonly) NSString *name;
@property (readonly) BOOL required;
@property (readonly) NSUInteger type;


+(id)alloc;
+(id)allocWithZone:(struct _NSZone *)arg0 ;


@end


#endif