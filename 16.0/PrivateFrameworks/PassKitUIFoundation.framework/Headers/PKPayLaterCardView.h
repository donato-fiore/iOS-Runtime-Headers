// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYLATERCARDVIEW_H
#define PKPAYLATERCARDVIEW_H

@class UIView, NSString;
@protocol PKMetalRenderLoopDelegate, PKMotionManagerClientProtocol, PKInvalidatable, PKPayLaterCardMagnitudesProvider;


#import "PKMetalRenderLoop.h"
#import "PKPayLaterCardRenderer.h"

@interface PKPayLaterCardView : UIView <PKMetalRenderLoopDelegate, PKMotionManagerClientProtocol, PKInvalidatable>

 {
    BOOL _invalidated;
    BOOL _draw;
    BOOL _effectivePaused;
    BOOL _effectiveMotionEnabled;
    ? _lastRotation;
    NSUInteger _framesToRender;
    PKMetalRenderLoop *_renderLoop;
    PKPayLaterCardRenderer *_renderer;
    id<PKPayLaterCardMagnitudesProvider> *_magnitudesProvider;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isInvalidated) BOOL invalidated;
@property (nonatomic, getter=isMotionEnabled) BOOL motionEnabled; // ivar: _motionEnabled
@property (nonatomic, getter=isPaused) BOOL paused; // ivar: _paused
@property (nonatomic, getter=isPresented) BOOL presented;
@property (readonly) Class superclass;


-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithOverlay:(struct CGImage *)arg0 magnitudesProvider:(id)arg1 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)invalidate;
-(void)layoutSubviews;
-(void)motionManager:(id)arg0 didReceiveMotion:(id)arg1 ;
-(void)refreshMagnitudes;
-(void)renderLoop:(id)arg0 didChangeRunnable:(BOOL)arg1 ;
-(void)renderLoop:(id)arg0 drawAtTime:(CGFloat)arg1 ;
-(void)renderLoop:(id)arg0 drawableSizeDidChange:(struct CGSize )arg1 ;


@end


#endif