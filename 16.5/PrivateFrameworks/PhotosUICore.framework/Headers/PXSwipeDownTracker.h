// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSWIPEDOWNTRACKER_H
#define PXSWIPEDOWNTRACKER_H


#import <Foundation/Foundation.h>

#import "PXInitialHysteresisNumberFilter.h"
#import "PXChangeDirectionNumberFilter.h"

@interface PXSwipeDownTracker : NSObject {
    BOOL _didStartTracking;
    CGPoint _initialTouchLocation;
    CGPoint _initialCenter;
    CGRect _initialBounds;
    CGAffineTransform _initialTransform;
}


@property (nonatomic) CGFloat dismissalProgress; // ivar: _dismissalProgress
@property (readonly, nonatomic) CGFloat finalAnimationDuration; // ivar: _finalAnimationDuration
@property (readonly, nonatomic) CGFloat finalAnimationSpringDamping; // ivar: _finalAnimationSpringDamping
@property (retain, nonatomic) PXInitialHysteresisNumberFilter *horizontalTranslationFilter; // ivar: _horizontalTranslationFilter
@property (readonly, nonatomic) NSUInteger options; // ivar: _options
@property (nonatomic) BOOL shouldFinishDismissal; // ivar: _shouldFinishDismissal
@property (nonatomic) CGRect trackedBounds; // ivar: _trackedBounds
@property (nonatomic) CGPoint trackedCenter; // ivar: _trackedCenter
@property (nonatomic) CGAffineTransform trackedTransform; // ivar: _trackedTransform
@property (nonatomic) PXDisplayVelocity trackedVelocity; // ivar: _trackedVelocity
@property (retain, nonatomic) PXChangeDirectionNumberFilter *verticalDirectionFilter; // ivar: _verticalDirectionFilter


-(id)init;
-(id)initWithOptions:(NSUInteger)arg0 ;
-(void)startTrackingCenter:(struct CGPoint )arg0 bounds:(struct CGRect )arg1 transform:(struct CGAffineTransform )arg2 withInitialGestureLocation:(struct CGPoint )arg3 velocity:(struct CGPoint )arg4 ;
-(void)trackGestureTranslation:(struct CGPoint )arg0 velocity:(struct CGPoint )arg1 ;


@end


#endif