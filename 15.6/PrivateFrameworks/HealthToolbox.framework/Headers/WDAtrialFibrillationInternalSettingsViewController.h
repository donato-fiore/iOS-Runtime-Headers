// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WDATRIALFIBRILLATIONINTERNALSETTINGSVIEWCONTROLLER_H
#define WDATRIALFIBRILLATIONINTERNALSETTINGSVIEWCONTROLLER_H

@class HKTableViewController, HKHealthStore, HKKeyValueDomain, NSArray;



@interface WDAtrialFibrillationInternalSettingsViewController : HKTableViewController

@property (nonatomic) BOOL deletingSamples; // ivar: _deletingSamples
@property (readonly, nonatomic) HKHealthStore *healthStore; // ivar: _healthStore
@property (readonly, nonatomic) HKKeyValueDomain *keyValueDomain; // ivar: _keyValueDomain
@property (retain, nonatomic) NSArray *sections; // ivar: _sections


-(BOOL)tableView:(id)arg0 shouldHighlightRowAtIndexPath:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_buttonCellForTableView:(id)arg0 text:(id)arg1 ;
-(id)_featureAvailabilityStatusString;
-(id)_featureAvailabilityStringForFeatureName:(id)arg0 onboardedCountryCodeSupportedState:(id)arg1 ;
-(id)initWithHealthStore:(id)arg0 ;
-(id)makeFeatureStateViewControllerForFeatureIdentifier:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForFooterInSection:(NSInteger)arg1 ;
-(void)_addNewSample;
-(void)_deleteAllNotifications;
-(void)_deleteAllNotificationsAndTachograms;
-(void)_fakeNewAnalyzedSample;
-(void)_resetOnboarding;
-(void)_showFeatureStateViewControllerForFeatureIdentifier:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;


@end


#endif