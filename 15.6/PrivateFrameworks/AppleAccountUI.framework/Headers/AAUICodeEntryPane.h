// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AAUICODEENTRYPANE_H
#define AAUICODEENTRYPANE_H

@class DevicePINPane, UIScrollView, UIButton;


#import "AAUICodeEntryContext.h"
#import "AAUIPaneHeaderView.h"

@interface AAUICodeEntryPane : DevicePINPane {
    AAUICodeEntryContext *_context;
    CGFloat _keyboardOffset;
    UIScrollView *_containerView;
    AAUIPaneHeaderView *_headerView;
    UIButton *_footerButton;
}




-(BOOL)_isSmallScreen;
-(BOOL)_isVerySmallScreen;
-(CGFloat)_desiredMinPinHeight;
-(CGFloat)keyboardHeightOffset;
-(id)_createFooterButton;
-(id)headerView;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGRect )_availableHeaderRect;
-(void)_didFinishResizingHeaderView;
-(void)_didFinishResizingPinView;
-(void)_keyboardLayoutChanged;
-(void)_layoutContainerView;
-(void)_layoutHeaderRect;
-(void)_layoutPinView;
-(void)_layoutSubviews;
-(void)_startListeningForKeyboardEvents;
-(void)dealloc;
-(void)handleEscapeAction:(id)arg0 ;
-(void)layoutSubviews;
-(void)setContext:(id)arg0 ;


@end


#endif