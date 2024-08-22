// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVPRESENTATIONCONTAINERVIEW_H
#define AVPRESENTATIONCONTAINERVIEW_H

@class UIView;


#import "AVPresentationContainerViewAppearanceProxy.h"
#import "AVPresentationContainerViewLayer.h"

@interface AVPresentationContainerView : UIView

@property (readonly, nonatomic) AVPresentationContainerViewAppearanceProxy *appearanceProxy;
@property (nonatomic, getter=isBeingDismissed) BOOL beingDismissed; // ivar: _beingDismissed
@property (nonatomic, getter=isBeingPresented) BOOL beingPresented; // ivar: _beingPresented
@property (nonatomic, getter=isCounterRotatingContentView) BOOL counterRotatingContentView; // ivar: _counterRotatingContentView
@property (nonatomic) NSInteger fromOrientation; // ivar: _fromOrientation
@property (readonly, nonatomic) AVPresentationContainerViewLayer *layer;
@property (weak, nonatomic) UIView *presentationContainerContentView; // ivar: _presentationContainerContentView
@property (nonatomic) NSInteger toOrientation; // ivar: _toOrientation
@property (nonatomic) BOOL wantsAppearanceConfigValues; // ivar: _wantsAppearanceConfigValues
@property (nonatomic) BOOL willBeginOrientationChange; // ivar: _willBeginOrientationChange


-(BOOL)avkit_isCounterRotatedForTransition;
-(BOOL)avkit_isVideoGravityFrozen;
-(CGFloat)_continuousCornerRadius;
-(CGFloat)_cornerRadius;
-(CGFloat)_radiansForCounterRotation;
-(struct CGAffineTransform )_contentTransform;
-(struct UIEdgeInsets )avkit_overrideLayoutMarginsForCounterRotation;
-(struct UIEdgeInsets )avkit_overrideLayoutMarginsForInterfaceOrientation:(NSInteger)arg0 ;
-(void)_setContinuousCornerRadius:(CGFloat)arg0 ;
-(void)_setCornerRadius:(CGFloat)arg0 ;
-(void)didStopTransition;
-(void)layoutSubviews;
-(void)setBackgroundColor:(id)arg0 ;
-(void)setClipsToBounds:(BOOL)arg0 ;
-(void)willBeginAdjustingOrientation;
-(void)willStartDismissalTransitionFromInterfaceOrientation:(NSInteger)arg0 toOrientation:(NSInteger)arg1 needsCounterRotation:(BOOL)arg2 ;
-(void)willStartPresentationTransitionFromInterfaceOrientation:(NSInteger)arg0 toOrientation:(NSInteger)arg1 needsCounterRotation:(BOOL)arg2 ;


@end


#endif