// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUIGIFTCONFIRMLABELEDVALUE_H
#define SKUIGIFTCONFIRMLABELEDVALUE_H

@class UIView, UILabel, NSString;


#import "SKUIGiftDashView.h"

@interface SKUIGiftConfirmLabeledValue : UIView {
    SKUIGiftDashView *_dashView;
    UILabel *_labelLabel;
    UILabel *_valueLabel;
    UILabel *_subtitleLabel;
}


@property (readonly, nonatomic) NSInteger giftConfirmLabelStyle; // ivar: _style
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *subtitleLabel;
@property (copy, nonatomic) NSString *value;


-(id)initWithGiftConfirmLabelStyle:(NSInteger)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif