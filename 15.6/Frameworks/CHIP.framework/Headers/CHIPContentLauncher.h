// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPCONTENTLAUNCHER_H
#define CHIPCONTENTLAUNCHER_H



#import "CHIPCluster.h"

@interface CHIPContentLauncher : CHIPCluster {
    ContentLauncherCluster _cppCluster;
}


@property ? cppCluster;


+(void)readAttributeAcceptHeaderWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeAcceptedCommandListWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeAttributeListWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeClusterRevisionWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeGeneratedCommandListWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeSupportedStreamingProtocolsWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
-(void)launchContentWithParams:(id)arg0 completionHandler:(id)arg1 ;
-(void)launchURLWithParams:(id)arg0 completionHandler:(id)arg1 ;
-(void)readAttributeAcceptHeaderWithCompletionHandler:(id)arg0 ;
-(void)readAttributeAcceptedCommandListWithCompletionHandler:(id)arg0 ;
-(void)readAttributeAttributeListWithCompletionHandler:(id)arg0 ;
-(void)readAttributeClusterRevisionWithCompletionHandler:(id)arg0 ;
-(void)readAttributeGeneratedCommandListWithCompletionHandler:(id)arg0 ;
-(void)readAttributeSupportedStreamingProtocolsWithCompletionHandler:(id)arg0 ;
// -(void)subscribeAttributeAcceptHeaderWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeAcceptedCommandListWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeAttributeListWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeClusterRevisionWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeGeneratedCommandListWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeSupportedStreamingProtocolsWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
-(void)writeAttributeSupportedStreamingProtocolsWithValue:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif