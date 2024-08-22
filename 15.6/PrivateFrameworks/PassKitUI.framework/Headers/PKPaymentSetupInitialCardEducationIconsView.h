// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPAYMENTSETUPINITIALCARDEDUCATIONICONSVIEW_H
#define PKPAYMENTSETUPINITIALCARDEDUCATIONICONSVIEW_H

@class UIView, UIImageView;



@interface PKPaymentSetupInitialCardEducationIconsView : UIView {
    UIImageView *_applePayIcon;
    UIImageView *_contactlessIcon;
    CGSize _applePayIconSize;
    CGSize _contactlessIconSize;
}




-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif