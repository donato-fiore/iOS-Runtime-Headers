// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDNETWORKROUTERPROFILE_H
#define HMDNETWORKROUTERPROFILE_H



#import "HMDAccessoryProfile.h"

@interface HMDNetworkRouterProfile : HMDAccessoryProfile

@property (nonatomic) NSUInteger networkStatus; // ivar: _networkStatus
@property (nonatomic) NSInteger routerStatus; // ivar: _routerStatus
@property (nonatomic) NSUInteger wanStatus; // ivar: _wanStatus


+(BOOL)supportsSecureCoding;
+(id)logCategory;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithRouterService:(id)arg0 msgDispatcher:(id)arg1 ;
-(id)runtimeState;
-(void)__handleNetworkAccessViolationUpdate:(id)arg0 ;
-(void)__notifyClientsOfNetworkStatus:(NSUInteger)arg0 ;
-(void)_updateRouterStatus:(NSInteger)arg0 ;
-(void)_updateWANStatus:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)handleAccessoryConnected:(id)arg0 ;
-(void)handleCharacteristicsChangedNotification:(id)arg0 ;
-(void)handleInitialState;
-(void)handleNetworkRouterSatelliteAddedOrRemoved:(id)arg0 ;
-(void)registerForMessages;
-(void)unconfigure;


@end


#endif