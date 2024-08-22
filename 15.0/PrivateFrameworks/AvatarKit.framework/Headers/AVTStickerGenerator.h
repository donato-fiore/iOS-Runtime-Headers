// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


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


+(id)addCamera:(id)arg0 inScene:(id)arg1 ;
+(id)applyViewTransitionConfiguration:(id)arg0 toScene:(id)arg1 withAvatar:(id)arg2 context:(id)arg3 ;
+(id)createPropsParentNodeIfNeededInScene:(id)arg0 ;
+(id)findNodesNamed:(id)arg0 inHierarchy:(id)arg1 ;
+(id)workQueue;
+(struct CGRect )clippingRectForBaseSize:(struct CGSize )arg0 ;
+(void)addProps:(id)arg0 toScene:(id)arg1 forAvatar:(id)arg2 withCamera:(id)arg3 forExport:(BOOL)arg4 completion:(id)arg5 ;
+(void)applyConfiguration:(id)arg0 toScene:(id)arg1 withAvatar:(id)arg2 context:(id)arg3 defaultCamera:(id)arg4 forExport:(BOOL)arg5 completion:(id)arg6 ;
+(void)applyViewTransitionConfiguration:(id)arg0 toNewComponentAssetNode:(id)arg1 ;
-(id)_renderer:(id)arg0 subdivDataForHash:(id)arg1 ;
-(id)initWithAvatar:(id)arg0 ;
-(id)snapshotAtTime:(CGFloat)arg0 withRenderer:(id)arg1 configuration:(id)arg2 options:(id)arg3 ;
-(void)_renderer:(id)arg0 didBuildSubdivDataForHash:(id)arg1 dataProvider:(id)arg2 ;
-(void)_stickerImageWithConfiguration:(id)arg0 options:(id)arg1 startTime:(CGFloat)arg2 completionHandler:(id)arg3 ;
-(void)renderer:(id)arg0 commandBufferDidCompleteWithError:(id)arg1 ;
-(void)renderer:(id)arg0 didApplyAnimationsAtTime:(CGFloat)arg1 ;
-(void)renderer:(id)arg0 didFallbackToDefaultTextureForSource:(id)arg1 message:(id)arg2 ;
-(void)rendererWithConfiguration:(id)arg0 completion:(id)arg1 ;
-(void)setupAvatar:(id)arg0 ;
-(void)setupRendererWithAvatar:(id)arg0 ;
-(void)stickerImageWithConfiguration:(id)arg0 completionHandler:(id)arg1 ;
-(void)stickerImageWithConfiguration:(id)arg0 correctClipping:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)stickerImageWithConfiguration:(id)arg0 options:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif