// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPTESTNETWORKCOMMISSIONING_H
#define CHIPTESTNETWORKCOMMISSIONING_H



#import "CHIPNetworkCommissioning.h"

@interface CHIPTestNetworkCommissioning : CHIPNetworkCommissioning {
    NetworkCommissioningClusterTest _cppCluster;
}


@property ? cppCluster;


-(void)writeAttributeAcceptedCommandListWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeClusterRevisionWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeConnectMaxTimeSecondsWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeFeatureMapWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeGeneratedCommandListWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeLastConnectErrorValueWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeLastNetworkIDWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeLastNetworkingStatusWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeMaxNetworksWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeNetworksWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeScanMaxTimeSecondsWithValue:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif