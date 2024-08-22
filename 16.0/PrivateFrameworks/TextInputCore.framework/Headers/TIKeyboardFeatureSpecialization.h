// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TIKEYBOARDFEATURESPECIALIZATION_H
#define TIKEYBOARDFEATURESPECIALIZATION_H

@class NSString, NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "TIInputMode.h"

@interface TIKeyboardFeatureSpecialization : NSObject {
    NSString *m_softwareLayout;
    *USet m_precomposedCharacterSet;
    *USet m_acceptableCharacterSet;
    NSMutableDictionary *m_compositionMaps;
    NSMutableDictionary *m_reverseCompositionMaps;
}


@property (nonatomic) NSInteger currentUserInterfaceIdiom; // ivar: _currentUserInterfaceIdiom
@property (readonly, nonatomic) TIInputMode *inputMode; // ivar: _inputMode
@property (nonatomic) BOOL skipCandidateQualityFilter; // ivar: _skipCandidateQualityFilter
@property (nonatomic) BOOL useRelaxedOVSPolicy; // ivar: _useRelaxedOVSPolicy


+(id)createSpecializationForInputMode:(id)arg0 ;
+(id)findPrefixMatchesFor:(id)arg0 fromIndex:(NSUInteger)arg1 usingCompositionMap:(id)arg2 matchesInputAsPrefix:(BOOL)arg3 ;
+(struct USet *)createAcceptableCharacterSetForKeyboardLocale:(id)arg0 ;
-(*void)createInputManager;
-(BOOL)acceptsCharacter:(unsigned int)arg0 ;
-(BOOL)allowsAutocorrectionOfValidWords;
-(BOOL)canConvertExternalToExternal;
-(BOOL)canHandleKeyHitTest;
-(BOOL)dictionaryUsesExternalEncoding;
-(BOOL)doesComposeText;
-(BOOL)shouldAddModifierSymbolsToWordCharacters;
-(BOOL)shouldClearInput:(id)arg0 ;
-(BOOL)shouldConvertAutocorrectionCandidatesToFullWidth;
-(BOOL)shouldConvertCandidateToExternal;
-(BOOL)shouldConvertEagerly;
-(BOOL)shouldExtendPriorWord;
-(BOOL)shouldLearnLowercaseAtBeginningOfSentence;
-(BOOL)supportsLearning;
-(NSUInteger)maxPriorWordTokensAfterTrimming;
-(id)accentKeyStringForKeyboardState:(id)arg0 ;
-(id)allAccentKeyStrings;
-(id)compositionMapForLayout:(id)arg0 reverse:(BOOL)arg1 ;
-(id)dictionaryInputMode;
-(id)externalStringToInternal:(id)arg0 ;
-(id)externalStringToInternal:(id)arg0 byConvertingEagerly:(BOOL)arg1 ;
-(id)findPrefixMatchesFor:(id)arg0 fromIndex:(NSUInteger)arg1 usingCompositionMap:(id)arg2 matchesInputAsPrefix:(BOOL)arg3 ;
-(id)getComposedStringFor:(id)arg0 usingMap:(id)arg1 ;
-(id)getComposedStringFor:(id)arg0 usingMap:(id)arg1 byConvertingEagerly:(BOOL)arg2 ;
-(id)initWithInputMode:(id)arg0 ;
-(id)internalStringToExternal:(id)arg0 ;
-(id)keyboardBehaviors;
-(id)layoutTags;
-(id)nonstopPunctuationCharacters;
-(id)replacementForDoubleSpace;
-(id)sentenceDelimitingCharacters;
-(id)sentencePrefixingCharacters;
-(id)sentenceTrailingCharacters;
-(id)supplementalLexiconWordExtraCharacters;
-(id)terminatorsDeletingAutospace;
-(id)wordCharacters;
-(id)wordSeparator;
-(struct USet *)createAcceptableCharacterSet;
-(struct USet *)precomposedCharacterSet;
-(void)dealloc;
-(void)reloadPrecomposedCharacterSetWithIdiom:(NSInteger)arg0 ;
-(void)specializeInputManager:(*void)arg0 forLayoutState:(id)arg1 ;


@end


#endif