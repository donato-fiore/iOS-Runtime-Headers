// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPTESTETHERNETNETWORKDIAGNOSTICS_H
#define CHIPTESTETHERNETNETWORKDIAGNOSTICS_H



#import "CHIPEthernetNetworkDiagnostics.h"

@interface CHIPTestEthernetNetworkDiagnostics : CHIPEthernetNetworkDiagnostics {
    EthernetNetworkDiagnosticsClusterTest _cppCluster;
}


@property ? cppCluster;


-(void)writeAttributeAcceptedCommandListWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeAttributeListWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeCarrierDetectWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeClusterRevisionWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeCollisionCountWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeFeatureMapWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeFullDuplexWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeGeneratedCommandListWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeOverrunCountWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributePHYRateWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributePacketRxCountWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributePacketTxCountWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeTxErrCountWithValue:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif