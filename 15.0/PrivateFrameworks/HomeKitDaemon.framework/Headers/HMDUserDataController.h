// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDUSERDATACONTROLLER_H
#define HMDUSERDATACONTROLLER_H

@class NSArray, NSMutableSet, HMBModel, NSUUID, NSString, HMFUnfairLock, NSDictionary, HMFTimer;
@protocol HMDAssistantAccessControlModelUpdateReceiver, HMDMediaContentProfileAccessControlModelUpdateReceiver, HMFLogging, HMFTimerDelegate, OS_dispatch_queue, HMDUserDataControllerDelegate, HMDSettingsControllerProtocol, HMDUserDataControllerTimerCreator;

#import <Foundation/Foundation.h>


@interface HMDUserDataController : NSObject <HMDAssistantAccessControlModelUpdateReceiver, HMDMediaContentProfileAccessControlModelUpdateReceiver, HMFLogging, HMFTimerDelegate>

 {
    BOOL _isModifyingState;
}


@property (readonly, copy) NSArray *assistantAccessControlAccessoriesToEncode;
@property (retain) NSMutableSet *assistantAccessControlAccessoryUUIDs; // ivar: _assistantAccessControlAccessoryUUIDs
@property BOOL assistantAccessControlActivityNotificationsEnabledForPersonalRequests; // ivar: _assistantAccessControlActivityNotificationsEnabledForPersonalRequests
@property (readonly, copy) HMBModel *assistantAccessControlModelToReset;
@property (retain) NSUUID *assistantAccessControlModelUUID; // ivar: _assistantAccessControlModelUUID
@property BOOL assistantAccessControlRequiresAuthenticationForSecureRequests; // ivar: _assistantAccessControlRequiresAuthenticationForSecureRequests
@property (readonly) NSObject<OS_dispatch_queue> *clientQueue; // ivar: _clientQueue
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak) NSObject<HMDUserDataControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUUID *homeUUID; // ivar: _homeUUID
@property (readonly) BOOL isInitialized;
@property (readonly) HMFUnfairLock *lock; // ivar: _lock
@property (retain) NSMutableSet *mediaContentProfileAccessControlAccessories; // ivar: _mediaContentProfileAccessControlAccessories
@property (readonly, copy) NSArray *mediaContentProfileAccessControlAccessoriesToEncode;
@property (retain) NSUUID *mediaContentProfileAccessControlModelUUID; // ivar: _mediaContentProfileAccessControlModelUUID
@property (readonly, copy) NSDictionary *privateSettingValuesByKeyPathForAWD;
@property (readonly) NSObject<HMDSettingsControllerProtocol> *privateSettingsController; // ivar: _privateSettingsController
@property (retain) NSUUID *privateSettingsRootUUID; // ivar: _privateSettingsRootUUID
@property (retain, nonatomic) HMFTimer *privateZoneFirstLoadTimer; // ivar: _privateZoneFirstLoadTimer
@property (readonly, copy) NSDictionary *sharedSettingValuesByKeyPathForAWD;
@property (readonly) NSObject<HMDSettingsControllerProtocol> *sharedSettingsController; // ivar: _sharedSettingsController
@property (retain) NSUUID *sharedSettingsRootUUID; // ivar: _sharedSettingsRootUUID
@property (retain, nonatomic) HMFTimer *sharedZoneFirstLoadTimer; // ivar: _sharedZoneFirstLoadTimer
@property NSUInteger state; // ivar: _state
@property (readonly) Class superclass;
@property (readonly) NSObject<HMDUserDataControllerTimerCreator> *timerCreator; // ivar: _timerCreator
@property (readonly) NSUUID *userUUID; // ivar: _userUUID


+(id)logCategory;
-(id)initWithDelegate:(id)arg0 queue:(id)arg1 userID:(id)arg2 homeID:(id)arg3 sharedSettingsController:(id)arg4 privateSettingsController:(id)arg5 ;
-(id)initWithDelegate:(id)arg0 queue:(id)arg1 userID:(id)arg2 homeID:(id)arg3 sharedSettingsController:(id)arg4 privateSettingsController:(id)arg5 timerCreator:(id)arg6 ;
-(id)logIdentifier;
-(void)_invalidatePrivateZoneFirstLoadTimer;
-(void)_invalidateSharedZoneFirstLoadTimer;
-(void)_startPrivateZoneFirstLoadTimer;
-(void)_startSharedZoneFirstLoadTimer;
-(void)_startupPrivateZone;
-(void)_startupSharedZone;
-(void)assistantAccessControlModelRemoved:(id)arg0 completion:(id)arg1 ;
-(void)assistantAccessControlModelUpdated:(id)arg0 previousModel:(id)arg1 completion:(id)arg2 ;
-(void)configure;
-(void)encodeWithCoder:(id)arg0 ;
-(void)eventDidInitializePrivateZone;
-(void)eventDidInitializeSharedZone;
-(void)handleAssistantAccessControlAccessoryUUIDsUpdated:(id)arg0 requireAuthenticationForSecureRequests:(BOOL)arg1 activityNotificationsEnabledForPersonalRequests:(BOOL)arg2 completion:(id)arg3 ;
-(void)handleMediaContentProfileAccessControlUpdatedAccessoryUUIDs:(id)arg0 completion:(id)arg1 ;
-(void)handleRemovedAccessory:(id)arg0 ;
-(void)handleStartForZoneController:(id)arg0 ;
-(void)initializePrivateZoneController:(id)arg0 userDataModel:(id)arg1 ;
-(void)initializeSharedZoneController:(id)arg0 userDataModel:(id)arg1 ;
-(void)mediaContentProfileAccessControlModelRemoved:(id)arg0 completion:(id)arg1 ;
-(void)mediaContentProfileAccessControlModelUpdated:(id)arg0 previousModel:(id)arg1 completion:(id)arg2 ;
-(void)performFirstRunOperationsOnPrivateZoneController:(id)arg0 ;
-(void)performFirstRunOperationsOnSharedZoneController:(id)arg0 ;
-(void)timerDidFire:(id)arg0 ;


@end


#endif