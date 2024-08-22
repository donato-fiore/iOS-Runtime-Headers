// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SGOBJCRUNTIME_H
#define SGOBJCRUNTIME_H


#import <Foundation/Foundation.h>


@interface SGObjCRuntime : NSObject



+(NSUInteger)_arityForBlockAtIndex:(NSUInteger)arg0 inSelector:(SEL)arg1 instanceMethod:(BOOL)arg2 ofProtocol:(id)arg3 seenProtocols:(id)arg4 foundSelector:(*BOOL)arg5 ;
+(NSUInteger)arityForBlockAtIndex:(NSUInteger)arg0 inSelector:(SEL)arg1 instanceMethod:(BOOL)arg2 ofProtocol:(id)arg3 ;


@end


#endif