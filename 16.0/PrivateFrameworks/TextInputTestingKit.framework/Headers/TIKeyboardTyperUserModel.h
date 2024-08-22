// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TIKEYBOARDTYPERUSERMODEL_H
#define TIKEYBOARDTYPERUSERMODEL_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface TIKeyboardTyperUserModel : NSObject

@property (readonly, nonatomic) float avergageKeyTapsPerSecond; // ivar: _avergageKeyTapsPerSecond
@property (readonly, nonatomic) BOOL baseKeyForVariants; // ivar: _baseKeyForVariants
@property (readonly, nonatomic) BOOL decomposeInputString; // ivar: _decomposeInputString
@property (readonly, nonatomic) BOOL expectsAppendedSpaceToContinuousPath; // ivar: _expectsAppendedSpaceToContinuousPath
@property (readonly, nonatomic) NSUInteger maxPriorSegmentsCheckedForErrors; // ivar: _maxPriorSegmentsCheckedForErrors
@property (readonly, nonatomic) NSDictionary *parameters; // ivar: _parameters
@property (readonly, nonatomic) BOOL prefersAutocorrectForApostrophes; // ivar: _prefersAutocorrectForApostrophes
@property (readonly, nonatomic) BOOL prefersAutocorrectForCaps; // ivar: _prefersAutocorrectForCaps
@property (readonly, nonatomic) BOOL prefersContinuousPath; // ivar: _prefersContinuousPath
@property (readonly, nonatomic) BOOL prefersPredictionSelection; // ivar: _prefersPredictionSelection
@property (readonly, nonatomic) BOOL prefersSpaceBarDoubleTap; // ivar: _prefersSpaceBarDoubleTap
@property (readonly, nonatomic) BOOL prefersToCorrectErrors; // ivar: _prefersToCorrectErrors
@property (readonly, nonatomic) BOOL prefersTransliteration; // ivar: _prefersTransliteration
@property (readonly, nonatomic) float probBeginCorrectingAfterWord; // ivar: _probBeginCorrectingAfterWord
@property (readonly, nonatomic) float probBeginCorrectingAfterWordTerminator; // ivar: _probBeginCorrectingAfterWordTerminator
@property (readonly, nonatomic) float probDoubleTapInitialLetter; // ivar: _probDoubleTapInitialLetter
@property (readonly, nonatomic) float probDoubleTapLetter; // ivar: _probDoubleTapLetter
@property (readonly, nonatomic) float probExtraneousFinalKey; // ivar: _probExtraneousFinalKey
@property (readonly, nonatomic) float probExtraneousInitialKey; // ivar: _probExtraneousInitialKey
@property (readonly, nonatomic) float probExtraneousKey; // ivar: _probExtraneousKey
@property (readonly, nonatomic) float probRejectBadAutocorrection; // ivar: _probRejectBadAutocorrection
@property (readonly, nonatomic) float probSkipInitialLetter; // ivar: _probSkipInitialLetter
@property (readonly, nonatomic) float probSkipLetter; // ivar: _probSkipLetter
@property (readonly, nonatomic) float probSkipRepeatLetter; // ivar: _probSkipRepeatLetter
@property (readonly, nonatomic) float probSkipSpace; // ivar: _probSkipSpace
@property (readonly, nonatomic) float probSubstituteInitialLetter; // ivar: _probSubstituteInitialLetter
@property (readonly, nonatomic) float probSubstituteLetter; // ivar: _probSubstituteLetter
@property (readonly, nonatomic) float probSubstituteSpace; // ivar: _probSubstituteSpace
@property (readonly, nonatomic) float probTransposeLetterAndSpace; // ivar: _probTransposeLetterAndSpace
@property (readonly, nonatomic) float probTransposeLetters; // ivar: _probTransposeLetters
@property (readonly, nonatomic) BOOL usePartialCandidates; // ivar: _usePartialCandidates


+(id)defaultModel;
+(id)modelWithName:(id)arg0 ;
+(id)typeVariantKeysModel;
-(id)initWithModel:(id)arg0 ;


@end


#endif