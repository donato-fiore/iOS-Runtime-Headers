// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKFEATUREAVAILABILITYINTERNALSETTINGSVIEWCONTROLLER_H
#define HKFEATUREAVAILABILITYINTERNALSETTINGSVIEWCONTROLLER_H

@class HKHealthStore, NPSManager, NSUserDefaults;


#import "HKTableViewController.h"
#import "HKFeatureAvailabilityInternalSettingsConfiguration.h"

@interface HKFeatureAvailabilityInternalSettingsViewController : HKTableViewController

@property (readonly, nonatomic) HKFeatureAvailabilityInternalSettingsConfiguration *configuration; // ivar: _configuration
@property (nonatomic, getter=isDeletingSamples) BOOL deletingSamples; // ivar: _deletingSamples
@property (readonly, nonatomic) HKHealthStore *healthStore; // ivar: _healthStore
@property (readonly, nonatomic) NPSManager *syncManager; // ivar: _syncManager
@property (readonly, nonatomic) NSUserDefaults *userDefaults; // ivar: _userDefaults


-(BOOL)_disabledOverriden;
-(BOOL)_featureEnabled;
-(BOOL)tableView:(id)arg0 shouldHighlightRowAtIndexPath:(id)arg1 ;
-(NSInteger)_offsetSectionForSection:(NSInteger)arg0 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_buttonCellForTableView:(id)arg0 ;
-(id)initWithHealthStore:(id)arg0 configuration:(id)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForFooterInSection:(NSInteger)arg1 ;
-(void)_disableOverride:(BOOL)arg0 ;
-(void)_enableFeature:(BOOL)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif