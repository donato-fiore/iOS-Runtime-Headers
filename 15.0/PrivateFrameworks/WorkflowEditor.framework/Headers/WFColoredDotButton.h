// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFCOLOREDDOTBUTTON_H
#define WFCOLOREDDOTBUTTON_H

@class UIColor, UIView;


#import "WFDefaultStyleButton.h"

@interface WFColoredDotButton : WFDefaultStyleButton

@property (copy, nonatomic) UIColor *dotColor; // ivar: _dotColor
@property (retain, nonatomic) UIView *dotView; // ivar: _dotView


-(struct UIEdgeInsets )contentEdgeInsets;
-(void)layoutSubviews;


@end


#endif