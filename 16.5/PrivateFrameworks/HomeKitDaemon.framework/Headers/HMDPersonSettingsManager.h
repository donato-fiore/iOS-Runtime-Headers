// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDPERSONSETTINGSMANAGER_H
#define HMDPERSONSETTINGSMANAGER_H

@class HMFObject, NSUUID, NSString, HMFMessageDispatcher, NSURL;
@protocol HMFMessageReceiver, HMFLogging, HMDPersonSettingsManagerDependencyFactory, OS_dispatch_queue;


#import "HMCContext.h"
#import "HMDHome.h"

@interface HMDPersonSettingsManager : HMFObject <HMFMessageReceiver, HMFLogging>



@property (readonly, copy) NSUUID *UUID; // ivar: _UUID
@property (readonly) HMCContext *backingStoreContext; // ivar: _backingStoreContext
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSObject<HMDPersonSettingsManagerDependencyFactory> *dependencyFactory; // ivar: _dependencyFactory
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak) HMDHome *home; // ivar: _home
@property (readonly) HMFMessageDispatcher *messageDispatcher; // ivar: _messageDispatcher
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly) NSURL *personSettingsManagerMigrationFileURL;
@property (readonly) Class superclass;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)_allowedClassesForMigrationSettings;
+(id)logCategory;
-(BOOL)areClassificationNotificationsEnabledForPersonUUID:(id)arg0 ;
-(id)_localPersonClassificationSettings;
-(id)_setClassificationNotificationsEnabled:(id)arg0 forPersonUUID:(id)arg1 ;
-(id)initWithHome:(id)arg0 backingStoreContext:(id)arg1 dependencyFactory:(id)arg2 workQueue:(id)arg3 ;
-(id)initWithHome:(id)arg0 workQueue:(id)arg1 ;
-(id)logIdentifier;
-(void)_handleFetchClassificationNotificationsEnabledForPersonMessage:(id)arg0 ;
-(void)_handleSetClassificationNotificationsEnabledForPersonMessage:(id)arg0 ;
-(void)_maybeMigrateSettings;
-(void)_registerForMessages;
-(void)_removeMigrationSettingsFileFromDisk;
-(void)_setClassificationNotificationsEnabled:(BOOL)arg0 personUUID:(id)arg1 settings:(id)arg2 ;
-(void)configure;
-(void)remove;


@end


#endif