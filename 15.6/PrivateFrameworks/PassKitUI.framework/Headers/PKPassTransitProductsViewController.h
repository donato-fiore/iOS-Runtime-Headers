// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPASSTRANSITPRODUCTSVIEWCONTROLLER_H
#define PKPASSTRANSITPRODUCTSVIEWCONTROLLER_H

@class PKTransitBalanceModel, PKRemoteDataAccessor, NSString, PKPaymentPass;
@protocol PKPaymentDataProviderDelegate, PKPerformActionViewControllerDelegate, PKAccessibleLayoutObserverDelegate, PKPaymentDataProvider;


#import "PKSectionTableViewController.h"
#import "PKAdjustableSingleCellView.h"

@interface PKPassTransitProductsViewController : PKSectionTableViewController <PKPaymentDataProviderDelegate, PKPerformActionViewControllerDelegate, PKAccessibleLayoutObserverDelegate>

 {
    PKTransitBalanceModel *_balanceModel;
    NSInteger _accessibleLayout;
    id<PKPaymentDataProvider> *_paymentDataProvider;
    BOOL _hasBalance;
    BOOL _hasCommutePlans;
    NSUInteger _transitType;
    PKAdjustableSingleCellView *_sampleSingleCellView;
    PKRemoteDataAccessor *_remoteDataAccessor;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) PKPaymentPass *pass; // ivar: _pass
@property (readonly) Class superclass;


-(CGFloat)tableView:(id)arg0 heightForHeaderInSection:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_actionHandlerForIndexPath:(SEL)arg0 ;
-(id)_allocView;
-(id)_renewActionForCommutePlanIdentifier:(id)arg0 ;
-(id)_topUpActionForIndexPath:(id)arg0 balanceIdentifiers:(id)arg1 ;
-(id)initWithPaymentPass:(id)arg0 transitType:(NSUInteger)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 viewForHeaderInSection:(NSInteger)arg1 ;
-(void)_configureCell:(id)arg0 inTableView:(id)arg1 forIndexPath:(id)arg2 ;
-(void)_configureView:(id)arg0 indexPath:(id)arg1 animated:(BOOL)arg2 ;
-(void)_handlePassUpdate:(id)arg0 ;
-(void)_reloadBalance;
-(void)_reloadContent;
-(void)_setupBalances;
-(void)_setupPlans;
-(void)accessibleLayoutForView:(id)arg0 changedFrom:(NSInteger)arg1 to:(NSInteger)arg2 ;
-(void)dealloc;
-(void)paymentPassWithUniqueIdentifier:(id)arg0 didReceiveBalanceUpdate:(id)arg1 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg0 didReceivePlanUpdate:(id)arg1 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg0 didUpdateWithTransitPassProperties:(id)arg1 ;
-(void)performActionViewControllerDidCancel:(id)arg0 ;
-(void)performActionViewControllerDidPerformAction:(id)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif