// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHIPSWITCH_H
#define CHIPSWITCH_H



#import "CHIPCluster.h"

@interface CHIPSwitch : CHIPCluster

@property (readonly) SwitchCluster cppCluster; // ivar: _cppCluster


-(struct ClusterBase *)getCluster;
-(void)configureAttributeCurrentPositionWithMinInterval:(unsigned short)arg0 maxInterval:(unsigned short)arg1 change:(unsigned char)arg2 responseHandler:(id)arg3 ;
-(void)readAttributeClusterRevisionWithResponseHandler:(id)arg0 ;
-(void)readAttributeCurrentPositionWithResponseHandler:(id)arg0 ;
-(void)readAttributeNumberOfPositionsWithResponseHandler:(id)arg0 ;
-(void)reportAttributeCurrentPositionWithResponseHandler:(id)arg0 ;


@end


#endif