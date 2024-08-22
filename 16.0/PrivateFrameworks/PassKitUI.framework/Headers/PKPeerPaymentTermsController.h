// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPEERPAYMENTTERMSCONTROLLER_H
#define PKPEERPAYMENTTERMSCONTROLLER_H

@class UIViewController, NSString, UINavigationController, RemoteUIController, NSURL, PKPeerPaymentWebService;
@protocol PKPeerPaymentUpdatedTermsViewControllerDelegate, RemoteUIControllerDelegate;

#import <Foundation/Foundation.h>


@interface PKPeerPaymentTermsController : NSObject <PKPeerPaymentUpdatedTermsViewControllerDelegate, RemoteUIControllerDelegate>

 {
    id *_completionHandler;
}


@property (weak, nonatomic) UIViewController *currentHostController; // ivar: _currentHostController
@property (copy, nonatomic) id *customPresentationHandler; // ivar: _customPresentationHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UINavigationController *navigationController; // ivar: _navigationController
@property (readonly, copy, nonatomic) NSString *passUniqueID; // ivar: _passUniqueID
@property (nonatomic) NSInteger paymentSetupContext; // ivar: _paymentSetupContext
@property (readonly, nonatomic) RemoteUIController *remoteUIController; // ivar: _remoteUIController
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *termsIdentifier; // ivar: _termsIdentifier
@property (readonly, nonatomic) NSURL *termsURL; // ivar: _termsURL
@property (readonly, nonatomic) PKPeerPaymentWebService *webService; // ivar: _webService


-(id)initWithTermsURL:(id)arg0 termsIdentifier:(id)arg1 passUniqueID:(id)arg2 webService:(id)arg3 ;
-(void)_presentRemoteUIController;
-(void)_presentRemoteUIControllerWithUpdatedTermsViewController:(id)arg0 ;
-(void)peerPaymentUpdatedTermsViewController:(id)arg0 didSelectContinue:(BOOL)arg1 ;
-(void)presentTermsOverController:(id)arg0 showInterstitialViewController:(BOOL)arg1 withCompletionHandler:(id)arg2 ;
-(void)remoteUIController:(id)arg0 didReceiveObjectModel:(id)arg1 actionSignal:(*NSUInteger)arg2 ;


@end


#endif