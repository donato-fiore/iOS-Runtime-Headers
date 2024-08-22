// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMNETWORKROUTERPROFILE_H
#define HMNETWORKROUTERPROFILE_H

@class NSString, NSArray;
@protocol _HMNetworkRouterProfileDelegate, HMNetworkRouterProfileDelegate;


#import "HMAccessoryProfile.h"

@interface HMNetworkRouterProfile : HMAccessoryProfile <_HMNetworkRouterProfileDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<HMNetworkRouterProfileDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger networkStatus;
@property (readonly, getter=isSatellite) BOOL satellite;
@property (readonly) NSArray *satelliteProfiles;
@property (readonly) Class superclass;


-(BOOL)_mergeWithNewObject:(id)arg0 operations:(id)arg1 ;
-(id)identifiersForSatelliteProfiles;
-(id)initWithNetworkRouterProfile:(id)arg0 ;
-(id)networkRouterProfile;
-(id)services;
-(void)routerProfileDidUpdateIdentifiersForSatellites:(id)arg0 ;
-(void)routerProfileDidUpdateNetworkStatus:(id)arg0 ;
-(void)setIdentifiersForSatelliteProfiles:(id)arg0 ;


@end


#endif