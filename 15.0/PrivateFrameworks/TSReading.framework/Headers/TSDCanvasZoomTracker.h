// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSDCANVASZOOMTRACKER_H
#define TSDCANVASZOOMTRACKER_H

@protocol TSDCanvasZoomTrackerDelegate;

#import <Foundation/Foundation.h>

#import "TSDCanvasLayer.h"

@interface TSDCanvasZoomTracker : NSObject {
    TSDCanvasLayer *mCanvasLayer;
    CGAffineTransform mSavedTransform;
    CGPoint mZoomOrigin;
    BOOL mHasGestureOrigin;
    CGPoint mGestureOrigin;
    CGPoint mGestureOffset;
    CGPoint mSavedContentOffset;
    BOOL mIsZooming;
    NSUInteger mZoomVelocitySampleCount;
    CGFloat mZoomVelocity;
    CGFloat mZoomStartTime;
    BOOL mIsShowingZoomHUD;
}


@property (nonatomic) BOOL alwaysUsesTranslationSprings; // ivar: mAlwaysUsesTranslationSprings
@property (nonatomic) BOOL animateTransform; // ivar: mAnimateTransform
@property (weak, nonatomic) NSObject<TSDCanvasZoomTrackerDelegate> *delegate; // ivar: mDelegate
@property (nonatomic) BOOL snapsViewScale; // ivar: mSnapsViewScale


-(id)initWithCanvasLayer:(id)arg0 ;
-(void)p_finishZoomWithFinalScaleFactor:(CGFloat)arg0 contentOffset:(struct CGPoint )arg1 ;
-(void)zoomWithScale:(CGFloat)arg0 velocity:(CGFloat)arg1 locationInView:(struct CGPoint )arg2 phase:(int)arg3 ;


@end


#endif