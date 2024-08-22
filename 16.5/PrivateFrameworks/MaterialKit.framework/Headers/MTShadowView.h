// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTSHADOWVIEW_H
#define MTSHADOWVIEW_H

@class UIImageView, UIColor;



@interface MTShadowView : UIImageView {
    CGSize _maskSizeForCurrentImage;
}


@property (readonly, nonatomic) BOOL continuousCorners; // ivar: _continuousCorners
@property (readonly, nonatomic) CGFloat maskCornerRadius; // ivar: _maskCornerRadius
@property (readonly, nonatomic) ? shadowAttributes; // ivar: _shadowAttributes
@property (copy, nonatomic) UIColor *shadowColor; // ivar: _shadowColor
@property (readonly, nonatomic) UIEdgeInsets shadowOutsets; // ivar: _shadowOutsets


-(id)initWithShadowAttributes:(struct ? )arg0 maskCornerRadius:(CGFloat)arg1 ;
-(id)initWithShadowAttributes:(struct ? )arg0 maskCornerRadius:(CGFloat)arg1 continuousCorners:(BOOL)arg2 ;
-(struct CGRect )frameWithContentWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)_updateShadowOutsetsIfNecessary;
-(void)_updateShadowVisualStyling;
-(void)_validateImage;
-(void)didMoveToSuperview;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif