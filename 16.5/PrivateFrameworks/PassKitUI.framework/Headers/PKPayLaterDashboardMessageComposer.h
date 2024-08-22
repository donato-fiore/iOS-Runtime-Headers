// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYLATERDASHBOARDMESSAGECOMPOSER_H
#define PKPAYLATERDASHBOARDMESSAGECOMPOSER_H

@class PKPaymentPass, PKAccountService, PKPayLaterPaymentIntentController, NSArray, NSDateFormatter, NSMutableSet, PKPayLaterFinancingPlan, PKAccount;
@protocol PKPayLaterDashboardMessageComposerDelegate;

#import <Foundation/Foundation.h>

#import "PKBusinessChatController.h"

@interface PKPayLaterDashboardMessageComposer : NSObject {
    id<PKPayLaterDashboardMessageComposerDelegate> *_delegate;
    NSUInteger _context;
    PKPaymentPass *_payLaterPass;
    PKAccountService *_accountService;
    PKPayLaterPaymentIntentController *_paymentIntentController;
    NSArray *_allFinancingPlans;
    BOOL _isAllContext;
    NSDateFormatter *_shortDateFormatter;
    NSMutableSet *_dashboardMessagesThatNeedSpinners;
    NSInteger _settingsNotificationStatus;
    PKBusinessChatController *_businessChatController;
}


@property (retain, nonatomic) PKPayLaterFinancingPlan *financingPlan; // ivar: _financingPlan
@property (retain, nonatomic) PKAccount *payLaterAccount; // ivar: _payLaterAccount


+(void)resetPayLaterDashboardCache;
-(id)_accountClosed;
-(id)_accountLocked;
-(id)_accountRestrictedNoPastDuePlans;
-(id)_accountRestrictedWithPastDuePlans;
-(id)_accountUnusualActivityDetected;
-(id)_autoPayAvailableForBNPL;
-(id)_autoPayAvailableMessageForSharedCachePrefix:(id)arg0 identifierKeyPrefix:(id)arg1 productType:(NSUInteger)arg2 messageString:(id)arg3 ;
-(id)_flagImage;
-(id)_payLaterFinancingDeclinedPayments;
-(id)_payLaterFinancingPlanPastDue;
-(id)_payLaterWelcomeMessageForSharedCacheKey:(id)arg0 identifierKey:(id)arg1 hasValidPlanCount:(BOOL)arg2 messageString:(id)arg3 ;
-(id)_payLaterWelcomeMessageWithNoPlans;
-(id)_payLaterWelcomeMessageWithPlans;
-(id)_pencilImage;
-(id)_reverseImage;
-(id)_systemImageWithName:(id)arg0 tintColor:(id)arg1 ;
-(id)_warningImage;
-(id)dashboardMessages;
-(id)initWithContext:(NSUInteger)arg0 allFinancingPlans:(id)arg1 payLaterPass:(id)arg2 payLaterAccount:(id)arg3 financingPlan:(id)arg4 paymentIntentController:(id)arg5 delegate:(id)arg6 ;
-(void)_displayDisputeEvidenceRequiredViewControllerForFinancingPlan:(id)arg0 dispute:(id)arg1 ;
-(void)_displayDisputeExplanationViewControllerForFinancingPlan:(id)arg0 contentType:(NSUInteger)arg1 messageIdentifier:(id)arg2 ;
-(void)_presentBusinessChatForApplePayLaterAccountWithTopicType:(NSUInteger)arg0 ;
-(void)_presentBusinessChatForFinancingPlan:(id)arg0 topicType:(NSUInteger)arg1 ;
-(void)_presentBusinessChatWithContext:(id)arg0 ;
-(void)_showSpinnerForDashboardMessageIdentifier:(id)arg0 showSpinner:(BOOL)arg1 ;
-(void)_updateSharedCacheForKey:(id)arg0 value:(BOOL)arg1 reloadMessages:(BOOL)arg2 ;
-(void)preflightDashboardMessagesWithCompletion:(id)arg0 ;


@end


#endif