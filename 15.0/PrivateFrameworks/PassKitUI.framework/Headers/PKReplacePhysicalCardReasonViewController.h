// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKREPLACEPHYSICALCARDREASONVIEWCONTROLLER_H
#define PKREPLACEPHYSICALCARDREASONVIEWCONTROLLER_H

@class UIBarButtonItem;


#import "PKSectionTableViewController.h"
#import "PKPhysicalCardController.h"
#import "PKOrderPhysicalCardController.h"

@interface PKReplacePhysicalCardReasonViewController : PKSectionTableViewController {
    PKPhysicalCardController *_controller;
    NSInteger _context;
    NSUInteger _feature;
    UIBarButtonItem *_cancelButton;
    UIBarButtonItem *_nextButton;
    BOOL _hasSelectedRow;
    NSInteger _selectedRow;
    BOOL _loadingCustomizationOptions;
    PKOrderPhysicalCardController *_orderController;
}




-(BOOL)shouldMapSection:(NSUInteger)arg0 ;
-(BOOL)tableView:(id)arg0 shouldHighlightRowAtIndexPath:(id)arg1 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_cellForReasonAtIndexPath:(id)arg0 inTableView:(id)arg1 ;
-(id)initWithPhysicalCardController:(id)arg0 context:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(void)_cancelButtonPressed:(id)arg0 ;
-(void)_nextButtonPressed:(id)arg0 ;
-(void)_reasonRowSelectedAtIndexPath:(id)arg0 inTableView:(id)arg1 ;
-(void)_updateNavigationButtons;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif