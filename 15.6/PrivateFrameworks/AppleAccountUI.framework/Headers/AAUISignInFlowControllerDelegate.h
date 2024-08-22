// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AAUISIGNINFLOWCONTROLLERDELEGATE_H
#define AAUISIGNINFLOWCONTROLLERDELEGATE_H

@class ACAccountStore, CDPContext, NSString, UIViewController, NSSet;
@protocol AAUIGenericTermsRemoteUIDelegate, AAUISignInOperationDelegate, AASignInFlowControllerDelegate;

#import <Foundation/Foundation.h>

#import "AAUIGenericTermsRemoteUI.h"

@interface AAUISignInFlowControllerDelegate : NSObject <AAUIGenericTermsRemoteUIDelegate, AAUISignInOperationDelegate, AASignInFlowControllerDelegate>

 {
    id *_pendingEnableDataclassesCompletion;
    id *_pendingTermsCompletion;
    AAUIGenericTermsRemoteUI *_genericTermsRemoteUI;
    ACAccountStore *_accountStore;
}


@property (nonatomic) BOOL backgroundDataclassEnablement; // ivar: backgroundDataclassEnablement
@property (retain, nonatomic) CDPContext *cdpContext; // ivar: cdpContext
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSUInteger findMyActivationAction; // ivar: findMyActivationAction
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) UIViewController *presentingViewController; // ivar: _presentingViewController
@property (copy, nonatomic) NSSet *requiredTerms; // ivar: requiredTerms
@property (nonatomic) BOOL shouldStashLoginResponse; // ivar: shouldStashLoginResponse
@property (nonatomic) BOOL skipCDPEnablement; // ivar: skipCDPEnablement
@property (nonatomic) BOOL skipDataclassEnablement; // ivar: skipDataclassEnablement
@property (readonly) Class superclass;


-(BOOL)parentViewControllerPresentsErrorAlert;
-(id)init;
-(id)initWithPresentingViewController:(id)arg0 ;
-(void)_hasActivationLockSupportedWatchWithCompletion:(id)arg0 ;
-(void)genericTermsRemoteUI:(id)arg0 didFinishWithSuccess:(BOOL)arg1 ;
-(void)signInFlowController:(id)arg0 enableFindMyWithAction:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)signInFlowController:(id)arg0 presentGenericTermsUIForAccount:(id)arg1 completion:(id)arg2 ;
-(void)signInFlowController:(id)arg0 saveAccount:(id)arg1 withAllDataclassesEnabledIfPossibleWithCompletion:(id)arg2 ;
-(void)signInFlowController:(id)arg0 showAlertWithTitle:(id)arg1 message:(id)arg2 completion:(id)arg3 ;
-(void)signInOperationManager:(id)arg0 didSaveAccount:(id)arg1 error:(id)arg2 ;


@end


#endif