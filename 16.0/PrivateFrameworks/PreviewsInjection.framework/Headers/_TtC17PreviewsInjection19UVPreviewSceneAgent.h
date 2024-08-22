// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC17PREVIEWSINJECTION19UVPREVIEWSCENEAGENT_H
#define _TTC17PREVIEWSINJECTION19UVPREVIEWSCENEAGENT_H

@class TtC17PreviewsInjection14UVPreviewAgent;
@protocol UVAgentPreviewSceneServiceProtocol;



@interface _TtC17PreviewsInjection19UVPreviewSceneAgent : TtC17PreviewsInjection14UVPreviewAgent <UVAgentPreviewSceneServiceProtocol>

 {
    ? serviceConnection;
    ? scene;
    ? sceneBehavior;
    ? sceneMessenger;
    ? currentUpdateResult;
}




-(id)init;
-(void)generateStaticOutput:(id)arg0 ;
-(void)performUpdate:(id)arg0 sceneContext:(id)arg1 replyHandler:(id)arg2 ;


@end


#endif