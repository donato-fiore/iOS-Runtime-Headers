// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef KVSPANMATCHQUERYBUILDER_H
#define KVSPANMATCHQUERYBUILDER_H

@class NSLocale, NSString, NSMutableString;

#import <Foundation/Foundation.h>


@interface KVSpanMatchQueryBuilder : NSObject {
    NSLocale *_locale;
    NSString *_cleanText;
    NSMutableString *_cleanTextMutable;
    TokenStream _tokens;
    TokenStream _normalized_tokens;
}




+(id)queryFromTokenChain:(id)arg0 ;
-(id)build;
-(id)init;
-(id)initWithLocale:(id)arg0 ;
-(id)initWithLocale:(id)arg0 cleanText:(id)arg1 ;
-(void)addTokenWithValue:(id)arg0 cleanValue:(id)arg1 normalizedValues:(id)arg2 beginIndex:(unsigned int)arg3 endIndex:(unsigned int)arg4 isSignificant:(BOOL)arg5 isWitespace:(BOOL)arg6 ;


@end


#endif