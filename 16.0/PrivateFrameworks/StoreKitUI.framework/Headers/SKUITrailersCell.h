// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUITRAILERSCELL_H
#define SKUITRAILERSCELL_H

@class UICollectionViewCell, UIImageView, UILabel, UIImage, NSString;



@interface SKUITrailersCell : UICollectionViewCell {
    UIImageView *_imageView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
}


@property (retain, nonatomic) UIImage *image;
@property (readonly, nonatomic) CGRect imageFrame;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *title;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)setBackgroundColor:(id)arg0 ;


@end


#endif