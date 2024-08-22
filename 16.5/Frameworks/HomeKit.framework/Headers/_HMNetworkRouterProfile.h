// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _HMNETWORKROUTERPROFILE_H
#define _HMNETWORKROUTERPROFILE_H

@class NSSet;
@protocol _HMNetworkRouterProfileDelegate;


#import "HMAccessoryProfile.h"

@interface _HMNetworkRouterProfile : HMAccessoryProfile

@property (weak, nonatomic) NSObject<_HMNetworkRouterProfileDelegate> *delegate; // ivar: _delegate
@property (readonly) NSSet *identifiersForSatelliteProfiles; // ivar: _identifiersForSatelliteProfiles
@property (readonly) NSUInteger networkStatus; // ivar: _networkStatus
@property (readonly, getter=isSatellite) BOOL satellite; // ivar: _satellite


+(BOOL)supportsSecureCoding;
-(BOOL)checkForUpdatedIdentifiersForSatellites:(id)arg0 ;
-(BOOL)checkForUpdatedNetworkStatus:(NSUInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)messageDestination;
-(id)messageReceiveQueue;
-(id)messageTargetUUID;
-(void)__handleNetworkStatusUpdated:(id)arg0 ;
-(void)_handleNetworkStatusUpdated:(id)arg0 ;
-(void)_handleSatelliteProfilesUpdated:(id)arg0 ;
-(void)_registerNotificationHandlers;
-(void)handleRuntimeStateUpdate:(id)arg0 ;


@end


#endif