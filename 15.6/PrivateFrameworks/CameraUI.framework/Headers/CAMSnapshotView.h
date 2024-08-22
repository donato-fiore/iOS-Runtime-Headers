// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CAMSNAPSHOTVIEW_H
#define CAMSNAPSHOTVIEW_H

@class UIView, UIVisualEffectView, NSString;
@protocol _UIBasicAnimationFactory;



@interface CAMSnapshotView : UIView <_UIBasicAnimationFactory>



@property (nonatomic, setter=_setBlurStyleForEffectAnimationFactory:) NSInteger _blurStyleForEffectAnimationFactory; // ivar: __blurStyleForEffectAnimationFactory
@property (retain, nonatomic, setter=_setBlurView:) UIVisualEffectView *_blurView; // ivar: __blurView
@property (readonly, nonatomic) UIView *_dimmingView; // ivar: __dimmingView
@property (readonly, nonatomic) UIView *_lowQualityBlurView; // ivar: __lowQualityBlurView
@property (readonly, nonatomic) BOOL _supportsBlur; // ivar: __supportsBlur
@property (nonatomic) BOOL blurred; // ivar: _blurred
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger desiredAspectRatio; // ivar: _desiredAspectRatio
@property (nonatomic) BOOL dimmed; // ivar: _dimmed
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIView *snapshotView; // ivar: _snapshotView
@property (readonly) Class superclass;


-(CGFloat)_resumeFadeInDuration;
-(id)_basicAnimationForView:(id)arg0 withKeyPath:(id)arg1 ;
-(id)initWithView:(id)arg0 desiredAspectRatio:(NSInteger)arg1 ;
-(void)_applyLowQualityBlurForStyle:(NSInteger)arg0 animated:(BOOL)arg1 withCompletionBlock:(id)arg2 ;
-(void)_applySnapshotBlurForStyle:(NSInteger)arg0 animated:(BOOL)arg1 withCompletionBlock:(id)arg2 ;
-(void)_applySnapshotDimAnimated:(BOOL)arg0 withCompletionBlock:(id)arg1 ;
-(void)_prepareForApplyingBlurForStyle:(NSInteger)arg0 applying:(BOOL)arg1 inputRadiusAmount:(*CGFloat)arg2 inputRadiusDuration:(*CGFloat)arg3 inputRadiusDelay:(*CGFloat)arg4 inputRadiusTimingFunction:(*id)arg5 opacityAmount:(*CGFloat)arg6 opacityDuration:(*CGFloat)arg7 opacityDelay:(*CGFloat)arg8 opacityTimingFunction:(*id)arg9 ;
-(void)_prepareForApplyingLowQualityBlurForStyle:(NSInteger)arg0 applying:(BOOL)arg1 opacityAmount:(*CGFloat)arg2 opacityDuration:(*CGFloat)arg3 opacityDelay:(*CGFloat)arg4 opacityTimingFunction:(*id)arg5 targetView:(*id)arg6 ;
-(void)_removeAnimationOnView:(id)arg0 forKey:(id)arg1 ;
-(void)_removeLowQualityBlurForStyle:(NSInteger)arg0 animated:(BOOL)arg1 withCompletionBlock:(id)arg2 ;
-(void)_removeSnapshotBlurForStyle:(NSInteger)arg0 animated:(BOOL)arg1 withCompletionBlock:(id)arg2 ;
-(void)_removeSnapshotDimAnimated:(BOOL)arg0 withCompletionBlock:(id)arg1 ;
-(void)_setupDimOnSnapshot;
-(void)_setupLowQualityBlurOnSnapshot;
-(void)fadeOutAnimatedWithStyle:(NSInteger)arg0 completion:(id)arg1 ;
-(void)prepareForResumingUsingCrossfade;
-(void)removeInflightBlurAnimations;


@end


#endif