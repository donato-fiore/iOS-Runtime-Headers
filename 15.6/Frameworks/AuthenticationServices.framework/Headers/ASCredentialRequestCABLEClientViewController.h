// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASCREDENTIALREQUESTCABLECLIENTVIEWCONTROLLER_H
#define ASCREDENTIALREQUESTCABLECLIENTVIEWCONTROLLER_H

@class ASCAuthorizationPresentationContext, ASCABLELoginChoice;


#import "ASCredentialRequestPaneViewController.h"

@interface ASCredentialRequestCABLEClientViewController : ASCredentialRequestPaneViewController {
    ASCAuthorizationPresentationContext *_presentationContext;
    ASCABLELoginChoice *_loginChoice;
}




-(CGFloat)_marginAboveIcon;
-(id)_iconImage;
-(id)_qrCodeASImageWithSize:(struct CGSize )arg0 ;
-(id)_qrCodeCIImageWithSize:(struct CGSize )arg0 ;
-(id)_titleText;
-(id)initWithPresentationContext:(id)arg0 loginChoice:(id)arg1 ;
-(struct CGSize )_qrCodeSize;
-(void)_addAboveIconSpacerView;
-(void)_addBelowQRCodeSpacerView;
-(void)_setUpIconView;
-(void)_setUpQRCodeView;
-(void)_setUpTitleView;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif