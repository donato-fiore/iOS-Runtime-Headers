// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBHPAGEMANAGEMENTCHECKBOX_H
#define SBHPAGEMANAGEMENTCHECKBOX_H

@class UIButton, CALayer, UIView, UIImageView;



@interface SBHPageManagementCheckbox : UIButton {
    CALayer *_deselectedMask;
}


@property (readonly, nonatomic) UIView *backgroundView; // ivar: _backgroundView
@property (readonly, nonatomic) CGFloat checkboxDiameter; // ivar: _checkboxDiameter
@property (readonly, nonatomic) UIImageView *customImageView; // ivar: _customImageView
@property (readonly, nonatomic) CALayer *deselectedMask;
@property (readonly, nonatomic) UIView *highlightView; // ivar: _highlightView


-(CGFloat)effectiveHighlightAlpha;
-(CGFloat)effectiveImageAlpha;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 checkboxDiameter:(CGFloat)arg1 backgroundView:(id)arg2 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setSelected:(BOOL)arg0 ;
-(void)setSelected:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)updateDeselectedMaskState;


@end


#endif