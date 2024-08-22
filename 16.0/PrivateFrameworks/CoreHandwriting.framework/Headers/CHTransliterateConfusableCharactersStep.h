// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CHTRANSLITERATECONFUSABLECHARACTERSSTEP_H
#define CHTRANSLITERATECONFUSABLECHARACTERSSTEP_H

@class NSArray, NSLocale;


#import "CHPostprocessingStep.h"

@interface CHTransliterateConfusableCharactersStep : CHPostprocessingStep

@property (nonatomic) NSArray *characterTransliterations; // ivar: _characterTransliterations
@property (nonatomic) *_LXLexicon customLexicon; // ivar: _customLexicon
@property (retain, nonatomic) NSLocale *locale; // ivar: _locale
@property (nonatomic) *_LXLexicon staticLexicon; // ivar: _staticLexicon


-(BOOL)isMatchingStringInLexicon:(id)arg0 withLexicon:(struct _LXLexicon *)arg1 ;
-(BOOL)isStringInLexicon:(id)arg0 ;
-(id)handleConfusableCharactersInToken:(id)arg0 previousContext:(id)arg1 ;
-(id)initWithStaticLexicon:(struct _LXLexicon *)arg0 customLexicon:(struct _LXLexicon *)arg1 locale:(id)arg2 ;
-(id)process:(id)arg0 options:(id)arg1 ;
-(unsigned int)wordIDForCandidateString:(id)arg0 ;


@end


#endif