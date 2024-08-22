// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIPRINTERUTILITYTABLEVIEWCONTROLLER_H
#define UIPRINTERUTILITYTABLEVIEWCONTROLLER_H

@class PKPrinter, NSString, NSArray;


#import "UITableViewController.h"
#import "UIPrinterAttributesService.h"

@interface UIPrinterUtilityTableViewController : UITableViewController {
    PKPrinter *_printer;
    NSString *_printerWarning;
    UIPrinterAttributesService *_printerAttributesService;
    BOOL _showSupplyDataUnderPrinterName;
    NSInteger _mainPrinterCellSection;
    NSInteger _printerNameAndLocationSection;
    NSInteger _identifyPrinterSection;
    NSInteger _removeKeychainItemSection;
    BOOL _showIdentifyPrinterItem;
    BOOL _showRemoveKeychainItem;
}


@property (retain, nonatomic) NSArray *supplyData; // ivar: _supplyData


-(CGFloat)tableView:(id)arg0 heightForHeaderInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithPrinter:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForFooterInSection:(NSInteger)arg1 ;
-(void)didReceiveMemoryWarning;
-(void)setShowContactingPrinter:(BOOL)arg0 ;
-(void)startPrinterWarningPoll;
-(void)stopPrinterWarningPolling;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif