// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef JFXANIMOJIEFFECTRENDERER_H
#define JFXANIMOJIEFFECTRENDERER_H

@class AVTAvatarStore, NSString, NSLock, AVTRenderer;
@protocol PVCompositeDelegate, JFXSupportProtocol, OS_dispatch_queue, JFXAnimojiTrackingLossDelegate;

#import <Foundation/Foundation.h>

#import "JFXAnimojiEffect.h"

@interface JFXAnimojiEffectRenderer : NSObject <PVCompositeDelegate, JFXSupportProtocol>

 {
    NSObject<OS_dispatch_queue> *_puppetLoadingQ;
    NSObject<OS_dispatch_queue> *_puppetRenderingQ;
    BOOL _logged_render_failed;
}


@property (nonatomic) BOOL allowAntialiasing; // ivar: _allowAntialiasing
@property (nonatomic) BOOL asynchronouslyLoadNewPuppets; // ivar: _asynchronouslyLoadNewPuppets
@property (retain, nonatomic) AVTAvatarStore *avatarStore; // ivar: _avatarStore
@property (retain, nonatomic) JFXAnimojiEffect *currentPuppet; // ivar: _currentPuppet
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) *__CVPixelBufferPool inputBufferPool; // ivar: _inputBufferPool
@property (nonatomic) *__CVMetalTextureCache metalDepthTextureCache; // ivar: _metalDepthTextureCache
@property (nonatomic) *__CVMetalTextureCache metalTextureCache; // ivar: _metalTextureCache
@property (readonly, nonatomic) NSLock *renderPassLock; // ivar: _renderPassLock
@property (retain, nonatomic) AVTRenderer *renderer; // ivar: _renderer
@property (retain, nonatomic) NSLock *rendererLock; // ivar: _rendererLock
@property (readonly) Class superclass;
@property (nonatomic) CGFloat systemTimeForAVTRenderer; // ivar: _systemTimeForAVTRenderer
@property (weak, nonatomic) NSObject<JFXAnimojiTrackingLossDelegate> *trackingLossDelegate; // ivar: _trackingLossDelegate
@property (nonatomic) CGSize workingSize; // ivar: _workingSize


+(BOOL)isSupported;
+(struct CGSize )animojiBufferSizeWithImageSize:(struct CGSize )arg0 interfaceOrientation:(NSInteger)arg1 ;
+(void)setupAVTMetalShaderCache;
-(BOOL)JFX_getRenderer:(*id)arg0 forAnimojiEffect:(id)arg1 primeFrame:(id)arg2 captureOrientation:(NSInteger)arg3 interfaceOrientation:(NSInteger)arg4 ;
-(BOOL)JFX_inputBufferIsPortraitAspect:(struct CGSize )arg0 ;
-(BOOL)currentPuppetIsEqualTo:(id)arg0 ;
-(BOOL)setupHeadPoseAndBlendShapesForFrame:(id)arg0 forRenderer:(id)arg1 captureOrientation:(NSInteger)arg2 interfaceOrientation:(NSInteger)arg3 isInitialSetup:(BOOL)arg4 ;
-(BOOL)setupPoseForPreRecordedBlendShapes:(id)arg0 forRenderer:(id)arg1 captureOrientation:(NSInteger)arg2 interfaceOrientation:(NSInteger)arg3 withFrame:(id)arg4 ;
-(CGFloat)JFX_focalLengthForFrame:(id)arg0 workingSize:(struct CGSize )arg1 interfaceOrientation:(NSInteger)arg2 ;
-(id)JFX_blendShapesForRenderer:(id)arg0 ;
-(id)createNewRendererForPuppet:(id)arg0 ;
-(id)init;
-(id)preRecordedBlendShapesForFrame:(id)arg0 captureOrientation:(NSInteger)arg1 interfaceOrientation:(NSInteger)arg2 ;
-(id)renderWithInputs:(id)arg0 time:(struct ? )arg1 userContext:(id)arg2 compositeContext:(id)arg3 ;
-(struct __CVBuffer *)JFX_depthDataToTexture:(id)arg0 ;
-(struct __CVBuffer *)newPixelBufferRenderedFromARFrame:(id)arg0 withEffect:(id)arg1 depthData:(id)arg2 videoDimensions:(struct ? )arg3 fieldOfView:(float)arg4 captureOrientation:(NSInteger)arg5 interfaceOrientation:(NSInteger)arg6 preRecordedBlendShapes:(id)arg7 ;
-(void)asyncLoadNewPuppet:(id)arg0 currentPuppet:(id)arg1 captureOrientation:(NSInteger)arg2 interfaceOrientation:(NSInteger)arg3 primeFrame:(id)arg4 ;
-(void)clear;
-(void)clearRenderer_renderLocked;
-(void)createTextureCaches;
-(void)dealloc;
-(void)flush;
-(void)renderAnimoji:(id)arg0 withPresentationTime:(struct ? )arg1 frame:(id)arg2 depthData:(id)arg3 completionBlock:(id)arg4 ;
-(void)renderFrame:(id)arg0 withEffect:(id)arg1 depthData:(id)arg2 videoDimensions:(struct ? )arg3 fieldOfView:(float)arg4 captureOrientation:(NSInteger)arg5 interfaceOrientation:(NSInteger)arg6 preRecordedBlendShapes:(id)arg7 completionBlock:(id)arg8 ;
-(void)setupInputBufferPoolForSize:(struct CGSize )arg0 ;
-(void)updateCurrentRenderer:(id)arg0 withPuppet:(id)arg1 ;


@end


#endif