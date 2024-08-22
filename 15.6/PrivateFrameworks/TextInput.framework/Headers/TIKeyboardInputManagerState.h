// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TIKEYBOARDINPUTMANAGERSTATE_H
#define TIKEYBOARDINPUTMANAGERSTATE_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "TIKeyboardCandidate.h"
#import "TICharacterSetDescription.h"
#import "TIKeyEventMap.h"
#import "TIKeyboardBehaviors.h"

@interface TIKeyboardInputManagerState : NSObject <NSCopying, NSSecureCoding>

 {
    ? _mask;
}


@property (nonatomic) BOOL acceptAutocorrectionCommitsInline;
@property (retain, nonatomic) TIKeyboardCandidate *autocorrectionRecordForInputString; // ivar: _autocorrectionRecordForInputString
@property (nonatomic) NSUInteger autoquoteType;
@property (nonatomic) BOOL canHandleKeyHitTest;
@property (nonatomic) BOOL commitsAcceptedCandidate;
@property (nonatomic) BOOL delayedCandidateList;
@property (nonatomic) BOOL ignoreContinuousPathRequirements;
@property (nonatomic) BOOL ignoresDeadKeys;
@property (nonatomic) NSUInteger initialCandidateBatchCount; // ivar: _initialCandidateBatchCount
@property (nonatomic) NSUInteger inputCount; // ivar: _inputCount
@property (nonatomic) NSUInteger inputIndex; // ivar: _inputIndex
@property (copy, nonatomic) NSString *inputString; // ivar: _inputString
@property (nonatomic) BOOL inputStringIsExemptFromChecker;
@property (copy, nonatomic) TICharacterSetDescription *inputsPreventingAcceptSelectedCandidate; // ivar: _inputsPreventingAcceptSelectedCandidate
@property (copy, nonatomic) TICharacterSetDescription *inputsToReject; // ivar: _inputsToReject
@property (nonatomic) BOOL insertsSpaceAfterPredictiveInput;
@property (retain, nonatomic) TIKeyEventMap *keyEventMap; // ivar: _keyEventMap
@property (retain, nonatomic) TIKeyboardBehaviors *keyboardBehaviors; // ivar: _keyboardBehaviors
@property (nonatomic) BOOL newInputAcceptsUserSelectedCandidate;
@property (nonatomic) BOOL nextInputWouldStartSentence;
@property (copy, nonatomic) NSString *replacementForDoubleSpace; // ivar: _replacementForDoubleSpace
@property (copy, nonatomic) NSString *searchStringForMarkedText; // ivar: _searchStringForMarkedText
@property (copy, nonatomic) NSString *shadowTyping; // ivar: _shadowTyping
@property (copy, nonatomic) TICharacterSetDescription *shortcutCompletions; // ivar: _shortcutCompletions
@property (nonatomic) BOOL shouldAddModifierSymbolsToWordCharacters; // ivar: _shouldAddModifierSymbolsToWordCharacters
@property (nonatomic) BOOL shouldExtendPriorWord;
@property (nonatomic) BOOL shouldFixupIncompleteRomaji;
@property (nonatomic) BOOL suppliesCompletions;
@property (nonatomic) BOOL supportsNumberKeySelection;
@property (nonatomic) BOOL supportsSetPhraseBoundary;
@property (nonatomic) BOOL suppressCompletionsForFieldEditor;
@property (nonatomic) BOOL suppressPlaceholderCandidate;
@property (copy, nonatomic) TICharacterSetDescription *terminatorsDeletingAutospace; // ivar: _terminatorsDeletingAutospace
@property (copy, nonatomic) TICharacterSetDescription *terminatorsPreventingAutocorrection; // ivar: _terminatorsPreventingAutocorrection
@property (nonatomic) BOOL usesAutoDeleteWord;
@property (nonatomic) BOOL usesAutocorrectionLists;
@property (nonatomic) BOOL usesCandidateSelection;
@property (nonatomic) BOOL usesContinuousPath;
@property (nonatomic) BOOL usesContinuousPathProgressiveCandidates;
@property (nonatomic) BOOL usesLiveConversion;
@property (nonatomic) BOOL usesPunctuationKeysForRowNavigation;
@property (copy, nonatomic) TICharacterSetDescription *wordCharacters; // ivar: _wordCharacters
@property (copy, nonatomic) NSString *wordSeparator; // ivar: _wordSeparator


+(BOOL)supportsSecureCoding;
-(BOOL)acceptInputString:(id)arg0 ;
-(BOOL)inputStringAcceptsCurrentCandidateIfSelected:(id)arg0 ;
-(BOOL)shouldDeleteAutospaceBeforeTerminator:(id)arg0 ;
-(BOOL)shouldSuppressAutocorrectionWithTerminator:(id)arg0 ;
-(BOOL)stringEndsWord:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif