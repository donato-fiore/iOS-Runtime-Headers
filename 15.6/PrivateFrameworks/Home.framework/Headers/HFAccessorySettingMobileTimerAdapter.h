// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFACCESSORYSETTINGMOBILETIMERADAPTER_H
#define HFACCESSORYSETTINGMOBILETIMERADAPTER_H

@class HMAccessoryCollectionSetting, NAFuture, NSSet, COAlarmManager, NSMutableSet, NSHashTable, NSUserDefaults;


#import "HFAccessorySettingAdapter.h"

@interface HFAccessorySettingMobileTimerAdapter : HFAccessorySettingAdapter

@property (readonly, nonatomic) HMAccessoryCollectionSetting *alarmCollectionSetting;
@property (retain, nonatomic) NAFuture *alarmManagerForSynchronizationFuture; // ivar: _alarmManagerForSynchronizationFuture
@property (readonly, copy, nonatomic) NSSet *alarmsWithPendingEdits;
@property (readonly, nonatomic) COAlarmManager *coordinationAlarmManager; // ivar: _coordinationAlarmManager
@property (readonly, copy, nonatomic) NSMutableSet *internalAlarmsBeingAdded; // ivar: _internalAlarmsBeingAdded
@property (readonly, copy, nonatomic) NSMutableSet *internalAlarmsBeingRemoved; // ivar: _internalAlarmsBeingRemoved
@property (readonly, copy, nonatomic) NSMutableSet *internalAlarmsBeingUpdated; // ivar: _internalAlarmsBeingUpdated
@property (readonly, nonatomic) BOOL isAdapterReady;
@property (retain, nonatomic) NSHashTable *observers; // ivar: _observers
@property (readonly, nonatomic) NAFuture *setupAccessoryAdapterModeFuture; // ivar: _setupAccessoryAdapterModeFuture
@property (readonly, nonatomic) BOOL shouldSynchronizeMobileTimerToHomeKit;
@property (retain, nonatomic) NSUserDefaults *soundBoardPrefs; // ivar: _soundBoardPrefs


-(id)_beginMonitoringSettingsKeyPath:(id)arg0 ;
-(id)_synchronizeHomeKitToMobileTimer;
-(id)_synchronizeMobileTimerToHomeKitWithChangeType:(NSUInteger)arg0 ;
-(id)addAlarm:(id)arg0 ;
-(id)alarmManagerAlarms;
-(id)alarmSettingsCurrentItemsFuture;
-(id)allAlarms;
-(id)allAlarmsFuture;
-(id)initWithHomeKitSettingsVendor:(id)arg0 keyPaths:(id)arg1 mode:(NSUInteger)arg2 updateHandler:(id)arg3 ;
-(id)initWithHomeKitSettingsVendor:(id)arg0 keyPaths:(id)arg1 updateHandler:(id)arg2 ;
-(id)initWithHomeKitSettingsVendor:(id)arg0 mode:(NSUInteger)arg1 ;
-(id)removeAlarm:(id)arg0 ;
-(id)updateAlarm:(id)arg0 ;
-(void)_alarmWasAdded:(id)arg0 ;
-(void)_alarmWasDeleted:(id)arg0 ;
-(void)_alarmWasUpdated:(id)arg0 ;
-(void)_notifyObserversOfUpdates;
-(void)_respondToAlarmManagerUpdate;
-(void)_setupDebugHandler;
-(void)_submitAnalyticsForAddedAlarm:(id)arg0 success:(BOOL)arg1 ;
-(void)_submitAnalyticsForDeletedAlarm:(id)arg0 success:(BOOL)arg1 ;
-(void)_submitAnalyticsForUpdatedAlarm:(id)arg0 success:(BOOL)arg1 ;
-(void)addObserver:(id)arg0 ;
-(void)homeKitSettingWasUpdated:(id)arg0 value:(id)arg1 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif