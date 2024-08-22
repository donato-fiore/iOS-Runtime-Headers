// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDAPPLEACCOUNTSETTINGS_H
#define HMDAPPLEACCOUNTSETTINGS_H

@class HMFObject, NSString;
@protocol HMFLogging, HMFLocking, OS_dispatch_queue;



@interface HMDAppleAccountSettings : HMFObject <HMFLogging>

 {
    id<HMFLocking> *_lock;
}


@property (nonatomic) int circleChangedNotificationToken; // ivar: _circleChangedNotificationToken
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // ivar: _clientQueue
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, getter=isEducationMode) BOOL educationMode;
@property (readonly, getter=isEphemeral) BOOL ephemeral; // ivar: _ephemeral
@property (readonly) NSUInteger hash;
@property (readonly, getter=isHomeEnabled) BOOL homeEnabled; // ivar: _homeEnabled
@property (readonly, getter=isKeychainSyncEnabled) BOOL keychainSyncEnabled; // ivar: _keychainSyncEnabled
@property (readonly, getter=isManaged) BOOL managed; // ivar: _managed
@property (nonatomic) BOOL migrated; // ivar: _migrated
@property (readonly) Class superclass;
@property (nonatomic) int viewMembershipChangedNotificationToken; // ivar: _viewMembershipChangedNotificationToken


+(BOOL)supportsCloudSettings;
+(id)logCategory;
+(id)sharedSettings;
-(id)attributeDescriptions;
-(id)init;
-(void)__migrateHomePreferences;
-(void)__registerForKeychainChangeNotifications;
-(void)__synchronize;
-(void)__updateHomeEnabled:(BOOL)arg0 userInitiated:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)_notifyClientsOfUpdatedHomeState:(BOOL)arg0 userInitiated:(BOOL)arg1 ;
-(void)_notifyClientsOfUpdatedKeychainSyncState:(BOOL)arg0 ;
-(void)dealloc;
-(void)enableHome:(BOOL)arg0 userInitiated:(BOOL)arg1 ;
-(void)synchronize;
-(void)updateHomeEnabled:(BOOL)arg0 completionHandler:(id)arg1 ;


@end


#endif