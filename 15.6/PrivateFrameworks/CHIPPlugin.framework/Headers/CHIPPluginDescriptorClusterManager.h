// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPPLUGINDESCRIPTORCLUSTERMANAGER_H
#define CHIPPLUGINDESCRIPTORCLUSTERMANAGER_H

@class HMFObject;



@interface CHIPPluginDescriptorClusterManager : HMFObject



+(id)logCategory;
+(id)sharedManager;
-(id)_buildClustersInUseDictWithClustersInUse:(id)arg0 ;
-(id)hapServiceDescriptionForServiceType:(id)arg0 clustersInUse:(id)arg1 endpoint:(id)arg2 hapToCHIPClusterMapping:(id)arg3 clusterClassToQueryForFeatureMap:(id)arg4 hapServicesToCheckForFeatureMap:(id)arg5 ;
-(id)hapServiceDescriptionsForTopology:(id)arg0 ;
-(id)logIdentifier;
-(void)_queryFeatureMapFromClusterAtCHIPEndpoint:(id)arg0 device:(id)arg1 callbackQueue:(id)arg2 clusterClassName:(id)arg3 completionHandler:(id)arg4 ;
-(void)_removeDisabledCharacteristicsFromServiceDescription:(id)arg0 endpoint:(id)arg1 topology:(id)arg2 ;
-(void)_verifyHAPCharacteristicSupportAtCHIPEndpoint:(id)arg0 device:(id)arg1 callbackQueue:(id)arg2 clusterClassToQueryForFeatureMap:(id)arg3 hapServicesToCheckForFeatureMap:(id)arg4 deviceTopology:(id)arg5 clusterFeatureMapValue:(id)arg6 lastError:(id)arg7 completionHandler:(id)arg8 ;
-(void)fetchDeviceTypesForDevice:(id)arg0 atEndpoint:(id)arg1 callbackQueue:(id)arg2 completionHandler:(id)arg3 ;
-(void)fetchDeviceTypesForEndpoints:(id)arg0 device:(id)arg1 endpointDeviceTypes:(id)arg2 lastError:(id)arg3 callbackQueue:(id)arg4 completionHandler:(id)arg5 ;
-(void)fetchEndpointsForDevice:(id)arg0 callbackQueue:(id)arg1 completionHandler:(id)arg2 ;
-(void)fetchHAPServicesAtCHIPEndpoint:(id)arg0 deviceTopology:(id)arg1 accessoryInfo:(id)arg2 hapToCHIPClusterMapping:(id)arg3 device:(id)arg4 isABridge:(BOOL)arg5 callbackQueue:(id)arg6 completionHandler:(id)arg7 ;
-(void)fetchHAPServicesForCHIPDevice:(id)arg0 nodeId:(id)arg1 storage:(id)arg2 callbackQueue:(id)arg3 completionHandler:(id)arg4 ;
-(void)fetchHAPServicesForEndpoints:(id)arg0 endpointDeviceTypes:(id)arg1 device:(id)arg2 nodeId:(id)arg3 isABridge:(BOOL)arg4 storage:(id)arg5 topology:(id)arg6 hapAccessoryInfo:(id)arg7 lastError:(id)arg8 callbackQueue:(id)arg9 completionHandler:(id)arg10 ;


@end


#endif