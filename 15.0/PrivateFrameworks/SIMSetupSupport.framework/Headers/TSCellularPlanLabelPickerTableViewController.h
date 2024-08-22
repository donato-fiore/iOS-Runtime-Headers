// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCELLULARPLANLABELPICKERTABLEVIEWCONTROLLER_H
#define TSCELLULARPLANLABELPICKERTABLEVIEWCONTROLLER_H

@class UITableViewController, CTCellularPlanItem, CTUserLabel, NSIndexPath, NSString, NSArray;
@protocol UITextFieldDelegate;



@interface TSCellularPlanLabelPickerTableViewController : UITableViewController <UITextFieldDelegate>



@property (retain) CTCellularPlanItem *associatedPlanItem; // ivar: _associatedPlanItem
@property (readonly) CTUserLabel *chosenLabel;
@property (retain) NSIndexPath *chosenLabelIndexPath; // ivar: _chosenLabelIndexPath
@property (retain) CTUserLabel *customLabel; // ivar: _customLabel
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) CTUserLabel *initialLabel; // ivar: _initialLabel
@property (retain) NSArray *predefinedUserLabels; // ivar: _predefinedUserLabels
@property (readonly) Class superclass;


-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)init;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(void)_doneButtonTapped;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif