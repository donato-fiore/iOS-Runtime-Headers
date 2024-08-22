// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NUSLIDEVIEWANIMATOR_H
#define NUSLIDEVIEWANIMATOR_H

@class CAMediaTimingFunction;

#import <Foundation/Foundation.h>

#import "NUAnimationFactory.h"

@interface NUSlideViewAnimator : NSObject

@property (nonatomic, getter=isAnimating) BOOL animating; // ivar: _animating
@property (retain, nonatomic) NUAnimationFactory *animationFactory; // ivar: _animationFactory
@property (nonatomic) CGRect bounds; // ivar: _bounds
@property (nonatomic) CGFloat duration; // ivar: _duration
@property (retain, nonatomic) CAMediaTimingFunction *mediaTimingFunction; // ivar: _mediaTimingFunction
@property (nonatomic) CGFloat translateBoundsPadding; // ivar: _translateBoundsPadding


-(NSUInteger)animationOptionsForAnimationFactory:(id)arg0 ;
-(id)initWithBounds:(struct CGRect )arg0 ;
-(struct CGAffineTransform )fromViewTransformForDirection:(NSUInteger)arg0 ;
-(struct CGAffineTransform )toViewTransformForDirection:(NSUInteger)arg0 ;
-(void)translateFromView:(id)arg0 toView:(id)arg1 direction:(NSUInteger)arg2 completion:(id)arg3 ;


@end


#endif