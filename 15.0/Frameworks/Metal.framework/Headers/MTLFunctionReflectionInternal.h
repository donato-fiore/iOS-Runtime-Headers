// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTLFUNCTIONREFLECTIONINTERNAL_H
#define MTLFUNCTIONREFLECTIONINTERNAL_H

@class NSArray, NSData;


#import "MTLFunctionReflection.h"

@interface MTLFunctionReflectionInternal : MTLFunctionReflection {
    NSArray *_builtInArguments;
    NSArray *_arguments;
    NSData *_pluginReturnData;
    NSUInteger _primitiveKind;
    NSArray *_tags;
}




-(NSUInteger)primitiveKind;
-(id)arguments;
-(id)builtInArguments;
-(id)initWithArguments:(*id)arg0 argumentCount:(unsigned int)arg1 builtInArgumentCount:(unsigned int)arg2 pluginReturnData:(id)arg3 primitiveKind:(NSUInteger)arg4 tags:(*id)arg5 tagCount:(unsigned int)arg6 ;
-(id)initWithDevice:(id)arg0 reflectionData:(id)arg1 functionType:(NSUInteger)arg2 options:(NSUInteger)arg3 ;
-(id)pluginReturnData;
-(id)tags;
-(void)dealloc;


@end


#endif