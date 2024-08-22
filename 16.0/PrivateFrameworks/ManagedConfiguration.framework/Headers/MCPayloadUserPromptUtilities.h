// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MCPAYLOADUSERPROMPTUTILITIES_H
#define MCPAYLOADUSERPROMPTUTILITIES_H


#import <Foundation/Foundation.h>


@interface MCPayloadUserPromptUtilities : NSObject



+(id)prioritizeUserInput:(id)arg0 key:(id)arg1 overField:(id)arg2 ;
+(id)promptDictionaryForKey:(id)arg0 title:(id)arg1 description:(id)arg2 retypeDescription:(id)arg3 finePrint:(id)arg4 defaultValue:(id)arg5 placeholderValue:(id)arg6 minimumLength:(NSUInteger)arg7 fieldType:(int)arg8 flags:(int)arg9 ;


@end


#endif