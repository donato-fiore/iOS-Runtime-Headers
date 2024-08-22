// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _HKINGESTSETTINGSVIEWCONTROLLER_H
#define _HKINGESTSETTINGSVIEWCONTROLLER_H

@class HKHealthServicesManager, NSMutableArray, NSUUID, HKHealthStore;
@protocol HKSwitchTableViewCellDelegate;


#import "HKTableViewController.h"
#import "HKDisplayTypeController.h"

@interface _HKIngestSettingsViewController : HKTableViewController <HKSwitchTableViewCellDelegate>

 {
    HKHealthServicesManager *_healthServicesManager;
    HKDisplayTypeController *_displayTypeController;
    NSMutableArray *_dataTypeNames;
    BOOL _deviceEnabled;
    BOOL _deviceFound;
}


@property (copy, nonatomic) NSUUID *deviceIdentifier; // ivar: _deviceIdentifier
@property (retain, nonatomic) HKHealthStore *healthStore; // ivar: _healthStore


-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_initWithHealthStore:(id)arg0 displayTypeController:(id)arg1 useInsetStyling:(BOOL)arg2 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForFooterInSection:(NSInteger)arg1 ;
-(void)fetchEnabledStatusForPeripheral;
-(void)reloadData:(id)arg0 ;
-(void)switchCellValueChanged:(id)arg0 value:(BOOL)arg1 ;
-(void)viewDidLoad;


@end


#endif