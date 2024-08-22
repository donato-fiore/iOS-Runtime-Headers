// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHIPNETWORKCOMMISSIONING_H
#define CHIPNETWORKCOMMISSIONING_H



#import "CHIPCluster.h"

@interface CHIPNetworkCommissioning : CHIPCluster

@property (readonly) NetworkCommissioningCluster cppCluster; // ivar: _cppCluster


-(struct ClusterBase *)getCluster;
-(void)addThreadNetwork:(id)arg0 breadcrumb:(NSUInteger)arg1 timeoutMs:(unsigned int)arg2 responseHandler:(id)arg3 ;
-(void)addWiFiNetwork:(id)arg0 credentials:(id)arg1 breadcrumb:(NSUInteger)arg2 timeoutMs:(unsigned int)arg3 responseHandler:(id)arg4 ;
-(void)disableNetwork:(id)arg0 breadcrumb:(NSUInteger)arg1 timeoutMs:(unsigned int)arg2 responseHandler:(id)arg3 ;
-(void)enableNetwork:(id)arg0 breadcrumb:(NSUInteger)arg1 timeoutMs:(unsigned int)arg2 responseHandler:(id)arg3 ;
-(void)getLastNetworkCommissioningResult:(unsigned int)arg0 responseHandler:(id)arg1 ;
-(void)readAttributeClusterRevisionWithResponseHandler:(id)arg0 ;
-(void)removeNetwork:(id)arg0 breadcrumb:(NSUInteger)arg1 timeoutMs:(unsigned int)arg2 responseHandler:(id)arg3 ;
-(void)scanNetworks:(id)arg0 breadcrumb:(NSUInteger)arg1 timeoutMs:(unsigned int)arg2 responseHandler:(id)arg3 ;
-(void)updateThreadNetwork:(id)arg0 breadcrumb:(NSUInteger)arg1 timeoutMs:(unsigned int)arg2 responseHandler:(id)arg3 ;
-(void)updateWiFiNetwork:(id)arg0 credentials:(id)arg1 breadcrumb:(NSUInteger)arg2 timeoutMs:(unsigned int)arg3 responseHandler:(id)arg4 ;


@end


#endif