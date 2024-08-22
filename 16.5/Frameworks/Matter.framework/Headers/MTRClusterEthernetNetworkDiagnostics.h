// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRCLUSTERETHERNETNETWORKDIAGNOSTICS_H
#define MTRCLUSTERETHERNETNETWORKDIAGNOSTICS_H



#import "MTRCluster.h"
#import "MTRDevice.h"

@interface MTRClusterEthernetNetworkDiagnostics : MTRCluster

@property (readonly, nonatomic) MTRDevice *device; // ivar: _device
@property (readonly, nonatomic) unsigned short endpoint; // ivar: _endpoint


-(id)initWithDevice:(id)arg0 endpoint:(unsigned short)arg1 queue:(id)arg2 ;
-(id)initWithDevice:(id)arg0 endpointID:(id)arg1 queue:(id)arg2 ;
-(id)readAttributeAcceptedCommandListWithParams:(id)arg0 ;
-(id)readAttributeAttributeListWithParams:(id)arg0 ;
-(id)readAttributeCarrierDetectWithParams:(id)arg0 ;
-(id)readAttributeClusterRevisionWithParams:(id)arg0 ;
-(id)readAttributeCollisionCountWithParams:(id)arg0 ;
-(id)readAttributeFeatureMapWithParams:(id)arg0 ;
-(id)readAttributeFullDuplexWithParams:(id)arg0 ;
-(id)readAttributeGeneratedCommandListWithParams:(id)arg0 ;
-(id)readAttributeOverrunCountWithParams:(id)arg0 ;
-(id)readAttributePHYRateWithParams:(id)arg0 ;
-(id)readAttributePacketRxCountWithParams:(id)arg0 ;
-(id)readAttributePacketTxCountWithParams:(id)arg0 ;
-(id)readAttributeTimeSinceResetWithParams:(id)arg0 ;
-(id)readAttributeTxErrCountWithParams:(id)arg0 ;
-(void)resetCountsWithExpectedValues:(id)arg0 expectedValueInterval:(id)arg1 completion:(id)arg2 ;
-(void)resetCountsWithExpectedValues:(id)arg0 expectedValueInterval:(id)arg1 completionHandler:(id)arg2 ;
-(void)resetCountsWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completion:(id)arg3 ;
-(void)resetCountsWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completionHandler:(id)arg3 ;


@end


#endif