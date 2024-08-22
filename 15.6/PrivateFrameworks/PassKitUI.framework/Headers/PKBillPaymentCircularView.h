// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKBILLPAYMENTCIRCULARVIEW_H
#define PKBILLPAYMENTCIRCULARVIEW_H

@class UIView, UIImageView, UIColor, UIImage;



@interface PKBillPaymentCircularView : UIView {
    UIView *_primaryView;
    UIView *_secondaryView;
    UIImageView *_imageView;
    UIColor *_primaryColor;
    CGRect _shadowFrame;
}


@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (copy, nonatomic) UIColor *primaryColor;
@property (copy, nonatomic) UIColor *secondaryColor; // ivar: _secondaryColor


-(id)_defaultSecondaryColor;
-(id)init;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_updateColors;
-(void)layoutSubviews;


@end


#endif