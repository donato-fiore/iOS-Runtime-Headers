// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHIPWAKEONLAN_H
#define CHIPWAKEONLAN_H



#import "CHIPCluster.h"

@interface CHIPWakeOnLan : CHIPCluster

@property (readonly) WakeOnLanCluster cppCluster; // ivar: _cppCluster


-(struct ClusterBase *)getCluster;
-(void)readAttributeClusterRevisionWithResponseHandler:(id)arg0 ;
-(void)readAttributeWakeOnLanMacAddressWithResponseHandler:(id)arg0 ;


@end


#endif