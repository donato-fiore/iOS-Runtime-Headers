// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CCUIOVERLAYSTATUSBARPRESENTATIONPROVIDER_H
#define CCUIOVERLAYSTATUSBARPRESENTATIONPROVIDER_H

@class NSString;
@protocol CCUIOverlayFlickGestureBehavior, CCUIOverlayPresentationProvider, CCUIOverlayMetricsProvider, CCUIOverlayViewProvider;

#import <Foundation/Foundation.h>


@interface CCUIOverlayStatusBarPresentationProvider : NSObject <CCUIOverlayFlickGestureBehavior, CCUIOverlayPresentationProvider>



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
+(id)_compactTrailingStatusBarAlphaCAAnimationParametersForTransitionState:(id)arg0 ;
+(id)_expandedLeadingStatusBarAlphaCAAnimationParametersForTransitionState:(id)arg0 ;
+(id)_expandedTrailingStatusBarAlphaCAAnimationParametersForTransitionState:(id)arg0 ;
+(id)_hiddenStatusBarFadeAnimationParameters;
+(id)_leadingStatusBarCAAnimationParametersForTransitionState:(id)arg0 ;
+(id)_moduleAlphaCAAnimationParametersForTransitionState:(id)arg0 ;
+(id)_moduleC2AnimationParametersForTransitionState:(id)arg0 layoutRect:(struct CCUILayoutRect )arg1 ;
+(id)_moduleScaleCAAnimationParametersForTransitionState:(id)arg0 ;
+(id)_reducedMotionStatusBarStateCAAnimationParameters;
+(id)_trailingStatusBarCAAnimationParametersForTransitionState:(id)arg0 ;
-(BOOL)backdropViewShouldUseAlphaTransformer;
-(BOOL)tapAllowsDismissalForLocation:(struct CGPoint )arg0 ;
-(CGFloat)_additionalHeaderHeight;
-(CGFloat)_delayForTransitionState:(id)arg0 layoutRect:(struct CCUILayoutRect )arg1 ;
-(CGFloat)_effectiveHeaderViewHeight;
-(CGFloat)_effectiveTransitionHeight;
-(CGFloat)_leadingStatusBarAlphaForTransitionState:(id)arg0 ;
-(NSUInteger)finalTransitionTypeForState:(id)arg0 gestureTranslation:(struct CGPoint )arg1 gestureVelocity:(struct CGPoint )arg2 ;
-(id)animationBatchForTransitionState:(id)arg0 previousTransitionState:(id)arg1 ;
-(id)cleanupForDismissal;
-(id)prepareForPresentation;
-(id)secondaryAnimationBatchForTransitionState:(id)arg0 previousTransitionState:(id)arg1 ;
-(id)transitionStateForType:(NSUInteger)arg0 interactive:(BOOL)arg1 translation:(struct CGPoint )arg2 ;
-(struct CGAffineTransform )_compactStatusBar:(id)arg0 transformForTransitionState:(id)arg1 ;
-(struct CGAffineTransform )_headerViewTransformForTransitionState:(id)arg0 ;
-(struct CGAffineTransform )_moduleViewScaleTransformForTransitionState:(id)arg0 layoutRect:(struct CCUILayoutRect )arg1 ;
-(struct CGAffineTransform )_moduleViewTransformForTransitionState:(id)arg0 layoutRect:(struct CCUILayoutRect )arg1 ;
-(struct CGAffineTransform )_transformForTransitionState:(id)arg0 rubberBandingHeight:(CGFloat)arg1 ;
-(struct CGRect )_headerViewFrameForContentSize:(struct CGSize )arg0 withinBounds:(struct CGRect )arg1 contentInset:(struct UIEdgeInsets )arg2 contentEdgeInsets:(struct UIEdgeInsets )arg3 orientation:(NSInteger)arg4 ;
-(struct CGRect )_presentedViewFrame;
-(struct UIEdgeInsets )_edgeInsetsForContentSize:(struct CGSize )arg0 withinBounds:(struct CGRect )arg1 contentEdgeInsets:(struct UIEdgeInsets )arg2 orientation:(NSInteger)arg3 ;
-(void)_addBackgroundViewWeightingAnimationToBatch:(id)arg0 transitionState:(id)arg1 ;
-(void)_addHeaderContentTransformAnimationToBatch:(id)arg0 transitionState:(id)arg1 ;
-(void)_addHeaderSensorStatusViewAlphaAnimationToBatch:(id)arg0 transitionState:(id)arg1 ;
-(void)_addLeadingStatusBarAlphaAnimationToBatch:(id)arg0 transitionState:(id)arg1 ;
-(void)_addModuleAlphaAnimationsToBatch:(id)arg0 transitionState:(id)arg1 ;
-(void)_addModuleScaleAnimationsToBatch:(id)arg0 transitionState:(id)arg1 ;
-(void)_addModuleTransformAnimationsToBatch:(id)arg0 transitionState:(id)arg1 ;
-(void)_addReducedMotionStatusBarStateAnimationToBatch:(id)arg0 transitionState:(id)arg1 ;
-(void)_addScrollViewContentOffsetAnimationToBatch:(id)arg0 transitionState:(id)arg1 ;
-(void)_addStatusBarAlphaAnimationToBatch:(id)arg0 transitionState:(id)arg1 ;
-(void)_addStatusBarStateAnimationToBatch:(id)arg0 transitionState:(id)arg1 ;
-(void)layoutViews;


@end


#endif