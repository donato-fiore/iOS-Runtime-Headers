// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUIACCOUNTBUTTONSVIEWCONTROLLER_H
#define SKUIACCOUNTBUTTONSVIEWCONTROLLER_H

@class UIViewController, NSString;
@protocol UINavigationControllerDelegate, SKUIAccountButtonsDelegate;


#import "SKUIAccountButtonsView.h"
#import "SKUILink.h"
#import "SKUIClientContext.h"

@interface SKUIAccountButtonsViewController : UIViewController <UINavigationControllerDelegate>

 {
    SKUIAccountButtonsView *_buttonsView;
}


@property (retain, nonatomic) SKUILink *ECommerceLink; // ivar: _ecommerceLink
@property (retain, nonatomic) SKUIClientContext *clientContext; // ivar: _clientContext
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SKUIAccountButtonsDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isGiftingHidden) BOOL giftingHidden;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic, getter=isTermsAndConditionsHidden) BOOL termsAndConditionsHidden;


-(NSUInteger)navigationControllerSupportedInterfaceOrientations:(id)arg0 ;
-(id)_buttonsView;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)_accountStoreChangedNotification:(id)arg0 ;
-(void)_ecommerceLinkAction:(id)arg0 ;
-(void)_giftAction:(id)arg0 ;
-(void)_openIForgot;
-(void)_redeemButtonAction:(id)arg0 ;
-(void)_reloadAccountsButton;
-(void)_reloadRestrictions;
-(void)_restrictionsChangedNotification:(id)arg0 ;
-(void)_sendDidSignIn;
-(void)_signInButtonAction:(id)arg0 ;
-(void)_signOut;
-(void)_termsAndConditionsButtonAction:(id)arg0 ;
-(void)_usernameButtonAction:(id)arg0 ;
-(void)_viewAppleID;
-(void)dealloc;
-(void)loadView;


@end


#endif