// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SXSCALECOMPONENTANIMATIONHANDLER_H
#define SXSCALECOMPONENTANIMATIONHANDLER_H

@class NSString;
@protocol CAAnimationDelegate;


#import "SXComponentAnimationHandler.h"

@interface SXScaleComponentAnimationHandler : SXComponentAnimationHandler <CAAnimationDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)animationDidStop:(id)arg0 finished:(BOOL)arg1 ;
-(void)finishAnimation;
-(void)prepareAnimation;
-(void)startAnimation;
-(void)updateAnimationWithFactor:(CGFloat)arg0 ;


@end


#endif