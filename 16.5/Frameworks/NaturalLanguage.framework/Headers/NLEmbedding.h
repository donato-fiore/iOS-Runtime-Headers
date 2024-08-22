// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NLEMBEDDING_H
#define NLEMBEDDING_H

@class NSString;

#import <Foundation/Foundation.h>

#import "NLModel.h"

@interface NLEmbedding : NSObject {
    *void _embedding;
    NLModel *_nlModel;
    BOOL _usesUntokenizedSentences;
}


@property (readonly) NSUInteger dimension;
@property (readonly, copy) NSString *language;
@property (readonly) NSUInteger revision;
@property (readonly) NSUInteger vocabularySize;


+(BOOL)_writeEmbeddingForDictionary:(id)arg0 language:(id)arg1 revision:(NSUInteger)arg2 toURL:(id)arg3 orData:(id)arg4 error:(*id)arg5 ;
+(BOOL)writeEmbeddingForDictionary:(id)arg0 language:(id)arg1 revision:(NSUInteger)arg2 toURL:(id)arg3 error:(*id)arg4 ;
+(BOOL)writeEmbeddingMLModelForDictionary:(id)arg0 language:(id)arg1 revision:(NSUInteger)arg2 toURL:(id)arg3 options:(id)arg4 error:(*id)arg5 ;
+(NSUInteger)currentContextualWordEmbeddingRevisionForLanguage:(id)arg0 ;
+(NSUInteger)currentRevisionForLanguage:(id)arg0 ;
+(NSUInteger)currentRevisionForType:(id)arg0 locale:(id)arg1 ;
+(NSUInteger)currentSentenceEmbeddingRevisionForLanguage:(id)arg0 ;
+(id)_embeddingWithContentsOfURL:(id)arg0 error:(*id)arg1 ;
+(id)_embeddingWithData:(id)arg0 error:(*id)arg1 ;
+(id)contextualWordEmbeddingForLanguage:(id)arg0 ;
+(id)contextualWordEmbeddingForLanguage:(id)arg0 revision:(NSUInteger)arg1 ;
+(id)embeddingDataForDictionary:(id)arg0 language:(id)arg1 revision:(NSUInteger)arg2 error:(*id)arg3 ;
+(id)embeddingWithContentsOfURL:(id)arg0 error:(*id)arg1 ;
+(id)embeddingWithData:(id)arg0 error:(*id)arg1 ;
+(id)embeddingWithMLModel:(id)arg0 error:(*id)arg1 ;
+(id)modelDescriptionForEmbedding:(id)arg0 ;
+(id)sentenceEmbeddingForLanguage:(id)arg0 ;
+(id)sentenceEmbeddingForLanguage:(id)arg0 revision:(NSUInteger)arg1 ;
+(id)supportedContextualWordEmbeddingRevisionsForLanguage:(id)arg0 ;
+(id)supportedRevisionsForLanguage:(id)arg0 ;
+(id)supportedRevisionsForType:(id)arg0 locale:(id)arg1 ;
+(id)supportedSentenceEmbeddingRevisionsForLanguage:(id)arg0 ;
+(id)transformerContextualTokenEmbeddingForLanguage:(id)arg0 ;
+(id)wordEmbeddingForLanguage:(id)arg0 ;
+(id)wordEmbeddingForLanguage:(id)arg0 revision:(NSUInteger)arg1 ;
-(*void)_createEmbeddingRefWithContentsOfURL:(id)arg0 ;
-(*void)_createEmbeddingRefWithData:(id)arg0 ;
-(*void)_embeddingRef;
-(BOOL)containsString:(id)arg0 ;
-(BOOL)getVector:(*float)arg0 forString:(id)arg1 ;
-(BOOL)usesUntokenizedSentences;
-(CGFloat)distanceBetweenString:(id)arg0 andString:(id)arg1 distanceType:(NSInteger)arg2 ;
-(id)_initWithContentsOfURL:(id)arg0 error:(*id)arg1 ;
-(id)_initWithData:(id)arg0 error:(*id)arg1 ;
-(id)initContextualEmbeddingWithLocale:(struct __CFLocale *)arg0 ;
-(id)initSentenceEmbeddingWithLocale:(struct __CFLocale *)arg0 ;
-(id)initWithContentsOfURL:(id)arg0 error:(*id)arg1 ;
-(id)initWithData:(id)arg0 error:(*id)arg1 ;
-(id)initWithLocale:(struct __CFLocale *)arg0 ;
-(id)initWithMLModel:(id)arg0 error:(*id)arg1 ;
-(id)initWithNLModel:(id)arg0 error:(*id)arg1 ;
-(id)initWithType:(id)arg0 locale:(id)arg1 version:(id)arg2 ;
-(id)neighborsForString:(id)arg0 maximumCount:(NSUInteger)arg1 distanceType:(NSInteger)arg2 ;
-(id)neighborsForString:(id)arg0 maximumCount:(NSUInteger)arg1 maximumDistance:(CGFloat)arg2 distanceType:(NSInteger)arg3 ;
-(id)neighborsForVector:(id)arg0 maximumCount:(NSUInteger)arg1 distanceType:(NSInteger)arg2 ;
-(id)neighborsForVector:(id)arg0 maximumCount:(NSUInteger)arg1 maximumDistance:(CGFloat)arg2 distanceType:(NSInteger)arg3 ;
-(id)vectorForString:(id)arg0 ;
-(id)vectorsForSentences:(id)arg0 maxTokens:(NSUInteger)arg1 ;
-(id)vectorsForTokenizedSentences:(id)arg0 maxTokens:(NSUInteger)arg1 ;
-(id)vectorsForTokenizedSentences:(id)arg0 untokenizedSentences:(id)arg1 maxTokens:(NSUInteger)arg2 ;
-(id)vectorsForUntokenizedSentences:(id)arg0 maxTokens:(NSUInteger)arg1 ;
-(void)dealloc;
-(void)enumerateNeighborsForString:(id)arg0 maximumCount:(NSUInteger)arg1 distanceType:(NSInteger)arg2 usingBlock:(id)arg3 ;
-(void)enumerateNeighborsForString:(id)arg0 maximumCount:(NSUInteger)arg1 maximumDistance:(CGFloat)arg2 distanceType:(NSInteger)arg3 usingBlock:(id)arg4 ;
-(void)enumerateNeighborsForVector:(id)arg0 maximumCount:(NSUInteger)arg1 distanceType:(NSInteger)arg2 usingBlock:(id)arg3 ;
-(void)enumerateNeighborsForVector:(id)arg0 maximumCount:(NSUInteger)arg1 maximumDistance:(CGFloat)arg2 distanceType:(NSInteger)arg3 usingBlock:(id)arg4 ;
-(void)setUsesUntokenizedSentences:(BOOL)arg0 ;


@end


#endif