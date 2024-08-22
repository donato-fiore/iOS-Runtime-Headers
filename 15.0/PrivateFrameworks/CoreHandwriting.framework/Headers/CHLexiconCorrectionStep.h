// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHLEXICONCORRECTIONSTEP_H
#define CHLEXICONCORRECTIONSTEP_H

@class NSCharacterSet, NSLocale, NSDictionary;


#import "CHPostprocessingStep.h"
#import "CHRecognizer.h"

@interface CHLexiconCorrectionStep : CHPostprocessingStep

@property (readonly, nonatomic) int autoCapitalizationMode; // ivar: _autoCapitalizationMode
@property (retain, nonatomic) NSCharacterSet *consumableStrokesCharSet; // ivar: _consumableStrokesCharSet
@property (nonatomic) *_LXLexicon customLexicon; // ivar: _customLexicon
@property (nonatomic) *_LXLexicon customPhraseLexicon; // ivar: _customPhraseLexicon
@property (retain, nonatomic) NSCharacterSet *fullWidthPunctuationThatExpectsUppercaseAfter; // ivar: _fullWidthPunctuationThatExpectsUppercaseAfter
@property (nonatomic) NSLocale *locale; // ivar: _locale
@property (nonatomic) *_LXLexicon phraseLexicon; // ivar: _phraseLexicon
@property (retain, nonatomic) NSCharacterSet *punctuationThatExpectsUppercaseAfter; // ivar: _punctuationThatExpectsUppercaseAfter
@property (nonatomic) CHRecognizer *recognizer; // ivar: _recognizer
@property (nonatomic) BOOL shouldAutoCapitalize; // ivar: _shouldAutoCapitalize
@property (nonatomic) BOOL shouldAutoCorrect; // ivar: _shouldAutoCorrect
@property (nonatomic) *_LXLexicon staticLexicon; // ivar: _staticLexicon
@property (retain, nonatomic) NSDictionary *textReplacements; // ivar: _textReplacements


-(id)applyCorrectionsAcrossToken:(id)arg0 isFirstToken:(BOOL)arg1 contextBeforeToken:(id)arg2 shouldCapitalizeGivenHistory:(BOOL)arg3 textReplacements:(id)arg4 isSingleIsolatedCharacter:(BOOL)arg5 ;
-(id)applyCorrectionsOnSingleToken:(id)arg0 isFirstToken:(BOOL)arg1 contextBeforeToken:(id)arg2 shouldCapitalizeGivenHistory:(BOOL)arg3 textReplacements:(id)arg4 isSingleIsolatedCharacter:(BOOL)arg5 ;
-(id)applyLexiconCorrections:(id)arg0 shouldCapitalizeWord:(BOOL)arg1 shouldSkipEntryCorrection:(BOOL)arg2 outBestTokenIndex:(*NSInteger)arg3 bestLexiconTokenScore:(*CGFloat)arg4 textReplacements:(id)arg5 contextBeforeToken:(id)arg6 ;
-(id)createPseudoTokensFromToken:(id)arg0 ;
-(id)getSpellCorrectedToken:(id)arg0 contextBeforeToken:(id)arg1 ;
-(id)initWithAutoCapitalizationMode:(int)arg0 shouldAutoCorrect:(BOOL)arg1 locale:(id)arg2 staticLexicon:(struct _LXLexicon *)arg3 customLexicon:(struct _LXLexicon *)arg4 phraseLexicon:(struct _LXLexicon *)arg5 customPhraseLexicon:(struct _LXLexicon *)arg6 recognizer:(id)arg7 textReplacements:(id)arg8 ;
-(id)process:(id)arg0 ;
-(void)dealloc;


@end


#endif