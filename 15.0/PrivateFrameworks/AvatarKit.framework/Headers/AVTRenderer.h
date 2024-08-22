// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVTRENDERER_H
#define AVTRENDERER_H

@class SCNRenderer, SCNNode, NSLock, SCNTechnique, NSString;
@protocol _SCNSceneCommandBufferStatusMonitor, _SCNSceneRendererResourceManagerMonitor, SCNSceneRendererDelegate, _SCNSceneRendererDelegateSPI;


#import "AVTAvatarEnvironment.h"
#import "AVTAvatar.h"
#import "AVTFaceTracker.h"
#import "AVTARMaskRenderer.h"

@interface AVTRenderer : SCNRenderer <_SCNSceneCommandBufferStatusMonitor, _SCNSceneRendererResourceManagerMonitor, SCNSceneRendererDelegate, _SCNSceneRendererDelegateSPI>

 {
    AVTAvatarEnvironment *_environment;
    AVTAvatar *_avatar;
    SCNNode *_avatarNode;
    NSLock *_lock;
    BOOL _pauseSimulation;
    BOOL _arMode;
    BOOL _shouldUpdateFieldOfViewForARMode;
    AVTFaceTracker *_faceTracker;
    float _faceTrackerFieldOfView;
    float _faceTrackerVideoAspectRatio;
    NSInteger _faceTrackerInterfaceOrientation;
    NSUInteger _antialiasingMode;
    SCNTechnique *_arMaskTechnique;
    AVTARMaskRenderer *_arMaskRenderer;
    BOOL _arMaskRendererHasFlippedDepth;
}


@property (nonatomic) BOOL arMode;
@property (retain, nonatomic) AVTAvatar *avatar;
@property (nonatomic) NSUInteger avt_antialiasingMode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) AVTFaceTracker *faceTracker;
@property (copy, nonatomic) NSString *framingMode;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL pauseSimulation;
@property (readonly) Class superclass;


+(id)renderer;
+(id)rendererWithDevice:(id)arg0 options:(id)arg1 ;
-(BOOL)enableDepthMask;
-(id)_renderer:(id)arg0 subdivDataForHash:(id)arg1 ;
-(id)capturedDepth;
-(void)_avtSetupWithOptions:(id)arg0 ;
-(void)_renderer:(id)arg0 didApplyAnimationsAtTime:(CGFloat)arg1 ;
-(void)_renderer:(id)arg0 didBuildSubdivDataForHash:(id)arg1 dataProvider:(id)arg2 ;
-(void)_renderer:(id)arg0 updateAtTime:(CGFloat)arg1 ;
-(void)_updateAvatarForARMode;
-(void)_updateFocal;
-(void)dealloc;
-(void)faceTrackerDidUpdate:(id)arg0 trackingInfo:(id)arg1 ;
-(void)fadePuppetToWhite:(float)arg0 ;
-(void)renderAtTime:(CGFloat)arg0 viewport:(struct CGRect )arg1 commandBuffer:(id)arg2 passDescriptor:(id)arg3 ;
-(void)renderWithViewport:(struct CGRect )arg0 commandBuffer:(id)arg1 passDescriptor:(id)arg2 ;
-(void)renderer:(id)arg0 commandBufferDidCompleteWithError:(id)arg1 ;
-(void)renderer:(id)arg0 didFallbackToDefaultTextureForSource:(id)arg1 message:(id)arg2 ;
-(void)setCapturedDepth:(id)arg0 ;
-(void)setEnableDepthMask:(BOOL)arg0 ;
-(void)setEnableDepthMask:(BOOL)arg0 withFlippedDepth:(BOOL)arg1 ;
-(void)setValue:(id)arg0 forUndefinedKey:(id)arg1 ;
-(void)updateFieldOfViewForARModeIfNeeded:(struct CGRect )arg0 ;


@end


#endif