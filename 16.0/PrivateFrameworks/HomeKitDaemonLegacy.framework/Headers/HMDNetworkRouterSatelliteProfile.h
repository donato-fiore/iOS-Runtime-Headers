// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDNETWORKROUTERSATELLITEPROFILE_H
#define HMDNETWORKROUTERSATELLITEPROFILE_H



#import "HMDAccessoryProfile.h"

@interface HMDNetworkRouterSatelliteProfile : HMDAccessoryProfile

@property (nonatomic) NSUInteger networkStatus; // ivar: _networkStatus
@property (nonatomic) NSInteger satelliteStatus; // ivar: _satelliteStatus


+(BOOL)supportsSecureCoding;
+(id)logCategory;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithRouterSatelliteService:(id)arg0 msgDispatcher:(id)arg1 ;
-(id)runtimeState;
-(void)__handleAccessoryConnected;
-(void)__notifyClientsOfNetworkStatusUpdate:(NSUInteger)arg0 ;
-(void)__updateSatelliteStatus:(id)arg0 ;
-(void)_handleCharacteristicChanges:(id)arg0 ;
-(void)_handleCharacteristicsChangedPayload:(id)arg0 ;
-(void)_readAndProcessCharacteristics:(id)arg0 withCompletion:(id)arg1 ;
-(void)_readAndUpdateCharacteristic;
-(void)_registerForNotifications;
-(void)_registerForRemoteNotifications;
-(void)_updateNetworkStatus;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)handleAccessoryConnected:(id)arg0 ;
-(void)handleAccessoryIsReachable:(id)arg0 ;
-(void)handleCharacteristicsChangedNotification:(id)arg0 ;
-(void)handleInitialState;
-(void)registerForMessages;
-(void)unconfigure;


@end


#endif