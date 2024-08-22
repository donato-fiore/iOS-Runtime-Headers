// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef QLPXSWIPEDOWNTRACKER_H
#define QLPXSWIPEDOWNTRACKER_H


#import <Foundation/Foundation.h>

#import "QLPXInitialHysteresisNumberFilter.h"
#import "QLPXChangeDirectionNumberFilter.h"

@interface QLPXSwipeDownTracker : NSObject {
    BOOL _didStartTracking;
    CGPoint _initialTouchLocation;
    CGPoint _initialCenter;
    CGRect _initialBounds;
    CGAffineTransform _initialTransform;
}


@property (nonatomic) CGFloat dismissalProgress; // ivar: _dismissalProgress
@property (readonly, nonatomic) CGFloat finalAnimationDuration; // ivar: _finalAnimationDuration
@property (readonly, nonatomic) CGFloat finalAnimationSpringDamping; // ivar: _finalAnimationSpringDamping
@property (retain, nonatomic) QLPXInitialHysteresisNumberFilter *horizontalTranslationFilter; // ivar: _horizontalTranslationFilter
@property (readonly, nonatomic) NSUInteger options; // ivar: _options
@property (nonatomic) BOOL shouldFinishDismissal; // ivar: _shouldFinishDismissal
@property (nonatomic) CGRect trackedBounds; // ivar: _trackedBounds
@property (nonatomic) CGPoint trackedCenter; // ivar: _trackedCenter
@property (nonatomic) CGAffineTransform trackedTransform; // ivar: _trackedTransform
@property (nonatomic) QLPXDisplayVelocity trackedVelocity; // ivar: _trackedVelocity
@property (retain, nonatomic) QLPXChangeDirectionNumberFilter *verticalDirectionFilter; // ivar: _verticalDirectionFilter


-(id)init;
-(id)initWithOptions:(NSUInteger)arg0 ;
-(void)startTrackingCenter:(struct CGPoint )arg0 bounds:(struct CGRect )arg1 transform:(struct CGAffineTransform )arg2 withInitialGestureLocation:(struct CGPoint )arg3 ;
-(void)trackGestureTranslation:(struct CGPoint )arg0 velocity:(struct CGPoint )arg1 ;


@end


#endif