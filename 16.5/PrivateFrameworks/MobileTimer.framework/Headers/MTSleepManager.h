// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTSLEEPMANAGER_H
#define MTSLEEPMANAGER_H

@class NSString, HKSPFeatureAvailabilityStore, HKHealthStore, HKSPSleepStore;
@protocol MTSource, HKSPSleepStoreObserver, MTAlarmObserver, MTAlarmStorage, MTPersistence;

#import <Foundation/Foundation.h>


@interface MTSleepManager : NSObject <MTSource, HKSPSleepStoreObserver, MTAlarmObserver>



@property (readonly, nonatomic) NSObject<MTAlarmStorage> *alarmStorage; // ivar: _alarmStorage
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) HKSPFeatureAvailabilityStore *featureStore; // ivar: _featureStore
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HKHealthStore *healthStore; // ivar: _healthStore
@property (retain, nonatomic) NSObject<MTPersistence> *persistence; // ivar: _persistence
@property (retain, nonatomic) HKSPSleepStore *sleepStore; // ivar: _sleepStore
@property (copy, nonatomic) id *sleepStoreProvider; // ivar: _sleepStoreProvider
@property (readonly) Class superclass;


+(id)nextSleepAlarm;
-(BOOL)_didCompleteSleepOnboarding;
-(BOOL)watchSleepFeaturesEnabled;
-(id)initWithAlarmStorage:(id)arg0 ;
// -(id)initWithAlarmStorage:(id)arg0 sleepStoreProvider:(id)arg1 featureStoreProvider:(unk)arg2 healthStore:(id)arg3 persistence:(unk)arg4  ;
-(id)sourceIdentifier;
-(void)markSleepMigrationComplete;
-(void)resetSleepAlarmSnoozeState;
-(void)sleepStore:(id)arg0 sleepSettingsDidChange:(id)arg1 ;
-(void)source:(id)arg0 didAddAlarms:(id)arg1 ;
-(void)source:(id)arg0 didChangeNextAlarm:(id)arg1 ;
-(void)source:(id)arg0 didDismissAlarm:(id)arg1 dismissAction:(NSUInteger)arg2 ;
-(void)source:(id)arg0 didFireAlarm:(id)arg1 triggerType:(NSUInteger)arg2 ;
-(void)source:(id)arg0 didRemoveAlarms:(id)arg1 ;
-(void)source:(id)arg0 didSnoozeAlarm:(id)arg1 snoozeAction:(NSUInteger)arg2 ;
-(void)source:(id)arg0 didUpdateAlarms:(id)arg1 ;
-(void)updateSleepAlarms;


@end


#endif