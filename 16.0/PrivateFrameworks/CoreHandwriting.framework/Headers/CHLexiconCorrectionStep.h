// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CHLEXICONCORRECTIONSTEP_H
#define CHLEXICONCORRECTIONSTEP_H

@class NSCharacterSet, NSLocale, NSDictionary;


#import "CHPostprocessingStep.h"
#import "CHStringOVSChecker.h"
#import "CHSpellChecker.h"

@interface CHLexiconCorrectionStep : CHPostprocessingStep

@property (readonly, nonatomic) int autoCapitalizationMode; // ivar: _autoCapitalizationMode
@property (retain, nonatomic) NSCharacterSet *consumableStrokesCharSet; // ivar: _consumableStrokesCharSet
@property (nonatomic) *_LXLexicon customLexicon; // ivar: _customLexicon
@property (nonatomic) *_LXLexicon customPhraseLexicon; // ivar: _customPhraseLexicon
@property (retain, nonatomic) NSCharacterSet *fullWidthPunctuationThatExpectsUppercaseAfter; // ivar: _fullWidthPunctuationThatExpectsUppercaseAfter
@property (nonatomic) *void lmVocabulary; // ivar: _lmVocabulary
@property (retain, nonatomic) NSLocale *locale; // ivar: _locale
@property (retain, nonatomic) CHStringOVSChecker *ovsStringChecker; // ivar: _ovsStringChecker
@property (nonatomic) *_LXLexicon phraseLexicon; // ivar: _phraseLexicon
@property (retain, nonatomic) NSCharacterSet *punctuationThatExpectsUppercaseAfter; // ivar: _punctuationThatExpectsUppercaseAfter
@property (nonatomic) BOOL shouldAutoCapitalize; // ivar: _shouldAutoCapitalize
@property (nonatomic) BOOL shouldAutoCorrect; // ivar: _shouldAutoCorrect
@property (retain, nonatomic) CHSpellChecker *spellChecker; // ivar: _spellChecker
@property (nonatomic) *_LXLexicon staticLexicon; // ivar: _staticLexicon
@property (retain, nonatomic) NSDictionary *textReplacements; // ivar: _textReplacements


+(id)validatedTokenForCorrectedToken:(id)arg0 rawToken:(id)arg1 ;
-(id)applyCorrectionsAcrossToken:(id)arg0 isFirstToken:(BOOL)arg1 contextBeforeToken:(id)arg2 shouldCapitalizeGivenHistory:(BOOL)arg3 textReplacements:(id)arg4 isSingleIsolatedCharacter:(BOOL)arg5 ;
-(id)applyCorrectionsOnSingleToken:(id)arg0 isFirstToken:(BOOL)arg1 contextBeforeToken:(id)arg2 shouldCapitalizeGivenHistory:(BOOL)arg3 textReplacements:(id)arg4 isSingleIsolatedCharacter:(BOOL)arg5 allowSpellChecker:(BOOL)arg6 ;
-(id)applyLexiconCorrections:(id)arg0 shouldCapitalizeWord:(BOOL)arg1 shouldSkipEntryCorrection:(BOOL)arg2 outBestTokenIndex:(*NSInteger)arg3 bestLexiconTokenScore:(*CGFloat)arg4 textReplacements:(id)arg5 contextBeforeToken:(id)arg6 allowSpellChecker:(BOOL)arg7 ;
-(id)createPseudoTokensFromToken:(id)arg0 ;
-(id)getSpellCorrectedToken:(id)arg0 contextBeforeToken:(id)arg1 ;
-(id)initWithAutoCapitalizationMode:(int)arg0 shouldAutoCorrect:(BOOL)arg1 shouldAutoCapitalize:(BOOL)arg2 locale:(id)arg3 staticLexicon:(struct _LXLexicon *)arg4 customLexicon:(struct _LXLexicon *)arg5 phraseLexicon:(struct _LXLexicon *)arg6 customPhraseLexicon:(struct _LXLexicon *)arg7 spellChecker:(id)arg8 lmVocabulary:(*void)arg9 ovsStringChecker:(id)arg10 textReplacements:(id)arg11 ;
-(id)process:(id)arg0 options:(id)arg1 ;
-(void)dealloc;


@end


#endif