// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUIONBOARDINGCIRCLEVIEW_H
#define SKUIONBOARDINGCIRCLEVIEW_H

@class UIView, UIImageView, UILabel, UIColor;



@interface SKUIOnboardingCircleView : UIView {
    UIImageView *_backgroundImageView;
    UILabel *_titleLabel;
}


@property (nonatomic) UIEdgeInsets edgeInsets; // ivar: _edgeInsets
@property (copy, nonatomic) UIColor *fillColor; // ivar: _fillColor
@property (nonatomic) CGFloat minimumDiameter; // ivar: _minimumDiameter
@property (readonly, nonatomic) UILabel *titleLabel;
@property (nonatomic) NSInteger titlePosition; // ivar: _titlePosition


-(id)description;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)setBackgroundImage:(id)arg0 ;
-(void)setBackgroundImageAlpha:(CGFloat)arg0 ;


@end


#endif