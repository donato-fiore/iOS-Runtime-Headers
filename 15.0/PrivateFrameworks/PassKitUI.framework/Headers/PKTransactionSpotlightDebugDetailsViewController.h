// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKTRANSACTIONSPOTLIGHTDEBUGDETAILSVIEWCONTROLLER_H
#define PKTRANSACTIONSPOTLIGHTDEBUGDETAILSVIEWCONTROLLER_H

@class UITableViewController, PKPaymentTransaction, PKSearchService, NSError, NSMutableArray, NSMutableDictionary, CSSearchableItem;



@interface PKTransactionSpotlightDebugDetailsViewController : UITableViewController {
    PKPaymentTransaction *_transaction;
    PKSearchService *_searchService;
    BOOL _loading;
    BOOL _inBridge;
    NSError *_error;
    NSMutableArray *_attributes;
    NSMutableDictionary *_attributesPerKey;
    NSMutableArray *_customAttributes;
    NSMutableDictionary *_customAttributesPerKey;
    CSSearchableItem *_item;
}




-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_cellWithTitleText:(id)arg0 valueText:(id)arg1 ;
-(id)initWithTransaction:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(void)loadItemWithCompletion:(id)arg0 ;
-(void)spotlightObjectDescriptionWithCompletion:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif