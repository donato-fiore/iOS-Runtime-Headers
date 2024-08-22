// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FIUIUNITMANAGER_H
#define FIUIUNITMANAGER_H

@class NSMutableDictionary, HKHealthStore;

#import <Foundation/Foundation.h>


@interface FIUIUnitManager : NSObject {
    NSMutableDictionary *_preferredUnits;
    HKHealthStore *_healthStore;
}




+(id)sharedManager;
-(CGFloat)distanceInDistanceUnit:(NSUInteger)arg0 forDistanceInMeters:(CGFloat)arg1 ;
-(CGFloat)distanceInMetersForDistanceInUserUnit:(CGFloat)arg0 distanceType:(NSUInteger)arg1 ;
-(CGFloat)distanceInUserDistanceUnitForDistanceInMeters:(CGFloat)arg0 distanceType:(NSUInteger)arg1 ;
-(CGFloat)paceWithDistance:(id)arg0 overDuration:(CGFloat)arg1 paceFormat:(NSInteger)arg2 ;
-(NSUInteger)userDistanceCyclingUnit;
-(NSUInteger)userDistanceElevationUnit;
-(NSUInteger)userDistanceUnitForDistanceType:(NSUInteger)arg0 ;
-(NSUInteger)userDistanceWalkingRunningUnit;
-(id)_loadPreferredUnitsFromDefaults;
-(id)_preferredHKUnitForQuantityType:(id)arg0 ;
-(id)initWithHealthStore:(id)arg0 ;
-(id)userActiveEnergyBurnedUnit;
-(id)userBasalEnergyBurnedUnit;
-(id)userDistanceCyclingHKUnit;
-(id)userDistanceElevationHKUnit;
-(id)userDistanceHKUnitForActivityType:(id)arg0 ;
-(id)userDistanceHKUnitForDistanceType:(NSUInteger)arg0 ;
-(id)userDistanceWalkingRunningHKUnit;
-(id)userLapLengthHKUnit;
-(void)_localeDidChange:(id)arg0 ;
-(void)_notifyUnitPreferencesChanged;
-(void)_setPreferredHKUnit:(id)arg0 forQuantityType:(id)arg1 ;
-(void)_storePreferredUnitsInDefaults:(id)arg0 ;
-(void)_updatePreferredUnits;
-(void)_userPreferencesDidChange:(id)arg0 ;
-(void)setPreferredUnitsForTesting:(id)arg0 ;
-(void)setUserActiveEnergyBurnedUnit:(id)arg0 ;
-(void)setUserBasalEnergyBurnedUnit:(id)arg0 ;
-(void)setUserDistanceCyclingUnit:(NSUInteger)arg0 ;
-(void)setUserDistanceUnit:(NSUInteger)arg0 forDistanceType:(NSUInteger)arg1 ;
-(void)setUserDistanceWalkingRunningUnit:(NSUInteger)arg0 ;


@end


#endif