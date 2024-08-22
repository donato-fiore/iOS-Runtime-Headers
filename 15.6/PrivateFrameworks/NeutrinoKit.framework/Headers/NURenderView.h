// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NURENDERVIEW_H
#define NURENDERVIEW_H

@class UIView, NUImageGeometry, CALayer, NSString;
@protocol CAAnimationDelegate;


#import "NUTiledImageLayer.h"
#import "_NUContainerLayer.h"

@interface NURenderView : UIView <CAAnimationDelegate>

 {
    NUTiledImageLayer *_backfillLayer;
    NUTiledImageLayer *_roiLayer;
    _NUContainerLayer *_containerLayer;
    NUImageGeometry *_geometry;
    BOOL _transitionAnimationInFlight;
    BOOL _shouldRemoveAnimation;
    CALayer *_geometryAnimationLayer;
}


@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL debugMode; // ivar: _debugMode
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NUImageGeometry *geometry;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)inLiveResize;
-(id)_backfillLayer;
-(id)_containerLayer;
-(id)_roiLayer;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGRect )convertRectToImage:(struct CGRect )arg0 ;
-(void)animationDidStart:(id)arg0 ;
-(void)animationDidStop:(id)arg0 finished:(BOOL)arg1 ;
-(void)layoutSubviews;
-(void)renderFrameReachedTargetSize;
-(void)transitionToSize:(struct CGSize )arg0 duration:(CGFloat)arg1 animationCurve:(id)arg2 completion:(id)arg3 ;
-(void)transitionToSize:(struct CGSize )arg0 offset:(struct CGPoint )arg1 duration:(CGFloat)arg2 animationCurve:(id)arg3 completion:(id)arg4 ;
-(void)willMoveToWindow:(id)arg0 ;


@end


#endif