// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUISTARBARVIEW_H
#define SKUISTARBARVIEW_H

@class UIView, UIImage, UIColor;



@interface SKUIStarBarView : UIView {
    UIImage *_emptyStarImage;
    UIImage *_filledStarImage;
}


@property (copy, nonatomic) UIColor *emptyColor; // ivar: _emptyColor
@property (copy, nonatomic) UIColor *filledColor; // ivar: _filledColor
@property (nonatomic) NSInteger numberOfStars; // ivar: _numberOfStars
@property (nonatomic) CGFloat value; // ivar: _value


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)setColoringUsingStyle:(id)arg0 ;


@end


#endif