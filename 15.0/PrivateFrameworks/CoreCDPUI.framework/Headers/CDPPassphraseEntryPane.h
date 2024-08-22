// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CDPPASSPHRASEENTRYPANE_H
#define CDPPASSPHRASEENTRYPANE_H

@class DevicePINPane, UIScrollView;


#import "CDPPaneHeaderView.h"

@interface CDPPassphraseEntryPane : DevicePINPane {
    UIScrollView *_containerView;
    CDPPaneHeaderView *_headerView;
    CGFloat _keyboardOffset;
}


@property (readonly, nonatomic) CGRect availableHeaderRect;


-(BOOL)isSmallScreen;
-(BOOL)isVerySmallScreen;
-(CGFloat)desiredMinPinHeight;
-(CGFloat)keyboardHeightOffset;
-(id)headerView;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_keyboardLayoutChanged;
-(void)_layoutContainerView;
-(void)_layoutHeaderRect;
-(void)_layoutPinView;
-(void)_layoutSubviews;
-(void)dealloc;
-(void)didFinishResizingHeaderView;
-(void)didFinishResizingPinView;
-(void)layoutSubviews;
-(void)startListeningForKeyboardEvents;


@end


#endif