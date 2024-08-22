// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CAMFRAMERATEINDICATORVIEW_H
#define CAMFRAMERATEINDICATORVIEW_H

@class UIView, UIImageView, UILabel;



@interface CAMFramerateIndicatorView : UIView

@property (readonly, nonatomic) UIImageView *_borderImageView; // ivar: __borderImageView
@property (readonly, nonatomic) UILabel *_label; // ivar: __label
@property (nonatomic) NSInteger layoutStyle; // ivar: _layoutStyle
@property (nonatomic) NSInteger style; // ivar: _style


-(NSInteger)_framesPerSecond;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithLayoutStyle:(NSInteger)arg0 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct UIEdgeInsets )alignmentRectInsets;
-(void)_commonCAMFramerateIndicatorViewInitializationWithLayoutStyle:(NSInteger)arg0 ;
-(void)_updateAppearance;
-(void)_updateForAppearanceChange;
-(void)layoutSubviews;


@end


#endif