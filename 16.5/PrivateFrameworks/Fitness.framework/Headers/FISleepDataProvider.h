// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FISLEEPDATAPROVIDER_H
#define FISLEEPDATAPROVIDER_H

@class HKSPSleepStore, NSUserDefaults, NSString, NSDate;
@protocol HKSPSleepStoreObserver, FISleepDataProviderDelegate;

#import <Foundation/Foundation.h>

#import "FISleepUserDay.h"

@interface FISleepDataProvider : NSObject <HKSPSleepStoreObserver>

 {
    HKSPSleepStore *_sleepStore;
    id<FISleepDataProviderDelegate> *_delegate;
    NSUInteger _currentSleepScheduleState;
    NSUserDefaults *_userDefaults;
    os_unfair_lock_s _lock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isGoodMorningAlertNotificationEnabled; // ivar: _isGoodMorningAlertNotificationEnabled
@property (nonatomic) BOOL isUserAwake; // ivar: _isUserAwake
@property (copy, nonatomic) NSDate *lastAlarmWakeUpDate; // ivar: _lastAlarmWakeUpDate
@property (copy, nonatomic) NSDate *lastGoodMorningDismissedDate; // ivar: _lastGoodMorningDismissedDate
@property (retain, nonatomic) FISleepUserDay *sleepUserDay; // ivar: _sleepUserDay
@property (readonly) Class superclass;


-(BOOL)_isDate:(id)arg0 within24HoursOfDate:(id)arg1 ;
-(BOOL)_updateGoodMorningAlertNotificationEnabledIfNeeded:(BOOL)arg0 ;
-(BOOL)_updateLastAlarmWakeUpDateIfNeeded:(id)arg0 ;
-(BOOL)_updateLastGoodMorningDismissedDateIfNeeded:(id)arg0 ;
-(id)_fetchCachedSleepUserDay;
-(id)initWithSleepStore:(id)arg0 delegate:(id)arg1 ;
-(void)_cacheSleepUserDay:(id)arg0 ;
-(void)_clearCurrentSleepScheduleState;
-(void)_clearSleepUserDay;
-(void)_fetchGoodMorningAlertNotificationEnabled;
-(void)_fetchLastAlarmWakeUpDate;
-(void)_fetchLastGoodMorningDismissedDate;
-(void)_initialLoadSleepUserDay;
-(void)_setEmptySleepUserDay:(id)arg0 ;
-(void)_setUserDefaults:(id)arg0 ;
-(void)_updateCurrentSleepScheduleState;
-(void)_updateSleepUserDay;
-(void)_updateSleepUserDayFromWakeUp:(id)arg0 currentDate:(id)arg1 ;
-(void)_updateSleepUserDayFromWindDownOrBedtime:(id)arg0 currentDate:(id)arg1 ;
-(void)activate;
-(void)dealloc;
-(void)sleepStore:(id)arg0 sleepEventRecordDidChange:(id)arg1 ;
-(void)sleepStore:(id)arg0 sleepModeOnDidChange:(BOOL)arg1 ;
-(void)sleepStore:(id)arg0 sleepScheduleDidChange:(id)arg1 ;
-(void)sleepStore:(id)arg0 sleepScheduleModelDidChange:(id)arg1 ;
-(void)sleepStore:(id)arg0 sleepScheduleStateDidChange:(NSUInteger)arg1 ;
-(void)sleepStore:(id)arg0 sleepSettingsDidChange:(id)arg1 ;


@end


#endif