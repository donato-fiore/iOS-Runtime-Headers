// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYMENTSETUPCARDIMAGEHEADERVIEW_H
#define PKPAYMENTSETUPCARDIMAGEHEADERVIEW_H

@class UICollectionReusableView, UIImage, UIImageView, UILabel, NSString;



@interface PKPaymentSetupCardImageHeaderView : UICollectionReusableView {
    UIImage *_image;
    UIImageView *_passView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    NSString *_title;
    NSString *_subtitle;
}




-(CGFloat)_leadingPadding;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )_imageSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_createSubviews;
-(void)configureWithUIImage:(id)arg0 title:(id)arg1 subtitle:(id)arg2 ;
-(void)layoutSubviews;
-(void)prepareForReuse;


@end


#endif