// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTLBUILTINARGUMENT_H
#define MTLBUILTINARGUMENT_H



#import "MTLArgumentInternal.h"

@interface MTLBuiltInArgument : MTLArgumentInternal {
    unsigned short _builtInType;
    unsigned short _builtInDataType;
}




-(NSUInteger)builtInDataType;
-(NSUInteger)builtInType;
-(id)initWithName:(id)arg0 type:(NSUInteger)arg1 access:(NSUInteger)arg2 active:(BOOL)arg3 index:(NSUInteger)arg4 dataType:(NSUInteger)arg5 builtInType:(NSUInteger)arg6 ;


@end


#endif