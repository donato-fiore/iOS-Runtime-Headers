// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TIINPUTMANAGERHANDWRITING_H
#define TIINPUTMANAGERHANDWRITING_H

@class TIKeyboardInputManager, NSMutableDictionary, NSArray, NSMutableArray, NSString, NSLocale, CHRecognizer, TIHandwritingStrokes;
@protocol TIKeyboardActivityObserving;


#import "CIMCandidateData.h"
#import "RecognizerProvider.h"

@interface TIInputManagerHandwriting : TIKeyboardInputManager <TIKeyboardActivityObserving>

 {
    BOOL _showingCompletionCandidates;
    id *_contactObserver;
    id *_userDictionaryObserver;
    id *_dictionaryUpdateObserver;
}


@property (readonly, nonatomic) CIMCandidateData *candidateData; // ivar: _candidateData
@property (retain, nonatomic) NSMutableDictionary *candidateRefsDictionary; // ivar: _candidateRefsDictionary
@property (retain, nonatomic) NSArray *candidates; // ivar: _candidates
@property (retain, nonatomic) NSMutableArray *committedCandidates; // ivar: _committedCandidates
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *facemarkCandidates; // ivar: _facemarkCandidates
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isInCompletionMode; // ivar: _isInCompletionMode
@property (retain, nonatomic) NSArray *proactiveTriggers; // ivar: _proactiveTriggers
@property (readonly, nonatomic) NSLocale *recognitionLanguage;
@property (readonly) CHRecognizer *recognizer;
@property (readonly, nonatomic) RecognizerProvider *recognizerProvider; // ivar: _recognizerProvider
@property (nonatomic) BOOL shouldLearnAcceptedCandidate; // ivar: _shouldLearnAcceptedCandidate
@property (nonatomic) BOOL showingFacemarks; // ivar: _showingFacemarks
@property (readonly) Class superclass;
@property (retain, nonatomic) TIHandwritingStrokes *userDrawing; // ivar: _userDrawing


-(*void)initImplementation;
-(BOOL)isDummyCandidate:(id)arg0 ;
-(BOOL)shouldCommitInputString;
-(BOOL)shouldEnableHalfWidthPunctuationForCurrentInputContext;
-(BOOL)shouldLookForCompletionCandidates;
-(BOOL)shouldUpdateDictionaryPaths;
-(BOOL)suppliesCompletions;
-(BOOL)suppressPlaceholderCandidate;
-(BOOL)updateCandidates;
-(BOOL)updateCompletionCandidatesIfAppropriate;
-(BOOL)usesAutoDeleteWord;
-(BOOL)usesCandidateSelection;
-(NSUInteger)autoquoteType;
-(NSUInteger)initialSelectedIndex;
-(NSUInteger)predictionOptions:(BOOL)arg0 ;
-(id)addInputObject:(id)arg0 ;
-(id)candidateResultSet;
-(id)defaultCandidate;
-(id)didAcceptCandidate:(id)arg0 ;
-(id)historyForRecognition;
-(id)initWithConfig:(id)arg0 keyboardState:(id)arg1 ;
-(id)keyboardCandidateResultSetFromResults;
-(id)keyboardConfigurationLayoutTag;
-(id)markedTextForDefaultCandidate;
-(id)processCandidates:(id)arg0 ;
-(id)searchStringForMarkedText;
-(int)mecabraLanguage;
-(void)addInput:(id)arg0 withContext:(id)arg1 ;
-(void)cancelRecognition;
-(void)clearCandidateRefsDictionary;
-(void)clearInput;
-(void)clearObservers;
-(void)dealloc;
-(void)deleteFromInputWithContext:(id)arg0 ;
-(void)inputLocationChanged;
-(void)keyboardActivityDidTransition:(id)arg0 ;
-(void)loadDictionaries;
-(void)mainThreadUpdateCandidates:(id)arg0 ;
-(void)resetCompletionStates;
-(void)setLearnsCorrection:(BOOL)arg0 ;
-(void)suspend;
-(void)syncMarkedTextForKeyboardState:(id)arg0 afterContextChange:(BOOL)arg1 ;
-(void)updateAddressBook;
-(void)updateDictionaryPaths;
-(void)updateUserWordEntries;


@end


#endif