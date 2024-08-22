// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKACCOUNTBILLPAYMENTVIEWCONTROLLER_H
#define PKACCOUNTBILLPAYMENTVIEWCONTROLLER_H

@class UIViewController, NSArray, PKAccountBillPaymentController, PKBillPaymentSuggestedAmountController, PKBillPaymentSuggestedAmountList, PKCompoundInterestCalculator, NSMutableDictionary, NSDateFormatter, NSNumberFormatter, NSDecimalNumber, NSDictionary, UILabel, UIButton, UIScrollView, UIImageView, UITapGestureRecognizer, CLInUseAssertion, PKAccount, PKAccountUserCollection, NSString, PKTransactionSource;
@protocol _PKUIKVisibilityBackdropViewDelegate, PKBillPaymentRingViewDelegate, PKAccountBillPaymentControllerDelegate, PKAddBankAccountInformationViewControllerDelegate, PKBillPaymentRingViewDataSource, PKAccountBillPaymentAmountDescriptionViewDelegate, UIScrollViewDelegate, PKAccountServiceAccountResolutionControllerDelegate, PKAccountBillPaymentObserver;


#import "PKAccountServiceAccountResolutionCofiguration.h"
#import "PKAccountBillPaymentAmountDescriptionView.h"
#import "PKBillPaymentRingView.h"
#import "PKContinuousButton.h"
#import "_PKUIKVisibilityBackdropView.h"
#import "PKAddBankAccountInformationViewController.h"
#import "PKAccountServiceAccountResolutionController.h"

@interface PKAccountBillPaymentViewController : UIViewController <_PKUIKVisibilityBackdropViewDelegate, PKBillPaymentRingViewDelegate, PKAccountBillPaymentControllerDelegate, PKAddBankAccountInformationViewControllerDelegate, PKBillPaymentRingViewDataSource, PKAccountBillPaymentAmountDescriptionViewDelegate, UIScrollViewDelegate, PKAccountServiceAccountResolutionControllerDelegate>

 {
    NSUInteger _interstitialState;
    NSUInteger _featuredViewState;
    NSArray *_installmentPlans;
    PKAccountBillPaymentController *_billPaymentCoordinator;
    PKBillPaymentSuggestedAmountController *_suggestedAmountController;
    PKBillPaymentSuggestedAmountList *_suggestionList;
    PKCompoundInterestCalculator *_interestCalculator;
    NSMutableDictionary *_cachedInterestResults;
    NSDateFormatter *_interestDateFormatter;
    NSNumberFormatter *_amountFormatter;
    NSDecimalNumber *_apr;
    NSMutableDictionary *_smallRingInterestAttributes;
    NSDictionary *_smallRingInterestDateAttributes;
    PKAccountServiceAccountResolutionCofiguration *_configuration;
    BOOL _hasAnimatedRing;
    BOOL _performingAction;
    BOOL _buttonsArePayButtons;
    BOOL _shouldEnablePayLaterButton;
    BOOL _viewIsEnabled;
    BOOL _payButtonsEnabled;
    BOOL _usesAccessibilityLayout;
    BOOL _usesLargestAccessibilityLayout;
    BOOL _showKeyboard;
    BOOL _keyboardVisible;
    CGRect _keyboardFrame;
    CGRect _lastKeyboardFrame;
    BOOL _inLayoutSubviews;
    PKAccountBillPaymentAmountDescriptionView *_amountDescriptionView;
    PKBillPaymentRingView *_ringView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIButton *_tertiaryButton;
    PKContinuousButton *_primaryButton;
    PKContinuousButton *_secondaryButton;
    UILabel *_smallRingInterestLabel;
    _PKUIKVisibilityBackdropView *_backdropView;
    UIScrollView *_scrollView;
    UIImageView *_productHeroView;
    UITapGestureRecognizer *_ringViewTapRecognizer;
    PKAddBankAccountInformationViewController *_addBankAccountViewController;
    PKAccountServiceAccountResolutionController *_accountResolutionController;
    CLInUseAssertion *_CLInUse;
    unsigned char _visibility;
}


@property (readonly, nonatomic) PKAccount *account; // ivar: _account
@property (readonly, nonatomic) PKAccountUserCollection *accountUserCollection; // ivar: _accountUserCollection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<PKAccountBillPaymentObserver> *observer; // ivar: _observer
@property (readonly) Class superclass;
@property (readonly, nonatomic) PKTransactionSource *transactionSource; // ivar: _transactionSource


+(BOOL)canPayBillForAccount:(id)arg0 displayableError:(*id)arg1 ;
+(CGFloat)ringTopMargin;
+(CGFloat)smallRingTopMargin;
+(id)alertControllerForDisplayableError:(id)arg0 ;
+(id)alertControllerForDisplayableError:(id)arg0 handler:(id)arg1 ;
+(id)backgroundColor;
+(id)displayableErrorForAccount:(id)arg0 reason:(NSUInteger)arg1 ;
+(struct CGSize )smallRingSizeWithAccessibilityLayout:(BOOL)arg0 ;
+(struct UIEdgeInsets )contentMargins;
+(void)_billPaymentViewControllerForAccount:(id)arg0 accountUserCollection:(id)arg1 transactionSource:(id)arg2 configuration:(id)arg3 withCompletion:(id)arg4 ;
+(void)billPaymentViewControllerForAccount:(id)arg0 accountUserCollection:(id)arg1 transactionSource:(id)arg2 configuration:(id)arg3 withCompletion:(id)arg4 ;
-(BOOL)_interestLabelIsOutsideSmallRing;
-(NSInteger)visibilityBackdropView:(id)arg0 preferredStyleForTraitCollection:(id)arg1 ;
-(id)_addBankAccountInformationViewController;
-(id)_interestForAmount:(id)arg0 ;
-(id)_interestPostDate;
-(id)_interestStringForAmount:(id)arg0 ;
-(id)_paymentAmount;
-(id)_title;
-(id)billPaymentRingView:(id)arg0 bottomCurvedTextForSuggestedAmount:(id)arg1 ;
-(id)billPaymentRingView:(id)arg0 interestTextForAmount:(id)arg1 ;
-(id)billPaymentRingView:(id)arg0 topCurvedTextForSuggestedAmount:(id)arg1 ;
-(id)billPaymentRingViewZeroInterestText:(id)arg0 ;
-(id)disabledBottomCurvedTextForBillPaymentRingView:(id)arg0 ;
-(id)disabledTopCurvedTextForBillPaymentRingView:(id)arg0 ;
-(id)initWithAccount:(id)arg0 accountUserCollection:(id)arg1 transactionSource:(id)arg2 suggestedAmountController:(id)arg3 configuration:(id)arg4 interstitalState:(NSUInteger)arg5 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithSuggestedAmountController:(id)arg0 account:(id)arg1 accountUserCollection:(id)arg2 transactionSource:(id)arg3 configuration:(id)arg4 interstitialState:(NSUInteger)arg5 ;
-(id)initWithSuggestedAmountController:(id)arg0 transactionSource:(id)arg1 ;
-(id)presentationSceneIdentifierForAccountBillPaymentController:(id)arg0 ;
-(struct CGSize )_layoutScrollViewWithContentWidth:(CGFloat)arg0 ;
-(void)_accountDidChange:(id)arg0 ;
-(void)_cancelButtonTapped:(id)arg0 ;
-(void)_configureProductHeroView;
-(void)_contactSupportButtonTapped:(id)arg0 ;
-(void)_dismissViewControllerWithSuccess:(BOOL)arg0 ;
-(void)_interstitialButtonTapped:(id)arg0 ;
-(void)_layoutFooterWithState:(struct ? )arg0 ;
-(void)_payLaterButtonTapped:(id)arg0 ;
-(void)_payNowButtonTapped:(id)arg0 ;
-(void)_performBillPaymentWithAmount:(id)arg0 billPaymentSuggestedAmountDataEvent:(id)arg1 ;
-(void)_presentAddBankAccount;
-(void)_presentAlertControllerForError:(id)arg0 ;
-(void)_reportEventForPassIfNecessary:(id)arg0 ;
-(void)_setEnabled:(BOOL)arg0 ;
-(void)_setPayButtonsEnabled:(BOOL)arg0 ;
-(void)_setShowKeyboard:(BOOL)arg0 ;
-(void)_setupAmountDescriptionViewForInterstitial;
-(void)_showKeyboardButtonTapped:(id)arg0 ;
-(void)_showOrHideKeypad;
-(void)_tappedSmallRingView:(id)arg0 ;
-(void)_updateForShowKeyboardAnimated:(BOOL)arg0 ;
-(void)_updateInterestString;
-(void)_updateLayoutForKeyboardAction:(id)arg0 ;
-(void)_updateNavigationTitle;
-(void)_updateSubtitle;
-(void)accountBillPaymentController:(id)arg0 hasChangedState:(NSUInteger)arg1 error:(id)arg2 updatedAccount:(id)arg3 ;
-(void)accountServiceAccountResolutionController:(id)arg0 requestsPresentViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)addBankAccountInformationViewController:(id)arg0 didAddFundingSource:(id)arg1 ;
-(void)addBankAccountInformationViewControllerDidFinish:(id)arg0 ;
-(void)bankAccountInformationViewControllerChangedBankAccountInformation:(id)arg0 ;
-(void)billPaymentAmountDescriptionView:(id)arg0 hasChangedAmount:(id)arg1 isValidAmount:(BOOL)arg2 ;
-(void)billPaymentAmountDescriptionViewHasTappedLearnMore:(id)arg0 ;
-(void)billPaymentRingView:(id)arg0 selectedSuggestedAmount:(id)arg1 selectedSuggestedAmountIsTarget:(BOOL)arg2 userInitiatedChange:(BOOL)arg3 ;
-(void)dealloc;
-(void)keyboardWillChange:(id)arg0 ;
-(void)keyboardWillHide:(id)arg0 ;
-(void)keyboardWillShow:(id)arg0 ;
-(void)loadView;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif