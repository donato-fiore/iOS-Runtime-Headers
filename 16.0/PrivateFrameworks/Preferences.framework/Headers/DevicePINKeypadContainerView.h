// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DEVICEPINKEYPADCONTAINERVIEW_H
#define DEVICEPINKEYPADCONTAINERVIEW_H

@class UIView, UIVisualEffectView;


#import "DevicePINKeypad.h"

@interface DevicePINKeypadContainerView : UIView

@property (retain) UIVisualEffectView *backdropView; // ivar: _backdropView
@property CGFloat iPadKeypadHeight; // ivar: _iPadKeypadHeight
@property (retain) DevicePINKeypad *keypad; // ivar: _keypad


-(id)initWithKeypad:(id)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif