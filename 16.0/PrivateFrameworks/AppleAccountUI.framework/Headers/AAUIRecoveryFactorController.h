// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AAUIRECOVERYFACTORCONTROLLER_H
#define AAUIRECOVERYFACTORCONTROLLER_H

@class AARecoveryFactorController, CDPStateController, AIDAAccountManager, NSString, UIViewController;
@protocol AAUICustodianSetupFlowControllerDelegate, AAUIRecoveryFactorControllerDelegate;


#import "AAUICustodianSetupFlowController.h"
#import "AAUICDPHelper.h"

@interface AAUIRecoveryFactorController : AARecoveryFactorController <AAUICustodianSetupFlowControllerDelegate>

 {
    AAUICustodianSetupFlowController *_custodianFlowController;
    AAUICDPHelper *_cdpHelper;
    CDPStateController *_stateController;
}


@property (retain, nonatomic) AIDAAccountManager *accountManager; // ivar: _accountManager
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AAUIRecoveryFactorControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL forceInlinePresentation; // ivar: _forceInlinePresentation
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) UIViewController *presentingViewController; // ivar: _presentingViewController
@property (readonly) Class superclass;


-(id)_cdpHelper;
-(id)_custodianFlowController;
-(id)_stateController;
-(id)initWithAccountManager:(id)arg0 presentingViewController:(id)arg1 ;
-(void)_custodianFlowControllerWithCompletion:(id)arg0 ;
-(void)custodianSetupFlowControllerDidFinish:(id)arg0 ;
-(void)generateRecoveryKeyWithCompletion:(id)arg0 ;
-(void)startAddingRecoveryContact;


@end


#endif