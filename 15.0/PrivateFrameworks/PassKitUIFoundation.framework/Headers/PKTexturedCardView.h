// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKTEXTUREDCARDVIEW_H
#define PKTEXTUREDCARDVIEW_H

@class UIView, NSString;
@protocol PKMetalRenderLoopDelegate, PKMotionManagerClientProtocol, PKInvalidatable;


#import "PKMetalRenderLoop.h"
#import "PKTexturedCardRenderer.h"

@interface PKTexturedCardView : UIView <PKMetalRenderLoopDelegate, PKMotionManagerClientProtocol, PKInvalidatable>

 {
    BOOL _invalidated;
    BOOL _draw;
    BOOL _effectivePaused;
    BOOL _motionAllowed;
    BOOL _effectiveMotionEnabled;
    ? _lastRotation;
    PKMetalRenderLoop *_renderLoop;
    PKTexturedCardRenderer *_renderer;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isInvalidated) BOOL invalidated;
@property (nonatomic, getter=isMotionEnabled) BOOL motionEnabled; // ivar: _motionEnabled
@property (nonatomic, getter=isPaused) BOOL paused; // ivar: _paused
@property (readonly) Class superclass;


-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)invalidate;
-(void)layoutSubviews;
-(void)motionManager:(id)arg0 didReceiveMotion:(id)arg1 ;
-(void)renderLoop:(id)arg0 didChangeForcingPause:(BOOL)arg1 ;
-(void)renderLoop:(id)arg0 drawAtTime:(CGFloat)arg1 ;
-(void)renderLoop:(id)arg0 drawableSizeDidChange:(struct CGSize )arg1 ;


@end


#endif