// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHIPBINDING_H
#define CHIPBINDING_H



#import "CHIPCluster.h"

@interface CHIPBinding : CHIPCluster

@property (readonly) BindingCluster cppCluster; // ivar: _cppCluster


-(struct ClusterBase *)getCluster;
-(void)bind:(NSUInteger)arg0 groupId:(unsigned short)arg1 endpointId:(unsigned char)arg2 clusterId:(unsigned short)arg3 responseHandler:(id)arg4 ;
-(void)readAttributeClusterRevisionWithResponseHandler:(id)arg0 ;
-(void)unbind:(NSUInteger)arg0 groupId:(unsigned short)arg1 endpointId:(unsigned char)arg2 clusterId:(unsigned short)arg3 responseHandler:(id)arg4 ;


@end


#endif