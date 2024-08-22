// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPTESTWIFINETWORKDIAGNOSTICS_H
#define CHIPTESTWIFINETWORKDIAGNOSTICS_H



#import "CHIPWiFiNetworkDiagnostics.h"

@interface CHIPTestWiFiNetworkDiagnostics : CHIPWiFiNetworkDiagnostics {
    WiFiNetworkDiagnosticsClusterTest _cppCluster;
}


@property ? cppCluster;


-(void)writeAttributeAcceptedCommandListWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeAttributeListWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeBeaconLostCountWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeBeaconRxCountWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeBssidWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeChannelNumberWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeClusterRevisionWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeCurrentMaxRateWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeFeatureMapWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeGeneratedCommandListWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeOverrunCountWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributePacketMulticastRxCountWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributePacketMulticastTxCountWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributePacketUnicastRxCountWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributePacketUnicastTxCountWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeRssiWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeSecurityTypeWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeWiFiVersionWithValue:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif