// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHMUTABLETOKENIZEDTEXTRESULT_H
#define CHMUTABLETOKENIZEDTEXTRESULT_H

@class NSArray;


#import "CHTokenizedTextResult.h"

@interface CHMutableTokenizedTextResult : CHTokenizedTextResult

@property (nonatomic) NSInteger changeableTokenColumnCount;
@property (nonatomic) NSInteger precedingLineBreaks;
@property (copy, nonatomic) NSArray *tokenColumns;


+(id)refineAlternativeTokens:(id)arg0 historyTokenIDs:(id)arg1 languageModel:(*void)arg2 ;
-(id)_columnStrokeSetsFromTokenRows:(id)arg0 ;
-(id)commonStrokeSetsFromSets:(id)arg0 tokenRow:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)adjustColumns;
-(void)appendTokenColumns:(id)arg0 ;
-(void)filterCandidatesWithOutOfPattern:(BOOL)arg0 duplicateTokenIDs:(BOOL)arg1 keepOutOfLexiconAlternatives:(BOOL)arg2 keepAlternativeLengths:(BOOL)arg3 keepSubstrings:(BOOL)arg4 shouldKeepOriginalSpelling:(BOOL)arg5 ;
-(void)setTranscriptionPaths:(id)arg0 scores:(id)arg1 ;
-(void)trimTokensToTranscriptionPathCount:(NSInteger)arg0 ;


@end


#endif