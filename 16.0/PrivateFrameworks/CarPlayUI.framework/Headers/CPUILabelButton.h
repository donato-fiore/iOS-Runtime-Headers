// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPUILABELBUTTON_H
#define CPUILABELBUTTON_H

@class UIColor;


#import "CPUIMediaButton.h"

@interface CPUILabelButton : CPUIMediaButton

@property (retain, nonatomic) UIColor *disabledTextColor; // ivar: _disabledTextColor


-(id)colorForKnobFocusLayer;
-(id)tintColor;
-(void)setEnabled:(BOOL)arg0 ;
-(void)updateButtonOpacityForKnobUnfocused;


@end


#endif