// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIPRINTERBROWSERVIEWCONTROLLER_H
#define UIPRINTERBROWSERVIEWCONTROLLER_H

@class PKPrinterBrowser, NSMutableArray, NSArray, PKPrinter, NSString;
@protocol PKPrinterBrowserDelegate, UIPrinterBrowserOwner;


#import "UITableViewController.h"
#import "UIPrinterSearchingView.h"
#import "UIPrintInfo.h"

@interface UIPrinterBrowserViewController : UITableViewController <PKPrinterBrowserDelegate>

 {
    id<UIPrinterBrowserOwner> *_ownerPanelViewController;
    PKPrinterBrowser *_printerBrowser;
    NSMutableArray *_preferredPrinters;
    NSMutableArray *_otherPrinters;
    NSMutableArray *_filteredOutPrinters;
    NSArray *_lastUsedPrinters;
    PKPrinter *_lockedPrinter;
    BOOL _loaded;
    UIPrinterSearchingView *_searchingView;
    BOOL _searchingViewConstraintsSet;
    BOOL _shouldFilterPrinters;
    CGFloat _rowHeight;
    UIPrintInfo *_printInfoForBrowser;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property CGFloat maximumPopoverHeight; // ivar: _maximumPopoverHeight
@property (readonly) Class superclass;


-(BOOL)shouldAutorotateToInterfaceOrientation:(NSInteger)arg0 ;
-(CGFloat)tableView:(id)arg0 heightForHeaderInSection:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(NSUInteger)supportedInterfaceOrientations;
-(id)initWithOwnerViewController:(id)arg0 printInfo:(id)arg1 ;
-(id)printerAtIndexPath:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(void)addPrinter:(id)arg0 moreComing:(BOOL)arg1 ;
-(void)adjustPopoverSize;
-(void)dealloc;
-(void)didChangePreferredContentSize;
-(void)loadView;
-(void)printerInfoButtonTapped:(id)arg0 ;
-(void)removePrinter:(id)arg0 moreGoing:(BOOL)arg1 ;
-(void)retriveLastUsedPrintersArray;
-(void)selectPrinter:(id)arg0 ;
-(void)showCancelButton;
-(void)startPrinterBrowser;
-(void)stopPrinterBrowser;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)updateSearching;
-(void)updateViewConstraints;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)willEnterForeground;


@end


#endif