// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKMERCHANTTOKENSVIEWCONTROLLER_H
#define PKMERCHANTTOKENSVIEWCONTROLLER_H

@class UITableViewController, PKPaymentPass, PKRetrieveMerchantTokensResponse, NSMutableArray, PKPaymentWebService;



@interface PKMerchantTokensViewController : UITableViewController {
    PKPaymentPass *_pass;
    PKRetrieveMerchantTokensResponse *_previousMerchantTokensResponse;
    NSMutableArray *_merchantTokens;
    BOOL _isFetchingMerchantTokens;
    PKPaymentWebService *_webService;
}




-(BOOL)_hasMoreUnfetchedMerchantTokens;
-(BOOL)_isLoadingRow:(id)arg0 ;
-(BOOL)_isMerchantRow:(id)arg0 ;
-(BOOL)_shouldShowLoadingRow;
-(BOOL)tableView:(id)arg0 shouldHighlightRowAtIndexPath:(id)arg1 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithPass:(id)arg0 merchantTokensResponse:(id)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForFooterInSection:(NSInteger)arg1 ;
-(void)_fetchNextPageOfMerchantTokens;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif