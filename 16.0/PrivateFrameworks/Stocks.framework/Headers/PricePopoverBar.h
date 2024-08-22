// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PRICEPOPOVERBAR_H
#define PRICEPOPOVERBAR_H

@class UIView, UILabel, UIImage, UIImageView, UIColor;



@interface PricePopoverBar : UIView {
    UILabel *_priceLabel;
    UILabel *_percentChangeLabel;
    UIImage *_backgroundImage;
    UIImageView *_priceChangeSignView;
    UIImageView *_percentChangeSignView;
}


@property (retain, nonatomic) UIColor *imageMaskColor; // ivar: _imageMaskColor


-(id)initWithBackgroundImage:(id)arg0 ;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)setChangeImage:(id)arg0 ;
-(void)setPercentChange:(id)arg0 ;
-(void)setPriceString:(id)arg0 ;
-(void)sizeToFit;


@end


#endif