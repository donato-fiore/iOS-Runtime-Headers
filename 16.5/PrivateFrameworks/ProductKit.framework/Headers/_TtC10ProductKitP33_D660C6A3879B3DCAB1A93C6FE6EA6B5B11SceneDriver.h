// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC10PRODUCTKITP33_D660C6A3879B3DCAB1A93C6FE6EA6B5B11SCENEDRIVER_H
#define _TTC10PRODUCTKITP33_D660C6A3879B3DCAB1A93C6FE6EA6B5B11SCENEDRIVER_H

@protocol SCNSceneRendererDelegate;

#import <Foundation/Foundation.h>


@interface _TtC10ProductKitP33_D660C6A3879B3DCAB1A93C6FE6EA6B5B11SceneDriver : NSObject <SCNSceneRendererDelegate>

 {
    ? scene;
    ? configuration;
    ? player;
    ? camera;
    ? personalizedAssetMaterial;
    ? token;
    ? timeObserverToken;
    ? textureCache;
    ? videoMaterial;
    ? currentPlaybackState;
    ? featureStartedHandler;
    ? featureCompletedHandler;
    ? engageDuration;
    ? loopDuration;
    ? croppedVideoSize;
    ? originalVideoSize;
    ? yOffset;
    ? currentIOSurface;
}




-(id)init;
-(void)dealloc;
-(void)handlePlayerItemFinished:(id)arg0 ;
-(void)renderer:(id)arg0 didRenderScene:(id)arg1 atTime:(CGFloat)arg2 ;


@end


#endif