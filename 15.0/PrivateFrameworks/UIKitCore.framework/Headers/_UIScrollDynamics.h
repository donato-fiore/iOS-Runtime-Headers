// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UISCROLLDYNAMICS_H
#define _UISCROLLDYNAMICS_H


#import <Foundation/Foundation.h>


@interface _UIScrollDynamics : NSObject

@property (nonatomic) CGRect contentFrame; // ivar: _contentFrame
@property (nonatomic) CGPoint contentOrigin; // ivar: _contentOrigin
@property (nonatomic) CGPoint decelerationTarget; // ivar: _decelerationTarget
@property (readonly, nonatomic) CGFloat durationUntilStop;
@property (nonatomic) CGPoint initialContentOffset; // ivar: _initialContentOffset
@property (nonatomic) CGVector initialVelocity; // ivar: _initialVelocity
@property (nonatomic) BOOL shouldRoundCalculations; // ivar: _shouldRoundCalculations
@property (readonly, nonatomic) CGSize tolerance; // ivar: _tolerance
@property (nonatomic) CGSize viewSize; // ivar: _viewSize


-(BOOL)isRubberBandingAfterDuration:(CGFloat)arg0 ;
-(CGFloat)speedAfterDuration:(CGFloat)arg0 ;
-(id)init;
-(id)initWithInitialContentOffset:(struct CGPoint )arg0 velocity:(struct CGVector )arg1 contentFrame:(struct CGRect )arg2 viewSize:(struct CGSize )arg3 screenScale:(CGFloat)arg4 ;
-(struct CGPoint )positionAfterDuration:(CGFloat)arg0 ;
-(struct CGVector )velocityAfterDuration:(CGFloat)arg0 ;
-(void)calculateDecelerationTarget;
-(void)calculateToReachDecelerationTarget;
-(void)recalculateForDecelerationTarget:(struct CGPoint )arg0 ;


@end


#endif