// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTLBUILTINARGUMENT_H
#define MTLBUILTINARGUMENT_H



#import "MTLBindingInternal.h"

@interface MTLBuiltInArgument : MTLBindingInternal {
    unsigned short _builtInType;
    unsigned short _builtInDataType;
}




-(NSUInteger)builtInDataType;
-(NSUInteger)builtInType;
-(id)formattedDescription:(NSUInteger)arg0 ;
-(id)initWithName:(id)arg0 type:(NSUInteger)arg1 access:(NSUInteger)arg2 active:(BOOL)arg3 index:(NSUInteger)arg4 dataType:(NSUInteger)arg5 builtInType:(NSUInteger)arg6 ;


@end


#endif