// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef QLSWIPEDOWNTRACKER_H
#define QLSWIPEDOWNTRACKER_H

@class NSString;
@protocol QLDismissGestureTracking;


#import "QLPHSwipeDownTracker.h"

@interface QLSwipeDownTracker : QLPHSwipeDownTracker <QLDismissGestureTracking>

 {
    CGRect _initialBounds;
}


@property (readonly, nonatomic) CGPoint anchorPoint;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGFloat dismissalProgress;
@property (readonly, nonatomic) CGFloat finalAnimationDuration;
@property (readonly, nonatomic) CGFloat finalAnimationSpringDamping;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL shouldFinishDismissal;
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGRect trackedBounds;
@property (readonly, nonatomic) CGPoint trackedCenter;
@property (readonly, nonatomic) CGAffineTransform trackedTransform;
@property (readonly, nonatomic) _QLDismissGestureTrackingVelocity trackedVelocity;


-(void)startTrackingCenter:(struct CGPoint )arg0 bounds:(struct CGRect )arg1 transform:(struct CGAffineTransform )arg2 withInitialGestureLocation:(struct CGPoint )arg3 ;


@end


#endif