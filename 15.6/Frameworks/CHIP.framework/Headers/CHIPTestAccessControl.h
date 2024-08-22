// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPTESTACCESSCONTROL_H
#define CHIPTESTACCESSCONTROL_H



#import "CHIPAccessControl.h"

@interface CHIPTestAccessControl : CHIPAccessControl {
    AccessControlClusterTest _cppCluster;
}


@property ? cppCluster;


-(void)writeAttributeAcceptedCommandListWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeAccessControlEntriesPerFabricWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeAttributeListWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeClusterRevisionWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeGeneratedCommandListWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeSubjectsPerAccessControlEntryWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeTargetsPerAccessControlEntryWithValue:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif