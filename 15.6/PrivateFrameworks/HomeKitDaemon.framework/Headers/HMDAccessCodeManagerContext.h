// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDACCESSCODEMANAGERCONTEXT_H
#define HMDACCESSCODEMANAGERCONTEXT_H

@class NSUUID, NSArray, NSString, HMFMessageDispatcher, NSNotificationCenter;
@protocol HMFLogging, HMDAccessCodeManagerContext, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HMDHomeAdministratorHandler.h"
#import "HMDBulletinBoard.h"
#import "HMDAccessCodeDemoDataMocker.h"
#import "HMDHome.h"
#import "HMDRemoteMessageForwarder.h"
#import "HMDDevice.h"
#import "HMDHomeWalletKeyManager.h"

@interface HMDAccessCodeManagerContext : NSObject <HMFLogging, HMDAccessCodeManagerContext>



@property (readonly, copy) NSUUID *UUID; // ivar: _UUID
@property (readonly) NSArray *UUIDsOfAccessoriesSupportingAccessCodes;
@property (readonly) NSArray *UUIDsOfUsersWithoutAccessCodes;
@property (readonly) NSArray *accessoriesSupportingAccessCodes;
@property (readonly) NSInteger accessoryReadWriteRetries;
@property (readonly) CGFloat accessoryReadWriteRetryTimeInterval;
@property (readonly) HMDHomeAdministratorHandler *administratorHandler;
@property (readonly) HMDBulletinBoard *bulletinBoard; // ivar: _bulletinBoard
@property (readonly, getter=isCurrentDeviceOwnerController) BOOL currentDeviceOwnerController;
@property (readonly, getter=isCurrentDeviceOwnerUser) BOOL currentDeviceOwnerUser;
@property (readonly, getter=isCurrentDevicePrimaryResident) BOOL currentDevicePrimaryResident;
@property (readonly, getter=isCurrentDeviceResidentCapable) BOOL currentDeviceResidentCapable;
@property (readonly, getter=isCurrentDeviceWatch) BOOL currentDeviceWatch;
@property (readonly) CGFloat dataCleanUpCheckTimerInterval;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) HMDAccessCodeDemoDataMocker *demoDataMocker; // ivar: _demoDataMocker
@property (readonly, getter=isDemoDataMockerEnabled) BOOL demoDataMockerEnabled;
@property (readonly, copy) NSString *description;
@property (readonly, getter=isFeatureEnabled) BOOL featureEnabled;
@property (readonly) NSUInteger hash;
@property (readonly, weak) HMDHome *home; // ivar: _home
@property (readonly, getter=isHomeAppForegrounded) BOOL homeAppForegrounded;
@property (readonly, getter=hasHomeOnboardedForAccessCodes) BOOL homeOnboardedForAccessCodes;
@property (readonly) HMFMessageDispatcher *messageDispatcher; // ivar: _messageDispatcher
@property (readonly) NSNotificationCenter *notificationCenter;
@property (readonly) BOOL primaryResidentSupportsAccessCodes;
@property (readonly) HMDRemoteMessageForwarder *remoteMessageForwarder; // ivar: _remoteMessageForwarder
@property (readonly) CGFloat removedUserAccessCodeTimeToLive;
@property (readonly) HMDDevice *residentCommunicationHandlerPreferredDevice;
@property (readonly) NSInteger residentDataSyncVerificationRetries;
@property (readonly) CGFloat residentDataSyncVerificationRetryTimeInterval;
@property (readonly, getter=isResidentSupported) BOOL residentSupported;
@property (readonly) Class superclass;
@property (readonly) HMDHomeWalletKeyManager *walletKeyManager;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)logCategory;
-(id)_performMockedReadRequests:(id)arg0 ;
-(id)_performMockedWriteRequests:(id)arg0 ;
-(id)generateAccessCodeValueFromConstraints:(id)arg0 accessoryAccessCodes:(id)arg1 homeAccessCodes:(id)arg2 ;
-(id)hapAccessoryWithUUID:(id)arg0 ;
-(id)initWithHome:(id)arg0 messageDispatcher:(id)arg1 workQueue:(id)arg2 ;
-(id)initWithHome:(id)arg0 messageDispatcher:(id)arg1 workQueue:(id)arg2 UUID:(id)arg3 ;
-(id)performReadRequests:(id)arg0 withRetries:(NSInteger)arg1 timeInterval:(CGFloat)arg2 loggingObject:(id)arg3 ;
-(id)performWriteRequests:(id)arg0 withRetries:(NSInteger)arg1 timeInterval:(CGFloat)arg2 loggingObject:(id)arg3 ;
-(id)userForMessage:(id)arg0 ;
-(id)userWithUUID:(id)arg0 ;
-(void)configure;
-(void)redispatchToResidentMessage:(id)arg0 ;


@end


#endif