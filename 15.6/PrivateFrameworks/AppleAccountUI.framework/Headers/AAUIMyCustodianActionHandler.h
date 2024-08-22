// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AAUIMYCUSTODIANACTIONHANDLER_H
#define AAUIMYCUSTODIANACTIONHANDLER_H

@class AIDAAccountManager, OBNavigationController, UIViewController, AALocalContactInfo, NSString;
@protocol AAUIRecoveryFactorControllerDelegate, AAUITrustedContactDetailsActionHandler;

#import <Foundation/Foundation.h>

#import "AAUISpinnerManager.h"

@interface AAUIMyCustodianActionHandler : NSObject <AAUIRecoveryFactorControllerDelegate, AAUITrustedContactDetailsActionHandler>

 {
    AAUISpinnerManager *_spinnerManager;
    AIDAAccountManager *_accountManager;
    OBNavigationController *_recoveryContactRemovedNavigationController;
    UIViewController *_presentingViewController;
}


@property (readonly, nonatomic) AALocalContactInfo *contact; // ivar: _contact
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithAccountManager:(id)arg0 localContact:(id)arg1 ;
-(void)_doCustodianRemove;
-(void)_stopSpinners;
-(void)doDestructiveAction:(id)arg0 specifier:(id)arg1 ;


@end


#endif