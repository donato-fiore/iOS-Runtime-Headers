// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CACSPOKENCOMMANDMANAGER_H
#define CACSPOKENCOMMANDMANAGER_H

@class NSArray, AXElement, NSString, NSMutableArray, NSMutableDictionary, NSDictionary, FBSApplicationLibrary, FBSALOToken;
@protocol CACAXNotificationObserverDelegate, CACTouchEventObserverDelegate, UNUserNotificationCenterDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CACSpokenCommand.h"
#import "CACAXNotificationObserver.h"
#import "CACDisambiguationHandler.h"
#import "CACLabeledElementsCollection.h"
#import "CACTextInsertionSpecifier.h"
#import "CACTouchEventObserver.h"

@interface CACSpokenCommandManager : NSObject <CACAXNotificationObserverDelegate, CACTouchEventObserverDelegate, UNUserNotificationCenterDelegate>

 {
    NSArray *_activeApplications;
    NSArray *_topLevelElements;
    NSArray *_topLevelAndNonScannerElements;
    AXElement *_focusedElement;
    NSArray *_presentationElements;
    unsigned int _lastSyncdInteractionLevel;
    int _dictationRecognizerMode;
    NSString *_previousLeadingTextString;
    NSMutableArray *_recognizers;
    NSMutableArray *_recognizedCommandsReadyForDispatch;
    NSMutableDictionary *_recognizerInteractionLevels;
    NSMutableDictionary *_identifierBasedLanguageModelCache;
    NSMutableDictionary *_oldRXLangaugeObjects;
    CGFloat _recognizerSyncTransactionID;
    int _currentRecognitionResetMode;
    CGFloat _startedListeningTimeStamp;
    NSObject<OS_dispatch_queue> *_commandExecutionDispatchQueue;
    CACSpokenCommand *_currentNextPreviousResolverSpokenCommand;
    CACSpokenCommand *_currentRepeatingSpokenCommand;
    NSInteger _repeatingSpokenCommandRemainingCount;
    NSDictionary *_nextResolverRelationships;
    NSDictionary *_previousResolverRelationships;
    NSDictionary *_builtInLocalizedCommandStrings;
    NSDictionary *_externalContextOverrideTable;
    id *_synchronousRemoteRequestCompletionBlock;
    BOOL _isListening;
    BOOL _suspendCommandDispatching;
    BOOL _displayIsOff;
    BOOL _initialListenRequestWasSuccessful;
    NSInteger _attentionAwareStatus;
    int _attentionAwarePreviousDictationRecognizerMode;
    NSString *_currentAttentionAwarenessAction;
    CGFloat _nextFetchDelayFactor;
    CGFloat _fetchingTransactionID;
    NSObject<OS_dispatch_queue> *_elementFetchingQueue;
}


@property (retain, nonatomic) FBSApplicationLibrary *appLibrary; // ivar: _appLibrary
@property (retain, nonatomic) FBSALOToken *applicationAddedObservationToken; // ivar: _applicationAddedObservationToken
@property (retain, nonatomic) FBSALOToken *applicationRemovedObservationToken; // ivar: _applicationRemovedObservationToken
@property (retain, nonatomic) CACAXNotificationObserver *axNotificationObserver; // ivar: _axNotificationObserver
@property (readonly) NSString *commandRecognitionLogPath; // ivar: _commandRecognitionLogPath
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property int dictationRecognizerMode;
@property (retain) CACDisambiguationHandler *disambiguationHandler; // ivar: _disambiguationHandler
@property (readonly) BOOL forceAllCommandsToBeActive; // ivar: _forceAllCommandsToBeActive
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isAttentionAwareClientRunning; // ivar: _isAttentionAwareClientRunning
@property (readonly, nonatomic) BOOL isFetchingElements;
@property (readonly) CACLabeledElementsCollection *labeledScreenElementsCollection; // ivar: _labeledScreenElementsCollection
@property (readonly, nonatomic) CGFloat lastDictationInsertionTimeStamp; // ivar: _lastDictationInsertionTimeStamp
@property (retain) CACTextInsertionSpecifier *previousTextInsertionSpecifier; // ivar: _previousTextInsertionSpecifier
@property (retain) NSObject<OS_dispatch_queue> *recognizerSynchronizationDispatchQueue; // ivar: _recognizerSynchronizationDispatchQueue
@property (nonatomic) BOOL shouldPreserveDisambiguationHandler; // ivar: _shouldPreserveDisambiguationHandler
@property (retain) CACTextInsertionSpecifier *stagedTextInsertionSpecifier; // ivar: _stagedTextInsertionSpecifier
@property (readonly) Class superclass;
@property (nonatomic) BOOL telephonyInterruptedListening; // ivar: _telephonyInterruptedListening
@property (retain, nonatomic) CACTouchEventObserver *touchEventObserver; // ivar: _touchEventObserver
@property (retain) NSString *transientOverlayType; // ivar: _transientOverlayType
@property (readonly) BOOL userIsTouching; // ivar: _userIsTouching


+(BOOL)doesEvaluatorKey:(id)arg0 matchValue:(id)arg1 ;
+(id)capitalizedStringFromString:(id)arg0 ;
+(id)sharedCACSpokenCommandManager;
-(BOOL)_attentionIsLostWithListeningOffAction;
-(BOOL)_chamoisSupportEnabledForVoiceControl;
-(BOOL)_isNumberOnlyString:(id)arg0 lessThanOrEqualToValue:(NSInteger)arg1 ;
-(BOOL)_isSystemSleeping;
-(BOOL)_popInteractionLevel:(unsigned int)arg0 referencingObject:(id)arg1 ;
-(BOOL)_pushInteractionLevel:(unsigned int)arg0 referencingObject:(id)arg1 ;
-(BOOL)_shouldBeListening;
-(BOOL)_telephonyRequiresAirPods;
-(BOOL)doesCurrentLanguageSupportInterWordSpaces;
-(BOOL)doesFocusedElementRequireSecureInput;
-(BOOL)elementIsOccluded:(id)arg0 occludedAppScenes:(id)arg1 ;
-(BOOL)isActiveOverlayType:(id)arg0 ;
-(BOOL)isListening;
-(BOOL)isNextPreviousResolverSpokenCommandEmojiBased;
-(BOOL)isSynchronizingRecognizers;
-(BOOL)showUIAsListening;
-(CGFloat)delayForNotification:(int)arg0 ;
-(id)_allElementsIncludingNonScanner;
-(id)_arrayFromExternalContextOverrideForBuiltInIdentifier:(id)arg0 ;
-(id)_fetchPresentationElements;
-(id)_nextResolverRelationships;
-(id)_previousResolverRelationships;
-(id)_stringInRecognitionLocaleFormatFromIntegerValue:(NSInteger)arg0 ;
-(id)_telephonyQueue;
-(id)_templateSpokenCommandWithIdentifier:(id)arg0 ;
-(id)activeApplications;
-(id)activeCommandIdentifiers;
-(id)activeCommandsForLocaleIdentifier:(id)arg0 ;
-(id)activeOverlayType;
-(id)allCommandsForLocaleIdentifier:(id)arg0 ;
-(id)allCustomCommandsDetail;
-(id)contextSummary;
-(id)copySupportedCommandWithIdentifier:(id)arg0 ;
-(id)focusedElement;
-(id)groupedCommandsForLocaleIdentifier:(id)arg0 ;
-(id)labeledElementsFromScreen;
-(id)labeledElementsFromScreenWithTitle:(id)arg0 ;
-(id)labeledElementsFromScreenWithTrait:(NSUInteger)arg0 ;
-(id)languageModelForBuiltInLMIdentifier:(id)arg0 ;
-(id)leadingTextForCurrentSelection;
-(id)nameOfAXNotification:(int)arg0 ;
-(id)primaryStringForCommandIdentifier:(id)arg0 ;
-(id)resolvedNextSpokenCommand;
-(id)resolvedPreviousSpokenCommand;
-(id)screenElements;
-(id)screenElementsForEscape;
-(id)screenElementsForScrolling;
-(id)stopRecordingGesture;
-(id)synchronousRecognitionOfString:(id)arg0 timeoutInterval:(CGFloat)arg1 ;
-(id)synchronousRecognitionUsingCommandIdentifier:(id)arg0 parameters:(id)arg1 timeoutInterval:(CGFloat)arg2 ;
-(struct CGRect )bestDictationRecognizerModeImageRectForView:(id)arg0 ;
-(struct __RXLanguageObject *)rxLanguageObjectForBuiltInLMIdentifier:(id)arg0 ;
-(unsigned int)currentInteractionLevel;
-(unsigned int)currentInteractionLevelPassingBackTopReferencingObject:(*id)arg0 ;
-(void)_appendSpokenCommand:(id)arg0 toLogAtPath:(id)arg1 ;
-(void)_attentionAwareSettingChanged;
-(void)_cancelSynchronousRemoteRecognition;
-(void)_clearPreviousTextInsertionSpecifierBasedOnExecutedCommand:(id)arg0 ;
-(void)_closeAllRecognizers;
-(void)_createCommandRecognizersIfNecessary;
-(void)_executeNextRepeatWithCompletionBlock:(id)arg0 ;
-(void)_fetchElements;
-(void)_flushBuiltInLMIdentifierTable;
-(void)_handleLanguageChange;
-(void)_intializeBuiltInLMIdentifierTableIfNecessary;
-(void)_markAsDirtyForBuiltInLMIdentifier:(id)arg0 ;
-(void)_microphoneTurnedOff;
-(void)_microphoneTurnedOffAfterInteruption;
-(void)_microphoneTurnedOn;
-(void)_microphoneTurnedOnAfterInteruption;
-(void)_notifyStatusChanged:(NSInteger)arg0 ;
-(void)_pushLeadingContextToSpeechRecognitionSystem;
-(void)_rebuildCommandRecognizers;
-(void)_rebuildCustomCommandRecognizers;
-(void)_resetInteractionLevel;
-(void)_resetRecognitionSystems;
-(void)_scheduleFetchElementsWithDelay:(CGFloat)arg0 ;
-(void)_scheduleFetchElementsWithDelay:(CGFloat)arg0 andReason:(id)arg1 ;
-(void)_startListening;
-(void)_startSynchronousRemoteRecognitionWithCompletionBlock:(id)arg0 ;
-(void)_stopListening;
-(void)_updateLanguageModelForBuiltInLMIdentifier:(id)arg0 ;
-(void)_waitUntilElementsAreNumbered;
-(void)attemptGrabbingMic:(id)arg0 ;
-(void)attentionAwareGained;
-(void)attentionAwareInterrupted;
-(void)attentionAwareInterruptionEnded;
-(void)attentionAwareLost;
-(void)beginExecutingRepeatingSpokenCommandNumberOfTimes:(NSInteger)arg0 completionBlock:(id)arg1 ;
-(void)beginObservingApplications;
-(void)cancelAnyTransientOverlay;
-(void)dealloc;
-(void)didBeginTouches;
-(void)didEndTouches;
-(void)didFindCloseSpokenCommandIdentifiers:(id)arg0 ;
-(void)didFinishExecutingSpokenCommand:(id)arg0 ;
-(void)didObserveFirstTouchDownForObserver:(id)arg0 ;
-(void)didObserveLastTouchUpForObserver:(id)arg0 ;
-(void)dispatchPendingCommand;
-(void)displayMessageAndQuitVoiceControl;
-(void)displayRetryMessage;
-(void)displayRetryMessageAndRetryGrabbingMic;
-(void)enterDictatedString:(id)arg0 ;
-(void)enterSleepInteractionLevel;
-(void)exitSleepInteractionLevel;
-(void)forceElementFetch;
-(void)forceElementFetchWithReason:(id)arg0 ;
-(void)forceSynchronizeRecognizersForBuiltInLMIdentifier:(id)arg0 ;
-(void)handleRecognizedCommand:(id)arg0 ;
-(void)handleSRSystemBeginUtteranceWithID:(NSUInteger)arg0 ;
-(void)handleSRSystemServerError;
-(void)insertDictatedAttributedString:(id)arg0 ;
-(void)insertDictatedString:(id)arg0 ;
-(void)notifyUserOfCommandFailureUsingSound;
-(void)notifyUserOfCommandFailureWithTitle:(id)arg0 description:(id)arg1 ;
-(void)observer:(id)arg0 didObserveNotification:(int)arg1 notificationData:(*void)arg2 ;
-(void)registerSignPostBeginProcessingForSpeechRecognizer:(id)arg0 message:(id)arg1 ;
-(void)registerSignPostEndProcessingForSpeechRecognizer:(id)arg0 message:(id)arg1 ;
-(void)run;
-(void)setNextFetchDelayFactor:(CGFloat)arg0 ;
-(void)setNextPreviousResolverSpokenCommand:(id)arg0 ;
-(void)setRepeatingSpokenCommand:(id)arg0 ;
-(void)setScreenElements:(id)arg0 allElements:(id)arg1 presentationElements:(id)arg2 activeApplications:(id)arg3 focusedTextAreaElement:(id)arg4 ;
-(void)startListening;
-(void)startRecordingGesture;
-(void)stopAnyRepeatingSpokenCommand;
-(void)stopListening;
-(void)stopObservingApplications;
-(void)suspendCommandDispatching:(BOOL)arg0 ;
-(void)synchronizeRecognizersWithReason:(id)arg0 ;
-(void)updateStatusIndicatorView;
-(void)willTerminate;
-(void)willUpdateElementsSignificantly;


@end


#endif