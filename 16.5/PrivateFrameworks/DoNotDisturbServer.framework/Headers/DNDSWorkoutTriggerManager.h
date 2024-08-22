// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DNDSWORKOUTTRIGGERMANAGER_H
#define DNDSWORKOUTTRIGGERMANAGER_H

@class NSMutableDictionary, NPSDomainAccessor, NPSManager, NSString;
@protocol DNDSBiomeTriggerManager, OS_dispatch_queue, DNDSWorkoutTriggerManagerDataSource><DNDSBiomeTriggerManagerDataSource;

#import <Foundation/Foundation.h>


@interface DNDSWorkoutTriggerManager : NSObject <DNDSBiomeTriggerManager>

 {
    NSObject<OS_dispatch_queue> *_biomeQueue;
    NSMutableDictionary *_sinks;
    os_unfair_lock_s _lock;
    NPSDomainAccessor *_accessor;
    NPSManager *_npsManager;
    NSObject<OS_dispatch_queue> *_npsQueue;
}


@property (weak, nonatomic) NSObject<DNDSWorkoutTriggerManagerDataSource><DNDSBiomeTriggerManagerDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_isWorkoutDNDNanoPreferenceEnabled;
-(BOOL)_isWorkoutTriggerEnabledForModeConfiguration:(id)arg0 ;
-(id)_accessor;
-(id)_assertionIdentifierForHealthKitWorkoutEvent:(id)arg0 ;
-(id)init;
-(void)_configureWorkoutTriggerWithMode:(id)arg0 ;
-(void)_migrateWorkoutDNDNanoPreference;
-(void)_npsQueue_refreshForNanoPreferenceChange;
-(void)_refresh;
-(void)_refreshForNanoPreferenceChange;
-(void)_refreshMigratingIfNecessary;
-(void)_refreshWithMode:(id)arg0 event:(id)arg1 ;
-(void)_setWorkoutDNDNanoPreferenceEnabled:(BOOL)arg0 ;
-(void)_updateNanoPreferencesForRefreshWithModeConfiguration:(id)arg0 ;
-(void)dealloc;
-(void)pairedDeviceDidChange;
-(void)refresh;
-(void)refreshMigratingIfNecessary;


@end


#endif