// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NCBADGEDICONVIEW_H
#define NCBADGEDICONVIEW_H

@class UIView, NSArray, UIView<NCIntegerIndicatorBadging>;



@interface NCBadgedIconView : UIView

@property (retain, nonatomic) NSArray *badgeViews; // ivar: _badgeViews
@property (retain, nonatomic) UIView *iconView; // ivar: _iconView
@property (nonatomic) CGFloat iconViewCornerRadius; // ivar: _iconViewCornerRadius
@property (readonly, nonatomic) UIView<NCIntegerIndicatorBadging> *integerIndicatorbadgeView;


+(NSUInteger)_defaultDirectionForBadgeType:(NSInteger)arg0 ;
+(id)brandingBadgeWithImage:(id)arg0 ;
+(id)integerIndicatorBadgeWithCount:(NSUInteger)arg0 ;
-(id)initWithIconView:(id)arg0 ;
-(id)initWithIconView:(id)arg0 andIntegerIndicatorBadgeWithCount:(NSUInteger)arg1 ;
-(id)requiredVisualStyleCategories;
-(struct CGRect )_frameForBadgeView:(id)arg0 inBounds:(struct CGRect )arg1 ;
-(struct CGRect )_frameForBrandingBadgeOfSize:(struct CGSize )arg0 withLocation:(NSUInteger)arg1 inBounds:(struct CGRect )arg2 ;
-(struct CGRect )_frameForBrandingBadgeView:(id)arg0 inBounds:(struct CGRect )arg1 ;
-(struct CGRect )_frameForIndicatorBadgeOfSize:(struct CGSize )arg0 cornerRadius:(CGFloat)arg1 withLocation:(NSUInteger)arg2 inBounds:(struct CGRect )arg3 ;
-(struct CGRect )_frameForIndicatorBadgeView:(id)arg0 inBounds:(struct CGRect )arg1 ;
-(void)layoutSubviews;
-(void)setVisualStylingProvider:(id)arg0 forCategory:(NSInteger)arg1 ;


@end


#endif