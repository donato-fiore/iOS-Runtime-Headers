// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSCROLLVIEWSPEEDOMETER_H
#define PXSCROLLVIEWSPEEDOMETER_H

@class NSTimer, NSString;
@protocol PXScrollViewControllerObserver;


#import "PXObservable.h"
#import "PXScrollViewController.h"

@interface PXScrollViewSpeedometer : PXObservable <PXScrollViewControllerObserver>



@property (nonatomic, setter=_setLastTime:) CGFloat _lastTime; // ivar: __lastTime
@property (nonatomic, setter=_setLastVisibleRect:) CGRect _lastVisibleRect; // ivar: __lastVisibleRect
@property (nonatomic, setter=_setNextRegime:) NSInteger _nextRegime; // ivar: __nextRegime
@property (nonatomic, setter=_setNextRegimeCount:) NSInteger _nextRegimeCount; // ivar: __nextRegimeCount
@property (retain, nonatomic, setter=_setTimeoutTimer:) NSTimer *_timeoutTimer; // ivar: __timeoutTimer
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasRampedUpForCurrentAnimatedScroll; // ivar: _hasRampedUpForCurrentAnimatedScroll
@property (readonly) NSUInteger hash;
@property (nonatomic) CGPoint lastScrollDirection; // ivar: _lastScrollDirection
@property (readonly, nonatomic) NSInteger previousRegime; // ivar: _previousRegime
@property (readonly, nonatomic) NSInteger regime; // ivar: _regime
@property (nonatomic) CGPoint scrollAcceleration; // ivar: _scrollAcceleration
@property (nonatomic) CGPoint scrollVelocity; // ivar: _scrollVelocity
@property (readonly, nonatomic) PXScrollViewController *scrollViewController; // ivar: _scrollViewController
@property (readonly) Class superclass;


-(CGFloat)fastLowerThreshold;
-(CGFloat)fastUpperThreshold;
-(CGFloat)mediumLowerThreshold;
-(CGFloat)mediumUpperThreshold;
-(id)init;
-(id)initWithScrollController:(id)arg0 ;
-(id)mutableChangeObject;
-(void)_handleScrollEvent:(id)arg0 didScrollingEnd:(BOOL)arg1 ;
-(void)_handleScrubbingTimeout;
-(void)_handleTimeoutTimer:(id)arg0 ;
-(void)_rescheduleTimeout;
-(void)_scheduleScrubbingTimeout;
-(void)_updateScrollRegime;
-(void)didPerformChanges;
-(void)scrollViewControllerDidEndScrolling:(id)arg0 ;
-(void)scrollViewControllerDidEndScrollingAnimation:(id)arg0 ;
-(void)scrollViewControllerDidScroll:(id)arg0 ;
-(void)scrollViewControllerWillBeginScrolling:(id)arg0 ;
-(void)scrollViewControllerWillBeginScrollingAnimation:(id)arg0 towardsContentEdges:(NSUInteger)arg1 ;


@end


#endif