// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUIDONATIONAMOUNTVIEW_H
#define SKUIDONATIONAMOUNTVIEW_H

@class UIView, NSArray, UILabel, UIImageView, UIScrollView, UIImage;


#import "SKUIGiftCharity.h"
#import "SKUIGiftAmount.h"

@interface SKUIDonationAmountView : UIView {
    NSArray *_amountButtons;
    UILabel *_amountDisclaimerLabel;
    UILabel *_descriptionLabel;
    UILabel *_legalTextLabel;
    UILabel *_legalText2Label;
    UIImageView *_logoImageView;
    NSInteger _selectedAmountIndex;
    UIView *_separatorView;
    UIScrollView *_scrollView;
}


@property (readonly, nonatomic) SKUIGiftCharity *charity; // ivar: _charity
@property (retain, nonatomic) UIImage *logoImage;
@property (readonly, nonatomic) SKUIGiftAmount *selectedAmount;


-(id)initWithCharity:(id)arg0 ;
-(void)_amountButtonDown:(id)arg0 ;
-(void)_amountButtonUpInside:(id)arg0 ;
-(void)_amountButtonUpOutside:(id)arg0 ;
-(void)dealloc;
-(void)layoutSubviews;


@end


#endif