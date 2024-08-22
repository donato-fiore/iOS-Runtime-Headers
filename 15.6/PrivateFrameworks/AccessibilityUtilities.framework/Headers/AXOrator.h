// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AXORATOR_H
#define AXORATOR_H

@class AVSpeechUtterance, AXDispatchTimer, NSMutableArray, NSString, NSArray, AVSpeechSynthesizer;
@protocol AVSpeechSynthesizerDelegate, AXOratorDelegate;

#import <Foundation/Foundation.h>

#import "AXLanguageTag.h"
#import "AXLanguageTaggedContent.h"

@interface AXOrator : NSObject <AVSpeechSynthesizerDelegate>

 {
    AVSpeechUtterance *_statusUtterance;
    BOOL _contentIsSpeakable;
    AXDispatchTimer *_audioSessionTimer;
}


@property (retain, nonatomic) NSMutableArray *additionalContentToProcess; // ivar: _additionalContentToProcess
@property (nonatomic) CGFloat audioSessionInactiveTimeout; // ivar: _audioSessionInactiveTimeout
@property (copy, nonatomic) NSString *content;
@property (retain, nonatomic) NSString *currentLanguageCode; // ivar: _currentLanguageCode
@property (readonly, nonatomic) NSString *currentVoiceIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AXOratorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isProcessingContentForSpeech; // ivar: _isProcessingContentForSpeech
@property (nonatomic) _NSRange lastSpokenSubstringRange; // ivar: _lastSpokenSubstringRange
@property (retain, nonatomic) AVSpeechUtterance *lastUtterance; // ivar: _lastUtterance
@property (retain, nonatomic) NSString *lastUtteranceLanguageCode; // ivar: _lastUtteranceLanguageCode
@property (retain, nonatomic) AXLanguageTag *lastUtteranceLanguageTag; // ivar: _lastUtteranceLanguageTag
@property (nonatomic) _NSRange lastUtteranceSubstringRange; // ivar: _lastUtteranceSubstringRange
@property (nonatomic) NSUInteger numberOfTokensToSkip; // ivar: _numberOfTokensToSkip
@property (nonatomic) BOOL preferredLanguageWasSpecified; // ivar: _preferredLanguageWasSpecified
@property (retain, nonatomic) AXLanguageTaggedContent *selectedContent; // ivar: _selectedContent
@property (nonatomic) BOOL shouldSpeakNextItemOnResume; // ivar: _shouldSpeakNextItemOnResume
@property (nonatomic) BOOL skipLuthorRules; // ivar: _skipLuthorRules
@property (retain, nonatomic) AXLanguageTaggedContent *speakingContent; // ivar: _speakingContent
@property (retain, nonatomic) NSArray *speakingContentTokenRanges; // ivar: _speakingContentTokenRanges
@property (nonatomic) NSInteger speakingContext; // ivar: _speakingContext
@property (retain, nonatomic) NSMutableArray *speechSequenceItems; // ivar: _speechSequenceItems
@property (retain, nonatomic) AVSpeechSynthesizer *speechSynthesizer; // ivar: _speechSynthesizer
@property (nonatomic) BOOL spellOutContent; // ivar: _spellOutContent
@property (readonly) Class superclass;
@property (nonatomic) BOOL supportsAccurateWordCallbacks; // ivar: _supportsAccurateWordCallbacks


-(BOOL)_canSpeakTaggedContent:(id)arg0 ;
-(BOOL)_changeSpeakingSpeed:(CGFloat)arg0 usingLanugageSpecificRate:(BOOL)arg1 ;
-(BOOL)_skipByUnit:(BOOL)arg0 boundary:(NSUInteger)arg1 ;
-(BOOL)_successWithCode:(NSInteger)arg0 error:(*id)arg1 ;
-(BOOL)_useLanguageSpecificSpeakingRate;
-(BOOL)canResumeWithContent:(id)arg0 ;
-(BOOL)fastForwardWithBoundary:(NSUInteger)arg0 ;
-(BOOL)isPaused;
-(BOOL)isSpeaking;
-(BOOL)pauseSpeaking:(*id)arg0 ;
-(BOOL)resumeSpeaking:(*id)arg0 ;
-(BOOL)resumeSpeakingAfterDelay:(CGFloat)arg0 error:(*id)arg1 ;
-(BOOL)rewindWithBoundary:(NSUInteger)arg0 ;
-(BOOL)setSpeakingRate:(CGFloat)arg0 ;
-(BOOL)speakFaster;
-(BOOL)speakSlower;
-(BOOL)startSpeakingWithPreferredLanguage:(id)arg0 delayBeforeStart:(CGFloat)arg1 error:(*id)arg2 ;
-(BOOL)startSpeakingWithPreferredLanguage:(id)arg0 error:(*id)arg1 ;
-(BOOL)stopSpeaking:(*id)arg0 ;
-(CGFloat)currentSpeechRateForAdjustment;
-(NSInteger)_currentTokenIndex:(BOOL)arg0 ;
-(float)speechRate;
-(id)_getLangCodeForItem:(id)arg0 ;
-(id)_speechSequenceItemsStartingAtContentLocation:(NSUInteger)arg0 ;
-(id)init;
-(void)_clearAllContentState;
-(void)_processAdditionalContentInPreparationForSpeech;
-(void)_respeakUtteranceIfNeeded;
-(void)_speakNextItemInSequence;
-(void)_speakNextTokenFromCurrentTokenIndex:(NSInteger)arg0 forward:(BOOL)arg1 boundary:(NSUInteger)arg2 ;
-(void)_startSpeakingSequence;
-(void)_tokenizeContentIfNeeded;
-(void)_updateAudioSessionCategory;
-(void)_updateSequenceForSpellOutBehavior;
-(void)addAdditionalContentToSpeechQueue:(id)arg0 ;
-(void)clearSelectedContent;
-(void)speakStatusWithLanguage:(id)arg0 rate:(id)arg1 ;
-(void)speechSynthesizer:(id)arg0 didCancelSpeechUtterance:(id)arg1 ;
-(void)speechSynthesizer:(id)arg0 didContinueSpeechUtterance:(id)arg1 ;
-(void)speechSynthesizer:(id)arg0 didFinishSpeechUtterance:(id)arg1 ;
-(void)speechSynthesizer:(id)arg0 didPauseSpeechUtterance:(id)arg1 ;
-(void)speechSynthesizer:(id)arg0 didStartSpeechUtterance:(id)arg1 ;
-(void)speechSynthesizer:(id)arg0 willSpeakRangeOfSpeechString:(struct _NSRange )arg1 utterance:(id)arg2 ;


@end


#endif