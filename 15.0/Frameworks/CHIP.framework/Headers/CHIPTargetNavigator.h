// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHIPTARGETNAVIGATOR_H
#define CHIPTARGETNAVIGATOR_H



#import "CHIPCluster.h"

@interface CHIPTargetNavigator : CHIPCluster

@property (readonly) TargetNavigatorCluster cppCluster; // ivar: _cppCluster


-(struct ClusterBase *)getCluster;
-(void)navigateTarget:(unsigned char)arg0 data:(id)arg1 responseHandler:(id)arg2 ;
-(void)readAttributeClusterRevisionWithResponseHandler:(id)arg0 ;
-(void)readAttributeTargetNavigatorListWithResponseHandler:(id)arg0 ;


@end


#endif