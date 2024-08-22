// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DEVICEPINKEYPADCONTAINERVIEW_H
#define DEVICEPINKEYPADCONTAINERVIEW_H

@class UIView, UIVisualEffectView;


#import "DevicePINKeypad.h"

@interface DevicePINKeypadContainerView : UIView {
    DevicePINKeypad *_keypad;
    UIVisualEffectView *_backdropView;
    CGFloat _iPadKeypadHeight;
}




-(id)initWithKeypad:(id)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif