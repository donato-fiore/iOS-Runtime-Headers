// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRCLUSTERTHREADNETWORKDIAGNOSTICS_H
#define MTRCLUSTERTHREADNETWORKDIAGNOSTICS_H



#import "MTRCluster.h"
#import "MTRDevice.h"

@interface MTRClusterThreadNetworkDiagnostics : MTRCluster

@property (readonly, nonatomic) MTRDevice *device; // ivar: _device
@property (readonly, nonatomic) unsigned short endpoint; // ivar: _endpoint


-(id)initWithDevice:(id)arg0 endpoint:(unsigned short)arg1 queue:(id)arg2 ;
-(id)initWithDevice:(id)arg0 endpointID:(id)arg1 queue:(id)arg2 ;
-(id)readAttributeAcceptedCommandListWithParams:(id)arg0 ;
-(id)readAttributeActiveNetworkFaultsListWithParams:(id)arg0 ;
-(id)readAttributeActiveTimestampWithParams:(id)arg0 ;
-(id)readAttributeAttachAttemptCountWithParams:(id)arg0 ;
-(id)readAttributeAttributeListWithParams:(id)arg0 ;
-(id)readAttributeBetterPartitionAttachAttemptCountWithParams:(id)arg0 ;
-(id)readAttributeChannelPage0MaskWithParams:(id)arg0 ;
-(id)readAttributeChannelWithParams:(id)arg0 ;
-(id)readAttributeChildRoleCountWithParams:(id)arg0 ;
-(id)readAttributeClusterRevisionWithParams:(id)arg0 ;
-(id)readAttributeDataVersionWithParams:(id)arg0 ;
-(id)readAttributeDelayWithParams:(id)arg0 ;
-(id)readAttributeDetachedRoleCountWithParams:(id)arg0 ;
-(id)readAttributeExtendedPanIdWithParams:(id)arg0 ;
-(id)readAttributeFeatureMapWithParams:(id)arg0 ;
-(id)readAttributeGeneratedCommandListWithParams:(id)arg0 ;
-(id)readAttributeLeaderRoleCountWithParams:(id)arg0 ;
-(id)readAttributeLeaderRouterIdWithParams:(id)arg0 ;
-(id)readAttributeMeshLocalPrefixWithParams:(id)arg0 ;
-(id)readAttributeNeighborTableListWithParams:(id)arg0 ;
-(id)readAttributeNeighborTableWithParams:(id)arg0 ;
-(id)readAttributeNetworkNameWithParams:(id)arg0 ;
-(id)readAttributeOperationalDatasetComponentsWithParams:(id)arg0 ;
-(id)readAttributeOverrunCountWithParams:(id)arg0 ;
-(id)readAttributePanIdWithParams:(id)arg0 ;
-(id)readAttributeParentChangeCountWithParams:(id)arg0 ;
-(id)readAttributePartitionIdChangeCountWithParams:(id)arg0 ;
-(id)readAttributePartitionIdWithParams:(id)arg0 ;
-(id)readAttributePendingTimestampWithParams:(id)arg0 ;
-(id)readAttributeRouteTableListWithParams:(id)arg0 ;
-(id)readAttributeRouteTableWithParams:(id)arg0 ;
-(id)readAttributeRouterRoleCountWithParams:(id)arg0 ;
-(id)readAttributeRoutingRoleWithParams:(id)arg0 ;
-(id)readAttributeRxAddressFilteredCountWithParams:(id)arg0 ;
-(id)readAttributeRxBeaconCountWithParams:(id)arg0 ;
-(id)readAttributeRxBeaconRequestCountWithParams:(id)arg0 ;
-(id)readAttributeRxBroadcastCountWithParams:(id)arg0 ;
-(id)readAttributeRxDataCountWithParams:(id)arg0 ;
-(id)readAttributeRxDataPollCountWithParams:(id)arg0 ;
-(id)readAttributeRxDestAddrFilteredCountWithParams:(id)arg0 ;
-(id)readAttributeRxDuplicatedCountWithParams:(id)arg0 ;
-(id)readAttributeRxErrFcsCountWithParams:(id)arg0 ;
-(id)readAttributeRxErrInvalidSrcAddrCountWithParams:(id)arg0 ;
-(id)readAttributeRxErrNoFrameCountWithParams:(id)arg0 ;
-(id)readAttributeRxErrOtherCountWithParams:(id)arg0 ;
-(id)readAttributeRxErrSecCountWithParams:(id)arg0 ;
-(id)readAttributeRxErrUnknownNeighborCountWithParams:(id)arg0 ;
-(id)readAttributeRxOtherCountWithParams:(id)arg0 ;
-(id)readAttributeRxTotalCountWithParams:(id)arg0 ;
-(id)readAttributeRxUnicastCountWithParams:(id)arg0 ;
-(id)readAttributeSecurityPolicyWithParams:(id)arg0 ;
-(id)readAttributeStableDataVersionWithParams:(id)arg0 ;
-(id)readAttributeTxAckRequestedCountWithParams:(id)arg0 ;
-(id)readAttributeTxAckedCountWithParams:(id)arg0 ;
-(id)readAttributeTxBeaconCountWithParams:(id)arg0 ;
-(id)readAttributeTxBeaconRequestCountWithParams:(id)arg0 ;
-(id)readAttributeTxBroadcastCountWithParams:(id)arg0 ;
-(id)readAttributeTxDataCountWithParams:(id)arg0 ;
-(id)readAttributeTxDataPollCountWithParams:(id)arg0 ;
-(id)readAttributeTxDirectMaxRetryExpiryCountWithParams:(id)arg0 ;
-(id)readAttributeTxErrAbortCountWithParams:(id)arg0 ;
-(id)readAttributeTxErrBusyChannelCountWithParams:(id)arg0 ;
-(id)readAttributeTxErrCcaCountWithParams:(id)arg0 ;
-(id)readAttributeTxIndirectMaxRetryExpiryCountWithParams:(id)arg0 ;
-(id)readAttributeTxNoAckRequestedCountWithParams:(id)arg0 ;
-(id)readAttributeTxOtherCountWithParams:(id)arg0 ;
-(id)readAttributeTxRetryCountWithParams:(id)arg0 ;
-(id)readAttributeTxTotalCountWithParams:(id)arg0 ;
-(id)readAttributeTxUnicastCountWithParams:(id)arg0 ;
-(id)readAttributeWeightingWithParams:(id)arg0 ;
-(void)resetCountsWithExpectedValues:(id)arg0 expectedValueInterval:(id)arg1 completion:(id)arg2 ;
-(void)resetCountsWithExpectedValues:(id)arg0 expectedValueInterval:(id)arg1 completionHandler:(id)arg2 ;
-(void)resetCountsWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completion:(id)arg3 ;
-(void)resetCountsWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completionHandler:(id)arg3 ;


@end


#endif