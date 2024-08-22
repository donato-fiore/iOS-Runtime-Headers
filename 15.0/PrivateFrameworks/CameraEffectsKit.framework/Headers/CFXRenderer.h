// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CFXRENDERER_H
#define CFXRENDERER_H

@class PVLivePlayerCameraSource, NSString, PVLivePlayer;
@protocol PVLivePlayerDelegate, CFXRendererDelegate;

#import <Foundation/Foundation.h>

#import "JFXAnimojiEffectRenderer.h"
#import "JTFrameRateCalculator.h"
#import "JFXMetadataValidator.h"
#import "JFXPixelRotationSession.h"

@interface CFXRenderer : NSObject <PVLivePlayerDelegate>



@property (retain, nonatomic) JFXAnimojiEffectRenderer *animojiRenderer; // ivar: _animojiRenderer
@property (readonly, nonatomic) NSInteger cameraMode; // ivar: _cameraMode
@property (retain, nonatomic) PVLivePlayerCameraSource *cameraSource; // ivar: _cameraSource
@property (nonatomic) NSInteger captureMode; // ivar: _captureMode
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CFXRendererDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) JTFrameRateCalculator *fpsCalc; // ivar: _fpsCalc
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PVLivePlayer *livePlayer; // ivar: _livePlayer
@property (readonly, nonatomic) BOOL livePlayerIsSaturated;
@property (retain, nonatomic) JFXMetadataValidator *metadataValidator; // ivar: _metadataValidator
@property (retain, nonatomic) JFXPixelRotationSession *pixelRotationSession; // ivar: _pixelRotationSession
@property (readonly) Class superclass;


+(void)initialize;
-(id)CFX_JTEffectsFromCFXEffectComposition:(id)arg0 forRenderTime:(struct ? )arg1 ;
-(id)CFX_PVFrameSetFromCFXFrame:(id)arg0 ;
-(id)CFX_getPreviewColorSpace;
-(id)buildRenderRequest:(id)arg0 time:(struct ? )arg1 ;
-(id)initWithDelegate:(id)arg0 captureMode:(NSInteger)arg1 ;
-(void)dealloc;
-(void)flush;
-(void)livePlayerDroppedFrame:(int)arg0 sources:(id)arg1 time:(struct ? )arg2 ;
-(void)pause;
-(void)renderFrame:(id)arg0 effectComposition:(id)arg1 ;
-(void)renderRequestComplete:(id)arg0 results:(id)arg1 completedOutOfOrder:(BOOL)arg2 ;
-(void)resetMetadataValidation;
-(void)resume;
-(void)setTrackingLossDelegate:(id)arg0 ;
-(void)shutdown;
-(void)willDropCameraFrame;


@end


#endif