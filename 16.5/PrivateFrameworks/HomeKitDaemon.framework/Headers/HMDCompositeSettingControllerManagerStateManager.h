// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDCOMPOSITESETTINGCONTROLLERMANAGERSTATEMANAGER_H
#define HMDCOMPOSITESETTINGCONTROLLERMANAGERSTATEMANAGER_H

@class NSMutableDictionary, NSString, NSUUID;
@protocol HMFLogging, HMDCompositeSettingControllerManagerStateManager, HMDCompositeSettingControllerManagerStateManagerDataSource, HMDCompositeSettingControllerManagerStateTransitionDelegate, HMDCompositeSettingNotificationRegistrationProviding;

#import <Foundation/Foundation.h>


@interface HMDCompositeSettingControllerManagerStateManager : NSObject <HMFLogging, HMDCompositeSettingControllerManagerStateManager>

 {
    os_unfair_lock_s _lock;
    NSMutableDictionary *_homeUUIDToState;
}


@property (readonly, weak) NSObject<HMDCompositeSettingControllerManagerStateManagerDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak) NSObject<HMDCompositeSettingControllerManagerStateTransitionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger notificationOptions; // ivar: _notificationOptions
@property (readonly) NSObject<HMDCompositeSettingNotificationRegistrationProviding> *notificationRegistrationProvider; // ivar: _notificationRegistrationProvider
@property (readonly) Class superclass;
@property (readonly, copy) NSUUID *uuid; // ivar: _uuid


+(id)logCategory;
-(NSInteger)stateForHomeUUID:(id)arg0 ;
-(id)initWithDataSource:(id)arg0 notificationRegistrationProvider:(id)arg1 subscribeWithOptions:(NSUInteger)arg2 delegate:(id)arg3 uuid:(id)arg4 ;
-(id)logIdentifier;
-(void)_computeResidentStateChangeForHome:(id)arg0 ;
-(void)_createStateForHomeUUIDIfNotExist:(id)arg0 ;
-(void)_handleAccessoryLanguagesChangedNotification:(id)arg0 ;
-(void)_handleAccessoryRemovedNotification:(id)arg0 ;
-(void)_handleCompositeSettingsControllerConfiguredNotification:(id)arg0 ;
-(void)_handleHomeAdded:(id)arg0 ;
-(void)_handleResidentDeviceUpdated:(id)arg0 ;
-(void)_handleSiriEndpointProfileCreation:(id)arg0 ;
-(void)_handleSiriEndpointProfileSettingsUpdate:(id)arg0 ;
-(void)_registerForNotifications;
-(void)_unregisterForNotifications;


@end


#endif