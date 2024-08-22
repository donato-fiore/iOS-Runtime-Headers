// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WDREMOTEFEATUREAVAILABILITYINTERNALSETTINGSVIEWCONTROLLER_H
#define WDREMOTEFEATUREAVAILABILITYINTERNALSETTINGSVIEWCONTROLLER_H

@class HKTableViewController, NSSet, NSUserDefaults, NSDictionary, NSArray;



@interface WDRemoteFeatureAvailabilityInternalSettingsViewController : HKTableViewController

@property (retain, nonatomic) NSSet *conditions; // ivar: _conditions
@property (nonatomic) int featureAvailabilityConditionsDidUpdateNotificationToken; // ivar: _featureAvailabilityConditionsDidUpdateNotificationToken
@property (readonly, nonatomic) NSUserDefaults *userDefaults; // ivar: _userDefaults
@property (retain, nonatomic) NSDictionary *userDefaultsContent; // ivar: _userDefaultsContent
@property (retain, nonatomic) NSArray *userDefaultsContentKeys; // ivar: _userDefaultsContentKeys


-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)currentlocaleCountryCode;
-(id)evaluateRulesForCondition:(id)arg0 ;
-(id)initWithConditions:(id)arg0 ;
-(id)jsonStringFromDictionary:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForFooterInSection:(NSInteger)arg1 ;
-(void)_featureAvailabilityConditionsDidUpdate;
-(void)_registerForNotifications;
-(void)_unregisterForNotifications;
-(void)dealloc;
-(void)reloadUserDefaultsContent;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif