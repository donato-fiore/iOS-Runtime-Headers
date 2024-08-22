// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVTSTICKERGENERATOR_H
#define AVTSTICKERGENERATOR_H

@class NSString, SCNRenderer, SCNScene;
@protocol SCNSceneRendererDelegate, _SCNSceneRendererDelegateSPI, _SCNSceneCommandBufferStatusMonitor, _SCNSceneRendererResourceManagerMonitor;

#import <Foundation/Foundation.h>

#import "AVTStickerConfigurationReversionContext.h"
#import "AVTAvatar.h"
#import "AVTAvatarEnvironment.h"

@interface AVTStickerGenerator : NSObject <SCNSceneRendererDelegate, _SCNSceneRendererDelegateSPI, _SCNSceneCommandBufferStatusMonitor, _SCNSceneRendererResourceManagerMonitor>

 {
    AVTStickerConfigurationReversionContext *_context;
    ? _backgroundGPUWorkHelper;
}


@property (nonatomic) BOOL async; // ivar: _async
@property (retain, nonatomic) AVTAvatar *avatar; // ivar: _avatar
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) AVTAvatarEnvironment *environment; // ivar: _environment
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SCNRenderer *renderer; // ivar: _renderer
@property (retain, nonatomic) SCNScene *scene; // ivar: _scene
@property (readonly) Class superclass;


+(id)addCamera:(id)arg0 inScene:(id)arg1 reversionContext:(id)arg2 ;
+(id)findNodesNamed:(id)arg0 inHierarchy:(id)arg1 ;
+(id)poseByApplyingAdjustmentsForConfiguration:(id)arg0 avatar:(id)arg1 ;
+(id)workQueue;
+(void)addProps:(id)arg0 toScene:(id)arg1 forAvatar:(id)arg2 withCamera:(id)arg3 options:(id)arg4 forExport:(BOOL)arg5 reversionContext:(id)arg6 ;
+(void)applyViewTransitionConfiguration:(id)arg0 toNewComponentAssetNode:(id)arg1 ;
+(void)applyViewTransitionConfiguration:(id)arg0 toView:(id)arg1 scope:(NSUInteger)arg2 options:(NSUInteger)arg3 duration:(CGFloat)arg4 avatar:(id)arg5 context:(id)arg6 completionHandler:(id)arg7 ;
-(id)_renderer:(id)arg0 subdivDataForHash:(id)arg1 ;
-(id)initWithAvatar:(id)arg0 ;
-(void)_applicationDidBecomeActive:(id)arg0 ;
-(void)_applicationDidEnterBackground:(id)arg0 ;
-(void)_applicationWillEnterForeground:(id)arg0 ;
-(void)_applicationWillResignActive:(id)arg0 ;
-(void)_renderer:(id)arg0 didBuildSubdivDataForHash:(id)arg1 dataProvider:(id)arg2 ;
-(void)_stickerImageWithConfiguration:(id)arg0 options:(id)arg1 startTime:(CGFloat)arg2 completionHandler:(id)arg3 ;
-(void)applyConfiguration:(id)arg0 options:(id)arg1 forExport:(BOOL)arg2 completion:(id)arg3 ;
-(void)dealloc;
-(void)renderer:(id)arg0 commandBufferDidCompleteWithError:(id)arg1 ;
-(void)renderer:(id)arg0 didApplyAnimationsAtTime:(CGFloat)arg1 ;
-(void)renderer:(id)arg0 didFallbackToDefaultTextureForSource:(id)arg1 message:(id)arg2 ;
-(void)rendererWithConfiguration:(id)arg0 options:(id)arg1 completion:(id)arg2 ;
-(void)setupAvatar:(id)arg0 ;
-(void)setupRendererWithAvatar:(id)arg0 ;
-(void)snapshotAtTime:(CGFloat)arg0 withRenderer:(id)arg1 configuration:(id)arg2 options:(id)arg3 completionBlock:(id)arg4 ;
-(void)stickerImageWithConfiguration:(id)arg0 completionHandler:(id)arg1 ;
-(void)stickerImageWithConfiguration:(id)arg0 correctClipping:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)stickerImageWithConfiguration:(id)arg0 options:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif