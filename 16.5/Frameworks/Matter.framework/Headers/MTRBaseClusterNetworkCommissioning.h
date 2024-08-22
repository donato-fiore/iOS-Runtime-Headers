// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRBASECLUSTERNETWORKCOMMISSIONING_H
#define MTRBASECLUSTERNETWORKCOMMISSIONING_H



#import "MTRCluster.h"
#import "MTRBaseDevice.h"

@interface MTRBaseClusterNetworkCommissioning : MTRCluster

@property (readonly, nonatomic) MTRBaseDevice *device; // ivar: _device
@property (readonly, nonatomic) unsigned short endpoint; // ivar: _endpoint


+(void)readAttributeAcceptedCommandListWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeAcceptedCommandListWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributeAttributeListWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeAttributeListWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributeClusterRevisionWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeClusterRevisionWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributeConnectMaxTimeSecondsWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeConnectMaxTimeSecondsWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributeFeatureMapWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeFeatureMapWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributeGeneratedCommandListWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeGeneratedCommandListWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributeInterfaceEnabledWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeInterfaceEnabledWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributeLastConnectErrorValueWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeLastConnectErrorValueWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributeLastNetworkIDWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeLastNetworkIDWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributeLastNetworkingStatusWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeLastNetworkingStatusWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributeMaxNetworksWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeMaxNetworksWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributeNetworksWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeNetworksWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributeScanMaxTimeSecondsWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeScanMaxTimeSecondsWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
-(id)initWithDevice:(id)arg0 endpoint:(unsigned short)arg1 queue:(id)arg2 ;
-(id)initWithDevice:(id)arg0 endpointID:(id)arg1 queue:(id)arg2 ;
-(void)addOrUpdateThreadNetworkWithParams:(id)arg0 completion:(id)arg1 ;
-(void)addOrUpdateThreadNetworkWithParams:(id)arg0 completionHandler:(id)arg1 ;
-(void)addOrUpdateWiFiNetworkWithParams:(id)arg0 completion:(id)arg1 ;
-(void)addOrUpdateWiFiNetworkWithParams:(id)arg0 completionHandler:(id)arg1 ;
-(void)connectNetworkWithParams:(id)arg0 completion:(id)arg1 ;
-(void)connectNetworkWithParams:(id)arg0 completionHandler:(id)arg1 ;
-(void)readAttributeAcceptedCommandListWithCompletion:(id)arg0 ;
-(void)readAttributeAcceptedCommandListWithCompletionHandler:(id)arg0 ;
-(void)readAttributeAttributeListWithCompletion:(id)arg0 ;
-(void)readAttributeAttributeListWithCompletionHandler:(id)arg0 ;
-(void)readAttributeClusterRevisionWithCompletion:(id)arg0 ;
-(void)readAttributeClusterRevisionWithCompletionHandler:(id)arg0 ;
-(void)readAttributeConnectMaxTimeSecondsWithCompletion:(id)arg0 ;
-(void)readAttributeConnectMaxTimeSecondsWithCompletionHandler:(id)arg0 ;
-(void)readAttributeFeatureMapWithCompletion:(id)arg0 ;
-(void)readAttributeFeatureMapWithCompletionHandler:(id)arg0 ;
-(void)readAttributeGeneratedCommandListWithCompletion:(id)arg0 ;
-(void)readAttributeGeneratedCommandListWithCompletionHandler:(id)arg0 ;
-(void)readAttributeInterfaceEnabledWithCompletion:(id)arg0 ;
-(void)readAttributeInterfaceEnabledWithCompletionHandler:(id)arg0 ;
-(void)readAttributeLastConnectErrorValueWithCompletion:(id)arg0 ;
-(void)readAttributeLastConnectErrorValueWithCompletionHandler:(id)arg0 ;
-(void)readAttributeLastNetworkIDWithCompletion:(id)arg0 ;
-(void)readAttributeLastNetworkIDWithCompletionHandler:(id)arg0 ;
-(void)readAttributeLastNetworkingStatusWithCompletion:(id)arg0 ;
-(void)readAttributeLastNetworkingStatusWithCompletionHandler:(id)arg0 ;
-(void)readAttributeMaxNetworksWithCompletion:(id)arg0 ;
-(void)readAttributeMaxNetworksWithCompletionHandler:(id)arg0 ;
-(void)readAttributeNetworksWithCompletion:(id)arg0 ;
-(void)readAttributeNetworksWithCompletionHandler:(id)arg0 ;
-(void)readAttributeScanMaxTimeSecondsWithCompletion:(id)arg0 ;
-(void)readAttributeScanMaxTimeSecondsWithCompletionHandler:(id)arg0 ;
-(void)removeNetworkWithParams:(id)arg0 completion:(id)arg1 ;
-(void)removeNetworkWithParams:(id)arg0 completionHandler:(id)arg1 ;
-(void)reorderNetworkWithParams:(id)arg0 completion:(id)arg1 ;
-(void)reorderNetworkWithParams:(id)arg0 completionHandler:(id)arg1 ;
-(void)scanNetworksWithParams:(id)arg0 completion:(id)arg1 ;
-(void)scanNetworksWithParams:(id)arg0 completionHandler:(id)arg1 ;
// -(void)subscribeAttributeAcceptedCommandListWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeAcceptedCommandListWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributeAttributeListWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeAttributeListWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributeClusterRevisionWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeClusterRevisionWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributeConnectMaxTimeSecondsWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeConnectMaxTimeSecondsWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributeFeatureMapWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeFeatureMapWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributeGeneratedCommandListWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeGeneratedCommandListWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributeInterfaceEnabledWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeInterfaceEnabledWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributeLastConnectErrorValueWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeLastConnectErrorValueWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributeLastNetworkIDWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeLastNetworkIDWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributeLastNetworkingStatusWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeLastNetworkingStatusWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributeMaxNetworksWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeMaxNetworksWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributeNetworksWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeNetworksWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributeScanMaxTimeSecondsWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeScanMaxTimeSecondsWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
-(void)writeAttributeInterfaceEnabledWithValue:(id)arg0 completion:(id)arg1 ;
-(void)writeAttributeInterfaceEnabledWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeInterfaceEnabledWithValue:(id)arg0 params:(id)arg1 completion:(id)arg2 ;
-(void)writeAttributeInterfaceEnabledWithValue:(id)arg0 params:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif