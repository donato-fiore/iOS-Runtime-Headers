// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBFFEATHERBLURVIEW_H
#define SBFFEATHERBLURVIEW_H

@class UIView, MTMaterialView;



@interface SBFFeatherBlurView : UIView

@property (readonly, nonatomic) MTMaterialView *backgroundBlurView; // ivar: _backgroundBlurView
@property (nonatomic) CGFloat intrinsicHeight; // ivar: _intrinsicHeight


+(BOOL)_requiresLowQualityFeatherBlur:(NSUInteger)arg0 ;
+(id)configureGradientMaskForFeatherBlurRecipe:(NSUInteger)arg0 onContentView:(id)arg1 ;
+(id)matchMoveAnimationForFrame:(struct CGRect )arg0 relativeToView:(id)arg1 ;
+(struct UIEdgeInsets )gradientMaskLayerInsetsForFeatherBlurRecipe:(NSUInteger)arg0 ;
-(id)initWithRecipe:(NSUInteger)arg0 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif