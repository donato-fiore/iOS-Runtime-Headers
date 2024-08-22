// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKTRANSACTIONDEBUGDETAILSVIEWCONTROLLER_H
#define PKTRANSACTIONDEBUGDETAILSVIEWCONTROLLER_H

@class UITableViewController, PKPaymentTransaction, UITableViewCell, NSDictionary;



@interface PKTransactionDebugDetailsViewController : UITableViewController {
    PKPaymentTransaction *_transaction;
    UITableViewCell *_mapsCell;
    BOOL _inBridge;
}


@property (copy, nonatomic) NSDictionary *mapsMerchantDetails; // ivar: _mapsMerchantDetails
@property (retain, nonatomic) NSDictionary *merchantDetails; // ivar: _merchantDetails
@property (retain, nonatomic) NSDictionary *transactionDetails; // ivar: _transactionDetails


-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_cellWithPrimaryText:(id)arg0 infoText:(id)arg1 ;
-(id)_mapsBrandInfoCellForIndex:(NSInteger)arg0 ;
-(id)_mapsCell;
-(id)_mapsMerchantInfoCellForIndex:(NSInteger)arg0 ;
-(id)_merchantInfoCellForIndex:(NSInteger)arg0 ;
-(id)_stringForTechnologyType:(NSInteger)arg0 ;
-(id)_stringForTransactionSource:(NSUInteger)arg0 ;
-(id)_stringForTransactionStatus:(NSInteger)arg0 ;
-(id)_stringForTransactionType:(NSInteger)arg0 ;
-(id)_transactionInfoCellForIndex:(NSInteger)arg0 ;
-(id)initWithTransaction:(id)arg0 ;
-(id)mapsBrandDetails;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 contextMenuConfigurationForRowAtIndexPath:(id)arg1 point:(struct CGPoint )arg2 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(void)_didSelectMap;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif