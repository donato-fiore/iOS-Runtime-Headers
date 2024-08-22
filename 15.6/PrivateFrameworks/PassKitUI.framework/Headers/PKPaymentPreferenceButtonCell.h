// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPAYMENTPREFERENCEBUTTONCELL_H
#define PKPAYMENTPREFERENCEBUTTONCELL_H

@class UIButton, NSString;


#import "PKPaymentPreferenceCell.h"

@interface PKPaymentPreferenceButtonCell : PKPaymentPreferenceCell {
    UIButton *_button;
}


@property (copy, nonatomic) NSString *buttonTitle; // ivar: _buttonTitle
@property (copy, nonatomic) id *handler; // ivar: _handler


-(id)initWithReuseIdentifier:(id)arg0 ;
-(id)pk_childrenForAppearance;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)buttonTapped:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif