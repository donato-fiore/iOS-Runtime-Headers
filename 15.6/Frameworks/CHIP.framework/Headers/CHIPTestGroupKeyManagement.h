// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPTESTGROUPKEYMANAGEMENT_H
#define CHIPTESTGROUPKEYMANAGEMENT_H



#import "CHIPGroupKeyManagement.h"

@interface CHIPTestGroupKeyManagement : CHIPGroupKeyManagement {
    GroupKeyManagementClusterTest _cppCluster;
}


@property ? cppCluster;


-(void)writeAttributeAcceptedCommandListWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeAttributeListWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeClusterRevisionWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeGeneratedCommandListWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeGroupTableWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeMaxGroupKeysPerFabricWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeMaxGroupsPerFabricWithValue:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif