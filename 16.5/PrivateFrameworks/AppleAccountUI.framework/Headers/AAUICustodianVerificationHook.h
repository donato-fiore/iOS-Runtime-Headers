// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AAUICUSTODIANVERIFICATIONHOOK_H
#define AAUICUSTODIANVERIFICATIONHOOK_H

@class UIViewController, AIDAAccountManager, NSString, RUIObjectModel, RUIServerHookResponse;
@protocol AAUIServerHook, AAUIOBTableWelcomeControllerDelegate, RUIServerHookDelegate;

#import <Foundation/Foundation.h>

#import "AAUINavigationItemSpinnerController.h"

@interface AAUICustodianVerificationHook : NSObject <AAUIServerHook, AAUIOBTableWelcomeControllerDelegate>

 {
    id *_hookCompletion;
    AAUINavigationItemSpinnerController *_spinnerController;
    UIViewController *_presentingViewController;
    BOOL _forceInline;
    AIDAAccountManager *_accountManager;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<RUIServerHookDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) RUIObjectModel *objectModel;
@property (retain, nonatomic) RUIServerHookResponse *serverHookResponse;
@property (readonly) Class superclass;


-(BOOL)_shouldPresentInline;
-(BOOL)shouldMatchElement:(id)arg0 ;
-(BOOL)shouldMatchModel:(id)arg0 ;
-(id)initWithAccountManager:(id)arg0 ;
-(void)_cancelFlow;
-(void)_dismissUI;
-(void)_displayCustodianFetchErrorAlert;
-(void)_displayListOfCustodiansWithContacts:(id)arg0 ;
-(void)_processAttributes:(id)arg0 ;
-(void)_verifyCustodianWithServerAttributes:(id)arg0 completion:(id)arg1 ;
-(void)processElement:(id)arg0 attributes:(id)arg1 objectModel:(id)arg2 completion:(id)arg3 ;
-(void)processObjectModel:(id)arg0 completion:(id)arg1 ;
-(void)tableWelcomeViewControllerDidTapPrimaryButton;
-(void)tableWelcomeViewControllerDidTapSecondaryButton;


@end


#endif