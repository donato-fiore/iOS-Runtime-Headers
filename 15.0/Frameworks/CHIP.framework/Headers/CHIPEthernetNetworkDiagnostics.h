// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHIPETHERNETNETWORKDIAGNOSTICS_H
#define CHIPETHERNETNETWORKDIAGNOSTICS_H



#import "CHIPCluster.h"

@interface CHIPEthernetNetworkDiagnostics : CHIPCluster

@property (readonly) EthernetNetworkDiagnosticsCluster cppCluster; // ivar: _cppCluster


-(struct ClusterBase *)getCluster;
-(void)readAttributeClusterRevisionWithResponseHandler:(id)arg0 ;
-(void)readAttributeCollisionCountWithResponseHandler:(id)arg0 ;
-(void)readAttributeOverrunCountWithResponseHandler:(id)arg0 ;
-(void)readAttributePacketRxCountWithResponseHandler:(id)arg0 ;
-(void)readAttributePacketTxCountWithResponseHandler:(id)arg0 ;
-(void)readAttributeTxErrCountWithResponseHandler:(id)arg0 ;
-(void)resetCounts:(id)arg0 ;


@end


#endif