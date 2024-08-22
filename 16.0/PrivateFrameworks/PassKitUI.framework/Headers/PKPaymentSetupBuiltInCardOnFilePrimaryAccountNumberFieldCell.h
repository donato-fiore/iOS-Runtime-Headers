// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYMENTSETUPBUILTINCARDONFILEPRIMARYACCOUNTNUMBERFIELDCELL_H
#define PKPAYMENTSETUPBUILTINCARDONFILEPRIMARYACCOUNTNUMBERFIELDCELL_H

@class UIImageView;


#import "PKPaymentSetupFieldCell.h"

@interface PKPaymentSetupBuiltInCardOnFilePrimaryAccountNumberFieldCell : PKPaymentSetupFieldCell {
    UIImageView *_accessoryImageView;
}


@property (nonatomic) BOOL hasDarkAppearance; // ivar: _hasDarkAppearance
@property (nonatomic) NSInteger paymentCredentialType; // ivar: _paymentCredentialType


-(BOOL)isEnabled;
-(BOOL)textField:(id)arg0 shouldChangeCharactersInRange:(struct _NSRange )arg1 replacementString:(id)arg2 ;
-(BOOL)textFieldShouldBeginEditing:(id)arg0 ;
-(BOOL)textFieldShouldClear:(id)arg0 ;
-(id)_networkImage;
-(id)init;
-(void)_updateNetworkImage;
-(void)dealloc;
-(void)pk_applyAppearance:(id)arg0 ;
-(void)setEnabled:(BOOL)arg0 ;
-(void)setPaymentSetupField:(id)arg0 ;


@end


#endif