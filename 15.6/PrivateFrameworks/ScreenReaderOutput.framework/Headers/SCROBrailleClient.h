// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SCROBRAILLECLIENT_H
#define SCROBRAILLECLIENT_H

@class NSLock, NSMutableAttributedString, NSData, SCRCTargetSelectorTimer;

#import <Foundation/Foundation.h>

#import "SCROConnection.h"

@interface SCROBrailleClient : NSObject {
    SCROConnection *_connection;
    NSLock *_lock;
    id *_delegate;
    NSMutableAttributedString *_mainStringPending;
    NSMutableAttributedString *_mainStringCache;
    NSData *_aggregatedStatusPending;
    NSData *_aggregatedStatusCache;
    SCRCTargetSelectorTimer *_deathTimer;
    BOOL _isReady;
    BOOL _needsDisplay;
    BOOL _keepConnectionAlive;
    BOOL _delegateWantsKeypresses;
    BOOL _delegateWantsReplaceTextRange;
    BOOL _wantsDisconnectMessage;
    BOOL _wantsReconnectMessage;
    BOOL _wantsDisplayConfigurationChanged;
    BOOL _displayDescriptorCallbackEnabled;
    NSData *_brailleMapCache;
}


@property (nonatomic) CGFloat autoAdvanceDuration;
@property (nonatomic) BOOL autoAdvanceEnabled;
@property (nonatomic) int inputContractionMode;
@property (nonatomic) BOOL inputEightDotBraille;
@property (nonatomic) BOOL wordWrapEnabled;


+(id)statusAttributeDotText;
+(void)logBrailleRequests:(BOOL)arg0 ;
-(BOOL)alwaysUsesNemethCodeForTechnicalText;
-(BOOL)automaticBrailleTranslationEnabled;
-(BOOL)displayDescriptorCallbackEnabled;
-(BOOL)isConfigured;
-(BOOL)isConnected;
-(BOOL)keepConnectionAlive;
-(BOOL)needsDisplay;
-(BOOL)showDotsSevenAndEight;
-(BOOL)showEightDotBraille;
-(Class)connectionClass;
-(NSInteger)masterStatusCellIndex;
-(NSInteger)tokenForRouterIndex:(NSInteger)arg0 location:(*NSInteger)arg1 appToken:(*id)arg2 forDisplayWithToken:(int)arg3 ;
-(id)_getWorkingString;
-(id)_lazyConnection;
-(id)aggregatedStatus;
-(id)delegate;
-(id)driverConfiguration;
-(id)init;
-(id)initWithDelegate:(id)arg0 ;
-(id)mainAttributedString;
-(id)pendingAggregatedStatus;
-(id)pendingMainAttributedString;
-(id)tokenArray;
-(int)contractionMode;
-(int)displayMode;
-(int)virtualStatusAlignment;
-(struct _NSRange )rangeOfCellRepresentingCharacterAtIndex:(NSInteger)arg0 ;
-(unsigned int)persistentKeyModifiers;
-(void)_deathTimerHandler;
-(void)_deviceConnected:(id)arg0 ;
-(void)_refreshAfterReconnect;
-(void)_registerDelegate;
-(void)_setupDeviceDetection;
-(void)dealloc;
-(void)display;
-(void)displayIfNeeded;
-(void)exitCurrentDisplayMode;
-(void)handleCallback:(id)arg0 ;
-(void)loadDisplayWithBluetoothDeviceAddress:(id)arg0 ;
-(void)loadTactileGraphicsDisplayWithBLEIdentifier:(id)arg0 ;
-(void)panDisplayLeft:(int)arg0 ;
-(void)panDisplayRight:(int)arg0 ;
-(void)removeDisplayWithBluetoothDeviceAddress:(id)arg0 ;
-(void)resetEditingManager;
-(void)selectAllForToken:(NSInteger)arg0 ;
-(void)setAggregatedStatus:(id)arg0 ;
-(void)setAlertString:(id)arg0 timeout:(CGFloat)arg1 priority:(int)arg2 ;
-(void)setAlwaysUsesNemethCodeForTechnicalText:(BOOL)arg0 ;
-(void)setAnnouncementString:(id)arg0 ;
-(void)setAnnouncementsDisplayMode;
-(void)setAutomaticBrailleTranslationEnabled:(BOOL)arg0 ;
-(void)setBrailleChordDebounceTimeout:(CGFloat)arg0 ;
-(void)setBrailleMap:(id)arg0 ;
-(void)setContractionMode:(int)arg0 ;
-(void)setDelegate:(id)arg0 ;
-(void)setDisplayDescriptorCallbackEnabled:(BOOL)arg0 ;
-(void)setExpandedStatusDisplayModeWithStatus:(id)arg0 ;
-(void)setFocused:(BOOL)arg0 forToken:(NSInteger)arg1 ;
-(void)setKeepConnectionAlive:(BOOL)arg0 ;
-(void)setLastUserInteractionTime:(CGFloat)arg0 ;
-(void)setMainAttributedString:(id)arg0 ;
-(void)setMasterStatusCellIndex:(NSInteger)arg0 ;
-(void)setPersistentKeyModifiers:(unsigned int)arg0 ;
-(void)setPrepareToMemorizeNextKey:(BOOL)arg0 immediate:(BOOL)arg1 forDisplayWithToken:(int)arg2 ;
-(void)setPrimaryBrailleDisplay:(int)arg0 ;
-(void)setSelection:(struct _NSRange )arg0 forToken:(NSInteger)arg1 ;
-(void)setShowDotsSevenAndEight:(BOOL)arg0 ;
-(void)setShowEightDotBraille:(BOOL)arg0 ;
-(void)setSingleLetterInputIsOn:(BOOL)arg0 ;
-(void)setTableIdentifier:(id)arg0 ;
-(void)setTactileGraphicsImageData:(id)arg0 ;
-(void)setTextSearchModeIsOn:(BOOL)arg0 ;
-(void)setVirtualStatusAlignment:(int)arg0 ;
-(void)showNextAnnouncement;
-(void)showPreviousAnnouncement;
-(void)simulateKeypress:(id)arg0 ;
-(void)translateBrailleToClipboard;
-(void)unselectAllForToken:(NSInteger)arg0 ;


@end


#endif