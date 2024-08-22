// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICDOCCAMFILTERBUTTON_H
#define ICDOCCAMFILTERBUTTON_H

@class UIButton, UIColor, UIView, UIImageView, UILabel, NSLayoutConstraint;



@interface ICDocCamFilterButton : UIButton

@property (readonly, nonatomic) UIColor *activeBackgroundViewColor;
@property (weak, nonatomic) UIView *backgroundView; // ivar: _backgroundView
@property (weak, nonatomic) UIImageView *filterIconView; // ivar: _filterIconView
@property (weak, nonatomic) UILabel *filterNameLabel; // ivar: _filterNameLabel
@property (nonatomic) short filterType; // ivar: _filterType
@property (nonatomic) CGFloat iconSize;
@property (weak, nonatomic) NSLayoutConstraint *iconSizeConstraint; // ivar: _iconSizeConstraint
@property (readonly, nonatomic) UIColor *inactiveBackgroundViewColor;
@property (readonly, nonatomic) UIColor *inactiveTextColor;
@property (weak, nonatomic) NSLayoutConstraint *labelVerticalSpacingConstraint; // ivar: _labelVerticalSpacingConstraint


+(id)filterButtonWithType:(short)arg0 ;
-(BOOL)isAccessibilityElement;
-(NSUInteger)accessibilityTraits;
-(id)accessibilityLabel;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)imageForFilterType:(short)arg0 ;
-(struct CGRect )accessibilityFrame;
-(void)awakeFromNib;
-(void)dealloc;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setSelected:(BOOL)arg0 ;
-(void)updateForAccessibilityDarkerSystemColors:(id)arg0 ;


@end


#endif