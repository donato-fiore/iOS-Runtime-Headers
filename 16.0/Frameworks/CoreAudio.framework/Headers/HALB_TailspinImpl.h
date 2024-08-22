// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HALB_TAILSPINIMPL_H
#define HALB_TAILSPINIMPL_H


#import <Foundation/Foundation.h>


@interface HALB_TailspinImpl : NSObject



+(BOOL)dumpTailspinSync:(NSUInteger)arg0 forReason:(id)arg1 ;
+(BOOL)enableTailspinSync;
+(id)initOptionsDictionary;
+(void)prepareDumpOptions:(NSUInteger)arg0 outDict:(*id)arg1 ;


@end


#endif