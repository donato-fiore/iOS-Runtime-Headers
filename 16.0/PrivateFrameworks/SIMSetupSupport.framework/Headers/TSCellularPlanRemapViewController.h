// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCELLULARPLANREMAPVIEWCONTROLLER_H
#define TSCELLULARPLANREMAPVIEWCONTROLLER_H

@class OBBoldTrayButton, NSIndexPath, CTDanglingPlanItem, NSString, CTCellularPlanItem, NSLayoutConstraint, UITableViewCell, NSArray;
@protocol UITableViewDataSource, UITableViewDelegate, UINavigationControllerDelegate, TSSetupFlowItem, TSSIMSetupFlowDelegate;


#import "TSOBTableWelcomeController.h"

@interface TSCellularPlanRemapViewController : TSOBTableWelcomeController <UITableViewDataSource, UITableViewDelegate, UINavigationControllerDelegate, TSSetupFlowItem>

 {
    OBBoldTrayButton *_doneButton;
}


@property (retain) NSIndexPath *chosenTargetCellularPlanItem; // ivar: _chosenTargetCellularPlanItem
@property (retain) CTDanglingPlanItem *danglingPlanItem; // ivar: _danglingPlanItem
@property (readonly, copy) NSString *debugDescription;
@property (retain) CTCellularPlanItem *defaultVoiceItem; // ivar: _defaultVoiceItem
@property (weak) NSObject<TSSIMSetupFlowDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property BOOL hasBackButton; // ivar: _hasBackButton
@property BOOL hasContinueButton; // ivar: _hasContinueButton
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSLayoutConstraint *heightAnchor; // ivar: _heightAnchor
@property (retain) UITableViewCell *sectionFooter; // ivar: _sectionFooter
@property (retain) NSArray *selectedPlanItems; // ivar: _selectedPlanItems
@property (readonly) Class superclass;


-(BOOL)canBeShownFromSuspendedState;
-(BOOL)tableView:(id)arg0 shouldIndentWhileEditingRowAtIndexPath:(id)arg1 ;
-(CGFloat)tableView:(id)arg0 estimatedHeightForRowAtIndexPath:(id)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForFooterInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 editingStyleForRowAtIndexPath:(id)arg1 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithBackButton:(BOOL)arg0 continueButton:(BOOL)arg1 danglingPlanItem:(id)arg2 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 viewForFooterInSection:(NSInteger)arg1 ;
-(void)_doneButtonTapped;
-(void)prepare:(id)arg0 ;
-(void)remapDanglingItem:(id)arg0 ;
-(void)tableView:(id)arg0 didDeselectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif