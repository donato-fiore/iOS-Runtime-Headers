// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SCROBRAILLEHANDLER_H
#define SCROBRAILLEHANDLER_H

@class NSString;
@protocol SCROSBrailleDisplayManagerDelegate;


#import "SCROHandler.h"
#import "SCROBrailleDisplayManager.h"

@interface SCROBrailleHandler : SCROHandler <SCROSBrailleDisplayManagerDelegate>

 {
    SCROBrailleDisplayManager *_brailleDisplayManager;
    BOOL _wantsInputCallbacks;
    BOOL _wantsDidDisplayCallbacks;
    ? _callbacks;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithBrailleDisplayManager:(id)arg0 ;
-(int)handleGetValue:(*id)arg0 forKey:(int)arg1 withObject:(id)arg2 trusted:(BOOL)arg3 ;
-(int)handlePerformActionForKey:(int)arg0 trusted:(BOOL)arg1 ;
-(int)handleRegisterCallbackForKey:(int)arg0 trusted:(BOOL)arg1 ;
-(int)handleSetValue:(id)arg0 forKey:(int)arg1 trusted:(BOOL)arg2 ;
-(void)configurationDidChange;
-(void)handleBrailleDeletedUntranslatedText:(id)arg0 speakLiterally:(BOOL)arg1 ;
-(void)handleBrailleDidDisplay:(id)arg0 ;
-(void)handleBrailleDidPanLeft:(id)arg0 elementToken:(id)arg1 appToken:(id)arg2 lineOffset:(id)arg3 ;
-(void)handleBrailleDidPanRight:(id)arg0 elementToken:(id)arg1 appToken:(id)arg2 lineOffset:(id)arg3 ;
-(void)handleBrailleDidShowNextAnnouncement:(id)arg0 ;
-(void)handleBrailleDidShowPreviousAnnouncement:(id)arg0 ;
-(void)handleBrailleDriverDidLoad;
-(void)handleBrailleDriverDisconnected;
-(void)handleBrailleInsertedUntranslatedText:(id)arg0 speakLiterally:(BOOL)arg1 ;
-(void)handleBrailleKeyMemorize:(id)arg0 ;
-(void)handleBrailleKeyWillMemorize:(id)arg0 ;
-(void)handleBrailleKeypress:(id)arg0 ;
-(void)handleBrailleReplaceTextRange:(struct _NSRange )arg0 withString:(id)arg1 cursor:(NSUInteger)arg2 ;
-(void)handleBrailleTableFailedToLoad:(id)arg0 ;
-(void)handleCopyStringToClipboard:(id)arg0 ;
-(void)handleDisplayModeChanged:(id)arg0 ;
-(void)handleFailedToLoadBluetoothDevice:(id)arg0 ;
-(void)handlePlayBorderHitSound;
-(void)handlePlayCommandNotSupportedSound;
-(void)handleStartEditing;
-(void)handleUserEventOccured;
-(void)invalidate;


@end


#endif