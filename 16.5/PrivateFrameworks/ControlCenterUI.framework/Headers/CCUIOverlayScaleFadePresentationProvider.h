// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CCUIOVERLAYSCALEFADEPRESENTATIONPROVIDER_H
#define CCUIOVERLAYSCALEFADEPRESENTATIONPROVIDER_H

@class NSString;
@protocol CCUIOverlayPresentationProvider, CCUIOverlayFlickGestureBehavior, CCUIOverlayMetricsProvider, CCUIOverlayViewProvider;

#import <Foundation/Foundation.h>


@interface CCUIOverlayScaleFadePresentationProvider : NSObject <CCUIOverlayPresentationProvider>



@property (readonly, nonatomic) BOOL allowHotPocketDuringTransition;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSObject<CCUIOverlayFlickGestureBehavior> *flickGestureBehavior;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger headerMode;
@property (weak, nonatomic) NSObject<CCUIOverlayMetricsProvider> *metricsProvider; // ivar: _metricsProvider
@property (readonly, nonatomic, getter=isPanDismissalAvailable) BOOL panDismissalAvailable;
@property (readonly) Class superclass;
@property (weak, nonatomic) NSObject<CCUIOverlayViewProvider> *viewProvider; // ivar: _viewProvider
@property (readonly, nonatomic, getter=isZoomEnabled) BOOL zoomEnabled;


+(id)_baseC2AnimationParametersForTransitionState:(id)arg0 ;
-(BOOL)backdropViewShouldUseAlphaTransformer;
-(BOOL)tapAllowsDismissalForLocation:(struct CGPoint )arg0 ;
-(NSUInteger)finalTransitionTypeForState:(id)arg0 gestureTranslation:(struct CGPoint )arg1 gestureVelocity:(struct CGPoint )arg2 ;
-(id)animationBatchForTransitionState:(id)arg0 previousTransitionState:(id)arg1 ;
-(id)customBackdropScaleAdjustment:(SEL)arg0 ;
-(id)transitionStateForType:(NSUInteger)arg0 interactive:(BOOL)arg1 translation:(struct CGPoint )arg2 ;
-(struct CGRect )_presentedViewFrame;
-(struct CGRect )_statusLabelViewFrame;
-(void)_addBackgroundViewWeightingAnimationToBatch:(id)arg0 transitionState:(id)arg1 ;
-(void)_addContainerAlphaAnimationToBatch:(id)arg0 transitionState:(id)arg1 ;
-(void)_addContainerTransformAnimationToBatch:(id)arg0 transitionState:(id)arg1 ;
-(void)layoutViews;


@end


#endif