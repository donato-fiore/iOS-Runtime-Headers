// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHIPLOWPOWER_H
#define CHIPLOWPOWER_H



#import "CHIPCluster.h"

@interface CHIPLowPower : CHIPCluster

@property (readonly) LowPowerCluster cppCluster; // ivar: _cppCluster


-(struct ClusterBase *)getCluster;
-(void)readAttributeClusterRevisionWithResponseHandler:(id)arg0 ;
-(void)sleep:(id)arg0 ;


@end


#endif