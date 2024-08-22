// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASCREDENTIALREQUESTCABLECLIENTVIEWCONTROLLER_H
#define ASCREDENTIALREQUESTCABLECLIENTVIEWCONTROLLER_H

@class ASCAuthorizationPresentationContext, ASCABLELoginChoice;


#import "ASCredentialRequestPaneViewController.h"

@interface ASCredentialRequestCABLEClientViewController : ASCredentialRequestPaneViewController {
    ASCAuthorizationPresentationContext *_presentationContext;
    ASCABLELoginChoice *_loginChoice;
}




-(CGFloat)_marginAboveIcon;
-(CGFloat)_marginBelowQRCode;
-(id)_qrCodeMessage;
-(id)_titleText;
-(id)initWithPresentationContext:(id)arg0 loginChoice:(id)arg1 ;
-(void)_addAboveIconSpacerView;
-(void)_addBelowQRCodeSpacerView;
-(void)_setUpIconView;
-(void)_setUpQRCodeView;
-(void)_setUpTitleView;
-(void)viewDidLoad;


@end


#endif