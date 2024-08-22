// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPAYMENTSETUPHEADERVIEW_H
#define PKPAYMENTSETUPHEADERVIEW_H

@class UICollectionReusableView, UILabel, NSString;



@interface PKPaymentSetupHeaderView : UICollectionReusableView {
    UILabel *_label;
}


@property (retain, nonatomic) NSString *title; // ivar: _title


-(CGFloat)_leadingPadding;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;
-(void)prepareForReuse;


@end


#endif