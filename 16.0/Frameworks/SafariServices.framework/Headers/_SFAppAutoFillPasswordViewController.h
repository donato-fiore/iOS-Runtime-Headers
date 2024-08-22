// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SFAPPAUTOFILLPASSWORDVIEWCONTROLLER_H
#define _SFAPPAUTOFILLPASSWORDVIEWCONTROLLER_H

@class SFPasswordViewController, SFQueueingServiceViewControllerProxy<SFPasswordPickerServiceViewControllerProtocol>;


#import "SFPasswordRemoteViewController.h"

@interface _SFAppAutoFillPasswordViewController : SFPasswordViewController {
    SFPasswordRemoteViewController *_remoteViewController;
    SFQueueingServiceViewControllerProxy<SFPasswordPickerServiceViewControllerProtocol> *_serviceProxy;
}




-(BOOL)_canShowWhileLocked;
-(id)_connectToServiceWithCompletion:(id)arg0 ;
-(id)_remoteViewController;
-(void)_sceneDidEnterBackground:(id)arg0 ;
-(void)_setUpServiceProxyIfNeeded;
-(void)authenticateToPresentInPopover:(BOOL)arg0 completion:(id)arg1 ;
-(void)remoteViewController:(id)arg0 selectedCredential:(id)arg1 ;
-(void)setAuthenticationGracePeriod:(CGFloat)arg0 ;
-(void)setExternallyVerifiedAndApprovedSharedWebCredentialsDomains:(id)arg0 ;
-(void)setRemoteAppID:(id)arg0 ;
-(void)setRemoteLocalizedAppName:(id)arg0 ;
-(void)setRemoteUnlocalizedAppName:(id)arg0 ;
-(void)setWebViewURL:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif