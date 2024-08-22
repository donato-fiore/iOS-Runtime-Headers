// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef JFXOVERLAYEFFECTANIMATIONVIEW_H
#define JFXOVERLAYEFFECTANIMATIONVIEW_H

@class UIView, CALayer;


#import "JFXEffectAnimationDelegate.h"
#import "JFXOverlayEffectTransforms.h"
#import "JFXOverlayEffectFrame.h"

@interface JFXOverlayEffectAnimationView : UIView

@property (retain, nonatomic) CALayer *additionalTransformLayer; // ivar: _additionalTransformLayer
@property (retain, nonatomic) JFXEffectAnimationDelegate *animationDelegate; // ivar: _animationDelegate
@property (retain, nonatomic) CALayer *cameraTransformLayer; // ivar: _cameraTransformLayer
@property (readonly, nonatomic) JFXOverlayEffectTransforms *currentEffectTransforms;
@property (readonly, nonatomic) CGFloat fractionComplete;
@property (retain, nonatomic) JFXOverlayEffectFrame *fromEffectFrame; // ivar: _fromEffectFrame
@property (retain, nonatomic) JFXOverlayEffectFrame *toEffectFrame; // ivar: _toEffectFrame
@property (retain, nonatomic) CALayer *trackingTransformLayer; // ivar: _trackingTransformLayer
@property (retain, nonatomic) CALayer *transformLayer; // ivar: _transformLayer


-(id)initWithEffectFrame:(id)arg0 toEffectFrame:(id)arg1 ;
-(void)animate:(id)arg0 completion:(id)arg1 ;


@end


#endif