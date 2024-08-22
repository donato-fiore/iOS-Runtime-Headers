// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHIPSCENES_H
#define CHIPSCENES_H



#import "CHIPCluster.h"

@interface CHIPScenes : CHIPCluster

@property (readonly) ScenesCluster cppCluster; // ivar: _cppCluster


-(struct ClusterBase *)getCluster;
-(void)addScene:(unsigned short)arg0 sceneId:(unsigned char)arg1 transitionTime:(unsigned short)arg2 sceneName:(id)arg3 clusterId:(unsigned short)arg4 length:(unsigned char)arg5 value:(unsigned char)arg6 responseHandler:(id)arg7 ;
-(void)getSceneMembership:(unsigned short)arg0 responseHandler:(id)arg1 ;
-(void)readAttributeClusterRevisionWithResponseHandler:(id)arg0 ;
-(void)readAttributeCurrentGroupWithResponseHandler:(id)arg0 ;
-(void)readAttributeCurrentSceneWithResponseHandler:(id)arg0 ;
-(void)readAttributeNameSupportWithResponseHandler:(id)arg0 ;
-(void)readAttributeSceneCountWithResponseHandler:(id)arg0 ;
-(void)readAttributeSceneValidWithResponseHandler:(id)arg0 ;
-(void)recallScene:(unsigned short)arg0 sceneId:(unsigned char)arg1 transitionTime:(unsigned short)arg2 responseHandler:(id)arg3 ;
-(void)removeAllScenes:(unsigned short)arg0 responseHandler:(id)arg1 ;
-(void)removeScene:(unsigned short)arg0 sceneId:(unsigned char)arg1 responseHandler:(id)arg2 ;
-(void)storeScene:(unsigned short)arg0 sceneId:(unsigned char)arg1 responseHandler:(id)arg2 ;
-(void)viewScene:(unsigned short)arg0 sceneId:(unsigned char)arg1 responseHandler:(id)arg2 ;


@end


#endif