// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICDOCCAMRECROPTRANSITIONANIMATOR_H
#define ICDOCCAMRECROPTRANSITIONANIMATOR_H

@class NSString, UIImage, NSIndexPath, UIView;
@protocol UIViewControllerAnimatedTransitioning;

#import <Foundation/Foundation.h>

#import "ICDocCamImageQuad.h"

@interface ICDocCamRecropTransitionAnimator : NSObject <UIViewControllerAnimatedTransitioning>



@property (copy, nonatomic) id *completion; // ivar: _completion
@property (nonatomic) CGRect containerViewFrame; // ivar: _containerViewFrame
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat duration; // ivar: _duration
@property (retain, nonatomic) UIImage *filteredImage; // ivar: _filteredImage
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSIndexPath *indexPath; // ivar: _indexPath
@property (nonatomic) NSInteger orientation; // ivar: _orientation
@property (nonatomic) BOOL presenting; // ivar: _presenting
@property (retain, nonatomic) ICDocCamImageQuad *quadForOverlay; // ivar: _quadForOverlay
@property (weak, nonatomic) UIView *startView; // ivar: _startView
@property (readonly) Class superclass;
@property (retain, nonatomic) UIImage *unfilteredImage; // ivar: _unfilteredImage


-(CGFloat)transitionDuration:(id)arg0 ;
-(id)imageMeshTransform:(BOOL)arg0 ;
-(id)initWithImage:(id)arg0 unfilteredImage:(id)arg1 orientation:(NSInteger)arg2 indexPath:(id)arg3 duration:(CGFloat)arg4 completion:(id)arg5 ;
-(id)scrollViewTransform:(BOOL)arg0 ;
-(struct ? )matrixTransformingQuadForOverlayToImageView:(*BOOL)arg0 ;
-(struct ? )matrixTransformingToUnitSquareWithPoints:(CGFloat)arg0 y0:(CGFloat)arg1 x1:(CGFloat)arg2 y1:(CGFloat)arg3 x2:(CGFloat)arg4 y2:(CGFloat)arg5 x3:(CGFloat)arg6 y3:(CGFloat)arg7 ;
-(void)animateTransition:(id)arg0 ;
-(void)performPopTransitionFromViewController:(id)arg0 toViewController:(id)arg1 transitionContext:(id)arg2 ;
-(void)performPushTransitionFromViewController:(id)arg0 toViewController:(id)arg1 transitionContext:(id)arg2 ;
-(void)performSimpleFadeInFromViewController:(id)arg0 toViewController:(id)arg1 transitionContext:(id)arg2 ;
-(void)sortPoints:(struct CGPoint *)arg0 sorted:(struct CGPoint *)arg1 ;


@end


#endif