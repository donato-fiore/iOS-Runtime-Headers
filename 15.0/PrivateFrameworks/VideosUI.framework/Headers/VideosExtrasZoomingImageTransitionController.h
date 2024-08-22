// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VIDEOSEXTRASZOOMINGIMAGETRANSITIONCONTROLLER_H
#define VIDEOSEXTRASZOOMINGIMAGETRANSITIONCONTROLLER_H

@class UIPercentDrivenInteractiveTransition, NSString;
@protocol UIViewControllerAnimatedTransitioning, VideosExtrasOptionallyInteractiveAnimationController;


#import "VideosExtrasBorderedImageView.h"

@interface VideosExtrasZoomingImageTransitionController : UIPercentDrivenInteractiveTransition <UIViewControllerAnimatedTransitioning, VideosExtrasOptionallyInteractiveAnimationController>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGPoint initialPinchCenter; // ivar: _initialPinchCenter
@property (nonatomic) CGFloat initialPinchScale; // ivar: _initialPinchScale
@property (nonatomic, getter=isInteractive) BOOL interactive; // ivar: _interactive
@property (nonatomic) NSUInteger itemIndex; // ivar: _itemIndex
@property (nonatomic) BOOL shouldUseSpringAnimation; // ivar: _shouldUseSpringAnimation
@property (readonly) Class superclass;
@property (retain, nonatomic) VideosExtrasBorderedImageView *zoomingImageView; // ivar: _zoomingImageView


-(CGFloat)_destinationScale;
-(CGFloat)_maximumDistanceTravelledForPoints:(struct CGPoint *)arg0 count:(NSUInteger)arg1 currentTransform:(struct CGAffineTransform )arg2 finalTransform:(struct CGAffineTransform )arg3 ;
-(CGFloat)transitionDuration:(id)arg0 ;
-(float)_desiredSpeedForNonInteractiveAnimationWithDuration:(CGFloat)arg0 deferredTransform:(struct CGAffineTransform )arg1 finalTransform:(struct CGAffineTransform )arg2 ;
-(id)initWithItemIndex:(NSUInteger)arg0 forInteractiveTransition:(BOOL)arg1 ;
-(void)animateTransition:(id)arg0 ;
-(void)completeInteractiveTransitionWithPinchGestureRecognizer:(id)arg0 ;
-(void)prepareInteractiveTransitionWithPinchGestureRecognizer:(id)arg0 ;
-(void)updateInteractiveTransitionWithPinchGestureRecognizer:(id)arg0 ;


@end


#endif