// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DSPRIVATERELAYCONTROLLER_H
#define DSPRIVATERELAYCONTROLLER_H

@class NSString, OBBoldTrayButton, OBLinkTrayButton, ICQInternetPrivacyViewModel;
@protocol DSController, DSNavigationDelegate;


#import "DSOBWelcomeController.h"

@interface DSPrivateRelayController : DSOBWelcomeController <DSController>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<DSNavigationDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) OBBoldTrayButton *enableButton; // ivar: _enableButton
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) OBLinkTrayButton *linkButton; // ivar: _linkButton
@property (readonly) Class superclass;
@property (retain, nonatomic) ICQInternetPrivacyViewModel *viewModel; // ivar: _viewModel


+(void)initialize;
-(id)init;
-(id)privateRelayDetailText;
-(void)learnMorePressed;
-(void)setPrivateRelayEnabledWithHandler:(id)arg0 ;
-(void)shouldShowWithCompletion:(id)arg0 ;
-(void)turnOnPrivateRelay;
-(void)viewDidLoad;


@end


#endif