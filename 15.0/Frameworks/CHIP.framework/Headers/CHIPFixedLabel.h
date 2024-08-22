// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHIPFIXEDLABEL_H
#define CHIPFIXEDLABEL_H



#import "CHIPCluster.h"

@interface CHIPFixedLabel : CHIPCluster

@property (readonly) FixedLabelCluster cppCluster; // ivar: _cppCluster


-(struct ClusterBase *)getCluster;
-(void)readAttributeClusterRevisionWithResponseHandler:(id)arg0 ;
-(void)readAttributeLabelListWithResponseHandler:(id)arg0 ;


@end


#endif