// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CABTMIDICENTRALVIEWCONTROLLER_H
#define CABTMIDICENTRALVIEWCONTROLLER_H

@class UITableViewController, NSMutableArray, UIActivityIndicatorView, NSTimer, UIBarButtonItem, NSString;
@protocol UITableViewDelegate, UITableViewDataSource, BTLEConnectionTable;


#import "AMSBTLEConnectionManager.h"

@interface CABTMIDICentralViewController : UITableViewController <UITableViewDelegate, UITableViewDataSource, BTLEConnectionTable>

 {
    NSMutableArray *peripheralList;
    AMSBTLEConnectionManager *connectionManager;
    UIActivityIndicatorView *indicator;
    BOOL didCleanup;
    BOOL inEditingMode;
    NSTimer *connectionTimer;
    UIBarButtonItem *previousLeftItem;
    UIBarButtonItem *previousRightItem;
    UIBarButtonItem *editButton;
    UIBarButtonItem *cancelButton;
    UIBarButtonItem *forgetButton;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)tableView:(id)arg0 canEditRowAtIndexPath:(id)arg1 ;
-(BOOL)tableView:(id)arg0 shouldHighlightRowAtIndexPath:(id)arg1 ;
-(CGFloat)tableView:(id)arg0 estimatedHeightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 editingStyleForRowAtIndexPath:(id)arg1 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(NSUInteger)peripheralCount;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)peripheralAtIndex:(NSUInteger)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(id)title;
-(void)cancelAction:(id)arg0 ;
-(void)centralTimerFired:(id)arg0 ;
-(void)cleanup;
-(void)dealloc;
-(void)didReceiveMemoryWarning;
-(void)editAction:(id)arg0 ;
-(void)forgetAction:(id)arg0 ;
-(void)loadView;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)setEditing:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setUIEnabled:(BOOL)arg0 ;
-(void)tableView:(id)arg0 commitEditingStyle:(NSInteger)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)updateButtonsToMatchTableState;
-(void)updatePeripheralTable;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif