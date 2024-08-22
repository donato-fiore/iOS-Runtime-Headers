// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TVRUIPAGINGBUTTON_H
#define _TVRUIPAGINGBUTTON_H

@class UIView, UILabel;
@protocol _TVRUIEventDelegate, TVRUIStyleProvider;


#import "TVRUIButton.h"

@interface _TVRUIPagingButton : UIView

@property (retain, nonatomic) TVRUIButton *bottomButton; // ivar: _bottomButton
@property (weak, nonatomic) NSObject<_TVRUIEventDelegate> *buttonEventDelegate; // ivar: _buttonEventDelegate
@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (retain, nonatomic) NSObject<TVRUIStyleProvider> *styleProvider; // ivar: _styleProvider
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (retain, nonatomic) TVRUIButton *topButton; // ivar: _topButton


-(id)initWithTitle:(id)arg0 styleProvider:(id)arg1 ;
-(void)_buttonPressed:(id)arg0 ;
-(void)_buttonReleased:(id)arg0 ;
-(void)_darkenSystemColorsChanged:(id)arg0 ;


@end


#endif