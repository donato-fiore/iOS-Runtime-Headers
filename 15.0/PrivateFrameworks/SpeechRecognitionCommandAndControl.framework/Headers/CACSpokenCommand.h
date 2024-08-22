// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CACSPOKENCOMMAND_H
#define CACSPOKENCOMMAND_H

@class NSMutableDictionary, NSString, NSDictionary, NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "CACCommandRecognizer.h"
#import "CACLanguageModel.h"

@interface CACSpokenCommand : NSObject <NSCopying>

 {
    CGFloat _exectutionStartTime;
    id *_executionCompletionBlock;
    BOOL _executionCompletionDeterminedManually;
}


@property SEL action; // ivar: _action
@property (weak) CACCommandRecognizer *commandRecognizer; // ivar: _commandRecognizer
@property (retain) NSMutableDictionary *contextEvaluation; // ivar: _contextEvaluation
@property BOOL executedIndirectly; // ivar: _executedIndirectly
@property (retain) NSString *identifier; // ivar: _identifier
@property (readonly) BOOL isCustomCommand;
@property (readonly, nonatomic) BOOL isRestrictedForAAC;
@property (readonly) CACLanguageModel *languageModel;
@property (readonly) CACLanguageModel *languageModelCache; // ivar: _languageModelCache
@property (retain) NSDictionary *recognizedParameters; // ivar: _recognizedParameters
@property (retain) NSArray *strings; // ivar: _strings


+(CGFloat)defaultDelayBetweenCommands;
+(id)attributedStringFromRecognizedCommandParameters:(id)arg0 variantOverrides:(id)arg1 ;
+(id)stringFromContextEvaluationDictionary:(id)arg0 isCustom:(BOOL)arg1 ;
+(void)displayRecognizedMessageUsingAttributedString:(id)arg0 ;
-(BOOL)_handleDisambiguationIfNeededWithBlock:(id)arg0 ;
-(BOOL)_performScrollingAction:(int)arg0 ;
-(BOOL)_showGridWithNumberOfColumnsAndRows;
-(BOOL)isCompletionDeterminedManually;
-(BOOL)isExectuting;
-(BOOL)isListening;
-(NSInteger)_textSegmentCardinalNumber;
-(id)_languageModelFromCommandDictionary:(id)arg0 tokenResolution:(id)arg1 containsBuiltInIdentifier:(*BOOL)arg2 error:(*id)arg3 ;
-(id)_nBestListFromPreviousTextInsertionForAXElement:(id)arg0 ;
-(id)_scrollAncestorsFromTopLevelElementsForAction:(int)arg0 categorizedElements:(*id)arg1 ;
-(id)_strippedPhraseStringsFromStrings:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithProperties:(id)arg0 ;
-(id)initWithSpokenCommand:(id)arg0 ;
-(struct _NSRange )_rangeFromPreviousTextInsertionForAXElement:(id)arg0 ;
-(void)_didShowOverlayWithHintIdentifier:(id)arg0 hint:(id)arg1 ;
-(void)_displayNumberedGridAtCurrentNumberOfColumnsAndRows;
-(void)_handleGestureWithBlock:(id)arg0 ;
-(void)_handleTwoPointGestureWithBlock:(id)arg0 ;
-(void)activateAppSwitcher;
-(void)activateApplePay;
-(void)activateControlCenter;
-(void)activateDock;
-(void)activateHomeButton;
-(void)activateLockButton;
-(void)activateNotificationCenter;
-(void)activateSOS;
-(void)activateScreenItem;
-(void)activateSiri;
-(void)activateSpeakScreen;
-(void)activateSpotlight;
-(void)activateSysdiagnose;
-(void)activateTripleClick;
-(void)addSelectionToVocabulary:(id)arg0 ;
-(void)alwaysShowOverlayGrid;
-(void)alwaysShowOverlayGridWithNumberOfColumns;
-(void)alwaysShowOverlayGridWithNumberOfRows;
-(void)alwaysShowOverlayNames;
-(void)alwaysShowOverlayNumbers;
-(void)applyFormat:(id)arg0 ;
-(void)armApplePay;
-(void)cancelGesture;
-(void)chooseAllOverlayItems;
-(void)chooseOverlayItem;
-(void)completeEditing:(id)arg0 ;
-(void)correctSelection:(id)arg0 ;
-(void)createCustomCommand;
-(void)decreaseVolume;
-(void)decreaseZoomLevel;
-(void)decrementItem;
-(void)delete:(id)arg0 ;
-(void)deleteAll:(id)arg0 ;
-(void)deleteCurrentCharacter:(id)arg0 ;
-(void)deleteCurrentLine:(id)arg0 ;
-(void)deleteCurrentParagraph:(id)arg0 ;
-(void)deleteCurrentSentence:(id)arg0 ;
-(void)deleteCurrentWord:(id)arg0 ;
-(void)deleteNextCharacter:(id)arg0 ;
-(void)deleteNextLine:(id)arg0 ;
-(void)deleteNextParagraph:(id)arg0 ;
-(void)deleteNextSentence:(id)arg0 ;
-(void)deleteNextWord:(id)arg0 ;
-(void)deletePreviousCharacter:(id)arg0 ;
-(void)deletePreviousLine:(id)arg0 ;
-(void)deletePreviousParagraph:(id)arg0 ;
-(void)deletePreviousSentence:(id)arg0 ;
-(void)deletePreviousWord:(id)arg0 ;
-(void)disableAssistiveTouch;
-(void)disableAttentionAwareness;
-(void)disableClassicInvertColors;
-(void)disableColorFilters;
-(void)disableCommandAndControl;
-(void)disableFullKeyboardAccess;
-(void)disableReduceWhitePoint;
-(void)disableSmartInvertColors;
-(void)disableSwitchControl;
-(void)disableVoiceOver;
-(void)disableZoom;
-(void)doubleTap;
-(void)dragFromPointToPoint;
-(void)enableAssistiveTouch;
-(void)enableAttentionAwareness;
-(void)enableClassicInvertColors;
-(void)enableColorFilters;
-(void)enableFullKeyboardAccess;
-(void)enableReduceWhitePoint;
-(void)enableSmartInvertColors;
-(void)enableSwitchControl;
-(void)enableVoiceOver;
-(void)enableZoom;
-(void)endDrag;
-(void)extendSelectionBackwardCharactersUsingCardinalNumber:(id)arg0 ;
-(void)extendSelectionBackwardLinesUsingCardinalNumber:(id)arg0 ;
-(void)extendSelectionBackwardParagraphsUsingCardinalNumber:(id)arg0 ;
-(void)extendSelectionBackwardSentencesUsingCardinalNumber:(id)arg0 ;
-(void)extendSelectionBackwardWordsUsingCardinalNumber:(id)arg0 ;
-(void)extendSelectionForwardCharactersUsingCardinalNumber:(id)arg0 ;
-(void)extendSelectionForwardLinesUsingCardinalNumber:(id)arg0 ;
-(void)extendSelectionForwardParagraphsUsingCardinalNumber:(id)arg0 ;
-(void)extendSelectionForwardSentencesUsingCardinalNumber:(id)arg0 ;
-(void)extendSelectionForwardWordsUsingCardinalNumber:(id)arg0 ;
-(void)extendSelectionToBeginning:(id)arg0 ;
-(void)extendSelectionToEnd:(id)arg0 ;
-(void)goBack;
-(void)goToEndOfDocument:(id)arg0 ;
-(void)goToEndOfLine:(id)arg0 ;
-(void)goToEndOfParagraph:(id)arg0 ;
-(void)goToEndOfSelection:(id)arg0 ;
-(void)goToEndOfSentence:(id)arg0 ;
-(void)goToEndOfWord:(id)arg0 ;
-(void)goToStartOfDocument:(id)arg0 ;
-(void)goToStartOfLine:(id)arg0 ;
-(void)goToStartOfParagraph:(id)arg0 ;
-(void)goToStartOfSelection:(id)arg0 ;
-(void)goToStartOfSentence:(id)arg0 ;
-(void)goToStartOfWord:(id)arg0 ;
-(void)handleLabeledElementFromNameOrNumberWithBlock:(id)arg0 ;
-(void)handleLabeledElementsFromTwoNumbersWithBlock:(id)arg0 ;
-(void)handleSleepListening;
-(void)handleSpokenCommand:(id)arg0 ;
-(void)handleWakeListening;
-(void)hideElementNames;
-(void)hideNumberedElements;
-(void)hideNumberedGrid;
-(void)increaseVolume;
-(void)increaseZoomLevel;
-(void)incrementItem;
-(void)insertDate:(id)arg0 ;
-(void)insertEmoji:(id)arg0 ;
-(void)lockScreen;
-(void)longPress;
-(void)maximize3DTouch;
-(void)maximizeZoomLevel;
-(void)minimizeZoomLevel;
-(void)moveBackwardCharactersUsingCardinalNumber:(id)arg0 ;
-(void)moveBackwardLinesUsingCardinalNumber:(id)arg0 ;
-(void)moveBackwardParagraphsUsingCardinalNumber:(id)arg0 ;
-(void)moveBackwardSentencesUsingCardinalNumber:(id)arg0 ;
-(void)moveBackwardWordsUsingCardinalNumber:(id)arg0 ;
-(void)moveDown:(id)arg0 ;
-(void)moveDownLinesUsingCardinalNumber:(id)arg0 ;
-(void)moveDownParagraphsUsingCardinalNumber:(id)arg0 ;
-(void)moveForwardCharactersUsingCardinalNumber:(id)arg0 ;
-(void)moveForwardLinesUsingCardinalNumber:(id)arg0 ;
-(void)moveForwardParagraphsUsingCardinalNumber:(id)arg0 ;
-(void)moveForwardSentencesUsingCardinalNumber:(id)arg0 ;
-(void)moveForwardWordsUsingCardinalNumber:(id)arg0 ;
-(void)moveLeft:(id)arg0 ;
-(void)moveLeftCharactersUsingCardinalNumber:(id)arg0 ;
-(void)moveLeftSentencesUsingCardinalNumber:(id)arg0 ;
-(void)moveLeftWordsUsingCardinalNumber:(id)arg0 ;
-(void)moveRight:(id)arg0 ;
-(void)moveRightCharactersUsingCardinalNumber:(id)arg0 ;
-(void)moveRightSentencesUsingCardinalNumber:(id)arg0 ;
-(void)moveRightWordsUsingCardinalNumber:(id)arg0 ;
-(void)moveUp:(id)arg0 ;
-(void)moveUpLinesUsingCardinalNumber:(id)arg0 ;
-(void)moveUpParagraphsUsingCardinalNumber:(id)arg0 ;
-(void)openApplication;
-(void)panDown;
-(void)panLeft;
-(void)panRight;
-(void)panUp;
-(void)panZoomDown;
-(void)panZoomLeft;
-(void)panZoomRight;
-(void)panZoomUp;
-(void)pasteboardCopy:(id)arg0 ;
-(void)pasteboardCut:(id)arg0 ;
-(void)pasteboardPaste:(id)arg0 ;
-(void)performAction;
-(void)pressAndHold;
-(void)pressOverlayItem;
-(void)reboot;
-(void)repeatPreviousCommand;
-(void)rotateLeft;
-(void)rotateRight;
-(void)rotateToLandscape;
-(void)rotateToPortrait;
-(void)scrollPageDown;
-(void)scrollPageLeft;
-(void)scrollPageRight;
-(void)scrollPageUp;
-(void)scrollToBottom;
-(void)scrollToLeftEdge;
-(void)scrollToRightEdge;
-(void)scrollToTop;
-(void)searchSpotlight;
-(void)searchWeb;
-(void)selectAll:(id)arg0 ;
-(void)selectCurrentCharacter:(id)arg0 ;
-(void)selectCurrentLine:(id)arg0 ;
-(void)selectCurrentParagraph:(id)arg0 ;
-(void)selectCurrentSentence:(id)arg0 ;
-(void)selectCurrentWord:(id)arg0 ;
-(void)selectNext:(id)arg0 ;
-(void)selectNextCharacter:(id)arg0 ;
-(void)selectNextLine:(id)arg0 ;
-(void)selectNextParagraph:(id)arg0 ;
-(void)selectNextSentence:(id)arg0 ;
-(void)selectNextWord:(id)arg0 ;
-(void)selectPhrase:(id)arg0 ;
-(void)selectPhraseThroughPhrase:(id)arg0 ;
-(void)selectPrevious:(id)arg0 ;
-(void)selectPreviousCharacter:(id)arg0 ;
-(void)selectPreviousLine:(id)arg0 ;
-(void)selectPreviousParagraph:(id)arg0 ;
-(void)selectPreviousSentence:(id)arg0 ;
-(void)selectPreviousTextInsertion:(id)arg0 ;
-(void)selectPreviousWord:(id)arg0 ;
-(void)setCompletionBlock:(id)arg0 ;
-(void)setCompletionDeterminedManually:(BOOL)arg0 ;
-(void)setExecuting:(BOOL)arg0 ;
-(void)shake;
-(void)showAccessibilityActions;
-(void)showActiveCommands;
-(void)showCommands;
-(void)showElementNames;
-(void)showGridWithNumberOfColumns;
-(void)showGridWithNumberOfRows;
-(void)showNumberedElements;
-(void)showNumberedGrid;
-(void)showVocabulary;
-(void)start3DTouch;
-(void)startCommandMode;
-(void)startDictationMode;
-(void)startDrag;
-(void)startHoldAndDrag;
-(void)startNumberMode;
-(void)startRecordingGesture;
-(void)startRecordingUserActions;
-(void)startSpellingMode;
-(void)stopRecordingGesture;
-(void)stopRecordingUserActions;
-(void)swipeDown;
-(void)swipeLeft;
-(void)swipeRight;
-(void)swipeUp;
-(void)takeScreenshot;
-(void)tap;
-(void)toggleDock;
-(void)toggleMute;
-(void)toggleRingerSwitchOff;
-(void)toggleRingerSwitchOn;
-(void)tripleClick;
-(void)twoFingerDoubleTap;
-(void)twoFingerLongPress;
-(void)twoFingerPanDown;
-(void)twoFingerPanLeft;
-(void)twoFingerPanRight;
-(void)twoFingerPanUp;
-(void)twoFingerSwipeDown;
-(void)twoFingerSwipeLeft;
-(void)twoFingerSwipeRight;
-(void)twoFingerSwipeUp;
-(void)twoFingerTap;
-(void)unselect:(id)arg0 ;
-(void)voActivate;
-(void)voMagicTap;
-(void)voReadAll;
-(void)voSelect;
-(void)voSelectFirstItem;
-(void)voSelectLastItem;
-(void)voSelectNextApp;
-(void)voSelectNextItem;
-(void)voSelectNextRotor;
-(void)voSelectNextRotorOption;
-(void)voSelectPreviousApp;
-(void)voSelectPreviousItem;
-(void)voSelectPreviousRotor;
-(void)voSelectPreviousRotorOption;
-(void)voSelectStatusBar;
-(void)voShowItemChooser;
-(void)voSpeakSummary;
-(void)voStopSpeaking;
-(void)voToggleScreenCurtain;
-(void)zoomIn;
-(void)zoomOut;


@end


#endif