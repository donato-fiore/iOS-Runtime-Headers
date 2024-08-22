// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIDICTATIONLAYOUTVIEW_H
#define UIDICTATIONLAYOUTVIEW_H

@class NSString;
@protocol UIPointerInteractionDelegate;


#import "UIDictationView.h"
#import "UIButton.h"
#import "UILabel.h"

@interface UIDictationLayoutView : UIDictationView <UIPointerInteractionDelegate>

 {
    BOOL _hideSwitcher;
    UIButton *_globeButton;
    UIButton *_keyboardButton;
    UILabel *_languageLabel;
    NSString *_currentDictationLanguage;
    UIButton *_waveTapEndpointButton;
    BOOL _blackTextColor;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isShowing;
-(id)darkGrayColor;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)pointerInteraction:(id)arg0 styleForRegion:(id)arg1 ;
-(void)dealloc;
-(void)finishReturnToKeyboard;
-(void)globeButtonPressed:(id)arg0 withEvent:(id)arg1 ;
-(void)globeButtonPressed:(id)arg0 withEvent:(id)arg1 location:(struct CGPoint )arg2 ;
-(void)keyboardButtonPressed:(id)arg0 ;
-(void)layoutSubviews;
-(void)returnToKeyboard;
-(void)setRenderConfig:(id)arg0 ;
-(void)setState:(int)arg0 ;
-(void)updateLanguageLabel;


@end


#endif