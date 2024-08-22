// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AAUIMYCUSTODIANACTIONHANDLER_H
#define AAUIMYCUSTODIANACTIONHANDLER_H

@class AIDAAccountManager, OBNavigationController, UIViewController, AALocalContactInfo, NSString;
@protocol AAUIRecoveryFactorControllerDelegate, AAUITrustedContactDetailsActionHandler;

#import <Foundation/Foundation.h>

#import "AAUISpinnerManager.h"
#import "AAUIRecoveryFactorController.h"

@interface AAUIMyCustodianActionHandler : NSObject <AAUIRecoveryFactorControllerDelegate, AAUITrustedContactDetailsActionHandler>

 {
    AAUISpinnerManager *_spinnerManager;
    AIDAAccountManager *_accountManager;
    OBNavigationController *_recoveryContactRemovedNavigationController;
    UIViewController *_presentingViewController;
    AAUIRecoveryFactorController *_recoveryFactorController;
}


@property (readonly, nonatomic) AALocalContactInfo *contact; // ivar: _contact
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_isWalrusEnabled;
-(id)_recoveryFactorController;
-(id)initWithAccountManager:(id)arg0 localContact:(id)arg1 ;
-(void)_addRecoveryContact;
-(void)_checkRecoveryContactAndRecoveryKeyStatus:(id)arg0 ;
-(void)_dismissAndPopFromRecoveryContactRemovedScreen;
-(void)_dismissAndStartHealthCheck;
-(void)_dismissRecoveryContactRemovedScreenWithCompletion:(id)arg0 ;
-(void)_doCustodianRemove;
-(void)_performHealthCheck;
-(void)_popToAccountRecoveryScreen;
-(void)_setupRecoveryKey;
-(void)_stopSpinners;
-(void)_updateUIAfterDeleteWithHasRecoveryContact:(BOOL)arg0 hasRecoveryKey:(BOOL)arg1 ;
-(void)doDestructiveAction:(id)arg0 specifier:(id)arg1 ;
-(void)recoveryFactorController:(id)arg0 didFinishAddingRecoveryContactWithError:(id)arg1 ;


@end


#endif