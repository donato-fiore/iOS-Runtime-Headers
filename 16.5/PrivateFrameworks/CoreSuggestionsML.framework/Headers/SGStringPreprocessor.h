// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SGSTRINGPREPROCESSOR_H
#define SGSTRINGPREPROCESSOR_H

@class NSMutableData;

#import <Foundation/Foundation.h>


@interface SGStringPreprocessor : NSObject {
    NSMutableData *_buffer;
}




-(*unsigned short)bufferPtrWithMinimumLength:(NSUInteger)arg0 ;
-(id)characterSetFromString:(id)arg0 ;
-(id)init;
-(void)addToEnd:(id)arg0 withValue:(id)arg1 ;
-(void)addToStart:(id)arg0 withValue:(id)arg1 ;
-(void)combineDakutenAndHandakuten:(id)arg0 ;
-(void)decomposeAndRecomposeStringWithCompatibilityMapping:(id)arg0 ;
-(void)decomposeStringWithCompatibilityMapping:(id)arg0 ;
-(void)finalizeForWordPieceCaseInsensitive:(id)arg0 ;
-(void)finalizeForWordPieceCaseSensitive:(id)arg0 ;
-(void)lowerCase:(id)arg0 ;
-(void)mergeAnyConsecutiveCharacters:(id)arg0 ;
-(void)mergeAnyConsecutiveNonalphabeticCharacters:(id)arg0 ;
-(void)mergeAnyConsecutiveNonalphabeticCharactersWithExceptions:(id)arg0 withValue:(id)arg1 ;
-(void)mergeNumbersSeparatedByASCIISpace:(id)arg0 ;
-(void)mergeTwoOrMoreConsecutiveCharacters:(id)arg0 ;
-(void)removeCharacters:(id)arg0 withExceptions:(id)arg1 fromString:(id)arg2 ;
-(void)removeCharacters:(id)arg0 withValue:(id)arg1 ;
-(void)removeDuplicateWhitespace:(id)arg0 ;
-(void)removeEmojiModifyingCharacters:(id)arg0 ;
-(void)removeEmojiModifyingCharactersWithExceptions:(id)arg0 withValue:(id)arg1 ;
-(void)removeEmojis:(id)arg0 ;
-(void)removeEmojisWithExceptions:(id)arg0 withValue:(id)arg1 ;
-(void)removeNonASCII:(id)arg0 ;
-(void)removeNonBaseCharacters:(id)arg0 ;
-(void)removeNonBasicMultilingualPlane:(id)arg0 ;
-(void)removeNonEmojiSymbols:(id)arg0 ;
-(void)removeNonEmojiSymbolsWithExceptions:(id)arg0 withValue:(id)arg1 ;
-(void)removePunctuation:(id)arg0 ;
-(void)removePunctuationWithExceptions:(id)arg0 withValue:(id)arg1 ;
-(void)removeSpacingModifierLetters:(id)arg0 ;
-(void)removeSymbols:(id)arg0 ;
-(void)removeSymbolsWithExceptions:(id)arg0 withValue:(id)arg1 ;
-(void)replace:(id)arg0 withBuffer:(*unsigned short)arg1 toIndex:(NSUInteger)arg2 ;
-(void)replaceAllWhitespaceWithSpaces:(id)arg0 ;
-(void)replaceCharactersWithSpaces:(id)arg0 withValue:(id)arg1 ;
-(void)replaceContactNamesWithString:(id)arg0 withValue:(id)arg1 ;
-(void)replaceLinksWithString:(id)arg0 withValue:(id)arg1 ;
-(void)replaceNumbersWithString:(id)arg0 withValue:(id)arg1 ;
-(void)separateCharacter:(id)arg0 withValue:(id)arg1 ;
-(void)separateFrenchElisions:(id)arg0 ;
-(void)stripCombiningMarks:(id)arg0 ;
-(void)stripNonBaseCharacters:(id)arg0 ;
-(void)transformFullwidthToHalfwidth:(id)arg0 ;
-(void)transformFullwidthToHalfwidthASCII:(id)arg0 ;
-(void)transformHalfwidthToFullwidthCJK:(id)arg0 ;
-(void)trimWhitespace:(id)arg0 ;


@end


#endif