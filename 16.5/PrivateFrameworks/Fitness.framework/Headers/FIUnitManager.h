// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FIUNITMANAGER_H
#define FIUNITMANAGER_H

@class HKHealthStore, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface FIUnitManager : NSObject {
    HKHealthStore *_healthStore;
    NSMutableDictionary *_preferredUnits;
}




-(id)_loadPreferredUnitsFromDefaults;
-(id)_preferredHKUnitForQuantityType:(id)arg0 ;
-(id)initWithHealthStore:(id)arg0 ;
-(id)userActiveEnergyBurnedUnit;
-(id)userBasalEnergyBurnedUnit;
-(id)userDistanceWalkingRunningHKUnit;
-(id)userLapLengthHKUnit;
-(void)_localeDidChange:(id)arg0 ;
-(void)_notifyUnitPreferencesChanged;
-(void)_setPreferredHKUnit:(id)arg0 forQuantityType:(id)arg1 ;
-(void)_storePreferredUnitsInDefaults:(id)arg0 ;
-(void)_updatePreferredUnits;
-(void)_userPreferencesDidChange:(id)arg0 ;
-(void)setUserActiveEnergyBurnedUnit:(id)arg0 ;
-(void)setUserBasalEnergyBurnedUnit:(id)arg0 ;


@end


#endif