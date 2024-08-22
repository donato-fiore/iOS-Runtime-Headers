// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WDUNITPREFERENCEVIEWCONTROLLER_H
#define WDUNITPREFERENCEVIEWCONTROLLER_H

@class HKTableViewController, NSSet, HKDisplayType, HKUnitPreferenceController, NSArray, UIBarButtonItem, UIFont;



@interface WDUnitPreferenceViewController : HKTableViewController {
    NSSet *_units;
    HKDisplayType *_displayType;
    HKUnitPreferenceController *_unitController;
    NSArray *_rows;
    NSInteger _selectedRowIndex;
    NSInteger _originalSelectedRowIndex;
    UIBarButtonItem *_doneButton;
    UIBarButtonItem *_cancelButton;
}


@property (retain, nonatomic) UIFont *bodyFont; // ivar: _bodyFont
@property (nonatomic) BOOL requiresChangeConfirmation; // ivar: _requiresChangeConfirmation


-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_sortedUnitPreferenceRows;
-(id)initWithUnits:(id)arg0 displayType:(id)arg1 unitController:(id)arg2 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForFooterInSection:(NSInteger)arg1 ;
-(void)_cancelButtonTapped:(id)arg0 ;
-(void)_doneButtonTapped:(id)arg0 ;
-(void)_updateCurrentUnit:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif