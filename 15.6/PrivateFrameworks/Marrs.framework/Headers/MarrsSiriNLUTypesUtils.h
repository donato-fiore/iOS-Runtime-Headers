// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MARRSSIRINLUTYPESUTILS_H
#define MARRSSIRINLUTYPESUTILS_H


#import <Foundation/Foundation.h>


@interface MarrsSiriNLUTypesUtils : NSObject



+(BOOL)isRequestEmpty:(id)arg0 ;
+(BOOL)isResponseEmpty:(id)arg0 ;
+(id)QRTokenFromTokenValue:(id)arg0 ;
+(id)emptyResponse;
+(id)firstRewriteHypothesisOfResponse:(id)arg0 ;
+(id)firstRewrittenUtteranceOfResponse:(id)arg0 ;
+(id)firstRewrittenUtteranceOfResponse:(id)arg0 WithDefaultValue:(id)arg1 ;
+(id)firstUtteranceOfRequest:(id)arg0 ;
+(id)firstUtteranceOfRequest:(id)arg0 WithDefaultValue:(id)arg1 ;
+(id)interactionFromTokenValues:(id)arg0 responseTokenValues:(id)arg1 utteranceString:(id)arg2 locale:(id)arg3 ;
+(id)internalTokenFromTokenValue:(id)arg0 cleanValue:(id)arg1 normalizedValues:(id)arg2 isSignificant:(BOOL)arg3 isWhitespace:(BOOL)arg4 ;
+(id)requestFromMdfDictionary:(id)arg0 turnsKey:(id)arg1 tokensKey:(id)arg2 utteranceKey:(id)arg3 valueKey:(id)arg4 siriResponseKey:(id)arg5 locale:(id)arg6 ;
+(id)utteranceFromTokenValues:(id)arg0 utteranceString:(id)arg1 ;


@end


#endif