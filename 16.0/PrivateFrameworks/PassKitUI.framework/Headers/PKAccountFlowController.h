// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKACCOUNTFLOWCONTROLLER_H
#define PKACCOUNTFLOWCONTROLLER_H

@class PKAccountProvisioningController, PKAccount, PKAccountService, PKAssertion, PKAccountCredential, NSString, PKPaymentProvisioningController;
@protocol PKAccountProvisioningControllerDelegate, PKFeatureDisplayableErrorProvider, PKSetupFlowControllerProtocol, PKPaymentSetupViewControllerDelegate, PKAccountFlowControllerDelegate;

#import <Foundation/Foundation.h>


@interface PKAccountFlowController : NSObject <PKAccountProvisioningControllerDelegate, PKFeatureDisplayableErrorProvider, PKSetupFlowControllerProtocol>

 {
    PKAccountProvisioningController *_accountProvisioningController;
    PKAccount *_account;
    id<PKPaymentSetupViewControllerDelegate> *_setupDelegate;
    NSInteger _context;
    PKAccountService *_accountService;
    NSUInteger _postProvisoningContentIndex;
    NSUInteger _madeDefault;
    BOOL _endedProvisioningFlow;
    PKAssertion *_notificationSupressionAssertion;
    BOOL _isMerchantApp;
    BOOL _shownMoreInfoItems;
}


@property (readonly, nonatomic) PKAccountCredential *accountCredential; // ivar: _accountCredential
@property (readonly, nonatomic) PKAccountProvisioningController *accountProvisioningController;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKAccountFlowControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger operations; // ivar: _operations
@property (retain, nonatomic) NSObject<PKSetupFlowControllerProtocol> *parentFlowController; // ivar: _parentFlowController
@property (readonly, nonatomic) PKPaymentProvisioningController *provisioningController; // ivar: _provisioningController
@property (readonly) Class superclass;


+(id)displayableErrorForError:(id)arg0 featureIdentifier:(NSUInteger)arg1 genericErrorTitle:(id)arg2 genericErrorMessage:(id)arg3 ;
-(NSUInteger)_fitleredOperations:(NSUInteger)arg0 account:(id)arg1 context:(NSInteger)arg2 ;
-(id)firstAccountViewController;
-(id)init;
-(id)initWithAccountCredential:(id)arg0 provisioningController:(id)arg1 setupDelegate:(id)arg2 context:(NSInteger)arg3 operations:(NSUInteger)arg4 ;
-(void)_accountProvisioningControllerRequiresNextViewController:(id)arg0 ;
-(void)_acquireAssertion;
-(void)_checkAccountProvisioningControllerState:(id)arg0 ;
-(void)_invalidateAssertion;
-(void)_nextPostProvisioningViewControllerWithCompletion:(id)arg0 ;
-(void)_requestPresentationOfActiviationViewControllerShowingMadeDefault:(BOOL)arg0 ;
-(void)_resetPostProvisioningContent;
-(void)accountProvisioningController:(id)arg0 displayableError:(id)arg1 ;
-(void)accountProvisioningControllerUpdatedState:(id)arg0 ;
-(void)dealloc;
-(void)endProvisioningFlow;
-(void)makeAccountPassDefault:(BOOL)arg0 ;
-(void)nextViewControllerWithCompletion:(id)arg0 ;
-(void)performInitalOperations;


@end


#endif