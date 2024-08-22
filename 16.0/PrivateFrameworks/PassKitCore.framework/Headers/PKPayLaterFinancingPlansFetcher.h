// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYLATERFINANCINGPLANSFETCHER_H
#define PKPAYLATERFINANCINGPLANSFETCHER_H

@class NSMutableArray, NSCache, NSHashTable, NSDate, NSArray, NSString;
@protocol PKAccountServiceObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PKAccountService.h"
#import "PKCurrencyAmount.h"
#import "PKPayLaterFinancingPlansFetcherRequest.h"
#import "PKAccount.h"

@interface PKPayLaterFinancingPlansFetcher : NSObject <PKAccountServiceObserver>

 {
    PKAccountService *_accountService;
    PKCurrencyAmount *_fallbackAmount;
    NSMutableArray *_pendingRequests;
    PKPayLaterFinancingPlansFetcherRequest *_currentRequest;
    NSCache *_financingPlanCache;
    NSCache *_installmentMonthCache;
    os_unfair_lock_s _requestsLock;
    os_unfair_lock_s _cacheLock;
    os_unfair_lock_s _observersLock;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_replyQueue;
    BOOL _hasDateRange;
    BOOL _updatingDateRange;
    NSMutableArray *_dateRangeCompletions;
    NSHashTable *_observers;
    NSDate *_oldestDate;
    NSDate *_newestDate;
    NSArray *_months;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PKAccount *payLaterAccount; // ivar: _payLaterAccount
@property (readonly) Class superclass;


+(id)_financingPlanStates;
+(id)amountDueOverNext30DaysForFinancingPlans:(id)arg0 payLaterAccount:(id)arg1 totalPending:(*id)arg2 upcomingInstallments:(*id)arg3 upcomingInstallmentsIdentifierToFinancingPlan:(*id)arg4 ;
-(id)_sortedFinancingPlans:(id)arg0 ;
-(id)cachedInstallmentsMonthWithStartDate:(id)arg0 ;
-(id)initWithPayLaterAccount:(id)arg0 ;
-(id)monthDates;
-(void)_accessObserversWithHandler:(id)arg0 ;
-(void)_addRequest:(id)arg0 ;
-(void)_executeNextRequestIfPossible;
-(void)_executeRequest:(id)arg0 ;
-(void)_queue_clearAllCache;
-(void)_queue_clearCacheWithMonths:(id)arg0 ;
-(void)_queue_financingPlanUpdated:(id)arg0 ;
-(void)_timeZoneChanged;
-(void)accountChanged:(id)arg0 ;
-(void)accountFinancingPlanAdded:(id)arg0 accountIdentifier:(id)arg1 ;
-(void)accountFinancingPlanRemoved:(id)arg0 accountIdentifier:(id)arg1 ;
-(void)accountFinancingPlanUpdated:(id)arg0 oldFinancingPlan:(id)arg1 accountIdentifier:(id)arg2 ;
-(void)dealloc;
-(void)financingPlansWithStates:(id)arg0 completion:(id)arg1 ;
-(void)installmentsMonthWithDate:(id)arg0 completion:(id)arg1 ;
-(void)preflightDataIfNecessaryWithCompletion:(id)arg0 ;
-(void)registerObserver:(id)arg0 ;
-(void)unregisterObserver:(id)arg0 ;


@end


#endif