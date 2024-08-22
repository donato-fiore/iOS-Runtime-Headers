// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDUNITPREFERENCESMANAGER_H
#define HDUNITPREFERENCESMANAGER_H

@class NSArray, HKObserverSet;

#import <Foundation/Foundation.h>

#import "HDProfile.h"

@interface HDUnitPreferencesManager : NSObject {
    HDProfile *_profile;
    NSArray *_versionedUnitPreferences;
    HKObserverSet *_observers;
    os_unfair_lock_s _lock;
}




-(BOOL)removePreferredUnitForType:(id)arg0 error:(*id)arg1 ;
-(BOOL)setPreferredUnit:(id)arg0 forType:(id)arg1 error:(*id)arg2 ;
-(id)initWithProfile:(id)arg0 ;
-(id)unitPreferencesDictionaryForTypes:(id)arg0 version:(NSInteger)arg1 authorizationServer:(id)arg2 error:(*id)arg3 ;
-(id)unitTesting_preferredUnitForType:(id)arg0 error:(*id)arg1 ;
-(void)_localeDidChange:(id)arg0 ;
-(void)addUnitPreferenceObserver:(id)arg0 queue:(id)arg1 ;
-(void)dealloc;
-(void)removeUnitPreferenceObserver:(id)arg0 ;
-(void)setPreferredUnitToDefaultIfNotSetForType:(id)arg0 ;
-(void)unitTesting_resetUnits;


@end


#endif