// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIDICTATIONCONTROLLER_H
#define UIDICTATIONCONTROLLER_H

@class NSTimer, NSString, CADisplayLink, NSDictionary, AFAnalyticsTurnBasedInstrumentationContext, NSArray, NSNumber, NSMutableArray;
@protocol UIDictationConnectionDelegate, UIDictationConnectionTokenFilterProtocol, UIAdaptivePresentationControllerDelegate, _UIDictationPrivacySheetControllerDelegate, VTUIDictationDataSharingOptInPresentationDelegate, _UITouchPhaseChangeDelegate;

#import <Foundation/Foundation.h>

#import "UIDictationConnection.h"
#import "UIDictationConnectionPreferences.h"
#import "UIDictationStreamingOperations.h"
#import "_UIDictationTelephonyMonitor.h"
#import "_UITapTapHoldGestureRecognizer.h"
#import "_UIVoiceCommandButtonTapGestureRecognizer.h"
#import "UIKeyboardInputMode.h"
#import "UIWindow.h"
#import "_UIDictationPrivacySheetController.h"
#import "UIDictationInputModeOptions.h"

@interface UIDictationController : NSObject <UIDictationConnectionDelegate, UIDictationConnectionTokenFilterProtocol, UIAdaptivePresentationControllerDelegate, _UIDictationPrivacySheetControllerDelegate, VTUIDictationDataSharingOptInPresentationDelegate, _UITouchPhaseChangeDelegate>

 {
    UIDictationConnection *_dictationConnection;
    UIDictationConnectionPreferences *_preferences;
    NSTimer *_recordingLimitTimer;
    BOOL _connectionWasAlreadyAliveForStatisticsLogging;
    UIDictationStreamingOperations *_streamingOperations;
    NSString *_language;
    BOOL _recievingResults;
    BOOL _streamingAnimationActive;
    CGFloat _lastAnimationUpdateTimeStamp;
    id *_finalResultsOperation;
    CADisplayLink *_streamingAnimationDisplayLink;
    BOOL cancelledByWaitingForLocalResults;
    NSInteger _updatingDocument;
    BOOL _deferredCancellationRequested;
    BOOL _isOfflineMetricsSessionActive;
    BOOL _didUseOfflineDictation;
    NSInteger _lastOfflineDictationMetricEvent;
    _UIDictationTelephonyMonitor *_monitor;
    NSString *_prefixTextForStart;
    NSString *_selectionTextForStart;
    NSString *_postfixTextForStart;
    BOOL _hasDictated;
    NSDictionary *_selectedAttributesForDictation;
    id *_privacySheetDismissalHandler;
    int _dictationInputModeNotifierToken;
    NSInteger _currentShortcutType;
    _UITapTapHoldGestureRecognizer *_hardwareShortcutRecognizer;
    _UIVoiceCommandButtonTapGestureRecognizer *_hardwareVoiceCommandKeyRecognizer;
    BOOL _prevForceDisplayOverridePlaceholder;
}


@property (copy, nonatomic) NSString *activationIdentifier; // ivar: _activationIdentifier
@property (retain, nonatomic) UIKeyboardInputMode *currentInputModeForDictation; // ivar: _currentInputModeForDictation
@property (retain, nonatomic) AFAnalyticsTurnBasedInstrumentationContext *currentInstrumentationContext; // ivar: _currentInstrumentationContext
@property (copy, nonatomic) NSString *currentKeyboardPrimaryLanguage; // ivar: _currentKeyboardPrimaryLanguage
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *detectedLanguage; // ivar: _detectedLanguage
@property (nonatomic, getter=isDetectingUtterances) BOOL detectingUtterances; // ivar: _detectingUtterances
@property (retain, nonatomic) NSArray *dictationLanguages; // ivar: _dictationLanguages
@property (retain, nonatomic) UIWindow *dictationPresenterWindow; // ivar: _dictationPresenterWindow
@property (retain, nonatomic) _UIDictationPrivacySheetController *dictationPrivacySheetController; // ivar: _dictationPrivacySheetController
@property (readonly, retain, nonatomic) NSNumber *dictationRequestOrigin;
@property (nonatomic) NSUInteger dictationSourceType; // ivar: _dictationSourceType
@property (nonatomic) BOOL didToggleSoftwareKeyboardVisibleForDictation; // ivar: _didToggleSoftwareKeyboardVisibleForDictation
@property (nonatomic) BOOL discardNextHypothesis; // ivar: _discardNextHypothesis
@property (copy, nonatomic) NSString *fallbackDictationLanguage; // ivar: _fallbackDictationLanguage
@property (nonatomic, getter=isFinalizingRecognizedUtterance) BOOL finalizingRecognizedUtterance; // ivar: _finalizingRecognizedUtterance
@property (nonatomic) BOOL hasCheckedForLeadingSpaceOnce; // ivar: _hasCheckedForLeadingSpaceOnce
@property (nonatomic) BOOL hasInsertedAtLeastOneSerializedDictationResult; // ivar: _hasInsertedAtLeastOneSerializedDictationResult
@property (nonatomic) BOOL hasPreheated; // ivar: _hasPreheated
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSTimer *idleTimerResetTimer; // ivar: _idleTimerResetTimer
@property (nonatomic) BOOL ignoreFinalizePhrases; // ivar: _ignoreFinalizePhrases
@property (nonatomic) unsigned short initialCharacterAfterSelectionForAsyncDelegate; // ivar: _initialCharacterAfterSelectionForAsyncDelegate
@property (copy, nonatomic) NSString *initialDictationLanguage; // ivar: _initialDictationLanguage
@property (nonatomic) unsigned short initialPreviousCharacterForAsyncDelegate; // ivar: _initialPreviousCharacterForAsyncDelegate
@property (retain, nonatomic) UIDictationInputModeOptions *inputModeOptions; // ivar: _inputModeOptions
@property (nonatomic) _NSRange insertionRange; // ivar: _insertionRange
@property (copy, nonatomic) NSString *interactionIdentifier; // ivar: _interactionIdentifier
@property (retain, nonatomic) UIKeyboardInputMode *keyboardInputModeToReturn; // ivar: _keyboardInputModeToReturn
@property (copy, nonatomic) id *lastCorrectionIdentifier; // ivar: _lastCorrectionIdentifier
@property (copy, nonatomic) NSString *lastHypothesis; // ivar: _lastHypothesis
@property (copy, nonatomic) NSString *lastMessageKeyboardLanguage; // ivar: _lastMessageKeyboardLanguage
@property (copy, nonatomic) NSString *lastRecognitionText; // ivar: _lastRecognitionText
@property (nonatomic) BOOL localSpeechRecognitionForced; // ivar: _localSpeechRecognitionForced
@property (nonatomic) BOOL logAppEnterBackground; // ivar: _logAppEnterBackground
@property (copy, nonatomic) NSString *modelInfo; // ivar: _modelInfo
@property (retain, nonatomic) NSMutableArray *pendingEdits; // ivar: _pendingEdits
@property (nonatomic) BOOL performingStreamingEditingOperation; // ivar: _performingStreamingEditingOperation
@property (nonatomic) unsigned short previousCharacter; // ivar: _previousCharacter
@property (copy, nonatomic) NSString *previousHypothesis; // ivar: _previousHypothesis
@property (nonatomic) NSUInteger reasonType; // ivar: _reasonType
@property (nonatomic) BOOL secureOfflineOnlySpeechRecognition; // ivar: _secureOfflineOnlySpeechRecognition
@property (nonatomic) BOOL selectionEndWasInitiallyAtParagraphBoundaryForAsyncDelegate; // ivar: _selectionEndWasInitiallyAtParagraphBoundaryForAsyncDelegate
@property (nonatomic) BOOL selectionStartIsStartOfParagraph; // ivar: _selectionStartIsStartOfParagraph
@property (nonatomic) BOOL selectionStartWasInitiallyAtParagraphBoundaryForAsyncDelegate; // ivar: _selectionStartWasInitiallyAtParagraphBoundaryForAsyncDelegate
@property (nonatomic, getter=isSendButtonPressedDuringDictation) BOOL sendButtonPressedDuringDictation; // ivar: _sendButtonPressedDuringDictation
@property (nonatomic) BOOL shouldStayInDictationInputMode; // ivar: _shouldStayInDictationInputMode
@property (copy) NSString *smartLanguageSelectionOverrideLanguage; // ivar: _smartLanguageSelectionOverrideLanguage
@property (nonatomic) NSUInteger stateHandler; // ivar: _stateHandler
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *targetHypothesis; // ivar: _targetHypothesis
@property (nonatomic) BOOL wantsAvailabilityMonitoringWhenAppActive; // ivar: _wantsAvailabilityMonitoringWhenAppActive


+(BOOL)_applicationIsActive;
+(BOOL)_checkTraitsSupportDictation:(id)arg0 ;
+(BOOL)canPerformDictation;
+(BOOL)canShareDictationData;
+(BOOL)checkTraitsSupportDictation:(id)arg0 ;
+(BOOL)dictationInfoIsOnScreen;
+(BOOL)dictationIsFunctional;
+(BOOL)fetchCurrentInputModeSupportsDictation;
+(BOOL)isDictationSearchBarButtonVisible;
+(BOOL)isInputDelegateSafariAddressBar;
+(BOOL)isRunning;
+(BOOL)isTextViewOnStarkScreen:(id)arg0 ;
+(BOOL)remoteCanDictateCurrentInputMode;
+(BOOL)shouldDeleteBackwardInInputDelegate:(id)arg0 ;
+(BOOL)shouldHideCursorForTextView:(id)arg0 ;
+(BOOL)shouldHideSelectionUIForTextView:(id)arg0 ;
+(BOOL)shouldInsertText:(id)arg0 inInputDelegate:(id)arg1 ;
+(BOOL)shouldPreferOnDeviceRecognition;
+(BOOL)shouldPreferOnlineRecognition;
+(BOOL)shouldRemoveTextEntries;
+(BOOL)shouldRemoveTextEntries:(id)arg0 ;
+(BOOL)skipUndo;
+(BOOL)starkScreenExists;
+(BOOL)takesPressesBegan:(id)arg0 forTextView:(id)arg1 ;
+(BOOL)takesPressesChanged:(id)arg0 forTextView:(id)arg1 ;
+(BOOL)takesPressesEnded:(id)arg0 forTextView:(id)arg1 ;
+(BOOL)usingServerManualEndpointingThreshold;
+(BOOL)usingTypeAndTalk;
+(CGFloat)serverManualEndpointingThreshold;
+(NSUInteger)specificReasonTypeMicButtonOnKeyboard;
+(NSUInteger)specificReasonTypeMicButtonOnKeyboardWithInputSwitcher;
+(id)UIDictationInstrumentaionLocalIdentifierWithLocalString:(id)arg0 ;
+(id)UIDictationLanguageSourceType:(NSUInteger)arg0 ;
+(id)UIDictationStartStopReasonTypeDescription:(NSUInteger)arg0 ;
+(id)_dictationLog;
+(id)activeConnection;
+(id)activeInstance;
+(id)activeSLSDictationLanguages;
+(id)arrayWithTextEntriesRemoved:(id)arg0 ;
+(id)bestInterpretationForDictationResult:(id)arg0 ;
+(id)dictionaryWithTextEntriesRemoved:(id)arg0 ;
+(id)interpretation:(id)arg0 forPhraseIndex:(NSUInteger)arg1 isShiftLocked:(BOOL)arg2 autocapitalizationType:(NSInteger)arg3 useServerCapitalization:(BOOL)arg4 ;
+(id)removeTextIfNeeded:(id)arg0 ;
+(id)removeTextIfNeeded:(id)arg0 metadata:(id)arg1 ;
+(id)serializedDictationPhrases:(id)arg0 ;
+(id)serializedInterpretationFromTokens:(id)arg0 transform:(struct __CFString *)arg1 ;
+(id)serializedInterpretationFromTokens:(id)arg0 transform:(struct __CFString *)arg1 autocapitalization:(NSInteger)arg2 capitalization:(NSUInteger)arg3 ;
+(id)serializedInterpretationFromTokens:(id)arg0 transform:(struct __CFString *)arg1 capitalization:(NSUInteger)arg2 ;
+(id)sharedInstance;
+(id)slsDictationLanguages;
+(id)streamingHypothesisForPhrases:(id)arg0 ;
+(id)stringForState:(int)arg0 ;
+(id)stringForViewMode:(int)arg0 ;
+(id)textRelatedMetadataKeys;
+(id)whitelistedDictationDictionariesFromMetadataDictionaries:(id)arg0 ;
+(id)whitelistedDictationDictionaryFromMetadata:(id)arg0 ;
+(id)whitelistedDictationMetadataKeys;
+(int)UIDictationStartStopReasonToInstrumentationDictationEndPointType:(NSUInteger)arg0 ;
+(int)UIDictationStartStopReasonToInstrumentationInvocationSourceType:(NSUInteger)arg0 ;
+(int)viewMode;
+(void)applicationDidBecomeActive;
+(void)applicationDidEnterBackgroundNotification;
+(void)applicationWillResignActive;
+(void)didBeginEditingInTextView:(id)arg0 ;
+(void)instrumentationDictationAlternativeSelectedWithInstrumentationContext:(id)arg0 originalText:(id)arg1 replacementText:(id)arg2 replacementIndex:(NSUInteger)arg3 alternativesAvailableCount:(NSUInteger)arg4 dictationLanguage:(id)arg5 ;
+(void)instrumentationDictationAlternativesViewedWithInstrumentationContext:(id)arg0 alternatives:(id)arg1 dictationLanguage:(id)arg2 ;
+(void)keyboardDidUpdateOnScreenStatus;
+(void)keyboardWillChangeFromDelegate:(id)arg0 toDelegate:(id)arg1 ;
+(void)logCorrectionStatisticsForDelegate:(id)arg0 reason:(NSUInteger)arg1 ;
+(void)logDictationString:(id)arg0 ;
+(void)onDidBecomeActive;
+(void)onWillResignActive;
// +(void)performOperations:(id)arg0 keyboardShifted:(unk)arg1  ;
+(void)poppedLastStreamingOperation;
+(void)remoteMicrophoneCapabilityChanged;
+(void)siriPreferencesChanged;
+(void)updateLandingView;
+(void)viewServiceDidBecomeActive;
+(void)viewServiceWillResignActive;
-(BOOL)_allowsMicsInSearchFieldForLanguageIdentifiers:(id)arg0 ;
-(BOOL)_resolvedIsDictationPossible;
-(BOOL)_shouldDeleteBackwardInInputDelegate:(id)arg0 ;
-(BOOL)_shouldInsertText:(id)arg0 inInputDelegate:(id)arg1 ;
-(BOOL)_systemLanguageSupportsDictation;
-(BOOL)currentViewModeSupportsDictationMics;
-(BOOL)dataSharingDecided;
-(BOOL)dictationConnection:(id)arg0 filterState:(id)arg1 shouldCheckpointAtToken:(id)arg2 ;
-(BOOL)dictationDisabledDueToTelephonyActivity;
-(BOOL)dictationEnabled;
-(BOOL)dictationIsModifyingText;
-(BOOL)dictationSearchFieldUIEnabled;
-(BOOL)dictationSearchFieldUISupportsTraitCollection:(id)arg0 ;
-(BOOL)isFallingBackToMonolingualDictation;
-(BOOL)isIgnoringDocumentChanges;
-(BOOL)isRecievingResults;
-(BOOL)remoteHasMicrophone;
-(BOOL)shouldOverrideManualEndpointing;
-(BOOL)shouldPresentOptInAlert;
-(BOOL)shouldUseDictationSearchFieldBehavior;
-(BOOL)smartLanguageSelectionOverridden;
-(BOOL)supportsDictationLanguage:(id)arg0 error:(*id)arg1 ;
-(BOOL)supportsInputMode:(id)arg0 error:(*id)arg1 ;
-(NSUInteger)specificReasonTypeFromApplicationDuringDictation;
-(float)audioLevel;
-(float)maxRecordingLength;
-(id)_assistantCompatibleLanguageCodeForInputMode:(id)arg0 ;
-(id)_containingSearchBarForView:(id)arg0 ;
-(id)_currentLanguageForOfflineDictationMetrics;
-(id)_getBestHypothesisRangeGivenHintRange:(id)arg0 inputDelegate:(id)arg1 hypothesisRange:(struct _NSRange *)arg2 documentTextInRange:(*id)arg3 ;
-(id)_hypothesisRangeFromSelectionRange:(id)arg0 inputDelegate:(id)arg1 ;
-(id)_rangeByExtendingRange:(id)arg0 backward:(NSInteger)arg1 forward:(NSInteger)arg2 inputDelegate:(id)arg3 ;
-(id)connectionForStatisticsLogging;
-(id)dictationBlockForToken:(SEL)arg0 ;
-(id)dictationConnection;
-(id)dictationConnection:(id)arg0 willFilterTokensWithLanguageModel:(id)arg1 forFinalize:(BOOL)arg2 ;
-(id)dictationUIState;
-(id)fieldIdentifierInputDelegate:(id)arg0 ;
-(id)init;
-(id)language;
-(id)languageCodeForAssistantLanguageCode:(id)arg0 ;
-(id)postfixTextForInputDelegate:(id)arg0 ;
-(id)prefixTextForInputDelegate:(id)arg0 ;
-(id)resultWithTrailingSpace:(id)arg0 ;
-(id)selectedTextForInputDelegate:(id)arg0 ;
-(id)streamingOperations;
-(int)state;
-(struct _NSRange )_getRangeOfString:(id)arg0 inDocumentText:(id)arg1 ;
-(struct __CFString *)resultTransformForLanguageModel:(id)arg0 ;
-(void)_beginEnableDictationPrompt;
-(void)_beginOfflineMetricsSession;
-(void)_clearExistingText;
-(void)_completeStartDictationWithContinuation:(id)arg0 ;
-(void)_createDictationPresenterWindowIfNecessary;
-(void)_deleteBackwardIntoText;
-(void)_displayLinkFired:(id)arg0 ;
-(void)_displaySecureContentsAsPlainText:(BOOL)arg0 afterDelay:(CGFloat)arg1 ;
-(void)_endEnableDictationPromptAnimated:(BOOL)arg0 ;
-(void)_endOfflineMetricsSession;
-(void)_handleDataSharingSheetDecision;
-(void)_handlePrivacySheetDismissal;
-(void)_markOfflineDictationInputMetricEvent;
-(void)_presentAlertForDictationInputModeOfType:(NSInteger)arg0 completionHandler:(id)arg1 ;
-(void)_presentDataSharingOptInAlertWithCompletion:(id)arg0 ;
-(void)_presentOptInAlertWithCompletion:(id)arg0 ;
-(void)_presentPrivacySheetForType:(NSInteger)arg0 completion:(id)arg1 ;
-(void)_restartDictation;
-(void)_runFinalizeOperation;
-(void)_runFinalizeOperation:(BOOL)arg0 ;
-(void)_setFinalResultHandler:(id)arg0 ;
-(void)_setupHypothesisAsFinalResults;
-(void)_startDictation;
-(void)_startStreamingAnimations;
-(void)_stopStreamingAnimation;
-(void)_touchPhaseChangedForTouch:(id)arg0 ;
-(void)_updateFromSelectedTextRange:(id)arg0 withNewHypothesis:(id)arg1 ;
-(void)cancelDictation;
-(void)cancelDictationForTextStoreChangesInResponder:(id)arg0 ;
-(void)cancelRecordingLimitTimer;
-(void)clearTextFieldPlaceholder;
-(void)completeStartConnection;
-(void)completeStartConnectionForFileAtURL:(id)arg0 forInputModeIdentifier:(id)arg1 ;
-(void)dealloc;
-(void)dictationConnection:(id)arg0 didBeginLocalRecognitionWithModelInfo:(id)arg1 ;
-(void)dictationConnection:(id)arg0 didDetectLanguage:(id)arg1 ;
-(void)dictationConnection:(id)arg0 didFailRecognitionWithError:(id)arg1 ;
-(void)dictationConnection:(id)arg0 didFailRecordingWithError:(id)arg1 ;
-(void)dictationConnection:(id)arg0 didFilterTokensWithFilterState:(id)arg1 forFinalize:(BOOL)arg2 ;
-(void)dictationConnection:(id)arg0 didReceiveSearchResults:(id)arg1 recognizedText:(id)arg2 stable:(BOOL)arg3 final:(BOOL)arg4 ;
-(void)dictationConnection:(id)arg0 didStartRecordingWithOptions:(id)arg1 ;
-(void)dictationConnection:(id)arg0 filterState:(id)arg1 processFilteredToken:(id)arg2 forFinalize:(BOOL)arg3 ;
-(void)dictationConnection:(id)arg0 finalizePhrases:(id)arg1 languageModel:(id)arg2 correctionIdentifier:(id)arg3 secureInput:(BOOL)arg4 ;
-(void)dictationConnection:(id)arg0 receivedInterpretation:(id)arg1 languageModel:(id)arg2 secureInput:(BOOL)arg3 ;
-(void)dictationConnection:(id)arg0 updateOptions:(id)arg1 ;
-(void)dictationConnectionDidCancel:(id)arg0 ;
-(void)dictationConnectionDidCancelIncompatibleLocalRecognizer:(id)arg0 ;
-(void)dictationConnectionDidCancelRecording:(id)arg0 ;
-(void)dictationConnectionDidEndRecording:(id)arg0 ;
-(void)dictationConnectionDidFinish:(id)arg0 ;
-(void)dictationConnectionDidStartRecording:(id)arg0 ;
-(void)dictationConnectionWillStartRecording:(id)arg0 ;
-(void)dictationConnnectionDidChangeAvailability:(id)arg0 ;
-(void)dictationPrivacySheetControllerDidFinish:(id)arg0 ;
-(void)dictationShortCutKey:(id)arg0 ;
-(void)didShowAlternatives:(id)arg0 correctionIdentifier:(id)arg1 interactionIdentifier:(id)arg2 instrumentationContext:(id)arg3 dictationLanguage:(id)arg4 ;
-(void)dismissDictationView:(id)arg0 ;
-(void)dismissSoftwareKeyboardIfNeeded;
-(void)endSessionIfNecessaryForTransitionFromState:(int)arg0 toState:(int)arg1 ;
-(void)endSmartLanguageSelectionOverride;
-(void)errorAnimationDidFinish;
-(void)finalizeDictationRecognitionWithPhrases:(id)arg0 languageModel:(id)arg1 correctionIdentifier:(id)arg2 secureInput:(BOOL)arg3 finalResult:(BOOL)arg4 ;
-(void)finishDictationRecognitionWithPhrases:(id)arg0 languageModel:(id)arg1 correctionIdentifier:(id)arg2 secureInput:(BOOL)arg3 ;
-(void)forceDictationReturnToKeyboardInputMode;
-(void)handleHardwareKeyboardGesture;
-(void)insertSerializedDictationResult:(id)arg0 withCorrectionIdentifier:(id)arg1 ;
-(void)instrumentationDictationContextEmitInstrumentation;
-(void)instrumentationDictationTranscriptionMetadataEmitInstrumentationWithDictationResult:(id)arg0 ;
-(void)keyboardDidHide:(id)arg0 ;
-(void)keyboardInputModeChanged:(id)arg0 ;
-(void)keyboardWillHide:(id)arg0 ;
-(void)logAlternativeSelected:(id)arg0 correctionIdentifier:(id)arg1 interactionIdentifier:(id)arg2 ;
-(void)logDidAcceptDictationResult:(id)arg0 reasonType:(NSUInteger)arg1 ;
-(void)logDidAcceptReplacement:(id)arg0 replacementLanguageCode:(id)arg1 originalText:(id)arg2 correctionIdentifier:(id)arg3 interactionIdentifier:(id)arg4 ;
-(void)markKeyboardDeleteMetricEvent;
-(void)markKeyboardDidReset;
-(void)markKeyboardInputMetricEvent;
-(void)optInButtonPressedForPresenter:(id)arg0 ;
-(void)optOutButtonPressedForPresenter:(id)arg0 ;
-(void)overrideSmartLanguageSelection:(id)arg0 ;
-(void)performIgnoringDocumentChanges:(id)arg0 ;
-(void)preferencesChanged:(id)arg0 ;
-(void)preheatIfNecessary;
-(void)prepareDoubleTapShortcutGesture:(id)arg0 ;
-(void)prepareStartDictationKeyboardGestures;
-(void)prepareStartDictationKeyboardGesturesForDelegate:(id)arg0 ;
-(void)prepareVoiceCommandSingleTapGesture:(id)arg0 ;
-(void)presentAlertOfType:(NSInteger)arg0 withCompletion:(id)arg1 ;
-(void)presentationControllerDidDismiss:(id)arg0 ;
-(void)releaseConnection;
-(void)releaseConnectionAfterDictationRequest;
-(void)releaseConnectionAfterStatisticsLogging;
-(void)removeStartDictationKeyboardGestures;
-(void)resetIdleTimer;
-(void)restartDictationForTypeAndTalk;
-(void)restoreTextFieldPlaceholder;
-(void)sendButtonPressedInMessages:(id)arg0 ;
-(void)setDictationInfoOnScreenNotifyKey:(BOOL)arg0 ;
-(void)setDictationInputMode:(id)arg0 ;
-(void)setLanguage:(id)arg0 ;
-(void)setState:(int)arg0 ;
-(void)setupForDictationStart;
-(void)setupForStreamingDictationStart;
-(void)setupToInsertResultForNewHypothesis:(id)arg0 ;
-(void)showSoftwareKeyboardIfNeeded;
-(void)startConnection;
-(void)startDictation;
-(void)startDictationForFileAtURL:(id)arg0 forInputModeIdentifier:(id)arg1 ;
-(void)startHelpMessageDisplay;
-(void)startRecordingLimitTimer;
-(void)stopAndCancelDictationIfNeededWithReasonType:(NSUInteger)arg0 ;
-(void)stopAndCancelDictationWithReasonType:(NSUInteger)arg0 ;
-(void)stopDictation;
-(void)stopDictation:(BOOL)arg0 ;
-(void)stopDictationAndResignFirstResponder;
-(void)stopDictationByTimer;
-(void)stopDictationIgnoreFinalizePhrases;
-(void)stopHelpMessageDisplay;
-(void)stopIdleTimerResetTimer;
-(void)switchToDictationInputMode;
-(void)switchToDictationInputModeWithOptions:(id)arg0 ;
-(void)switchToDictationInputModeWithTouch:(id)arg0 ;
-(void)switchToDictationInputModeWithTouch:(id)arg0 options:(id)arg1 ;
-(void)switchToDictationInputModeWithTouch:(id)arg0 withKeyboardInputMode:(id)arg1 options:(id)arg2 ;
-(void)switchToDictationLanguage:(id)arg0 ;
-(void)updateDoubleTapShortcutWithPreference:(NSInteger)arg0 ;
-(void)voiceCommandSingleTapKey:(id)arg0 ;


@end


#endif