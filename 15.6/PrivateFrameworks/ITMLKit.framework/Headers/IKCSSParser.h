// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IKCSSPARSER_H
#define IKCSSPARSER_H


#import <Foundation/Foundation.h>


@interface IKCSSParser : NSObject



+(id)consumeAtRule:(id)arg0 ;
+(id)consumeComponentValue:(id)arg0 ;
+(id)consumeDeclaration:(id)arg0 ;
+(id)consumeDeclarationList:(id)arg0 ;
+(id)consumeFunction:(id)arg0 fromToken:(id)arg1 ;
+(id)consumeQualifiedRule:(id)arg0 ;
+(id)consumeRules:(id)arg0 topLevel:(BOOL)arg1 ;
+(id)consumeSimpleBlock:(id)arg0 startTokenType:(NSInteger)arg1 ;
+(id)parse:(id)arg0 ;
+(id)parseRulesList:(id)arg0 ;
+(id)parseStylesheet:(id)arg0 ;


@end


#endif