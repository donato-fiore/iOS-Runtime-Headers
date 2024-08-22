// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUISTARRATINGVIEW_H
#define SKUISTARRATINGVIEW_H

@class UIView, UIImageView, UILabel, UIImage;



@interface SKUIStarRatingView : UIView {
    UIImageView *_ratingStarsImageView;
    UILabel *_textLabel;
}


@property (nonatomic) CGFloat elementSpacing; // ivar: _elementSpacing
@property (retain, nonatomic) UIImage *ratingStarsImage;
@property (readonly, nonatomic) UILabel *textLabel;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;
-(void)setBackgroundColor:(id)arg0 ;


@end


#endif