// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKREWARDSEDUCATIONVIEWCONTROLLER_H
#define PKREWARDSEDUCATIONVIEWCONTROLLER_H

@class PKAccount, PKAccountService, PKAccountEnhancedMerchantsFetcher, NSArray, NSString;
@protocol UITableViewDataSource, PKRewardsTierTableViewCellDelegate;


#import "PKSectionTableViewController.h"

@interface PKRewardsEducationViewController : PKSectionTableViewController <UITableViewDataSource, PKRewardsTierTableViewCellDelegate>

 {
    PKAccount *_account;
    PKAccountService *_accountService;
    PKAccountEnhancedMerchantsFetcher *_enhancedMerchantsFetcher;
    NSArray *_tiers;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithAccount:(id)arg0 accountService:(id)arg1 enhancedMerchantsFetcher:(id)arg2 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 viewForHeaderInSection:(NSInteger)arg1 ;
-(void)_close:(id)arg0 ;
-(void)didPressLinkInCell:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif