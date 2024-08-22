// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UITEXTREPLACEMENTGENERATORFORCORRECTIONS_H
#define UITEXTREPLACEMENTGENERATORFORCORRECTIONS_H

@class TIKeyboardCandidate;


#import "UITextReplacementGenerator.h"
#import "UITextChecker.h"

@interface UITextReplacementGeneratorForCorrections : UITextReplacementGenerator {
    BOOL _showRevertingAutocorrectionInPredictionView;
}


@property (retain, nonatomic) TIKeyboardCandidate *autocorrectionRecord; // ivar: _autocorrectionRecord
@property (nonatomic) BOOL forceAutocorrectionGuesses; // ivar: _forceAutocorrectionGuesses
@property (nonatomic) BOOL forceHistoryReplacement; // ivar: _forceHistoryReplacement
@property (nonatomic) BOOL forceSpellingGuesses; // ivar: _forceSpellingGuesses
@property (nonatomic) NSUInteger maxCountAfterAutocorrectionGuesses; // ivar: _maxCountAfterAutocorrectionGuesses
@property (nonatomic) NSUInteger maxCountAfterSpellingGuesses; // ivar: _maxCountAfterSpellingGuesses
@property (nonatomic) NSUInteger maxEditDistance; // ivar: _maxEditDistance
@property (retain, nonatomic) UITextChecker *textChecker; // ivar: _textChecker


-(BOOL)isStringMisspelled:(id)arg0 ;
-(BOOL)isStringToReplaceMisspelled;
-(id)addReplacementRevertingAutocorrectionToReplacements:(id)arg0 ;
-(id)init;
-(id)replacements;
-(void)addAutocorrectionGuessesToReplacements:(id)arg0 ;
-(void)addPreviouslySuggestedAutocorrectionToReplacements:(id)arg0 ;
-(void)addSpellingGuessesForString:(id)arg0 ToReplacements:(id)arg1 ;


@end


#endif