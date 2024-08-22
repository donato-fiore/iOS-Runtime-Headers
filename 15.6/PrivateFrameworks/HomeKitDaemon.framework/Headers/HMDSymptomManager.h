// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDSYMPTOMMANAGER_H
#define HMDSYMPTOMMANAGER_H

@class HMFObject, NSSet, NSString, HMFUnfairLock, NSMapTable, HMFWiFiManager;
@protocol HMFLogging, HMDCompanionLinkClient, HMDSharingDeviceDiscovery, OS_dispatch_queue;



@interface HMDSymptomManager : HMFObject <HMFLogging>



@property (readonly, nonatomic) NSObject<HMDCompanionLinkClient> *companionLinkClient; // ivar: _companionLinkClient
@property (readonly, copy, nonatomic) NSSet *currentDeviceSymptoms;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<HMDSharingDeviceDiscovery> *deviceDiscovery; // ivar: _deviceDiscovery
@property (nonatomic) NSUInteger deviceDiscoveryFlags; // ivar: _deviceDiscoveryFlags
@property (nonatomic) int deviceProblemNotificationToken; // ivar: _deviceProblemNotificationToken
@property (nonatomic, getter=isDeviceProblemNotificationTokenValid) BOOL deviceProblemNotificationTokenValid; // ivar: _deviceProblemNotificationTokenValid
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HMFUnfairLock *lock; // ivar: _lock
@property (readonly, nonatomic) NSMapTable *nearbySFDevices; // ivar: _nearbySFDevices
@property (readonly, nonatomic) NSMapTable *networkReachableRPCompanionLinkDevices; // ivar: _networkReachableRPCompanionLinkDevices
@property (readonly) Class superclass;
@property (nonatomic) BOOL supportsRegisteringAccessories; // ivar: _supportsRegisteringAccessories
@property (readonly, nonatomic) NSMapTable *symptomContainerByRegisteredAccessory; // ivar: _symptomContainerByRegisteredAccessory
@property (readonly, nonatomic) HMFWiFiManager *wifiManager; // ivar: _wifiManager
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)_symptomsForProblemFlags:(NSUInteger)arg0 ;
+(id)logCategory;
+(id)sharedManager;
-(id)_localSymptomsForRegisteredAccessory:(id)arg0 ;
-(id)_registeredAccessoryWithIDSIdentifier:(id)arg0 ;
-(id)init;
-(id)initWithQueue:(id)arg0 deviceDiscovery:(id)arg1 companionLinkClient:(id)arg2 wifiManager:(id)arg3 ;
-(void)_initiateFixForAccessory:(id)arg0 completion:(id)arg1 ;
-(void)_rpDeviceChangedHandler:(id)arg0 ;
-(void)_rpDeviceFoundHandler:(id)arg0 ;
-(void)_rpDeviceLostHandler:(id)arg0 ;
-(void)_sfDeviceChangedHandler:(id)arg0 ;
-(void)_sfDeviceFoundHandler:(id)arg0 ;
-(void)_sfDeviceLostHandler:(id)arg0 ;
-(void)_start;
-(void)_startCompanionLinkClient;
-(void)_startDeviceDiscovery;
-(void)_stop;
-(void)_stopCompanionLinkClient;
-(void)_stopDeviceDiscovery;
-(void)_updateSymptomsForAllRegisteredAccessories;
-(void)_updateSymptomsForRegisteredAccessory:(id)arg0 ;
-(void)_updateSymptomsForRegisteredAccessoryWithIDSIdentifier:(id)arg0 ;
-(void)dealloc;
-(void)deregisterAccessory:(id)arg0 ;
-(void)handleAccessoryRemovedNotification:(id)arg0 ;
-(void)handleAccessoryWiFiNetworkInfoUpdatedNotification:(id)arg0 ;
-(void)handleCurrentNetworkDidChangeNotification:(id)arg0 ;
-(void)initiateFixForAccessory:(id)arg0 completion:(id)arg1 ;
-(void)registerAccessory:(id)arg0 delegate:(id)arg1 ;
-(void)startDiscoveringSymptomsRequiringNearbyInfo;
-(void)stopDiscoveringSymptomsRequiringNearbyInfo;


@end


#endif