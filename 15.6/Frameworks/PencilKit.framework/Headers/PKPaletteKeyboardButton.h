// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPALETTEKEYBOARDBUTTON_H
#define PKPALETTEKEYBOARDBUTTON_H

@class UIImage, UIMenu;


#import "PKPaletteButton.h"
#import "PKTextInputLanguageSelectionToken.h"

@interface PKPaletteKeyboardButton : PKPaletteButton {
    UIImage *_indicatorImage;
    PKTextInputLanguageSelectionToken *_observerToken;
}


@property (nonatomic) BOOL enableKeyboardToggle; // ivar: _enableKeyboardToggle
@property (nonatomic) NSInteger floatingKeyboardType; // ivar: _floatingKeyboardType
@property (retain, nonatomic) UIMenu *keyboardSelectionMenu; // ivar: _keyboardSelectionMenu


-(id)contextMenuInteraction:(id)arg0 configurationForMenuAtLocation:(struct CGPoint )arg1 ;
-(id)initWithImage:(id)arg0 ;
-(void)_updateButtonImage;
-(void)_updateKeyboardToggleState;
-(void)dealloc;


@end


#endif