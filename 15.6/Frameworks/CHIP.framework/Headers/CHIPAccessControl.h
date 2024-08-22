// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPACCESSCONTROL_H
#define CHIPACCESSCONTROL_H



#import "CHIPCluster.h"

@interface CHIPAccessControl : CHIPCluster {
    AccessControlCluster _cppCluster;
}


@property ? cppCluster;


+(void)readAttributeAcceptedCommandListWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeAccessControlEntriesPerFabricWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeAclWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeAttributeListWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeClusterRevisionWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeExtensionWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeGeneratedCommandListWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeSubjectsPerAccessControlEntryWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeTargetsPerAccessControlEntryWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
-(void)readAttributeAcceptedCommandListWithCompletionHandler:(id)arg0 ;
-(void)readAttributeAccessControlEntriesPerFabricWithCompletionHandler:(id)arg0 ;
-(void)readAttributeAclWithParams:(id)arg0 completionHandler:(id)arg1 ;
-(void)readAttributeAttributeListWithCompletionHandler:(id)arg0 ;
-(void)readAttributeClusterRevisionWithCompletionHandler:(id)arg0 ;
-(void)readAttributeExtensionWithParams:(id)arg0 completionHandler:(id)arg1 ;
-(void)readAttributeGeneratedCommandListWithCompletionHandler:(id)arg0 ;
-(void)readAttributeSubjectsPerAccessControlEntryWithCompletionHandler:(id)arg0 ;
-(void)readAttributeTargetsPerAccessControlEntryWithCompletionHandler:(id)arg0 ;
// -(void)subscribeAttributeAcceptedCommandListWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeAccessControlEntriesPerFabricWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeAclWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeAttributeListWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeClusterRevisionWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeExtensionWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeGeneratedCommandListWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeSubjectsPerAccessControlEntryWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeTargetsPerAccessControlEntryWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
-(void)writeAttributeAclWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeExtensionWithValue:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif