// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _ACTUSERACTIONSTREAM_H
#define _ACTUSERACTIONSTREAM_H

@class NSString;
@protocol ACTUserActionStreaming, ACTUserActionStreamDelegate;

#import <Foundation/Foundation.h>

#import "ACTUserMentalCursor.h"
#import "TIErrorGenerator.h"
#import "TTKDefaultContinuousPathGenerator.h"
#import "TIKeyboardTyperUserModel.h"
#import "UserPathManager.h"

@interface _ACTUserActionStream : NSObject <ACTUserActionStreaming>



@property (retain, nonatomic) ACTUserMentalCursor *cursor; // ivar: _cursor
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<ACTUserActionStreamDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) TIErrorGenerator *errorGenerator; // ivar: _errorGenerator
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *intendedText;
@property (nonatomic) BOOL isBackspacing; // ivar: _isBackspacing
@property (nonatomic) BOOL lastActionSuppressesError; // ivar: _lastActionSuppressesError
@property (nonatomic) BOOL lastActionUseSecondaryString; // ivar: _lastActionUseSecondaryString
@property (nonatomic) NSInteger lastCursorPositionForTransliteratedCandidate; // ivar: _lastCursorPositionForTransliteratedCandidate
@property (nonatomic) CGFloat lastTimestamp; // ivar: _lastTimestamp
@property (retain, nonatomic) NSString *partialCandidateIntendedChunk; // ivar: _partialCandidateIntendedChunk
@property (retain, nonatomic) NSString *partialCandidateSuffix; // ivar: _partialCandidateSuffix
@property (retain, nonatomic) TTKDefaultContinuousPathGenerator *pathGenerator; // ivar: _pathGenerator
@property (nonatomic) unsigned int randomNumberSeed; // ivar: _randomNumberSeed
@property (nonatomic) NSUInteger segmentCursorBeforeBackspacing; // ivar: _segmentCursorBeforeBackspacing
@property (nonatomic) NSUInteger segmentEditHorizon; // ivar: _segmentEditHorizon
@property (readonly) Class superclass;
@property (retain, nonatomic) TIKeyboardTyperUserModel *userModel; // ivar: _userModel
@property (retain, nonatomic) UserPathManager *userPathManager; // ivar: _userPathManager


+(BOOL)isPathableWord:(id)arg0 ;
+(id)userActionStreamWithParameters:(id)arg0 delegate:(id)arg1 ;
+(struct _NSRange )segmentAnchorRangeForCursor:(id)arg0 withDocumentBefore:(id)arg1 ;
-(BOOL)advancePositionByAcceptingCandidate:(id)arg0 ;
-(BOOL)advanceSegmentCursor;
-(BOOL)canBeginBackspacing;
-(BOOL)canContinueBackspacing;
-(BOOL)currentAndNextKeysAreTransposable;
-(BOOL)hasDesiredAutocorrection;
-(BOOL)inPartialCandidateSelection;
-(BOOL)isFinished;
-(BOOL)isRetyping;
-(BOOL)lastAndCurrentKeysAreSame;
-(BOOL)preferBaseKeyForVariants;
-(BOOL)preferManualCorrection;
-(BOOL)preferManualShift;
-(BOOL)preferPredictionSelection;
-(BOOL)rewindSegmentCursor;
-(BOOL)shouldBeginCorrectingAfterWord;
-(BOOL)shouldBeginCorrectingAfterWordTerminator;
-(BOOL)shouldIgnoreCurrentCharacter;
-(BOOL)shouldRejectBadAutocorrection;
-(BOOL)shouldTypeInternalString;
-(CGFloat)averageActionInterval;
-(CGFloat)randomActionInterval;
-(float)probabilityOfDoubledKey;
-(float)probabilityOfExtraneousKey;
-(float)probabilityOfSkippedKey;
-(float)probabilityOfSubstituteKey;
-(float)probabilityOfTransposition;
-(id)anyKeyForString:(id)arg0 keyplane:(id)arg1 wantSecondaryString:(BOOL)arg2 substituteUpperCaseForLowerCase:(BOOL)arg3 ;
-(id)candidateToSelectFromCandidates:(id)arg0 ;
-(id)externalStringToInternal:(id)arg0 ;
-(id)findPartialCandidate;
-(id)initWithParameters:(id)arg0 delegate:(id)arg1 ;
-(id)matchTransliterationCandidateToSegment:(id)arg0 withCursorAt:(int)arg1 ;
-(id)nextUserAction;
-(id)transliterationCandidate:(id)arg0 ;
-(id)tryAcceptCandidate;
-(id)tryAcceptingCandidate:(id)arg0 ;
-(id)tryBackspacing;
-(id)tryChangeKeyplane;
-(id)tryContinuousPath;
-(id)tryDoubleKeyTap;
-(id)tryExtraKeyTap;
-(id)tryKeyTap;
-(id)tryPeriodShortcut;
-(id)tryRejectCandidate;
-(id)trySelectPopupVariant;
-(id)trySkipKeyTap;
-(id)trySubstituteKeyTap;
-(id)tryTransposedKeyTaps;
-(id)tryTypingWillSuppressError:(*BOOL)arg0 ;
-(struct _NSRange )documentEditRangeWithSegmentRangePtr:(struct _NSRange *)arg0 ;
-(void)advancePositionByString:(id)arg0 ;
-(void)advancePositionForAutospace;
-(void)configureWithParameters:(id)arg0 ;
-(void)resetForIntendedSegments:(id)arg0 expectedSegments:(id)arg1 ;
-(void)resetForIntendedText:(id)arg0 ;
-(void)rewindPositionByString:(id)arg0 ;


@end


#endif