// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SCROBRAILLEDISPLAY_H
#define SCROBRAILLEDISPLAY_H

@class NSLock, NSString, NSMutableArray, NSTimer, NSAttributedString;
@protocol SCROBrailleDisplayCommandDispatcherDelegate, SCROBrailleDriverDelegate, BRLTBrailleStateManagerDelegate, SCROBrailleDisplayDelegate, SCROBrailleDisplayCommandDispatcherProtocol, SCROBrailleDriverProtocol, SCROIOElementProtocol;

#import <Foundation/Foundation.h>

#import "SCROBrailleLine.h"
#import "SCROBrailleDisplayStatus.h"
#import "SCROBrailleEventDispatcher.h"
#import "SCROBrailleDisplayInput.h"

@interface SCROBrailleDisplay : NSObject <SCROBrailleDisplayCommandDispatcherDelegate, SCROBrailleDriverDelegate, BRLTBrailleStateManagerDelegate>

 {
    NSLock *_contentLock;
    id<SCROBrailleDisplayDelegate> *_delegate;
    id<SCROBrailleDisplayCommandDispatcherProtocol> *_commandDispatcher;
    id<SCROBrailleDriverProtocol> *_brailleDriver;
    id<SCROIOElementProtocol> *_ioElement;
    SCROBrailleLine *_brailleLine;
    BOOL _shouldBatchUpdates;
    BOOL _needsUpdating;
    BOOL _wordWrapEnabled;
    BOOL _autoAdvanceEnabled;
    NSString *_driverIdentifier;
    NSString *_driverModelIdentifier;
    NSInteger _mainSize;
    NSInteger _statusSize;
    BOOL _postsKeyboardEvents;
    int _brailleInputMode;
    SCROBrailleDisplayStatus *_status;
    SCROBrailleEventDispatcher *_eventDispatcher;
    *__CFRunLoop _runLoop;
    *__CFRunLoopTimer _inputEventTimer;
    *__CFRunLoopTimer _blinkerEventTimer;
    BOOL _blinkingEnabled;
    BOOL _inputEnabled;
    BOOL _inputPaused;
    CGFloat _inputPausedTime;
    NSMutableArray *_keyEventsQueue;
    SCROBrailleDisplayInput *_input;
    BOOL _isValid;
    BOOL _delegateWantsDisplayCallback;
}


@property (nonatomic) CGFloat autoAdvanceDuration; // ivar: _autoAdvanceDuration
@property (nonatomic) BOOL autoAdvanceEnabled;
@property (retain, nonatomic) NSTimer *autoAdvanceTimer; // ivar: _autoAdvanceTimer
@property (nonatomic) BOOL automaticBrailleTranslationEnabled; // ivar: _automaticBrailleTranslationEnabled
@property (nonatomic) CGFloat brailleKeyDebounceTimeout; // ivar: _brailleKeyDebounceTimeout
@property (readonly, nonatomic) NSUInteger brailleLineGenerationID;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL delegateWantsDisplayCallback;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSAttributedString *editingString;
@property (copy, nonatomic) id *eventHandled; // ivar: _eventHandled
@property (readonly, nonatomic) BOOL hasEdits;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL inputAllowed; // ivar: _inputAllowed
@property (nonatomic) int inputContractionMode; // ivar: _inputContractionMode
@property (nonatomic) BOOL inputShowEightDot; // ivar: _inputShowEightDot
@property (readonly, nonatomic) NSInteger lineOffset;
@property (nonatomic) int outputContractionMode; // ivar: _outputContractionMode
@property (nonatomic) BOOL outputShowEightDot; // ivar: _outputShowEightDot
@property (nonatomic) unsigned int persistentKeyModifiers; // ivar: _persistentKeyModifiers
@property (readonly) Class superclass;
@property (readonly, nonatomic) SCROBrailleLine *testingBrailleLine;
@property (nonatomic) BOOL wordWrapEnabled;


+(BOOL)brailleDriverClassIsValid:(Class)arg0 ;
+(id)displayWithIOElement:(id)arg0 driverIdentifier:(id)arg1 delegate:(id)arg2 ;
-(BOOL)_attemptLoad;
-(BOOL)_currentChordShouldExecuteEvenDuringTyping;
-(BOOL)_hasBrailleChord;
-(BOOL)_hasKeyChord;
-(BOOL)_hasPressedBrailleKeys;
-(BOOL)_inputPaused;
-(BOOL)_isMemorizingKeys;
-(BOOL)isLoaded;
-(BOOL)isValid;
-(NSInteger)mainSize;
-(NSInteger)masterStatusCellIndex;
-(NSInteger)statusSize;
-(NSInteger)tokenForRouterIndex:(NSInteger)arg0 location:(*NSInteger)arg1 appToken:(*id)arg2 ;
-(id)_initWithDriver:(id)arg0 driverIdentifier:(id)arg1 ioElement:(id)arg2 delegate:(id)arg3 ;
-(id)_newBrailleKeyForCurrentBrailleChord;
-(id)_newBrailleKeyForCurrentKeyChord;
-(id)_newBrailleKeyboardKeyForText:(id)arg0 modifiers:(unsigned int)arg1 ;
-(id)_statusStringWithDictionary:(id)arg0 ;
-(id)aggregatedStatus;
-(id)brailleInputManager;
-(id)configuration;
-(id)driverIdentifier;
-(id)driverModelIdentifier;
-(id)ioElement;
-(id)keyArrayForBrailleStringWithCurrentModifiers:(id)arg0 ;
-(id)lineDescriptor;
-(id)realStatus;
-(id)virtualStatus;
-(int)token;
-(int)virtualStatusAlignment;
-(void)_aggregatedStatusHandler:(id)arg0 ;
-(void)_autoAdvancePanHandler:(id)arg0 ;
-(void)_beginAutoAdvanceIfEnabled;
-(void)_blinkerEventHandler;
-(void)_bulkStatusAttributesHandler:(id)arg0 ;
-(void)_configurationChangeHandler;
-(void)_configurationChangeNotification:(id)arg0 ;
-(void)_delayedConfigurationChangeNotification;
-(void)_delayedDisplayLoad;
-(void)_delayedSleepNotification:(id)arg0 ;
-(void)_delayedUnloadNotification;
-(void)_inputEventHandler;
-(void)_panHandler:(id)arg0 ;
-(void)_pauseInput;
-(void)_processKeyEvents:(id)arg0 ;
-(void)_replaceRange:(struct _NSRange )arg0 withString:(id)arg1 cursor:(NSUInteger)arg2 ;
-(void)_runThread;
-(void)_setBatchUpdates:(id)arg0 ;
-(void)_setBrailleFormatter:(id)arg0 ;
-(void)_setBrailleFormatterHandler:(id)arg0 ;
-(void)_simulateKeypressHandler:(id)arg0 ;
-(void)_singleLetterInputHandler:(id)arg0 ;
-(void)_sleepNotification:(id)arg0 ;
-(void)_startEditingText;
-(void)_statusDisplayHandler:(id)arg0 ;
-(void)_stopMemorization;
-(void)_textSearchModeHandler:(id)arg0 ;
-(void)_translateBrailleStringAndPostEvent;
-(void)_translateBrailleToClipboard;
-(void)_unloadHandler;
-(void)_unloadNotification:(id)arg0 ;
-(void)_unpauseInput;
-(void)_unpauseInputAndProcessKeyEvents;
-(void)_updateDisplay;
-(void)beginUpdates;
-(void)brailleDisplayDeletedCharacter:(id)arg0 ;
-(void)brailleDisplayInsertedCharacter:(id)arg0 ;
-(void)brailleDisplayStringDidChange:(id)arg0 brailleSelection:(struct _NSRange )arg1 ;
-(void)brailleDriverDidReceiveInput;
-(void)dealloc;
-(void)didInsertScriptString:(id)arg0 ;
-(void)endUpdates;
-(void)handleCommandDeleteKeyEvent:(id)arg0 forDispatcher:(id)arg1 ;
-(void)handleCommandEscapeKeyEvent:(id)arg0 forDispatcher:(id)arg1 ;
-(void)handleCommandForwardDeleteKeyEvent:(id)arg0 forDispatcher:(id)arg1 ;
-(void)handleCommandMoveLeftForDispatcher:(id)arg0 ;
-(void)handleCommandMoveRightForDispatcher:(id)arg0 ;
-(void)handleCommandPanLeftForDispatcher:(id)arg0 ;
-(void)handleCommandPanRightForDispatcher:(id)arg0 ;
-(void)handleCommandReturnBrailleEvent:(id)arg0 forDispatcher:(id)arg1 ;
-(void)handleCommandRouterKeyEvent:(id)arg0 forDispatcher:(id)arg1 ;
-(void)handleCommandToggleContractedBrailleEvent:(id)arg0 forDispatcher:(id)arg1 ;
-(void)handleCommandToggleEightDotBrailleEvent:(id)arg0 forDispatcher:(id)arg1 ;
-(void)handleCommandTranslateForDispatcher:(id)arg0 ;
-(void)handleEvent:(id)arg0 ;
-(void)handleUnsupportedKeyEvent:(id)arg0 forDispatcher:(id)arg1 ;
-(void)insertTypingString:(id)arg0 ;
-(void)invalidate;
-(void)panLeft;
-(void)panRight;
-(void)replaceScriptStringRange:(struct _NSRange )arg0 withScriptString:(id)arg1 cursorLocation:(NSUInteger)arg2 ;
-(void)requestFlushLine;
-(void)scriptSelectionDidChange:(struct _NSRange )arg0 ;
-(void)setAggregatedStatus:(id)arg0 ;
-(void)setBrailleFormatter:(id)arg0 ;
-(void)setMasterStatusCellIndex:(NSInteger)arg0 ;
-(void)setPrepareToMemorizeNextKey:(BOOL)arg0 immediate:(BOOL)arg1 ;
-(void)setSingleLetterInputIsOn:(BOOL)arg0 ;
-(void)setStatusAttributesWithMasterCellIndex:(NSInteger)arg0 virtualAlignment:(int)arg1 ;
-(void)setTextSearchModeOn:(BOOL)arg0 ;
-(void)setVirtualStatusAlignment:(int)arg0 ;
-(void)simulateKeypress:(id)arg0 ;
-(void)sleep;
-(void)translateBrailleToClipboard;
-(void)unpauseInputOnBrailleFormatterChange;
-(void)unsleep;


@end


#endif