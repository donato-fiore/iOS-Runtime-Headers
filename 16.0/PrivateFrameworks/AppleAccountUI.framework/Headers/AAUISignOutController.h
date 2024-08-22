// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AAUISIGNOUTCONTROLLER_H
#define AAUISIGNOUTCONTROLLER_H

@class UINavigationController, ACAccountStore, NSDictionary, ACAccount, NSString;
@protocol AAUIDataclassPickerViewControllerDelegate, AAUISignOutControllerDelegate;



@interface AAUISignOutController : UINavigationController <AAUIDataclassPickerViewControllerDelegate>

 {
    NSInteger _currentStyle;
}


@property (retain, nonatomic, setter=_setAccountStore:) ACAccountStore *_accountStore; // ivar: _accountStore
@property (copy, nonatomic, setter=_setDataclassOptions:) NSDictionary *_dataclassOptions; // ivar: _dataclassOptions
@property (readonly, nonatomic) ACAccount *account; // ivar: _account
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AAUISignOutControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_hasPaymentPasses;
-(BOOL)_hasiCloudDriveData;
-(BOOL)_hasiCloudPhotosData;
-(NSUInteger)supportedInterfaceOrientations;
-(id)_actionableDataclassOptions;
-(id)_appendToSignoutMessage:(id)arg0 appendedString:(id)arg1 ;
-(id)_dataclassViewController;
-(id)_signOutMessageSimplified:(BOOL)arg0 withConfirmation:(BOOL)arg1 ;
-(id)_spinnerViewControllerForActions:(id)arg0 ;
-(id)footerTextForDataclassPickerViewController:(id)arg0 ;
-(id)initWithAccount:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)messageTextForDataclassPickerViewController:(id)arg0 ;
-(id)titleTextForDataclassPickerViewController:(id)arg0 ;
-(void)_delegate_signOutControllerDidCompleteWithSuccess:(BOOL)arg0 error:(id)arg1 ;
-(void)_mainQueue_continueSignOutWithDataclassActions:(id)arg0 ;
-(void)_mainQueue_presentSpinnerPageWithDataclassActions:(id)arg0 completion:(id)arg1 ;
-(void)_mainQueue_promptForConfirmationInViewController:(id)arg0 simplified:(BOOL)arg1 withCompletion:(id)arg2 ;
-(void)_updateStyleIfNeeded;
-(void)dataclassPickerViewController:(id)arg0 didCompleteWithDataclassActions:(id)arg1 ;
-(void)dataclassPickerViewControllerDidCancel:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)prepareInViewController:(id)arg0 completion:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif