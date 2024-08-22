// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKWORKOUTACTIVITYVIEWCONTROLLER_H
#define HKWORKOUTACTIVITYVIEWCONTROLLER_H

@class HKWorkoutActivity, NSMutableArray;


#import "HKTableViewController.h"
#import "HKDisplayTypeController.h"
#import "HKUnitPreferenceController.h"

@interface HKWorkoutActivityViewController : HKTableViewController

@property (retain, nonatomic) HKWorkoutActivity *activity; // ivar: _activity
@property (retain, nonatomic) HKDisplayTypeController *displayTypeController; // ivar: _displayTypeController
@property (retain, nonatomic) NSMutableArray *sections; // ivar: _sections
@property (retain, nonatomic) HKUnitPreferenceController *unitPreferenceController; // ivar: _unitPreferenceController


-(CGFloat)tableView:(id)arg0 estimatedHeightForRowAtIndexPath:(id)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForHeaderInSection:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithActivity:(id)arg0 displayTypeController:(id)arg1 unitController:(id)arg2 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(void)_addSectionIfNotNil:(id)arg0 ;
-(void)_loadSections;


@end


#endif