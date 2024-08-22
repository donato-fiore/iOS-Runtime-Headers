// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPTESTTHREADNETWORKDIAGNOSTICS_H
#define CHIPTESTTHREADNETWORKDIAGNOSTICS_H



#import "CHIPThreadNetworkDiagnostics.h"

@interface CHIPTestThreadNetworkDiagnostics : CHIPThreadNetworkDiagnostics {
    ThreadNetworkDiagnosticsClusterTest _cppCluster;
}


@property ? cppCluster;


-(void)writeAttributeAcceptedCommandListWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeActiveNetworkFaultsListWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeActiveTimestampWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeAttachAttemptCountWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeAttributeListWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeBetterPartitionAttachAttemptCountWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeChannelMaskWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeChannelWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeChildRoleCountWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeClusterRevisionWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeDataVersionWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeDelayWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeDetachedRoleCountWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeExtendedPanIdWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeFeatureMapWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeGeneratedCommandListWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeLeaderRoleCountWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeLeaderRouterIdWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeMeshLocalPrefixWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeNeighborTableListWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeNetworkNameWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeOverrunCountWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributePanIdWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeParentChangeCountWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributePartitionIdChangeCountWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributePartitionIdWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributePendingTimestampWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeRouteTableListWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeRouterRoleCountWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeRoutingRoleWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeRxAddressFilteredCountWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeRxBeaconCountWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeRxBeaconRequestCountWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeRxBroadcastCountWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeRxDataCountWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeRxDataPollCountWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeRxDestAddrFilteredCountWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeRxDuplicatedCountWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeRxErrFcsCountWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeRxErrInvalidSrcAddrCountWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeRxErrNoFrameCountWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeRxErrOtherCountWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeRxErrSecCountWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeRxErrUnknownNeighborCountWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeRxOtherCountWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeRxTotalCountWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeRxUnicastCountWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeSecurityPolicyWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeStableDataVersionWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeTxAckRequestedCountWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeTxAckedCountWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeTxBeaconCountWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeTxBeaconRequestCountWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeTxBroadcastCountWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeTxDataCountWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeTxDataPollCountWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeTxDirectMaxRetryExpiryCountWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeTxErrAbortCountWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeTxErrBusyChannelCountWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeTxErrCcaCountWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeTxIndirectMaxRetryExpiryCountWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeTxNoAckRequestedCountWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeTxOtherCountWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeTxRetryCountWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeTxTotalCountWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeTxUnicastCountWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeWeightingWithValue:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif