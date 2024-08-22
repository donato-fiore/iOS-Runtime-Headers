// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBFLOATINGDOCKPLATTERVIEW_H
#define SBFLOATINGDOCKPLATTERVIEW_H

@class UIView, NSString, UIImageView;


#import "_SBFloatingDockPlatterMetrics.h"

@interface SBFloatingDockPlatterView : UIView

@property (copy, nonatomic) NSString *backdropGroupName;
@property (copy, nonatomic) NSString *backdropGroupNamespace;
@property (retain, nonatomic) UIView *backgroundView; // ivar: _backgroundView
@property (nonatomic) BOOL hasShadow; // ivar: _hasShadow
@property (nonatomic) CGFloat maximumContinuousCornerRadius; // ivar: _maximumContinuousCornerRadius
@property (retain, nonatomic) _SBFloatingDockPlatterMetrics *metrics; // ivar: _metrics
@property (nonatomic) CGFloat referenceHeight; // ivar: _referenceHeight
@property (readonly, nonatomic) UIEdgeInsets shadowOutsets;
@property (retain, nonatomic) UIImageView *shadowView; // ivar: _shadowView


+(id)borderColorForUserInterfaceStyle:(NSInteger)arg0 ;
-(CGFloat)_maxShadowViewAlpha;
-(id)_metricsForBounds:(struct CGRect )arg0 ;
-(id)_shadowImageForMetrics:(id)arg0 ;
-(id)_shadowImageViewForMetrics:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct UIEdgeInsets )_shadowInsetsForMetrics:(id)arg0 ;
-(struct UIEdgeInsets )_shadowOutsetsForMetrics:(id)arg0 ;
-(struct UIEdgeInsets )shadowOutsetsForBounds:(struct CGRect )arg0 ;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)layoutSubviews;
-(void)updateBorderVisualStyling;


@end


#endif