// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CFXFACERETICLEVIEW_H
#define CFXFACERETICLEVIEW_H

@class UIView, UIViewPropertyAnimator, UISelectionFeedbackGenerator, UIImageView, NSMutableArray;



@interface CFXFaceReticleView : UIView

@property (retain, nonatomic) UIViewPropertyAnimator *animojiBounceAnimator; // ivar: _animojiBounceAnimator
@property (retain, nonatomic) UIViewPropertyAnimator *animojiFadeOutAnimator; // ivar: _animojiFadeOutAnimator
@property (retain, nonatomic) UIViewPropertyAnimator *bounceAnimator; // ivar: _bounceAnimator
@property (nonatomic) BOOL canPerformFadeInAnimations; // ivar: _canPerformFadeInAnimations
@property (nonatomic) BOOL canPerformFadeOutAnimations; // ivar: _canPerformFadeOutAnimations
@property (retain, nonatomic) UIViewPropertyAnimator *fadeOutAnimator; // ivar: _fadeOutAnimator
@property (retain, nonatomic) UISelectionFeedbackGenerator *feedbackGenerator; // ivar: _feedbackGenerator
@property (nonatomic) BOOL isShowingFaceIndicator; // ivar: _isShowingFaceIndicator
@property (retain, nonatomic) UIImageView *reticleImageView; // ivar: _reticleImageView
@property (retain, nonatomic) NSMutableArray *reticleLayersToAnimate; // ivar: _reticleLayersToAnimate


-(id)initWithFrame:(struct CGRect )arg0 reticleType:(NSInteger)arg1 ;
-(void)animojiCloseAnimationWithCompletion:(id)arg0 ;
-(void)animojiFadeInAnimation;
-(void)fadeInAnimation;
-(void)fadeOutAndEndHapticWithCompletionBlock:(id)arg0 ;
-(void)fadeOutAnimationWithCompletion:(id)arg0 ;
-(void)hideAnimojiFaceReticleAnimatedWithCompletion:(id)arg0 ;
-(void)setupAnimojiReticleLayers;
-(void)shouldUseHapticFeedback:(BOOL)arg0 ;
-(void)showAndAnimateAnimojiFaceReticle;
-(void)updateFrameForDisplayRelativeToBounds:(struct CGRect )arg0 ;
-(void)userFeedbackForTrackingType:(NSInteger)arg0 needsHaptics:(BOOL)arg1 ;


@end


#endif