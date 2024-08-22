// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPAYMENTSETUPBUILTINPRIMARYACCOUNTNUMBERFIELDCELL_H
#define PKPAYMENTSETUPBUILTINPRIMARYACCOUNTNUMBERFIELDCELL_H

@class UIButton, UIAction;


#import "PKPaymentSetupFieldCell.h"

@interface PKPaymentSetupBuiltInPrimaryAccountNumberFieldCell : PKPaymentSetupFieldCell {
    UIButton *_cameraCaptureButton;
}


@property (retain, nonatomic) UIAction *cameraCaptureTapAction; // ivar: _cameraCaptureTapAction
@property (nonatomic) BOOL showsCameraCaptureButton; // ivar: _showsCameraCaptureButton


-(BOOL)textField:(id)arg0 shouldChangeCharactersInRange:(struct _NSRange )arg1 replacementString:(id)arg2 ;
-(BOOL)textFieldShouldClear:(id)arg0 ;
-(id)init;
-(void)setEnabled:(BOOL)arg0 ;
-(void)setPaymentSetupField:(id)arg0 ;


@end


#endif