// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPAYMENTTRANSACTIONDETAILHEADERVIEW_H
#define PKPAYMENTTRANSACTIONDETAILHEADERVIEW_H

@class UIView, UILabel, UIImageView, NSString, UIImage;



@interface PKPaymentTransactionDetailHeaderView : UIView {
    UILabel *_amountLabel;
    UILabel *_subtitleLabel;
    UILabel *_secondaryLabel;
    UILabel *_tertiaryLabel;
    BOOL _isTemplateLayout;
    UIImageView *_merchantIconImageView;
}


@property (copy, nonatomic) NSString *amountText; // ivar: _amountText
@property (nonatomic) BOOL inBridge; // ivar: _inBridge
@property (copy, nonatomic) UIImage *merchantIcon; // ivar: _merchantIcon
@property (copy, nonatomic) NSString *secondarySubtitleText; // ivar: _secondarySubtitleText
@property (copy, nonatomic) NSString *subtitleText; // ivar: _subtitleText
@property (copy, nonatomic) NSString *tertiarySubtitleText; // ivar: _tertiarySubtitleText


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )_layoutWithBounds:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif