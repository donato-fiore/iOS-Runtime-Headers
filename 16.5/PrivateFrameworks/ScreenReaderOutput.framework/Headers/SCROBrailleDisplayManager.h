// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SCROBRAILLEDISPLAYMANAGER_H
#define SCROBRAILLEDISPLAYMANAGER_H

@class NSMutableDictionary, NSMutableSet, NSAttributedString, NSData, NSMutableArray, NSString;
@protocol SCROBrailleDisplayDelegate, OS_dispatch_queue, SCROSBrailleDisplayManagerDelegate, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "SCROBrailleDisplay.h"
#import "SCROBrailleFormatter.h"
#import "SCROBrailleDisplayHistory.h"
#import "SCROBrailleDisplayManagerStatus.h"
#import "SCROBrailleDisplayManagedQueue.h"

@interface SCROBrailleDisplayManager : NSObject <SCROBrailleDisplayDelegate>

 {
    NSObject<OS_dispatch_queue> *_eventQueue;
    SCROBrailleDisplay *_bluetoothBrailleDisplay;
    SCROBrailleDisplay *_stealthBrailleDisplay;
    NSMutableDictionary *_detectedIOElementsDict;
    SCROBrailleFormatter *_currentBrailleFormatter;
    NSMutableSet *_loadedIOElements;
    *__CFDictionary _displayConfigurationDict;
    id<SCROSBrailleDisplayManagerDelegate> *_delegate;
    BOOL _showDotsSevenAndEight;
    BOOL _lineDescriptorDisplayCallbackEnabled;
    int _outputContractionMode;
    int _inputContractionMode;
    BOOL _outputShowEightDot;
    BOOL _inputShowEightDot;
    BOOL _shouldBatchUpdates;
    BOOL _automaticBrailleTranslation;
    BOOL _wordWrapEnabled;
    BOOL _panWithTextCursorEnabled;
    BOOL _autoAdvanceEnabled;
    CGFloat _autoAdvanceDuration;
    unsigned int _persistentKeyModifiers;
    NSInteger _uiStringCachedLineOffset;
    NSAttributedString *_uiEditingCachedString;
    NSData *_imageData;
    NSMutableArray *_displayModeStack;
    SCROBrailleDisplayHistory *_history;
    NSAttributedString *_mainString;
    NSAttributedString *_lineString;
    NSAttributedString *_statusString;
    SCROBrailleDisplayManagerStatus *_status;
    NSObject<OS_dispatch_source> *_alertTimer;
    CGFloat _alertTimeout;
    int _alertPriority;
    BOOL _isValid;
    int _inputAccessMode;
    NSAttributedString *_blankUIString;
}


@property (nonatomic) CGFloat autoAdvanceDuration;
@property (nonatomic) BOOL autoAdvanceEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SCROSBrailleDisplayManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *eventHandled; // ivar: _eventHandled
@property (readonly) NSUInteger hash;
@property (nonatomic) int inputContractionMode;
@property (nonatomic) BOOL inputEightDotBraille;
@property (nonatomic) CGFloat lastUserInteractionTime; // ivar: _lastUserInteractionTime
@property (readonly, nonatomic) SCROBrailleDisplayManagedQueue *managedDisplayQueue; // ivar: _managedDisplayQueue
@property (nonatomic) BOOL panWithTextCursorEnabled;
@property (nonatomic) unsigned int persistentKeyModifiers;
@property (readonly) Class superclass;
@property (nonatomic) BOOL wordWrapEnabled;


+(void)initialize;
-(BOOL)_eventQueue_addDetectedIOElement:(id)arg0 withDriverIdentifier:(id)arg1 ;
-(BOOL)alwaysUsesNemethCodeForTechnicalText;
-(BOOL)automaticBrailleTranslation;
-(BOOL)hasActiveDisplays;
-(BOOL)isConfigured;
-(BOOL)isValid;
-(BOOL)lineDescriptorDisplayCallbackEnabled;
-(BOOL)showDotsSevenAndEight;
-(BOOL)showEightDotBraille;
-(NSInteger)masterStatusCellIndex;
-(NSInteger)tokenForRouterIndex:(NSInteger)arg0 location:(*NSInteger)arg1 appToken:(*id)arg2 forDisplayWithToken:(int)arg3 ;
-(id)_displayWithIOElement:(id)arg0 driverIdentifier:(id)arg1 delegate:(id)arg2 ;
-(id)_eventQueue_activeDisplayForToken:(int)arg0 ;
-(id)_eventQueue_cachedMainStringForDisplayMode:(int)arg0 ;
-(id)_eventQueue_driverConfiguration;
-(id)_eventQueue_mainAttributedString;
-(id)aggregatedStatus;
-(id)brailleInputManager;
-(id)driverConfiguration;
-(id)init;
-(id)mainAttributedString;
-(id)newBrailleDisplayCommandDispatcher;
-(int)contractionMode;
-(int)displayInputAccessMode;
-(int)displayMode;
-(int)virtualStatusAlignment;
-(struct _NSRange )rangeOfBrailleCellRepresentingCharacterAtIndex:(NSUInteger)arg0 ;
-(void)_addDetectedIOElement:(id)arg0 withDriverIdentifier:(id)arg1 ;
-(void)_blankOutDisplaysInQueue:(id)arg0 ;
-(void)_deviceConnectedHandler:(id)arg0 ;
-(void)_disableAutoDetect;
-(void)_enableAutoDetect;
-(void)_enumerateActiveDisplays:(id)arg0 ;
-(void)_eventQueue_alertTimeoutHandler;
-(void)_eventQueue_brailleDisplay:(id)arg0 isSleeping:(BOOL)arg1 ;
-(void)_eventQueue_brailleDisplayDriverDidLoad:(id)arg0 ;
-(void)_eventQueue_brailleDisplayDriverFailedToLoad:(id)arg0 ;
-(void)_eventQueue_brailleDriverDisconnected:(id)arg0 ;
-(void)_eventQueue_doSetDisplayMode:(int)arg0 ;
-(void)_eventQueue_exitCurrentDisplayMode;
-(void)_eventQueue_fireAlertTimeoutHandler;
-(void)_eventQueue_invalidate;
-(void)_eventQueue_loadNextDriverForIOElement:(id)arg0 ;
-(void)_eventQueue_loadStealthDisplay;
-(void)_eventQueue_panDisplay:(NSInteger)arg0 token:(int)arg1 ;
-(void)_eventQueue_popDisplayModeStack;
-(void)_eventQueue_prepareToMemorizeNextKey:(BOOL)arg0 immediately:(BOOL)arg1 forDisplayWithToken:(int)arg2 ;
-(void)_eventQueue_refreshEightDotEnabledOnDisplays;
-(void)_eventQueue_resetAlertTimer;
-(void)_eventQueue_resetEditingManager;
-(void)_eventQueue_setAggregatedStatus:(id)arg0 ;
-(void)_eventQueue_setAlwaysUsesNemethCodeForTechnicalText:(BOOL)arg0 ;
-(void)_eventQueue_setAutomaticBrailleTranslationEnabled:(BOOL)arg0 ;
-(void)_eventQueue_setBatchUpdates:(BOOL)arg0 ;
-(void)_eventQueue_setBrailleKeyDebounceTimeout:(CGFloat)arg0 ;
-(void)_eventQueue_setContractionMode:(int)arg0 ;
-(void)_eventQueue_setDisplayInputAccessMode:(int)arg0 ;
-(void)_eventQueue_setDisplayMode:(int)arg0 ;
-(void)_eventQueue_setLineDescriptorCallbackEnabled:(BOOL)arg0 ;
-(void)_eventQueue_setMainAttributedString:(id)arg0 shouldDisplay:(BOOL)arg1 forceUpdate:(BOOL)arg2 ;
-(void)_eventQueue_setMasterStatusCellIndex:(NSInteger)arg0 ;
-(void)_eventQueue_setPrimaryDisplay:(int)arg0 ;
-(void)_eventQueue_setShowEightDotBraille:(BOOL)arg0 ;
-(void)_eventQueue_setSingleLetterInputIsOn:(BOOL)arg0 ;
-(void)_eventQueue_setTableIdentifier:(id)arg0 ;
-(void)_eventQueue_setTactileGraphicsImageData:(id)arg0 ;
-(void)_eventQueue_setTextSearchModeIsOn:(BOOL)arg0 ;
-(void)_eventQueue_setVirtualStatusAlignment:(int)arg0 ;
-(void)_eventQueue_showDotsSevenAndEight:(BOOL)arg0 ;
-(void)_eventQueue_showNextAnnouncement:(BOOL)arg0 ;
-(void)_eventQueue_simulateKeypress:(id)arg0 ;
-(void)_eventQueue_stop;
-(void)_eventQueue_stopAlertTimer;
-(void)_eventQueue_translateBrailleToClipboard;
-(void)_eventQueue_unloadStealthDisplay;
-(void)_loadNextDriverForIOElement:(id)arg0 ;
-(void)_loadStealthDisplay;
-(void)_mainQueue_invalidate;
-(void)_refreshEightDotEnabledOnDisplays;
-(void)_resetBluetoothReconnectionTimer;
-(void)_saveBluetoothDisplayConfiguration:(id)arg0 ;
-(void)_startAutodetectingTactileGraphics;
-(void)_unloadStealthDisplay;
-(void)beginUpdates;
-(void)brailleDidStartEditingWithDisplay:(id)arg0 ;
-(void)brailleDisplay:(id)arg0 copyStringToClipboard:(id)arg1 ;
-(void)brailleDisplay:(id)arg0 deletedUntranslatedText:(id)arg1 speakLiterally:(BOOL)arg2 ;
-(void)brailleDisplay:(id)arg0 didDisplay:(id)arg1 ;
-(void)brailleDisplay:(id)arg0 didMoveSelection:(NSUInteger)arg1 ;
-(void)brailleDisplay:(id)arg0 didPanLeft:(id)arg1 elementToken:(id)arg2 appToken:(id)arg3 lineOffset:(id)arg4 ;
-(void)brailleDisplay:(id)arg0 didPanRight:(id)arg1 elementToken:(id)arg2 appToken:(id)arg3 lineOffset:(id)arg4 ;
-(void)brailleDisplay:(id)arg0 didReplaceRange:(struct _NSRange )arg1 withString:(id)arg2 cursor:(NSUInteger)arg3 ;
-(void)brailleDisplay:(id)arg0 driverDidLoad:(BOOL)arg1 ;
-(void)brailleDisplay:(id)arg0 insertedUntranslatedText:(id)arg1 speakLiterally:(BOOL)arg2 ;
-(void)brailleDisplay:(id)arg0 isSleeping:(BOOL)arg1 ;
-(void)brailleDisplay:(id)arg0 memorizedKey:(id)arg1 ;
-(void)brailleDisplay:(id)arg0 pressedKeys:(id)arg1 ;
-(void)brailleDisplay:(id)arg0 willMemorizeKey:(id)arg1 ;
-(void)brailleDisplayHadUserInteraction:(id)arg0 ;
-(void)brailleDriverDisconnected:(id)arg0 ;
-(void)clearTimeoutAlert;
-(void)configurationChangedForBrailleDisplay:(id)arg0 ;
-(void)configureTableWithIdentifier:(id)arg0 ;
-(void)endUpdates;
-(void)exitCurrentDisplayMode;
-(void)invalidate;
-(void)loadBLEDriverWithIdentifier:(id)arg0 ;
-(void)loadBluetoothDriverWithAddress:(id)arg0 ;
-(void)panDisplayBeginning:(int)arg0 ;
-(void)panDisplayEnd:(int)arg0 ;
-(void)panDisplayLeft:(int)arg0 ;
-(void)panDisplayRight:(int)arg0 ;
-(void)playBorderHitSoundForBrailleDisplay:(id)arg0 ;
-(void)playCommandNotSupportedSoundForBrailleDisplay:(id)arg0 ;
-(void)removeBluetoothDriverWithAddress:(id)arg0 ;
-(void)resetEditingManager;
-(void)setAggregatedStatus:(id)arg0 ;
-(void)setAlwaysUsesNemethCodeForTechnicalText:(BOOL)arg0 ;
-(void)setAnnouncementsDisplayMode;
-(void)setAutomaticBrailleTranslationEnabled:(BOOL)arg0 ;
-(void)setBrailleKeyDebounceTimeout:(CGFloat)arg0 ;
-(void)setContractionMode:(int)arg0 ;
-(void)setDisplayInputAccessMode:(int)arg0 ;
-(void)setLineDescriptorDisplayCallbackEnabled:(BOOL)arg0 ;
-(void)setMainAttributedString:(id)arg0 ;
-(void)setMainAttributedString:(id)arg0 forceUpdate:(BOOL)arg1 ;
-(void)setMasterStatusCellIndex:(NSInteger)arg0 ;
-(void)setPrepareToMemorizeNextKey:(BOOL)arg0 immediate:(BOOL)arg1 forDisplayWithToken:(int)arg2 ;
-(void)setPrimaryBrailleDisplay:(int)arg0 ;
-(void)setShowDotsSevenAndEight:(BOOL)arg0 ;
-(void)setShowEightDotBraille:(BOOL)arg0 ;
-(void)setSingleLetterInputIsOn:(BOOL)arg0 ;
-(void)setTactileGraphicsImageData:(id)arg0 ;
-(void)setTextSearchModeIsOn:(BOOL)arg0 ;
-(void)setUIDisplayMode;
-(void)setVirtualStatusAlignment:(int)arg0 ;
-(void)showNextAnnouncement;
-(void)showPreviousAnnouncement;
-(void)simulateKeypress:(id)arg0 ;
-(void)tokenizeString:(id)arg0 intoFormatter:(id)arg1 selection:(struct _NSRange *)arg2 ;
-(void)translateBrailleToClipboard;


@end


#endif