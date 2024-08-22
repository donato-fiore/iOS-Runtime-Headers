// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKTRANSACTIONRECEIPTDEBUGVIEWCONTROLLER_H
#define PKTRANSACTIONRECEIPTDEBUGVIEWCONTROLLER_H

@class PKPaymentService, PKPaymentTransaction, PKTransactionReceipt, QLItem, QLPreviewController, NSString;
@protocol PKPaymentServiceDelegate, QLPreviewItemDataProvider, QLPreviewControllerDelegate, QLPreviewControllerDataSource;


#import "PKSectionTableViewController.h"

@interface PKTransactionReceiptDebugViewController : PKSectionTableViewController <PKPaymentServiceDelegate, QLPreviewItemDataProvider, QLPreviewControllerDelegate, QLPreviewControllerDataSource>

 {
    PKPaymentService *_paymentService;
    PKPaymentTransaction *_transaction;
    PKTransactionReceipt *_receipt;
    QLItem *_receiptPreviewItem;
    QLPreviewController *_previewController;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)shouldMapSection:(NSUInteger)arg0 ;
-(BOOL)tableView:(id)arg0 shouldHighlightRowAtIndexPath:(id)arg1 ;
-(NSInteger)numberOfPreviewItemsInPreviewController:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_amountCellForTableView:(id)arg0 atIndexPath:(id)arg1 ;
-(id)_headerFieldCellForTableView:(id)arg0 atIndexPath:(id)arg1 ;
-(id)_infoCellForTableView:(id)arg0 atIndexPath:(id)arg1 ;
-(id)_lineItemCellForTableView:(id)arg0 atIndexPath:(id)arg1 ;
-(id)_previewCellForTableView:(id)arg0 atIndexPath:(id)arg1 ;
-(id)_summaryItemCellForTableView:(id)arg0 atIndexPath:(id)arg1 ;
-(id)initWithPaymentTransaction:(id)arg0 ;
-(id)previewController:(id)arg0 previewItemAtIndex:(NSInteger)arg1 ;
-(id)provideDataForItem:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(void)_presentReceiptPreview;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)transactionWithIdentifier:(id)arg0 didDownloadTransactionReceipt:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif