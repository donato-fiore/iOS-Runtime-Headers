// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CCUIOVERLAYSLIDEUPPRESENTATIONPROVIDER_H
#define CCUIOVERLAYSLIDEUPPRESENTATIONPROVIDER_H

@class NSString;
@protocol CCUIOverlayFlickGestureBehavior, CCUIOverlayPresentationProvider, CCUIOverlayMetricsProvider, CCUIOverlayViewProvider;

#import <Foundation/Foundation.h>


@interface CCUIOverlaySlideUpPresentationProvider : NSObject <CCUIOverlayFlickGestureBehavior, CCUIOverlayPresentationProvider>



@property (readonly, nonatomic) BOOL allowHotPocketDuringTransition;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger dismissalFlickAllowedDirections;
@property (readonly, nonatomic) CGFloat dismissalFlickMaximumTime;
@property (readonly, nonatomic) CGFloat dismissalFlickMinimumVelocity;
@property (readonly, copy, nonatomic) NSObject<CCUIOverlayFlickGestureBehavior> *flickGestureBehavior;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger headerMode;
@property (weak, nonatomic) NSObject<CCUIOverlayMetricsProvider> *metricsProvider; // ivar: _metricsProvider
@property (readonly, nonatomic, getter=isPanDismissalAvailable) BOOL panDismissalAvailable;
@property (readonly) Class superclass;
@property (weak, nonatomic) NSObject<CCUIOverlayViewProvider> *viewProvider; // ivar: _viewProvider
@property (readonly, nonatomic, getter=isZoomEnabled) BOOL zoomEnabled;


+(id)_baseC2AnimationParametersForTransitionState:(id)arg0 ;
+(id)_moduleC2AnimationParametersForTransitionState:(id)arg0 layoutRect:(struct CCUILayoutRect )arg1 ;
-(BOOL)backdropViewShouldUseAlphaTransformer;
-(BOOL)tapAllowsDismissalForLocation:(struct CGPoint )arg0 ;
-(CGFloat)_additionalHeaderHeight;
-(CGFloat)_effectiveHeaderViewHeight;
-(CGFloat)_pullUpTranslation;
-(NSUInteger)finalTransitionTypeForState:(id)arg0 gestureTranslation:(struct CGPoint )arg1 gestureVelocity:(struct CGPoint )arg2 ;
-(id)animationBatchForTransitionState:(id)arg0 previousTransitionState:(id)arg1 ;
-(id)transitionStateForType:(NSUInteger)arg0 interactive:(BOOL)arg1 translation:(struct CGPoint )arg2 ;
-(struct CGAffineTransform )_headerViewTransformForTransitionState:(id)arg0 ;
-(struct CGAffineTransform )_moduleViewScaleTransformForTransitionState:(id)arg0 ;
-(struct CGAffineTransform )_moduleViewTransformForTransitionState:(id)arg0 layoutRect:(struct CCUILayoutRect )arg1 ;
-(struct CGAffineTransform )_transformForTransitionState:(id)arg0 rubberBandingHeight:(CGFloat)arg1 ;
-(struct CGRect )_headerViewFrameForContentSize:(struct CGSize )arg0 withinBounds:(struct CGRect )arg1 contentInset:(struct UIEdgeInsets )arg2 contentEdgeInsets:(struct UIEdgeInsets )arg3 orientation:(NSInteger)arg4 ;
-(struct UIEdgeInsets )_edgeInsetsForContentSize:(struct CGSize )arg0 withinBounds:(struct CGRect )arg1 contentEdgeInsets:(struct UIEdgeInsets )arg2 orientation:(NSInteger)arg3 ;
-(void)_addBackgroundViewWeightingAnimationToBatch:(id)arg0 transitionState:(id)arg1 ;
-(void)_addHeaderChevronAlphaAnimationToBatch:(id)arg0 transitionState:(id)arg1 ;
-(void)_addHeaderContentTransformAnimationToBatch:(id)arg0 transitionState:(id)arg1 ;
-(void)_addHeaderContentTranslationAnimationToBatch:(id)arg0 transitionState:(id)arg1 ;
-(void)_addHeaderSensorStatusViewAlphaAnimationToBatch:(id)arg0 transitionState:(id)arg1 ;
-(void)_addHeaderStatusBarAlphaAnimationToBatch:(id)arg0 transitionState:(id)arg1 ;
-(void)_addModuleTransformAnimationsToBatch:(id)arg0 transitionState:(id)arg1 ;
-(void)_addScrollViewContentOffsetAnimationToBatch:(id)arg0 transitionState:(id)arg1 ;
-(void)layoutViews;


@end


#endif