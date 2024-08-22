// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDPRIMARYRESIDENTCAPABILITIESAGGREGATOR_H
#define HMDPRIMARYRESIDENTCAPABILITIESAGGREGATOR_H

@class NSUUID, NSNotificationCenter, NSMutableSet, NSString;
@protocol HMEEventConsumer, HMFLogging, HMDPrimaryResidentCapabilitiesAggregatorDataSource, HMDPrimaryResidentCapabilitiesAggregatorDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface HMDPrimaryResidentCapabilitiesAggregator : NSObject <HMEEventConsumer, HMFLogging>

 {
    BOOL _isPrimaryResident;
    id<HMDPrimaryResidentCapabilitiesAggregatorDataSource> *_dataSource;
    id<HMDPrimaryResidentCapabilitiesAggregatorDelegate> *_delegate;
    NSUUID *_homeUUID;
    NSObject<OS_dispatch_queue> *_queue;
    NSNotificationCenter *_notificationCenter;
    NSMutableSet *_accessories;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)logCategory;
-(id)accessoryCapabilitiesForAccessory:(id)arg0 ifDifferentFrom:(id)arg1 ;
-(id)initWithDataSource:(id)arg0 delegate:(id)arg1 queue:(id)arg2 notificationCenter:(id)arg3 homeUUID:(id)arg4 accessories:(id)arg5 ;
-(id)logIdentifier;
-(id)publicPairingIdentityForAccessory:(id)arg0 ifDifferentFrom:(id)arg1 ;
-(id)residentCapabilitiesForAccessory:(id)arg0 ifDifferentFrom:(id)arg1 ;
-(void)didAddAccessory:(id)arg0 ;
-(void)didReceiveCachedEvent:(id)arg0 topic:(id)arg1 source:(id)arg2 ;
-(void)didReceiveEvent:(id)arg0 topic:(id)arg1 ;
-(void)didRemoveAccessory:(id)arg0 ;
-(void)handlePrimaryResidentIsCurrentDeviceChangeNotification:(id)arg0 ;
-(void)startIfPrimaryResident;


@end


#endif