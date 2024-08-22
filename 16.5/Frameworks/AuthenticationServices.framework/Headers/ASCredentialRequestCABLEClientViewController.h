// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASCREDENTIALREQUESTCABLECLIENTVIEWCONTROLLER_H
#define ASCREDENTIALREQUESTCABLECLIENTVIEWCONTROLLER_H

@class ASCAuthorizationPresentationContext, ASCABLELoginChoice;
@protocol OS_os_activity;


#import "ASCredentialRequestPaneViewController.h"

@interface ASCredentialRequestCABLEClientViewController : ASCredentialRequestPaneViewController {
    ASCAuthorizationPresentationContext *_presentationContext;
    ASCABLELoginChoice *_loginChoice;
    NSObject<OS_os_activity> *_authorizationActivity;
}




-(CGFloat)_marginAboveIcon;
-(CGFloat)_marginBelowQRCode;
-(CGFloat)_marginBelowSecurityKeyButton;
-(id)_qrCodeMessage;
-(id)_titleText;
-(id)initWithPresentationContext:(id)arg0 loginChoice:(id)arg1 activity:(id)arg2 ;
-(void)_addAboveIconSpacerView;
-(void)_addBelowQRCodeSpacerView;
-(void)_setUpIconView;
-(void)_setUpQRCodeView;
-(void)_setUpSecurityKeyButtonViewIfNeeded;
-(void)_setUpTitleView;
-(void)_useSecurityKeyButtonTapped;
-(void)viewDidLoad;


@end


#endif