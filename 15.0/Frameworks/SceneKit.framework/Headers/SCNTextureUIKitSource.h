// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SCNTEXTUREUIKITSOURCE_H
#define SCNTEXTUREUIKITSOURCE_H

@class UIView, UIWindow, CALayer;


#import "SCNTextureCoreAnimationSource.h"

@interface SCNTextureUIKitSource : SCNTextureCoreAnimationSource {
    BOOL _windowReady;
    CGSize _sizeCache;
    unsigned int _textureID;
    *__C3DEngineContext _engineContext;
    *__C3DTextureSampler _textureSampler;
}


@property (nonatomic) BOOL isOpaque; // ivar: _isOpaque
@property (retain, nonatomic) id *source; // ivar: _source
@property (retain, nonatomic) UIView *uiView; // ivar: _uiView
@property (retain, nonatomic) UIWindow *uiWindow; // ivar: _uiWindow
@property (retain, nonatomic) CALayer *uiWindowLayer; // ivar: _uiWindowLayer


-(?)cleanup;
-(BOOL)requiresMainThreadUpdates;
-(BOOL)shouldFlip;
-(BOOL)supportsMetal;
-(CGFloat)layerContentsScaleFactor;
-(float)clearValue;
-(id)layer;
-(id)layerToFocusForRenderedLayer:(id)arg0 ;
-(struct CGSize )layerSizeInPixels;
-(struct __C3DTexture *)textureWithEngineContext:(struct __C3DEngineContext *)arg0 textureSampler:(struct __C3DTextureSampler *)arg1 nextFrameTime:(*CGFloat)arg2 ;
-(void)_layerTreeDidUpdate;
-(void)dealloc;
-(void)setup;


@end


#endif