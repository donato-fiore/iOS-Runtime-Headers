// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMMTRDESCRIPTORCLUSTERMANAGER_H
#define HMMTRDESCRIPTORCLUSTERMANAGER_H

@class HMFObject;



@interface HMMTRDescriptorClusterManager : HMFObject



+(id)logCategory;
+(id)sharedManager;
-(id)_buildClustersInUseDictWithClustersInUse:(id)arg0 ;
-(id)getBridgeEndpointsDeviceTypes:(id)arg0 endpointDeviceTypes:(id)arg1 ;
-(id)hapServiceDescriptionForServiceType:(id)arg0 clustersInUse:(id)arg1 endpoint:(id)arg2 name:(id)arg3 hapToCHIPClusterMappingArray:(id)arg4 clusterClassToQueryForFeatureMap:(id)arg5 hapServicesToCheckForFeatureMap:(id)arg6 server:(id)arg7 ;
-(id)hapServiceDescriptionsForTopology:(id)arg0 namesDictionary:(id)arg1 server:(id)arg2 ;
-(id)runBlockForAllEndpointsWithClusterID:(id)arg0 device:(id)arg1 callbackQueue:(id)arg2 block:(id)arg3 ;
-(void)_populateAttributeValuesForClusterClassName:(id)arg0 clusterClassFeatureMap:(id)arg1 endpoint:(id)arg2 device:(id)arg3 deviceTopology:(id)arg4 callbackQueue:(id)arg5 completionHandler:(id)arg6 ;
-(void)_queryEndpointsForClusterID:(id)arg0 endpoints:(id)arg1 device:(id)arg2 callbackQueue:(id)arg3 completionHandler:(id)arg4 ;
-(void)_queryFeatureMapFromClusterAtCHIPEndpoint:(id)arg0 device:(id)arg1 callbackQueue:(id)arg2 clusterClassName:(id)arg3 completionHandler:(id)arg4 ;
-(void)_removeDisabledCharacteristicsFromServiceDescription:(id)arg0 endpoint:(id)arg1 topology:(id)arg2 ;
-(void)_runBlockForAllEndpointsWithClusterID:(id)arg0 endpoints:(id)arg1 device:(id)arg2 callbackQueue:(id)arg3 finishedRunningAllBlocksPromise:(id)arg4 block:(id)arg5 ;
-(void)_updateOTARequestorEndpointsInTopology:(id)arg0 device:(id)arg1 callbackQueue:(id)arg2 completionHandler:(id)arg3 ;
-(void)_verifyHAPCharacteristicSupportAtCHIPEndpoint:(id)arg0 device:(id)arg1 endpointDeviceTypes:(id)arg2 callbackQueue:(id)arg3 clusterClassToQueryForFeatureMap:(id)arg4 hapServicesToCheckForFeatureMap:(id)arg5 hapServicesInUse:(id)arg6 deviceTopology:(id)arg7 bridgeAggregateNodeEndpoint:(id)arg8 server:(id)arg9 lastError:(id)arg10 completionHandler:(id)arg11 ;
-(void)endpointForClusterID:(id)arg0 device:(id)arg1 callbackQueue:(id)arg2 completionHandler:(id)arg3 ;
-(void)fetchDeviceTypesForDevice:(id)arg0 atEndpoint:(id)arg1 callbackQueue:(id)arg2 completionHandler:(id)arg3 ;
-(void)fetchDeviceTypesForEndpoints:(id)arg0 device:(id)arg1 endpointDeviceTypes:(id)arg2 lastError:(id)arg3 callbackQueue:(id)arg4 completionHandler:(id)arg5 ;
-(void)fetchEndpointsForDevice:(id)arg0 endpointID:(id)arg1 callbackQueue:(id)arg2 completionHandler:(id)arg3 ;
-(void)fetchHAPCategoryForCHIPDevice:(id)arg0 nodeId:(id)arg1 server:(id)arg2 callbackQueue:(id)arg3 completionHandler:(id)arg4 ;
-(void)fetchHAPServicesAtCHIPEndpoint:(id)arg0 deviceTopology:(id)arg1 endpointDeviceTypes:(id)arg2 accessoryInfo:(id)arg3 hapToCHIPClusterMappingArray:(id)arg4 device:(id)arg5 isBridge:(BOOL)arg6 bridgeAggregateNodeEndpoint:(id)arg7 isComposedDevice:(BOOL)arg8 server:(id)arg9 callbackQueue:(id)arg10 completionHandler:(id)arg11 ;
-(void)fetchHAPServicesForCHIPDevice:(id)arg0 nodeId:(id)arg1 server:(id)arg2 callbackQueue:(id)arg3 completionHandler:(id)arg4 ;
-(void)fetchHAPServicesForEndpoints:(id)arg0 endpointDeviceTypes:(id)arg1 device:(id)arg2 nodeId:(id)arg3 isBridge:(BOOL)arg4 bridgeAggregateNodeEndpoint:(id)arg5 server:(id)arg6 topology:(id)arg7 hapAccessoryInfo:(id)arg8 callbackQueue:(id)arg9 completionHandler:(id)arg10 ;


@end


#endif