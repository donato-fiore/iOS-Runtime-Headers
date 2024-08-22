// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPALETTEFLOATINGKEYBOARDCONTROLLER_H
#define PKPALETTEFLOATINGKEYBOARDCONTROLLER_H

@class UIMenu, UIKeyboardInputMode;
@protocol PKPaletteFloatingKeyboardControllerDelegate;

#import <Foundation/Foundation.h>


@interface PKPaletteFloatingKeyboardController : NSObject {
    UIMenu *_cachedKeyboardMenu;
    BOOL _presentingKeyboard;
    BOOL _updatingCurrentInputMode;
    BOOL _processingReloadInputViews;
    id<PKPaletteFloatingKeyboardControllerDelegate> *_delegate;
    UIKeyboardInputMode *_emojiInputMode;
    CGFloat _latestUserInitiatedInputModeChangeTimestamp;
}




-(id)init;
-(void)dealloc;
-(void)didChangeInputMode;


@end


#endif