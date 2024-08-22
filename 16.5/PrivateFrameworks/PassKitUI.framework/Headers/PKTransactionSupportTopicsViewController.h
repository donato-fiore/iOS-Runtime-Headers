// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKTRANSACTIONSUPPORTTOPICSVIEWCONTROLLER_H
#define PKTRANSACTIONSUPPORTTOPICSVIEWCONTROLLER_H

@class PKAccount, PKPaymentTransaction, PKTransactionSourceCollection, PKFamilyMemberCollection, PKAccountUserCollection, NSSet, PKPaymentService, PKPaymentWebService, UIActivityIndicatorView, NSString;
@protocol PKAccountSupportTopicsSectionControllerDelegate, PKAccountSupportTopicExplanationViewControllerDelegate, CNAvatarViewDelegate, PKPaymentServiceDelegate, OS_dispatch_source;


#import "PKPaymentSetupOptionsViewController.h"
#import "PKAccountSupportTopicsSectionController.h"
#import "PKTransactionSupportTransactionSectionController.h"
#import "PKTransactionSupportStatementNameSectionController.h"
#import "PKBusinessChatController.h"

@interface PKTransactionSupportTopicsViewController : PKPaymentSetupOptionsViewController <PKAccountSupportTopicsSectionControllerDelegate, PKAccountSupportTopicExplanationViewControllerDelegate, CNAvatarViewDelegate, PKPaymentServiceDelegate>

 {
    PKAccount *_account;
    PKPaymentTransaction *_transaction;
    PKTransactionSourceCollection *_transactionSourceCollection;
    PKFamilyMemberCollection *_familyCollection;
    PKAccountUserCollection *_accountUserCollection;
    NSSet *_physicalCards;
    PKPaymentService *_paymentService;
    PKPaymentWebService *_paymentWebService;
    PKAccountSupportTopicsSectionController *_sectionTopicController;
    PKTransactionSupportTransactionSectionController *_transactionSectionController;
    PKTransactionSupportStatementNameSectionController *_merchantNameSectionController;
    PKBusinessChatController *_businessChatController;
    BOOL _loadingTopics;
    UIActivityIndicatorView *_activityIndicator;
    BOOL _cancelingPayment;
    BOOL _loadingMapsViewController;
    NSObject<OS_dispatch_source> *_loadingMapsTimer;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)shouldShowSupportLink:(id)arg0 ;
-(id)initWithAccount:(id)arg0 transaction:(id)arg1 transactionSourceCollection:(id)arg2 familyCollection:(id)arg3 accountUserCollection:(id)arg4 physicalCards:(id)arg5 ;
-(id)presentingViewControllerForAvatarView:(id)arg0 ;
-(void)_cancelPaymentWithFallbackTopic:(id)arg0 ;
-(void)_cancelTapped;
-(void)_fetchSupportTopics;
-(void)_openBusinessChatForTopic:(id)arg0 ;
-(void)_presentAlertWithTitle:(id)arg0 message:(id)arg1 dismissAfter:(BOOL)arg2 ;
-(void)_redirectUserToLegacyReportIssue;
-(void)_reloadSectionControllerWithTopics:(id)arg0 ;
-(void)_setBarButtonSpinnerHidden:(BOOL)arg0 ;
-(void)_updateContentUnavailableConfigurationUsingState:(id)arg0 ;
-(void)deselectCells;
-(void)didUpdateFamilyMembers:(id)arg0 ;
-(void)openBusinessChatForTopic:(id)arg0 ;
-(void)reloadItem:(id)arg0 animated:(BOOL)arg1 ;
-(void)showExplanationForTopic:(id)arg0 ;
-(void)showMerchantDetailsForTransaction;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif