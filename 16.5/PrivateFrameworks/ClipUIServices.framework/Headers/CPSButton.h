// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPSBUTTON_H
#define CPSBUTTON_H

@class UIButton, NSString;



@interface CPSButton : UIButton

@property (nonatomic) BOOL animatesAlphaWhenHighlighted; // ivar: _animatesAlphaWhenHighlighted
@property (copy, nonatomic) NSString *extraTapTargetSubstring; // ivar: _extraTapTargetSubstring
@property (nonatomic) CGFloat tapTargetSideMargin; // ivar: _tapTargetSideMargin


-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithTitle:(id)arg0 enabledTitleColor:(id)arg1 disabledTitleColor:(id)arg2 backgroundColor:(id)arg3 textStyle:(id)arg4 cornerRadius:(CGFloat)arg5 animatesAlphaWhenHighlighted:(BOOL)arg6 ;
-(struct CGRect )_boundingRectForSubstring:(id)arg0 ;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)updateCornerRadius;


@end


#endif