// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYLATERFINANCINGCONTROLLER_H
#define PKPAYLATERFINANCINGCONTROLLER_H

@class NSMutableOrderedSet, NSString, NSDictionary, NSArray, NSHashTable, NSError;
@protocol PKAccountServiceObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PKPaymentService.h"
#import "PKPeerPaymentService.h"
#import "PKCurrencyAmount.h"
#import "PKPayLaterFinancingControllerRequest.h"
#import "PKPayLaterAvailableFundingSourcesFilter.h"
#import "PKPayLaterFinancingPlansFetcher.h"
#import "PKAccountService.h"
#import "PKPayLaterProductAssessmentCollection.h"
#import "PKPayLaterFinancingControllerConfiguration.h"
#import "PKPayLaterDynamicContent.h"
#import "PKPassLibrary.h"
#import "PKAccount.h"
#import "PKPaymentPass.h"
#import "PKPaymentWebService.h"
#import "PKPeerPaymentAccount.h"
#import "PKPayLaterPaymentSource.h"

@interface PKPayLaterFinancingController : NSObject <PKAccountServiceObserver>

 {
    PKPaymentService *_paymentService;
    PKPeerPaymentService *_peerPaymentService;
    BOOL _fetchedPayLaterAccount;
    PKCurrencyAmount *_dueNext30Days;
    NSMutableOrderedSet *_queuedRequests;
    PKPayLaterFinancingControllerRequest *_currentRequest;
    NSString *_defaultPassUniqueIdentifier;
    NSDictionary *_bankFundingSources;
    NSArray *_lastUsedFundingSources;
    PKPayLaterAvailableFundingSourcesFilter *_availableFundingSourcesFilter;
    NSString *_sessionIdentifier;
    PKPayLaterFinancingPlansFetcher *_plansFetcher;
    BOOL _didBeginAnalyticsReporter;
    BOOL _hasEndedSignPost;
    BOOL _authenticatingFinancingOption;
    PKPayLaterFinancingControllerRequest *_pendingCancellationRequest;
    NSObject<OS_dispatch_queue> *_replyQueue;
    os_unfair_lock_s _lockObservers;
    NSHashTable *_observers;
}


@property (readonly, nonatomic) PKAccountService *accountService; // ivar: _accountService
@property (readonly, nonatomic) PKPayLaterProductAssessmentCollection *assessmentCollection; // ivar: _assessmentCollection
@property (nonatomic) BOOL autoPaymentOn; // ivar: _autoPaymentOn
@property (readonly, nonatomic) PKPayLaterFinancingControllerConfiguration *configuration; // ivar: _configuration
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) PKPayLaterDynamicContent *dynamicContent; // ivar: _dynamicContent
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSError *loadingError; // ivar: _loadingError
@property (readonly, nonatomic) NSUInteger loadingState; // ivar: _loadingState
@property (readonly, nonatomic) PKPassLibrary *passLibrary; // ivar: _passLibrary
@property (readonly, nonatomic) PKAccount *payLaterAccount; // ivar: _payLaterAccount
@property (retain, nonatomic) PKPaymentPass *payLaterPass; // ivar: _payLaterPass
@property (readonly, nonatomic) PKPaymentWebService *paymentWebService; // ivar: _paymentWebService
@property (readonly, nonatomic) PKPeerPaymentAccount *peerPaymentAccount; // ivar: _peerPaymentAccount
@property (copy, nonatomic) NSString *referrerIdentifier; // ivar: _referrerIdentifier
@property (retain, nonatomic) PKPayLaterPaymentSource *selectedFundingSource; // ivar: _selectedFundingSource
@property (readonly) Class superclass;
@property (readonly, nonatomic) PKCurrencyAmount *transactionCurrencyAmount;


-(BOOL)_updateStateWithResponse:(id)arg0 ;
-(id)availableFundingSourcesForFinancingOption:(id)arg0 ;
-(id)dynamicContentPageForPageType:(NSUInteger)arg0 productType:(NSUInteger)arg1 optionIdentifier:(id)arg2 ;
-(id)dynamicContentPageItemForPageType:(NSUInteger)arg0 productType:(NSUInteger)arg1 optionIdentifier:(id)arg2 ;
-(id)dynamicContentSectionsForPageType:(NSUInteger)arg0 productType:(NSUInteger)arg1 optionIdentifier:(id)arg2 ;
-(id)initWithAccountService:(id)arg0 paymentService:(id)arg1 peerPaymentService:(id)arg2 paymentWebService:(id)arg3 passLibrary:(id)arg4 payLaterAccount:(id)arg5 configuration:(id)arg6 ;
-(void)_accessObserversWithHandler:(id)arg0 ;
-(void)_addFinancingOptionRequest:(id)arg0 ;
-(void)_executeNextRequestIfPossible;
-(void)_informObserversAssessmentCollectionChanged;
-(void)_informObserversFinancingOptionCancelled:(id)arg0 ;
-(void)_payLaterAccountWithCompletion:(id)arg0 ;
-(void)_reportEndSignpostIfNecessary;
-(void)_reportEventSignpostIfNecessary;
-(void)_updateLoadingState:(NSUInteger)arg0 ;
-(void)accountAdded:(id)arg0 ;
-(void)accountChanged:(id)arg0 ;
-(void)accountRemoved:(id)arg0 ;
-(void)dealloc;
-(void)fetchPayLaterDynamicContentForType:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)invalidate;
-(void)receivedAuthenticationResult:(NSUInteger)arg0 selectedOptionIdentifier:(id)arg1 error:(id)arg2 ;
-(void)refreshAvailableFundingSources;
-(void)registerObserver:(id)arg0 ;
-(void)startedAuthenticatingFinancingOptionIdentifier:(id)arg0 ;
-(void)stateMachineReadyToAuthenticate;
-(void)unregisterObserver:(id)arg0 ;
-(void)updateFinancingOptionsWithCompletion:(id)arg0 ;


@end


#endif