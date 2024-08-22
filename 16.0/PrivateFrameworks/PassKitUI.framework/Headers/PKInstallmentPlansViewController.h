// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKINSTALLMENTPLANSVIEWCONTROLLER_H
#define PKINSTALLMENTPLANSVIEWCONTROLLER_H

@class UITableViewController, PKAccount, PKAccountUserCollection, NSSet, PKAccountService, NSArray, NSMutableDictionary, NSDateFormatter, PKFamilyMemberCollection, NSString, PKTransactionSourceCollection;
@protocol PKPaymentDataProviderDelegate, PKPaymentDataProvider;



@interface PKInstallmentPlansViewController : UITableViewController <PKPaymentDataProviderDelegate>

 {
    PKAccount *_account;
    PKAccountUserCollection *_accountUserCollection;
    NSSet *_physicalCards;
    PKAccountService *_accountService;
    id<PKPaymentDataProvider> *_dataProvider;
    NSArray *_installmentPlans;
    NSMutableDictionary *_installmentPlanToDeviceName;
    NSMutableDictionary *_installmentPlanImages;
    NSDateFormatter *_installmentDateFormatter;
    PKFamilyMemberCollection *_familyCollection;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) PKTransactionSourceCollection *transactionSourceCollection; // ivar: _transactionSourceCollection


-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_imageWithURL:(id)arg0 installmentPlan:(id)arg1 ;
-(id)_installmentPlanForIndexPath:(id)arg0 ;
-(id)_totalAmountPaid;
-(id)_totalAmountRemaining;
-(id)initWithAccount:(id)arg0 accountUserCollection:(id)arg1 physicalCards:(id)arg2 accountService:(id)arg3 transactionSourceCollection:(id)arg4 familyCollection:(id)arg5 dataProvider:(id)arg6 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)_configureCell:(id)arg0 forInstallmentPlan:(id)arg1 ;
-(void)_handleAccountUpdatedNotification:(id)arg0 ;
-(void)_updateInstallmentPlans;
-(void)didUpdateFamilyMembers:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif