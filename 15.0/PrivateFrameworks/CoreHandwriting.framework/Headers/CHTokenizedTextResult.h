// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHTOKENIZEDTEXTRESULT_H
#define CHTOKENIZEDTEXTRESULT_H

@class NSArray, NSString;
@protocol NSCopying, NSMutableCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CHTokenizedTextResult : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

 {
    NSArray *_tokenColumns;
    NSInteger _recognizerGenerationIdentifier;
    NSInteger _precedingLineBreaks;
    NSInteger _changeableCount;
}


@property (readonly, nonatomic) NSInteger changeableTokenColumnCount;
@property (readonly, copy, nonatomic) NSString *rawTranscription;
@property (readonly, nonatomic) NSString *recognizerDebugDescription;
@property (readonly, nonatomic) NSInteger tokenColumnCount;
@property (readonly, copy, nonatomic) NSString *topTranscription;
@property (readonly, copy, nonatomic) NSString *trailingSeparator; // ivar: _trailingSeparator
@property (readonly, copy, nonatomic) NSArray *transcriptionPathScores; // ivar: _transcriptionPathScores
@property (readonly, copy, nonatomic) NSArray *transcriptionPaths; // ivar: _transcriptionPaths


+(BOOL)areTokenRowsEquivalent:(id)arg0 otherRow:(id)arg1 ;
+(BOOL)supportsSecureCoding;
+(NSInteger)_characterCountInToken:(id)arg0 filteringCharacterSet:(id)arg1 filteredCharacterCount:(*NSInteger)arg2 ;
+(NSInteger)mergeTokenRow:(id)arg0 intoUniqueRows:(id)arg1 ;
+(id)_originalRowFromRow:(id)arg0 ;
+(id)extendedToken:(id)arg0 withStrokeIndexSet:(id)arg1 alignmentScore:(CGFloat)arg2 bounds:(struct CGRect )arg3 ;
+(id)tokenizedTextResultFromResults:(id)arg0 shouldPerformStrictFiltering:(BOOL)arg1 ;
+(id)tokenizedTextResultWithString:(id)arg0 strokeIndexes:(id)arg1 bounds:(struct CGRect )arg2 trailingSeparator:(id)arg3 recognizerGenerationIdentifier:(NSInteger)arg4 ;
+(struct pair<double, double> )_scoreMeanAndStdForToken:(id)arg0 forLocale:(id)arg1 ;
-(BOOL)_isGibberishToken:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToTokenizedTextResult:(id)arg0 ;
-(BOOL)isValid;
-(BOOL)shouldFilterOutStringForToken:(id)arg0 isGibberish:(*BOOL)arg1 ;
-(CGFloat)_averageTokenRecognitionScoreInTranscriptionPath:(id)arg0 ;
-(CGFloat)_normalizedLanguageFitness:(CGFloat)arg0 ;
-(CGFloat)_rawLanguageFitnessForTranscriptionPath:(id)arg0 locale:(id)arg1 recognitionMode:(int)arg2 ;
-(NSInteger)precedingLineBreaks;
-(NSInteger)recognizerGenerationIdentifier;
-(NSUInteger)hash;
-(id)_legacyTextRecognitionResultForTranscriptionIndex:(NSInteger)arg0 ;
-(id)_rawPath;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithBestPathTokens:(id)arg0 pathProbabilities:(id)arg1 trailingSeparator:(id)arg2 recognizerGenerationIdentifier:(NSInteger)arg3 ;
-(id)initWithBestPathTokens:(id)arg0 pathProbabilities:(id)arg1 trailingSeparator:(id)arg2 recognizerGenerationIdentifier:(NSInteger)arg3 changeableColumnCount:(NSInteger)arg4 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTokenColumns:(id)arg0 transcriptionPaths:(id)arg1 scores:(id)arg2 recognizerGenerationIdentifier:(NSInteger)arg3 ;
-(id)initWithTokenColumns:(id)arg0 transcriptionPaths:(id)arg1 scores:(id)arg2 trailingSeparator:(id)arg3 recognizerGenerationIdentifier:(NSInteger)arg4 ;
-(id)initWithTokenColumns:(id)arg0 transcriptionPaths:(id)arg1 scores:(id)arg2 trailingSeparator:(id)arg3 recognizerGenerationIdentifier:(NSInteger)arg4 changeableColumnCount:(NSInteger)arg5 ;
-(id)legacyTextRecognitionResults;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)phraseCaseCorrectedResultWithHistory:(id)arg0 phraseLexicon:(struct _LXLexicon *)arg1 maxPhraseLength:(NSInteger)arg2 ;
-(id)precedingSeparatorForRawTranscriptionPath;
-(id)precedingSeparatorForToken:(id)arg0 ;
-(id)precedingSeparatorForTopTranscriptionPath;
-(id)strokeIndexesForColumnsInRange:(struct _NSRange )arg0 ;
-(id)tokenAtLocation:(struct ? )arg0 ;
-(id)tokenColumns;
-(id)tokenRowsAtColumnIndex:(NSInteger)arg0 ;
-(id)tokenizedResultWithFilteredPaths:(CGFloat)arg0 ;
-(id)tokensFromTopTranscriptionWithCharacterRange:(struct _NSRange )arg0 ;
-(id)tokensInTranscriptionPath:(id)arg0 atColumnIndex:(NSInteger)arg1 ;
-(id)transcriptionWithPath:(id)arg0 columnRange:(struct _NSRange )arg1 filterLowConfidence:(BOOL)arg2 ;
-(id)transcriptionWithPath:(id)arg0 columnRange:(struct _NSRange )arg1 filterLowConfidence:(BOOL)arg2 excludeGibberish:(BOOL)arg3 rejectionRate:(*CGFloat)arg4 tokenProcessingBlock:(id)arg5 ;
-(struct ? )languageFitnessForLocale:(id)arg0 recognitionMode:(int)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)enumerateTokensInTopTranscriptionPathWithBlock:(id)arg0 ;
-(void)enumerateTokensInTranscriptionPath:(id)arg0 columnRange:(struct _NSRange )arg1 tokenProcessingBlock:(id)arg2 ;


@end


#endif