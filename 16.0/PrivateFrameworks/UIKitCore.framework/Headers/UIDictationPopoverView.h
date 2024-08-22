// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIDICTATIONPOPOVERVIEW_H
#define UIDICTATIONPOPOVERVIEW_H

@class NSMutableArray, NSString;
@protocol UIPointerInteractionDelegate;


#import "UIDictationView.h"
#import "UIButton.h"
#import "UIImage.h"
#import "UIView.h"

@interface UIDictationPopoverView : UIDictationView <UIPointerInteractionDelegate>

 {
    UIButton *_languageButton;
    UIButton *_cancelButton;
    UIButton *_centerButton;
    UIButton *_startButton;
    UIButton *_stopButton;
    UIButton *_keyboardButton;
    UIImage *_showKeyboardButtonImage;
    UIImage *_hideKeyboardButtonImage;
    UIImage *_stopDictationImage;
    NSUInteger _popoverPage;
    NSMutableArray *_languageButtons;
    UIView *_languageView;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(struct CGSize )viewSize;
-(id)buttonImageNamed:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)languageButtons:(BOOL)arg0 ;
-(id)pointerInteraction:(id)arg0 styleForRegion:(id)arg1 ;
-(struct CGSize )intrinsicContentSize;
-(void)cancelButtonPressed:(id)arg0 ;
-(void)centerButtonPressed:(id)arg0 ;
-(void)clearLanguageButtons;
-(void)keyboardButtonPressed:(id)arg0 ;
-(void)languageButtonPressed:(id)arg0 withEvent:(id)arg1 ;
-(void)layoutSubviews;
-(void)returnToKeyboard;
-(void)setState:(int)arg0 ;
-(void)startButtonPressed:(id)arg0 ;
-(void)stopButtonPressed:(id)arg0 ;
-(void)willMoveToWindow:(id)arg0 ;


@end


#endif