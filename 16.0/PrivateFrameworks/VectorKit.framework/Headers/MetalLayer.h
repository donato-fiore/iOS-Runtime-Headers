// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef METALLAYER_H
#define METALLAYER_H

@class CAMetalLayer;
@protocol GGLLayer, GGLLayerDelegate;



@interface MetalLayer : CAMetalLayer <GGLLayer>

 {
    ? _device;
    ? _texture;
    shared_ptr<ggl::SamplerState> _samplerState;
}


@property (readonly) int backingFormat;
@property (readonly, nonatomic) CGSize backingSize; // ivar: _backingSize
@property (weak) NSObject<GGLLayerDelegate> *renderDelegate; // ivar: _delegate
@property (readonly, nonatomic) BOOL sRGB; // ivar: _sRGB


-(id)_updateDrawable;
-(id)initWithDevice:(struct shared_ptr<ggl::MetalDevice> )arg0 sRGB:(BOOL)arg1 ;
-(void)_createTexture;
-(void)_onTimerFired:(CGFloat)arg0 withPresent:(id)arg1 ;
-(void)didEnterBackground;
-(void)display;
-(void)layoutSublayers;
-(void)onTimerFired:(CGFloat)arg0 ;
-(void)onTimerFired:(CGFloat)arg0 presentAfterMinimumDuration:(CGFloat)arg1 ;
-(void)onTimerFired:(CGFloat)arg0 presentAtTime:(CGFloat)arg1 ;


@end


#endif