// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSLINGUISTICTAGGER_H
#define NSLINGUISTICTAGGER_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "NSString.h"

@interface NSLinguisticTagger : NSObject {
    NSArray *_schemes;
    NSUInteger _options;
    NSString *_string;
    id *_orthographyArray;
    id *_tokenArray;
    *void _reserved;
}


@property (readonly, copy) NSString *dominantLanguage;
@property (retain) NSString *string;
@property (readonly, copy) NSArray *tagSchemes;


+(BOOL)supportsLanguage:(id)arg0 ;
+(id)availableTagSchemesForLanguage:(id)arg0 ;
+(id)availableTagSchemesForUnit:(NSInteger)arg0 language:(id)arg1 ;
+(id)dominantLanguageForString:(id)arg0 ;
+(id)tagForString:(id)arg0 atIndex:(NSUInteger)arg1 unit:(NSInteger)arg2 scheme:(id)arg3 orthography:(id)arg4 tokenRange:(struct _NSRange *)arg5 ;
+(id)tagsForString:(id)arg0 range:(struct _NSRange )arg1 unit:(NSInteger)arg2 scheme:(id)arg3 options:(NSUInteger)arg4 orthography:(id)arg5 tokenRanges:(*id)arg6 ;
+(void)enumerateTagsForString:(id)arg0 range:(struct _NSRange )arg1 unit:(NSInteger)arg2 scheme:(id)arg3 options:(NSUInteger)arg4 orthography:(id)arg5 usingBlock:(id)arg6 ;
-(BOOL)_acceptSentenceTerminatorRange:(struct _NSRange )arg0 paragraphRange:(struct _NSRange )arg1 tokens:(struct _NSLTToken *)arg2 count:(NSUInteger)arg3 tokenIndex:(NSUInteger)arg4 ;
-(id)_tagAtIndex:(NSUInteger)arg0 scheme:(id)arg1 tokenRange:(struct _NSRange *)arg2 sentenceRange:(struct _NSRange *)arg3 ;
-(id)_tagSchemeForScheme:(id)arg0 ;
-(id)_tokenDataForParagraphAtIndex:(NSUInteger)arg0 paragraphRange:(struct _NSRange *)arg1 requireLemmas:(BOOL)arg2 requirePartsOfSpeech:(BOOL)arg3 requireNamedEntities:(BOOL)arg4 ;
-(id)_tokenDataForParagraphAtIndex:(NSUInteger)arg0 paragraphRange:(struct _NSRange *)arg1 tagScheme:(id)arg2 ;
-(id)_tokenDataForParagraphRange:(struct _NSRange )arg0 requireLemmas:(BOOL)arg1 requirePartsOfSpeech:(BOOL)arg2 requireNamedEntities:(BOOL)arg3 ;
-(id)description;
-(id)initWithTagSchemes:(id)arg0 options:(NSUInteger)arg1 ;
-(id)orthographyAtIndex:(NSUInteger)arg0 effectiveRange:(struct _NSRange *)arg1 ;
-(id)possibleTagsAtIndex:(NSUInteger)arg0 scheme:(id)arg1 tokenRange:(struct _NSRange *)arg2 sentenceRange:(struct _NSRange *)arg3 scores:(*id)arg4 ;
-(id)tagAtIndex:(NSUInteger)arg0 scheme:(id)arg1 tokenRange:(struct _NSRange *)arg2 sentenceRange:(struct _NSRange *)arg3 ;
-(id)tagAtIndex:(NSUInteger)arg0 unit:(NSInteger)arg1 scheme:(id)arg2 tokenRange:(struct _NSRange *)arg3 ;
-(id)tagsInRange:(struct _NSRange )arg0 scheme:(id)arg1 options:(NSUInteger)arg2 tokenRanges:(*id)arg3 ;
-(id)tagsInRange:(struct _NSRange )arg0 unit:(NSInteger)arg1 scheme:(id)arg2 options:(NSUInteger)arg3 tokenRanges:(*id)arg4 ;
-(struct _NSRange )_sentenceRangeForRange:(struct _NSRange )arg0 ;
-(struct _NSRange )sentenceRangeForRange:(struct _NSRange )arg0 ;
-(struct _NSRange )tokenRangeAtIndex:(NSUInteger)arg0 unit:(NSInteger)arg1 ;
-(void)_acceptSentencesForParagraphRange:(struct _NSRange )arg0 ;
-(void)_analyzePunctuationTokensInRange:(struct _NSRange )arg0 paragraphRange:(struct _NSRange )arg1 ;
-(void)_analyzeTokensInInterwordRange:(struct _NSRange )arg0 paragraphRange:(struct _NSRange )arg1 ;
-(void)_analyzeTokensInWordRange:(struct _NSRange )arg0 paragraphRange:(struct _NSRange )arg1 ;
-(void)_calculateSentenceRangesForParagraphRange:(struct _NSRange )arg0 ;
-(void)_detectOrthographyIfNeededAtIndex:(NSUInteger)arg0 ;
-(void)_enumerateTagsInRange:(struct _NSRange )arg0 scheme:(id)arg1 options:(NSUInteger)arg2 usingBlock:(id)arg3 ;
-(void)_nativeSetOrthography:(id)arg0 range:(struct _NSRange )arg1 ;
-(void)_setOrthography:(id)arg0 range:(struct _NSRange )arg1 ;
-(void)_tokenizeParagraphAtIndex:(NSUInteger)arg0 requireLemmas:(BOOL)arg1 requirePartsOfSpeech:(BOOL)arg2 requireNamedEntities:(BOOL)arg3 ;
-(void)dealloc;
-(void)enumerateTagsInRange:(struct _NSRange )arg0 scheme:(id)arg1 options:(NSUInteger)arg2 usingBlock:(id)arg3 ;
-(void)enumerateTagsInRange:(struct _NSRange )arg0 unit:(NSInteger)arg1 scheme:(id)arg2 options:(NSUInteger)arg3 usingBlock:(id)arg4 ;
-(void)setOrthography:(id)arg0 range:(struct _NSRange )arg1 ;
-(void)stringEditedInRange:(struct _NSRange )arg0 changeInLength:(NSInteger)arg1 ;


@end


#endif