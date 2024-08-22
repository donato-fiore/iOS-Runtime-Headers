// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCELLULARPLANLABELSVIEWCONTROLLER_H
#define TSCELLULARPLANLABELSVIEWCONTROLLER_H

@class OBBoldTrayButton, NSString, NSLayoutConstraint, NSArray, UITableViewCell, NSMutableArray;
@protocol UITableViewDataSource, UITableViewDelegate, UINavigationControllerDelegate, TSSetupFlowItem, TSSIMSetupFlowDelegate;


#import "TSOBTableWelcomeController.h"
#import "TSCellularPlanLabelPickerTableViewController.h"

@interface TSCellularPlanLabelsViewController : TSOBTableWelcomeController <UITableViewDataSource, UITableViewDelegate, UINavigationControllerDelegate, TSSetupFlowItem>

 {
    OBBoldTrayButton *_doneButton;
}


@property BOOL allowDismiss; // ivar: _allowDismiss
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<TSSIMSetupFlowDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property BOOL forceDualSIMSetup; // ivar: _forceDualSIMSetup
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSLayoutConstraint *heightAnchor; // ivar: _heightAnchor
@property (readonly) NSString *iccid; // ivar: _iccid
@property (retain) TSCellularPlanLabelPickerTableViewController *labelPickerViewController; // ivar: _labelPickerViewController
@property (retain) NSArray *planItemBadges; // ivar: _planItemBadges
@property BOOL requireSetup; // ivar: _requireSetup
@property (retain) UITableViewCell *sectionFooter; // ivar: _sectionFooter
@property (retain) NSMutableArray *sortedPlanItemsWithPendingLabels; // ivar: _sortedPlanItemsWithPendingLabels
@property (readonly) Class superclass;


-(BOOL)canBeShownFromSuspendedState;
-(CGFloat)tableView:(id)arg0 heightForFooterInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)getPendingLabelAtIndex:(NSInteger)arg0 ;
-(id)getPlanItemByIndex:(NSInteger)arg0 ;
-(id)getPredefinedUserLabels;
-(id)initWithAllowDismiss:(BOOL)arg0 ;
-(id)initWithIccid:(id)arg0 forceDualSIMSetup:(BOOL)arg1 allowDismiss:(BOOL)arg2 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 viewForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 viewForHeaderInSection:(NSInteger)arg1 ;
-(void)_cancelButtonTapped;
-(void)_doneButtonTapped;
-(void)prepare:(id)arg0 ;
-(void)prepareLabels:(id)arg0 ;
-(void)savePlanLabels:(id)arg0 ;
-(void)setPendingLabel:(id)arg0 forPlanItem:(id)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif