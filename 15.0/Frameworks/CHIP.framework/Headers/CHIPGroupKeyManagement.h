// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHIPGROUPKEYMANAGEMENT_H
#define CHIPGROUPKEYMANAGEMENT_H



#import "CHIPCluster.h"

@interface CHIPGroupKeyManagement : CHIPCluster

@property (readonly) GroupKeyManagementCluster cppCluster; // ivar: _cppCluster


-(struct ClusterBase *)getCluster;
-(void)readAttributeClusterRevisionWithResponseHandler:(id)arg0 ;
-(void)readAttributeGroupKeysWithResponseHandler:(id)arg0 ;
-(void)readAttributeGroupsWithResponseHandler:(id)arg0 ;


@end


#endif