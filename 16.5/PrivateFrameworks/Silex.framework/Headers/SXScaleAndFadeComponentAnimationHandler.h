// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXSCALEANDFADECOMPONENTANIMATIONHANDLER_H
#define SXSCALEANDFADECOMPONENTANIMATIONHANDLER_H

@class NSString;
@protocol CAAnimationDelegate;


#import "SXComponentAnimationHandler.h"

@interface SXScaleAndFadeComponentAnimationHandler : SXComponentAnimationHandler <CAAnimationDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat initialAlpha; // ivar: _initialAlpha
@property (nonatomic) CGFloat initialScale; // ivar: _initialScale
@property (readonly) Class superclass;


-(id)initWithComponent:(id)arg0 withAnimation:(id)arg1 ;
-(void)animationDidStop:(id)arg0 finished:(BOOL)arg1 ;
-(void)finishAnimation;
-(void)prepareAnimation;
-(void)startAnimation;
-(void)updateAnimationWithFactor:(CGFloat)arg0 ;


@end


#endif