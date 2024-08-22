// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKTRANSACTIONCLOUDKITDEBUGDETAILSVIEWCONTROLLER_H
#define PKTRANSACTIONCLOUDKITDEBUGDETAILSVIEWCONTROLLER_H

@class UITableViewController, PKCloudRecordObject, NSArray, PKPaymentTransaction, PKCloudStoreService, NSMutableDictionary, NSMutableSet;



@interface PKTransactionCloudKitDebugDetailsViewController : UITableViewController {
    PKCloudRecordObject *_cloudRecordObject;
    NSArray *_records;
    PKPaymentTransaction *_transaction;
    PKCloudStoreService *_cloudStoreService;
    BOOL _loadingCloudRecordObject;
    BOOL _inBridge;
    NSMutableDictionary *_keysForRecordName;
    NSMutableDictionary *_valuesForRecordName;
    NSMutableSet *_cloudStoreObjectHandlers;
}




-(BOOL)tableView:(id)arg0 shouldHighlightRowAtIndexPath:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_cellWithTitleText:(id)arg0 valueText:(id)arg1 ;
-(id)_recordForSection:(NSInteger)arg0 ;
-(id)_recordNameForSection:(NSInteger)arg0 ;
-(id)initWithTransaction:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(void)_callCloudRecordObjectDescriptionBlocks;
-(void)_loadCloudData;
-(void)_processCloudRecords;
-(void)cloudRecordObjectDescriptionWithCompletion:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif