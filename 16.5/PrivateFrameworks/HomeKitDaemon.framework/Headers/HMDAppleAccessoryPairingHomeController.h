// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDAPPLEACCESSORYPAIRINGHOMECONTROLLER_H
#define HMDAPPLEACCESSORYPAIRINGHOMECONTROLLER_H

@class HMFObject, NSString, HMBLocalZone, HMFFuture, HMFTimer;
@protocol HMBLocalZoneModelObserver, HMFTimerDelegate, HMDAppleAccessoryPairingControllerDataSource;


#import "HMDHomeManager.h"
#import "HMDAppleAccessoryPairingHomeState.h"

@interface HMDAppleAccessoryPairingHomeController : HMFObject <HMBLocalZoneModelObserver, HMFTimerDelegate>



@property (readonly, nonatomic) NSObject<HMDAppleAccessoryPairingControllerDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) HMDHomeManager *homeManager; // ivar: _homeManager
@property (readonly) HMBLocalZone *localZone; // ivar: _localZone
@property (retain, nonatomic) HMFFuture *queryFuture; // ivar: _queryFuture
@property (readonly, nonatomic) HMDAppleAccessoryPairingHomeState *state; // ivar: _state
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger suppressedQueries; // ivar: _suppressedQueries
@property (readonly) HMFTimer *upgradeCheckTimer; // ivar: _upgradeCheckTimer


+(id)logCategory;
-(BOOL)handleMessage:(id)arg0 from:(id)arg1 ;
-(id)initWithState:(id)arg0 homeManager:(id)arg1 dataSource:(id)arg2 ;
-(id)localZone:(id)arg0 didProcessModelCreation:(id)arg1 ;
-(id)localZone:(id)arg0 didProcessModelDeletion:(id)arg1 ;
-(id)localZone:(id)arg0 didProcessModelUpdate:(id)arg1 ;
-(id)logIdentifier;
-(id)workContext;
-(void)_handleDeviceNotification:(id)arg0 ;
-(void)checkDeviceVersionAndSendUpgrade;
-(void)cleanupLegacyZone;
-(void)postNotificationOfDeviceUpdated;
-(void)postSoftwareUpdateEventForDescriptor:(id)arg0 ;
-(void)postSoftwareUpdateEventForSoftwareUpdate:(id)arg0 ;
-(void)processHMDAppleMediaAccessoryModel:(id)arg0 ;
-(void)processHMDResidentDeviceModel:(id)arg0 ;
-(void)startWithLocalZone:(id)arg0 ;
-(void)timerDidFire:(id)arg0 ;


@end


#endif