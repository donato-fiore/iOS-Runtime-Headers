// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ACUIVIEWCONTROLLER_H
#define ACUIVIEWCONTROLLER_H

@class PSListController, UIProgressHUD, ACAccountStore, UIBarButtonItem, NSString;
@protocol UIActionSheetDelegate, ACUIAccountOperationsDelegate, ACUIViewControllerAccountChangeObserver;


#import "ACUIAccountOperationsHelper.h"

@interface ACUIViewController : PSListController <UIActionSheetDelegate, ACUIAccountOperationsDelegate>

 {
    BOOL _addedToTaskList;
    BOOL _activityInProgress;
    id *_confirmationViewCompletion;
    UIProgressHUD *_hud;
}


@property (weak, nonatomic) NSObject<ACUIViewControllerAccountChangeObserver> *accountChangeObserver; // ivar: _accountChangeObserver
@property (retain, nonatomic) ACUIAccountOperationsHelper *accountOperationsHelper; // ivar: _accountOperationsHelper
@property (retain, nonatomic) ACAccountStore *accountStore; // ivar: _accountStore
@property (retain, nonatomic) UIBarButtonItem *cancelButton; // ivar: _cancelButton
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIBarButtonItem *doneButton; // ivar: _doneButton
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) BOOL validationInProgress; // ivar: _validationInProgress


+(BOOL)shouldPresentAsModalSheet;
+(id)acuiAccountStore;
-(BOOL)isPresentedAsModalSheet;
-(BOOL)isShowingActivityInProgressUI;
-(BOOL)shouldReloadSpecifiersOnResume;
-(id)_actionSheetWithButtons:(id)arg0 title:(id)arg1 destructive:(BOOL)arg2 cancelButtonIndex:(NSInteger)arg3 context:(id)arg4 ;
-(id)_alertViewWithButtons:(id)arg0 title:(id)arg1 message:(id)arg2 cancelButtonIndex:(NSInteger)arg3 context:(id)arg4 ;
-(id)_effectiveParentController;
-(id)init;
-(id)operationsHelper:(id)arg0 desiredDataclassActionFromPicker:(id)arg1 ;
-(id)showAlertViewWithButtons:(id)arg0 title:(id)arg1 message:(id)arg2 destructive:(BOOL)arg3 cancelButtonIndex:(NSInteger)arg4 context:(id)arg5 completion:(id)arg6 ;
-(id)showAlertViewWithButtons:(id)arg0 title:(id)arg1 message:(id)arg2 destructive:(BOOL)arg3 context:(id)arg4 completion:(id)arg5 ;
-(id)showConfirmationViewForDeletingAccount:(id)arg0 context:(id)arg1 completion:(id)arg2 ;
-(id)showConfirmationViewWithButtons:(id)arg0 title:(id)arg1 message:(id)arg2 destructive:(BOOL)arg3 cancelButtonIndex:(NSInteger)arg4 context:(id)arg5 completion:(id)arg6 ;
-(id)showConfirmationViewWithButtons:(id)arg0 title:(id)arg1 message:(id)arg2 destructive:(BOOL)arg3 cancelButtonIndex:(NSInteger)arg4 context:(id)arg5 forceAlert:(BOOL)arg6 completion:(id)arg7 ;
-(id)showConfirmationViewWithButtons:(id)arg0 title:(id)arg1 message:(id)arg2 destructive:(BOOL)arg3 context:(id)arg4 completion:(id)arg5 ;
-(id)specifiers;
-(void)actionSheet:(id)arg0 didDismissWithButtonIndex:(NSInteger)arg1 ;
-(void)alertView:(id)arg0 didDismissWithButtonIndex:(NSInteger)arg1 ;
-(void)cancelButtonTapped:(id)arg0 ;
-(void)confirmationView:(id)arg0 clickedButtonAtIndex:(NSInteger)arg1 ;
-(void)dealloc;
-(void)dismissAnimated:(BOOL)arg0 ;
-(void)doneButtonTapped:(id)arg0 ;
-(void)hideActivityInProgressUI;
-(void)hideActivityInProgressUIWithDelay:(CGFloat)arg0 ;
-(void)operationsHelper:(id)arg0 didRemoveAccount:(id)arg1 withSuccess:(BOOL)arg2 error:(id)arg3 ;
-(void)operationsHelper:(id)arg0 didSaveAccount:(id)arg1 withSuccess:(BOOL)arg2 error:(id)arg3 ;
-(void)operationsHelper:(id)arg0 willRemoveAccount:(id)arg1 ;
-(void)operationsHelper:(id)arg0 willSaveAccount:(id)arg1 ;
-(void)reloadAllParentSpecifiers;
-(void)reloadAllParentSpecifiersAnimated:(BOOL)arg0 ;
-(void)reloadParentSpecifier;
-(void)removeParentSpecifier;
-(void)setCellsChecked:(BOOL)arg0 ;
-(void)setTaskCompletionAssertionEnabled:(BOOL)arg0 ;
-(void)showActivityInProgressUIWithMessage:(id)arg0 ;
-(void)showConfirmationForDeletingAccount:(id)arg0 completion:(id)arg1 ;
-(void)showConfirmationWithActions:(id)arg0 title:(id)arg1 message:(id)arg2 ;
-(void)showConfirmationWithButtons:(id)arg0 title:(id)arg1 message:(id)arg2 destructive:(BOOL)arg3 completion:(id)arg4 ;
-(void)startValidationWithPrompt:(id)arg0 ;
-(void)startValidationWithPrompt:(id)arg0 userInteraction:(BOOL)arg1 ;
-(void)stopValidationWithPrompt:(id)arg0 showButtons:(BOOL)arg1 ;
-(void)updateValidationPrompt:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif