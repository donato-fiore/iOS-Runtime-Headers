// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLKUIWHEELSOFTIMEBUTTON_H
#define CLKUIWHEELSOFTIMEBUTTON_H

@class UIButton;



@interface CLKUIWheelsOfTimeButton : UIButton

@property (nonatomic) UIEdgeInsets touchEdgeInsets; // ivar: _touchEdgeInsets


-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)_createButtonImage:(struct __CFAttributedString *)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGRect )_getMaxTextBounds;
-(struct __CFAttributedString *)_newAttributedString:(id)arg0 withFont:(id)arg1 usingKerning:(CGFloat)arg2 textColor:(id)arg3 ;
-(void)setButtonText:(id)arg0 selectedFont:(id)arg1 selectedTextColor:(id)arg2 unselectedFont:(id)arg3 unselectedTextColor:(id)arg4 kerning:(CGFloat)arg5 ;


@end


#endif