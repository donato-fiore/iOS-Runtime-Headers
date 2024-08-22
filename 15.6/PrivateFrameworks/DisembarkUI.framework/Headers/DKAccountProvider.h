// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DKACCOUNTPROVIDER_H
#define DKACCOUNTPROVIDER_H

@class AIDAAccountManager, ACAccountStore, CDPLocalSecret, NSString, UIViewController;
@protocol AASignOutFlowControllerDelegate, AAUIRecoveryFactorControllerDelegate, AIDAAccountManagerDelegate, DKAccountProvider, DKFindMyProvider, AIDAServiceOwnerProtocol;

#import <Foundation/Foundation.h>


@interface DKAccountProvider : NSObject <AASignOutFlowControllerDelegate, AAUIRecoveryFactorControllerDelegate, AIDAAccountManagerDelegate, DKAccountProvider>



@property (retain, nonatomic) AIDAAccountManager *accountManager; // ivar: _accountManager
@property (retain, nonatomic) ACAccountStore *accountStore; // ivar: _accountStore
@property (retain, nonatomic) CDPLocalSecret *cachedLocalSecret; // ivar: _cachedLocalSecret
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<DKFindMyProvider> *findMyProvider; // ivar: _findMyProvider
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) UIViewController *presentingViewController; // ivar: _presentingViewController
@property (retain, nonatomic) NSObject<AIDAServiceOwnerProtocol> *serviceOwnersManager; // ivar: _serviceOwnersManager
@property (readonly) Class superclass;


-(id)_unknownFailureAlertControllerWithCompletion:(id)arg0 ;
-(id)accountsForAccountManager:(id)arg0 ;
-(id)initWithFindMyProvider:(id)arg0 ;
-(void)_addAccountDataForAccounts:(id)arg0 toAccountsData:(id)arg1 completion:(id)arg2 ;
-(void)_fetchAccountDataForAccount:(id)arg0 completion:(id)arg1 ;
-(void)_verifyAndRepairManateeWithPresentingViewController:(id)arg0 completion:(id)arg1 ;
-(void)cacheLocalDevicePasscode:(id)arg0 passcodeType:(int)arg1 ;
-(void)fetchAccounts:(id)arg0 ;
-(void)preparationRequiredForPrimaryAppleAccountWithCompletion:(id)arg0 ;
-(void)preparePrimaryAppleAccountForSignOutWithPresentingViewController:(id)arg0 completion:(id)arg1 ;
-(void)recoveryFactorController:(id)arg0 didFinishAddingRecoveryContactWithError:(id)arg1 ;
-(void)signOutFlowController:(id)arg0 disableFindMyDeviceForAccount:(id)arg1 completion:(id)arg2 ;
-(void)signOutFlowController:(id)arg0 showAlertWithTitle:(id)arg1 message:(id)arg2 completion:(id)arg3 ;
-(void)signOutFlowController:(id)arg0 signOutAccount:(id)arg1 completion:(id)arg2 ;
-(void)signOutPrimaryAppleAccountWithPresentingViewController:(id)arg0 completion:(id)arg1 ;


@end


#endif