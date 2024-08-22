// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef QLPHSWIPEDOWNTRACKER_H
#define QLPHSWIPEDOWNTRACKER_H


#import <Foundation/Foundation.h>

#import "QLPXSwipeDownTracker.h"

@interface QLPHSwipeDownTracker : NSObject

@property (readonly, nonatomic) CGFloat dismissalProgress;
@property (readonly, nonatomic) CGFloat finalAnimationDuration;
@property (readonly, nonatomic) CGFloat finalAnimationSpringDamping;
@property (readonly, nonatomic) QLPXSwipeDownTracker *impl; // ivar: _impl
@property (readonly, nonatomic) BOOL shouldFinishDismissal;
@property (readonly, nonatomic) CGRect trackedBounds;
@property (readonly, nonatomic) CGPoint trackedCenter;
@property (readonly, nonatomic) CGAffineTransform trackedTransform;
@property (readonly, nonatomic) QLPHDisplayVelocity trackedVelocity;


-(id)init;
-(void)startTrackingCenter:(struct CGPoint )arg0 bounds:(struct CGRect )arg1 transform:(struct CGAffineTransform )arg2 withInitialGestureLocation:(struct CGPoint )arg3 ;
-(void)trackGestureTranslation:(struct CGPoint )arg0 velocity:(struct CGPoint )arg1 ;


@end


#endif