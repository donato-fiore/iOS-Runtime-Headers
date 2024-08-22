// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHIPDESCRIPTOR_H
#define CHIPDESCRIPTOR_H



#import "CHIPCluster.h"

@interface CHIPDescriptor : CHIPCluster

@property (readonly) DescriptorCluster cppCluster; // ivar: _cppCluster


-(struct ClusterBase *)getCluster;
-(void)readAttributeClientListWithResponseHandler:(id)arg0 ;
-(void)readAttributeClusterRevisionWithResponseHandler:(id)arg0 ;
-(void)readAttributeDeviceListWithResponseHandler:(id)arg0 ;
-(void)readAttributePartsListWithResponseHandler:(id)arg0 ;
-(void)readAttributeServerListWithResponseHandler:(id)arg0 ;


@end


#endif