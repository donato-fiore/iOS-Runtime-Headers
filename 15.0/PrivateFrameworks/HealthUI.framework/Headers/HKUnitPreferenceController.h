// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKUNITPREFERENCECONTROLLER_H
#define HKUNITPREFERENCECONTROLLER_H

@class NSMutableDictionary, HKHealthStore;

#import <Foundation/Foundation.h>


@interface HKUnitPreferenceController : NSObject {
    NSMutableDictionary *_unitStrings;
    NSMutableDictionary *_unitPreferencesByObjectType;
    os_unfair_lock_s _lock;
}


@property (retain, nonatomic) HKHealthStore *healthStore; // ivar: _healthStore


-(CGFloat)scaleFactorForYAxisLabeling:(id)arg0 ;
-(id)_changedKeysBetweenDictionary:(id)arg0 andDictionary:(id)arg1 ;
-(id)_displayNameKey:(id)arg0 withNumber:(BOOL)arg1 ;
-(id)_displayNameKeyForDisplayType:(id)arg0 withNumber:(BOOL)arg1 ;
-(id)_displayNameKeyForDisplayType:(id)arg0 withNumber:(BOOL)arg1 nameContext:(NSInteger)arg2 ;
-(id)_displayNameKeyForUnit:(id)arg0 nameContext:(NSInteger)arg1 ;
-(id)_generateDefaultHKUnitPreferences;
-(id)_lock_unitForDisplayType:(id)arg0 ;
-(id)_lock_updatePreferredUnits:(id)arg0 ;
-(id)_longDisplayNameForUnit:(id)arg0 ;
-(id)_longDisplayNameOverrideForDisplayType:(id)arg0 ;
-(id)_unitDisplayNameKeyForDisplayType:(id)arg0 nameContext:(NSInteger)arg1 ;
-(id)displayRangeForDisplayType:(id)arg0 ;
-(id)initWithHealthStore:(id)arg0 ;
-(id)localizedDisplayNameForDisplayType:(id)arg0 ;
-(id)localizedDisplayNameForDisplayType:(id)arg0 value:(id)arg1 ;
-(id)localizedDisplayNameForDisplayType:(id)arg0 value:(id)arg1 nameContext:(NSInteger)arg2 ;
-(id)localizedDisplayNameForUnit:(id)arg0 value:(id)arg1 ;
-(id)localizedDisplayNameForUnit:(id)arg0 value:(id)arg1 nameContext:(NSInteger)arg2 ;
-(id)localizedHealthUIStringForDisplayType:(id)arg0 key:(id)arg1 value:(id)arg2 ;
-(id)localizedLongDisplayNameForDisplayType:(id)arg0 ;
-(id)unitForDisplayType:(id)arg0 ;
-(void)_fetchHKUnitPreferencesWithAttempt:(NSInteger)arg0 ;
-(void)_initHKUnitPreferences;
-(void)_localeDidChange:(id)arg0 ;
-(void)_lock_updatePreferredUnit:(id)arg0 forDisplayType:(id)arg1 ;
-(void)_postNotificationWithChangedKeys:(id)arg0 ;
-(void)_refreshHKUnitPreferencesWithCompletion:(id)arg0 ;
-(void)_unitPreferencesDidUpdate:(id)arg0 ;
-(void)dealloc;
-(void)updatePreferredUnit:(id)arg0 forDisplayType:(id)arg1 ;


@end


#endif