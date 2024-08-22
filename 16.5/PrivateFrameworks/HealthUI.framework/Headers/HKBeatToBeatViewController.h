// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKBEATTOBEATVIEWCONTROLLER_H
#define HKBEATTOBEATVIEWCONTROLLER_H

@class NSArray, HKHealthStore;


#import "HKTableViewController.h"
#import "HKDisplayTypeController.h"
#import "HKUnitPreferenceController.h"

@interface HKBeatToBeatViewController : HKTableViewController

@property (retain, nonatomic) NSArray *bpmPoints; // ivar: _bpmPoints
@property (retain, nonatomic) HKDisplayTypeController *displayTypeController; // ivar: _displayTypeController
@property (retain, nonatomic) HKHealthStore *healthStore; // ivar: _healthStore
@property (retain, nonatomic) HKUnitPreferenceController *unitController; // ivar: _unitController


-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_displayStringForInstantaneousBPM:(CGFloat)arg0 ;
-(id)_displayStringForTime:(CGFloat)arg0 ;
-(id)_initWithHealthStore:(id)arg0 displayTypeController:(id)arg1 unitController:(id)arg2 ;
-(id)initWithHRVSample:(id)arg0 healthStore:(id)arg1 displayTypeController:(id)arg2 unitController:(id)arg3 ;
-(id)initWithHeartbeatSeriesSample:(id)arg0 healthStore:(id)arg1 displayTypeController:(id)arg2 unitController:(id)arg3 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(void)_addHeartbeatSeriesSample:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif