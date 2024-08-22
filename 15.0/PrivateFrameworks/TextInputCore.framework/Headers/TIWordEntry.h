// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TIWORDENTRY_H
#define TIWORDENTRY_H

@class TIKeyboardCandidate, NSString, NSMutableArray, NSArray, TIKeyboardInput;


#import "TIUserAction.h"
#import "TIWordEntry.h"

@interface TIWordEntry : TIUserAction

@property (retain, nonatomic) TIKeyboardCandidate *acceptedCandidate; // ivar: _acceptedCandidate
@property (copy, nonatomic) NSString *acceptedString; // ivar: _acceptedString
@property (nonatomic) NSUInteger alignmentConflicts; // ivar: _alignmentConflicts
@property (retain, nonatomic) NSMutableArray *allEdits; // ivar: _allEdits
@property (readonly, nonatomic) NSArray *allKeyboardInputs;
@property (retain, nonatomic) NSMutableArray *allKeyboardInputsM; // ivar: _allKeyboardInputsM
@property (readonly, nonatomic) NSArray *allTouches;
@property (retain, nonatomic) NSMutableArray *allTouchesM; // ivar: _allTouchesM
@property (nonatomic) BOOL candidateContainsEmoji; // ivar: _candidateContainsEmoji
@property NSInteger candidateIndex; // ivar: _candidateIndex
@property (readonly, nonatomic) NSArray *candidatesOffered;
@property (retain, nonatomic) NSMutableArray *candidatesOfferedM; // ivar: _candidatesOfferedM
@property (retain, nonatomic) TIUserAction *editAction; // ivar: _editAction
@property (readonly, nonatomic) TIWordEntry *editedEntry;
@property (nonatomic) BOOL extendsPriorWord; // ivar: _extendsPriorWord
@property (nonatomic) BOOL followsContinuousPath; // ivar: _followsContinuousPath
@property (nonatomic) BOOL includesCursorEdits; // ivar: _includesCursorEdits
@property (nonatomic) BOOL includesOrientationChange; // ivar: _includesOrientationChange
@property (copy, nonatomic) NSString *inputContext; // ivar: _inputContext
@property (copy, nonatomic) NSString *inputStem; // ivar: _inputStem
@property (retain, nonatomic) TIKeyboardInput *inputTriggeredTextAccepted; // ivar: _inputTriggeredTextAccepted
@property (nonatomic) BOOL isContinuousPathCompletion; // ivar: _isContinuousPathCompletion
@property (nonatomic) BOOL isFromStaticLexicon; // ivar: _isFromStaticLexicon
@property (nonatomic) BOOL isMultilingual; // ivar: _isMultilingual
@property (nonatomic) BOOL isOOV; // ivar: _isOOV
@property (nonatomic) BOOL isPunctuationEntryFollowingAWord; // ivar: _isPunctuationEntryFollowingAWord
@property (nonatomic) BOOL isRetrocorrection; // ivar: _isRetrocorrection
@property NSInteger layoutID; // ivar: _layoutID
@property (copy, nonatomic) NSString *orientation; // ivar: _orientation
@property (copy, nonatomic) NSString *originalAcceptedString; // ivar: _originalAcceptedString
@property (retain, nonatomic) TIKeyboardCandidate *originalCandidate; // ivar: _originalCandidate
@property (nonatomic) NSUInteger sessionIndex; // ivar: _sessionIndex
@property (nonatomic) int touchAlignmentConf; // ivar: _touchAlignmentConf
@property (readonly, nonatomic) NSArray *touchLayouts;
@property (retain, nonatomic) NSMutableArray *touchLayoutsM; // ivar: _touchLayoutsM
@property (nonatomic) int unfinishedWordEntryTreatment; // ivar: _unfinishedWordEntryTreatment
@property (nonatomic) int wordAlignmentConf; // ivar: _wordAlignmentConf
@property (nonatomic) int wordEntryType; // ivar: _wordEntryType


+(BOOL)supportsSecureCoding;
-(BOOL)endsWithNewLine;
-(BOOL)isPeriodFromDoubleSpaceEntry;
-(BOOL)startsWithNewLine;
-(id)description;
-(id)descriptionWithContext;
-(id)documentContextBeforeInput;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)trimmedDocumentContextBeforeInput;
-(void)addCandidateOffered:(id)arg0 ;
-(void)addKeyInput:(id)arg0 ;
-(void)addTouchEvent:(id)arg0 withLayoutId:(NSUInteger)arg1 ;
-(void)addUserEdit:(id)arg0 ;
-(void)clearCandidatesOffered;
-(void)clearKeyInputs;
-(void)clearTouches;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif