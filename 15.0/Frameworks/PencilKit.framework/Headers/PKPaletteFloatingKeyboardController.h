// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPALETTEFLOATINGKEYBOARDCONTROLLER_H
#define PKPALETTEFLOATINGKEYBOARDCONTROLLER_H

@class UIMenu, UIKeyboardInputMode;
@protocol PKPaletteFloatingKeyboardControllerDelegate;

#import <Foundation/Foundation.h>


@interface PKPaletteFloatingKeyboardController : NSObject {
    UIMenu *_cachedKeyboardMenu;
}


@property (weak, nonatomic) NSObject<PKPaletteFloatingKeyboardControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) UIKeyboardInputMode *emojiInputMode; // ivar: _emojiInputMode
@property (readonly, nonatomic) UIMenu *keyboardSelectionMenu;
@property (nonatomic, getter=isPresentingKeyboard) BOOL presentingKeyboard; // ivar: _presentingKeyboard
@property (nonatomic, getter=isProcessingReloadInputViews) BOOL processingReloadInputViews; // ivar: _processingReloadInputViews


+(NSInteger)floatingKeyboardType;
-(id)_responderFromDelegate;
-(id)init;
-(void)_clearMenuStateIfNecessary;
-(void)_presentKeyboardWithType:(NSInteger)arg0 forResponder:(id)arg1 ;
-(void)_presentOrDismissWithKeyboardType:(NSInteger)arg0 ;
-(void)_reloadInputViewsForResponder:(id)arg0 ;
-(void)_setTraitsForActiveKeyboard:(id)arg0 forResponder:(id)arg1 ;
-(void)_updateKeyboardMenuIfNecessary;
-(void)dealloc;
-(void)didChangeInputMode;
-(void)dismissWithReason:(id)arg0 ;
-(void)notifyDelegateDidChangeKeyboardType;
-(void)presentOrDismissIfPresented;
-(void)updateFloatingKeyboardType;


@end


#endif