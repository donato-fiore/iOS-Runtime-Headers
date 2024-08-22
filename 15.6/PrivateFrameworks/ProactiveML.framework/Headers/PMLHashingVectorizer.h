// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PMLHASHINGVECTORIZER_H
#define PMLHASHINGVECTORIZER_H

@class NSLocale, NSString;
@protocol PMLTransformerProtocol;

#import <Foundation/Foundation.h>


@interface PMLHashingVectorizer : NSObject <PMLTransformerProtocol>

 {
    int _buckets;
    _NSRange _characterNGramRange;
    _NSRange _tokenNGramRange;
    BOOL _shouldNormalizeTokens;
    BOOL _shouldNormalizeCharacters;
    NSLocale *_localeForNonwordTokens;
    BOOL _tokenizeNewlines;
    NSUInteger _idVectorLength;
    NSUInteger _extraIdOptions;
    NSUInteger _vectorizerStrategy;
    NSInteger _vectorNormalization;
    NSInteger _paddingId;
    NSInteger _endId;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)withBucketSize:(int)arg0 andCharNgramOrder:(int)arg1 ;
+(id)withBucketSize:(int)arg0 andNgramOrder:(int)arg1 ;
+(id)withBucketSize:(int)arg0 andNgrams:(int)arg1 ;
+(id)withBucketSize:(int)arg0 characterNGramRange:(struct _NSRange )arg1 tokenNGramRange:(struct _NSRange )arg2 shouldNormalizeTokens:(BOOL)arg3 shouldNormalizeCharacters:(BOOL)arg4 ;
+(id)withBucketSize:(int)arg0 characterNGramRange:(struct _NSRange )arg1 tokenNGramRange:(struct _NSRange )arg2 shouldNormalizeTokens:(BOOL)arg3 shouldNormalizeCharacters:(BOOL)arg4 localeForNonwordTokens:(id)arg5 tokenizeNewlines:(BOOL)arg6 ;
+(id)withBucketSize:(int)arg0 characterNGramRange:(struct _NSRange )arg1 tokenNGramRange:(struct _NSRange )arg2 shouldNormalizeTokens:(BOOL)arg3 shouldNormalizeCharacters:(BOOL)arg4 localeForNonwordTokens:(id)arg5 tokenizeNewlines:(BOOL)arg6 idVectorLength:(NSUInteger)arg7 extraIdOptions:(NSUInteger)arg8 vectorizerStrategy:(NSUInteger)arg9 vectorNormalization:(NSInteger)arg10 ;
+(id)withBucketSize:(int)arg0 ngrams:(int)arg1 localeForNonwordTokens:(id)arg2 tokenizeNewlines:(BOOL)arg3 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToHashingVectorizer:(id)arg0 ;
-(id)init;
-(id)initWithBucketSize:(int)arg0 characterNGramRange:(struct _NSRange )arg1 tokenNGramRange:(struct _NSRange )arg2 shouldNormalizeTokens:(BOOL)arg3 shouldNormalizeCharacters:(BOOL)arg4 localeForNonwordTokens:(id)arg5 tokenizeNewlines:(BOOL)arg6 idVectorLength:(NSUInteger)arg7 extraIdOptions:(NSUInteger)arg8 vectorizerStrategy:(NSUInteger)arg9 vectorNormalization:(NSInteger)arg10 ;
-(id)initWithBucketSize:(int)arg0 ngrams:(int)arg1 localeForNonwordTokens:(id)arg2 tokenizeNewlines:(BOOL)arg3 ;
-(id)initWithPlist:(id)arg0 chunks:(id)arg1 context:(id)arg2 ;
-(id)toPlistWithChunks:(id)arg0 ;
-(id)transform:(id)arg0 ;
-(id)transformBagOfIds:(id)arg0 shouldDecrement:(BOOL)arg1 ;
-(id)transformBatch:(id)arg0 ;
-(id)transformSequentialNGrams:(id)arg0 ;
-(id)transformWithFrequency:(id)arg0 shouldDecrement:(BOOL)arg1 ;
-(void)setVectorizerNormalization:(NSInteger)arg0 ;


@end


#endif