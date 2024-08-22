// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMMTRHAPENUMERATOR_H
#define HMMTRHAPENUMERATOR_H

@class HMFObject, NSDictionary;



@interface HMMTRHAPEnumerator : HMFObject

@property (retain, nonatomic) NSDictionary *clusterIDCharacteristicMap; // ivar: _clusterIDCharacteristicMap


+(id)logCategory;
-(id)_createBridgedHAPAccessoryWithServer:(id)arg0 services:(id)arg1 instanceId:(id)arg2 endpointID:(id)arg3 ;
-(id)enumerateBridgedAccessoriesFromAccessories:(id)arg0 serviceDescriptionsDictionary:(id)arg1 namesDictionary:(id)arg2 topology:(id)arg3 server:(id)arg4 legacyInstanceIDAssignment:(BOOL)arg5 ;
-(id)enumerateServicesFromServices:(id)arg0 serviceDescriptionsDictionary:(id)arg1 topology:(id)arg2 nodeID:(id)arg3 primaryAccessory:(id)arg4 legacyInstanceIDAssignment:(BOOL)arg5 ;
-(id)initWithClusterIDCharacteristicMap:(id)arg0 ;
-(void)_createHAPServicesFromServiceDescriptions:(id)arg0 topology:(id)arg1 nodeID:(id)arg2 accessoryEndpointID:(id)arg3 services:(id)arg4 startingServiceInstanceID:(*NSInteger)arg5 primaryAccessory:(id)arg6 ;


@end


#endif