// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _NSPREDICATEOPERATORUTILITIES_H
#define _NSPREDICATEOPERATORUTILITIES_H


#import <Foundation/Foundation.h>


@interface _NSPredicateOperatorUtilities : NSObject



+(BOOL)doRegexForString:(id)arg0 pattern:(id)arg1 likeProtect:(BOOL)arg2 flags:(NSUInteger)arg3 context:(struct ? *)arg4 ;
+(NSInteger)copyRegexFindSafePattern:(id)arg0 toBuffer:(*unsigned short)arg1 ;
+(id)newStringFrom:(id)arg0 usingUnicodeTransforms:(NSUInteger)arg1 ;
+(struct __CFLocale *)retainedLocale;


@end


#endif