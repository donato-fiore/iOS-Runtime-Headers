// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYLATERCALENDARVIEWCONTROLLER_H
#define PKPAYLATERCALENDARVIEWCONTROLLER_H

@class PKPayLaterFinancingPlansFetcher, PKAccount, NSArray, NSMutableArray, NSString;
@protocol PKPayLaterFinancingPlansFetcherObserver, PKHorizontalScrollingViewControllerDataSource;


#import "PKHorizontalScrollingViewController.h"
#import "PKPayLaterInstallmentPresenter.h"

@interface PKPayLaterCalendarViewController : PKHorizontalScrollingViewController <PKPayLaterFinancingPlansFetcherObserver, PKHorizontalScrollingViewControllerDataSource>

 {
    PKPayLaterFinancingPlansFetcher *_fetcher;
    PKPayLaterInstallmentPresenter *_installmentPresenter;
    PKAccount *_payLaterAccount;
    NSArray *_months;
    NSInteger _startingIndex;
    os_unfair_lock_s _lockUpdate;
    NSMutableArray *_pendingDateUpdates;
    NSArray *_emptyViewControllers;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(CGFloat)footerViewContentHeight;
-(NSInteger)numberOfItems;
-(NSInteger)startingIndex;
-(id)cachedDataAtIndex:(NSInteger)arg0 ;
-(id)emptyViewControllers;
-(id)footerView;
-(id)initWithPlansFetcher:(id)arg0 installmentPresenter:(id)arg1 paymentIntentController:(id)arg2 ;
-(id)loadingDataObjectWithCurrentData:(id)arg0 index:(NSInteger)arg1 swap:(BOOL)arg2 ;
-(void)dealloc;
-(void)didDequeueViewController:(id)arg0 ;
-(void)didMoveToPrimaryIndex:(NSInteger)arg0 ;
-(void)fetchDataAtIndex:(NSInteger)arg0 completion:(id)arg1 ;
-(void)invalidatedInstallmentsMonth;
-(void)invalidatedInstallmentsMonthsWithDates:(id)arg0 ;
-(void)prefetchDataIfNecessary;
-(void)preflightWithFirstShownDate:(id)arg0 completion:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;


@end


#endif