// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSATTRIBUTEEVALUATOR_H
#define CSATTRIBUTEEVALUATOR_H

@class NSString, NSArray, NSMutableArray;

#import <Foundation/Foundation.h>


@interface CSAttributeEvaluator : NSObject

@property (nonatomic) BOOL fuzzyMatching; // ivar: _fuzzyMatching
@property (retain, nonatomic) NSString *language; // ivar: _language
@property (nonatomic) BOOL matchOncePerTerm; // ivar: _matchOncePerTerm
@property (nonatomic) NSUInteger matcherCount; // ivar: _matcherCount
@property (nonatomic) **void matchers; // ivar: _matchers
@property (nonatomic) NSUInteger matchersPerTerm; // ivar: _matchersPerTerm
@property (nonatomic) NSUInteger options; // ivar: _options
@property (readonly, nonatomic) NSString *queryString; // ivar: _queryString
@property (nonatomic) NSUInteger queryTermCount; // ivar: _queryTermCount
@property (readonly, nonatomic) NSArray *queryTerms;
@property (retain, nonatomic) NSMutableArray *tokenizedQueryTerms; // ivar: _tokenizedQueryTerms
@property (nonatomic) *void tokenizer; // ivar: _tokenizer


+(void)enumerateTokensForString:(id)arg0 locale:(id)arg1 options:(NSUInteger)arg2 withHandler:(id)arg3 ;
-(BOOL)processPropertyToken:(*unsigned short)arg0 length:(NSInteger)arg1 tokenType:(int)arg2 range:(struct ? )arg3 index:(NSInteger)arg4 evaluationHandler:(id)arg5 ;
-(NSUInteger)evaluateAttribute:(id)arg0 ignoreSubtokens:(BOOL)arg1 skipTranscriptions:(BOOL)arg2 withFuzzyHandler:(id)arg3 ;
-(NSUInteger)evaluateAttribute:(id)arg0 ignoreSubtokens:(BOOL)arg1 skipTranscriptions:(BOOL)arg2 withHandler:(id)arg3 ;
-(NSUInteger)evaluateAttribute:(id)arg0 ignoreSubtokens:(BOOL)arg1 strongCompounds:(BOOL)arg2 skipTranscriptions:(BOOL)arg3 withFuzzyHandler:(id)arg4 ;
-(NSUInteger)evaluateAttribute:(id)arg0 ignoreSubtokens:(BOOL)arg1 strongCompounds:(BOOL)arg2 skipTranscriptions:(BOOL)arg3 withHandler:(id)arg4 ;
-(NSUInteger)evaluateAttribute:(id)arg0 ignoreSubtokens:(BOOL)arg1 strongCompounds:(BOOL)arg2 withHandler:(id)arg3 ;
-(NSUInteger)evaluateAttribute:(id)arg0 ignoreSubtokens:(BOOL)arg1 withHandler:(id)arg2 ;
-(id)initWithQuery:(id)arg0 language:(id)arg1 fuzzyThreshold:(unsigned char)arg2 options:(NSUInteger)arg3 ;
-(void)dealloc;
-(void)processTranscriptionTokens:(struct CSAttributeEvaluatorContext *)arg0 ;


@end


#endif