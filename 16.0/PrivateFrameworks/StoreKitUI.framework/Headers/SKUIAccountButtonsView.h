// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUIACCOUNTBUTTONSVIEW_H
#define SKUIACCOUNTBUTTONSVIEW_H

@class UIView, UILabel, UIControl, NSString, UIButton;


#import "SKUIClientContext.h"
#import "SKUIRoundedRectButton.h"

@interface SKUIAccountButtonsView : UIView {
    UILabel *_accountCreditsLabel;
    SKUIClientContext *_clientContext;
    SKUIRoundedRectButton *_usernameButton;
    BOOL _ecommerceVisibilityHidden;
    BOOL _giftingVisibilityHidden;
}


@property (readonly, nonatomic) UIControl *ECommerceButton; // ivar: _ecommerceButton
@property (copy, nonatomic) NSString *ECommerceLinkTitle;
@property (copy, nonatomic) NSString *accountCredits;
@property (readonly, nonatomic) UIButton *appleIDButton; // ivar: _appleIDButton
@property (readonly, nonatomic) UIButton *giftingButton; // ivar: _giftingButton
@property (nonatomic, getter=isGiftingHidden) BOOL giftingHidden;
@property (readonly, nonatomic) UIButton *redeemButton; // ivar: _redeemButton
@property (readonly, nonatomic) UIButton *termsAndConditionsButton; // ivar: _termsAndConditionsButton
@property (nonatomic, getter=isTermsAndConditionsHidden) BOOL termsAndConditionsHidden;


-(BOOL)isEcommerceHidden;
-(BOOL)isRedeemHidden;
-(id)_newLinkButtonWithTitle:(id)arg0 ;
-(id)initWithClientContext:(id)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_layoutOneRow;
-(void)_layoutTwoRows;
-(void)_reloadFonts;
-(void)dealloc;
-(void)layoutSubviews;
-(void)tintColorDidChange;


@end


#endif