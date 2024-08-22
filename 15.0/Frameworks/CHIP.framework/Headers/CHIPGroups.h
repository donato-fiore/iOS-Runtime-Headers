// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHIPGROUPS_H
#define CHIPGROUPS_H



#import "CHIPCluster.h"

@interface CHIPGroups : CHIPCluster

@property (readonly) GroupsCluster cppCluster; // ivar: _cppCluster


-(struct ClusterBase *)getCluster;
-(void)addGroup:(unsigned short)arg0 groupName:(id)arg1 responseHandler:(id)arg2 ;
-(void)addGroupIfIdentifying:(unsigned short)arg0 groupName:(id)arg1 responseHandler:(id)arg2 ;
-(void)getGroupMembership:(unsigned char)arg0 groupList:(unsigned short)arg1 responseHandler:(id)arg2 ;
-(void)readAttributeClusterRevisionWithResponseHandler:(id)arg0 ;
-(void)readAttributeNameSupportWithResponseHandler:(id)arg0 ;
-(void)removeAllGroups:(id)arg0 ;
-(void)removeGroup:(unsigned short)arg0 responseHandler:(id)arg1 ;
-(void)viewGroup:(unsigned short)arg0 responseHandler:(id)arg1 ;


@end


#endif