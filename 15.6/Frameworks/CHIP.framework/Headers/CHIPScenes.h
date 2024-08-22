// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPSCENES_H
#define CHIPSCENES_H



#import "CHIPCluster.h"

@interface CHIPScenes : CHIPCluster {
    ScenesCluster _cppCluster;
}


@property ? cppCluster;


+(void)readAttributeAcceptedCommandListWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeAttributeListWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeClusterRevisionWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeCurrentGroupWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeCurrentSceneWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeGeneratedCommandListWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeNameSupportWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeSceneCountWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeSceneValidWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
-(void)addSceneWithParams:(id)arg0 completionHandler:(id)arg1 ;
-(void)getSceneMembershipWithParams:(id)arg0 completionHandler:(id)arg1 ;
-(void)readAttributeAcceptedCommandListWithCompletionHandler:(id)arg0 ;
-(void)readAttributeAttributeListWithCompletionHandler:(id)arg0 ;
-(void)readAttributeClusterRevisionWithCompletionHandler:(id)arg0 ;
-(void)readAttributeCurrentGroupWithCompletionHandler:(id)arg0 ;
-(void)readAttributeCurrentSceneWithCompletionHandler:(id)arg0 ;
-(void)readAttributeGeneratedCommandListWithCompletionHandler:(id)arg0 ;
-(void)readAttributeNameSupportWithCompletionHandler:(id)arg0 ;
-(void)readAttributeSceneCountWithCompletionHandler:(id)arg0 ;
-(void)readAttributeSceneValidWithCompletionHandler:(id)arg0 ;
-(void)recallSceneWithParams:(id)arg0 completionHandler:(id)arg1 ;
-(void)removeAllScenesWithParams:(id)arg0 completionHandler:(id)arg1 ;
-(void)removeSceneWithParams:(id)arg0 completionHandler:(id)arg1 ;
-(void)storeSceneWithParams:(id)arg0 completionHandler:(id)arg1 ;
// -(void)subscribeAttributeAcceptedCommandListWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeAttributeListWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeClusterRevisionWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeCurrentGroupWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeCurrentSceneWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeGeneratedCommandListWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeNameSupportWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeSceneCountWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeSceneValidWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
-(void)viewSceneWithParams:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif