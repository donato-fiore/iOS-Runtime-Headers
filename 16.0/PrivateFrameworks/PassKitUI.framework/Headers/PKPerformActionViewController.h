// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPERFORMACTIONVIEWCONTROLLER_H
#define PKPERFORMACTIONVIEWCONTROLLER_H

@class UIViewController, PKServiceProviderPurchase, UIBarButtonItem, PKPaymentPassAction, UIView<PKPerformActionView>, NSString, PKPaymentPass, PKPaymentWebService;
@protocol PKPerformActionViewDelegate, PKPaymentAuthorizationCoordinatorDelegate, PKPaymentAuthorizationCoordinatorPrivateDelegate, PKPaymentDataProvider, PKPerformActionViewControllerDelegate;


#import "PKPerformActionPassView.h"
#import "PKPerformActionLoadingView.h"

@interface PKPerformActionViewController : UIViewController <PKPerformActionViewDelegate, PKPaymentAuthorizationCoordinatorDelegate, PKPaymentAuthorizationCoordinatorPrivateDelegate>

 {
    PKPerformActionPassView *_passView;
    PKPerformActionLoadingView *_loadingView;
    id<PKPaymentDataProvider> *_paymentDataProvider;
    BOOL _remoteContentFetched;
    BOOL _fieldsVerified;
    PKServiceProviderPurchase *_completedPurchase;
    UIBarButtonItem *_button;
    UIBarButtonItem *_spinner;
}


@property (readonly, nonatomic) PKPaymentPassAction *action; // ivar: _action
@property (readonly, nonatomic) UIView<PKPerformActionView> *actionView; // ivar: _actionView
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKPerformActionViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PKPaymentPass *pass; // ivar: _pass
@property (readonly) Class superclass;
@property (retain, nonatomic) PKPaymentWebService *webService; // ivar: _webService


+(id)alertControllerForUnableReason:(NSUInteger)arg0 action:(id)arg1 displayableError:(id)arg2 addCardActionHandler:(id)arg3 ;
-(BOOL)_shouldPresentPaymentRequest:(NSInteger)arg0 ;
-(BOOL)pkui_disablesAutomaticDismissalUponEnteringBackground;
-(BOOL)shouldHidePassView;
-(id)_actionViewForPass:(id)arg0 action:(id)arg1 ;
-(id)init;
-(id)initWithPass:(id)arg0 action:(id)arg1 ;
-(id)initWithPass:(id)arg0 action:(id)arg1 paymentDataProvider:(id)arg2 ;
-(void)_canPerformPaymentWithCompletion:(id)arg0 ;
-(void)_cancelButtonPressed:(id)arg0 ;
-(void)_fetchRemoteContentIfNeeded;
-(void)_presentPaymentSetupControllerWithAllowedPaymentNetworks:(id)arg0 ;
-(void)_reloadActionView;
-(void)_rightBarButtonPressed:(id)arg0 ;
-(void)_showGenericErrorAlert:(id)arg0 ;
-(void)_showLoadingView:(BOOL)arg0 ;
-(void)_showSpinner:(BOOL)arg0 ;
-(void)paymentAuthorizationCoordinator:(id)arg0 didAuthorizePayment:(id)arg1 handler:(id)arg2 ;
-(void)paymentAuthorizationCoordinator:(id)arg0 didAuthorizePurchase:(id)arg1 completion:(id)arg2 ;
-(void)paymentAuthorizationCoordinatorDidFinish:(id)arg0 ;
-(void)setRightBarButtonEnabled:(BOOL)arg0 ;
-(void)shakeCard;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateFirstResponder;
-(void)updatePassViewVisibility;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif