// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIFOCUSDISPLAYLINKSCROLLANIMATOR_H
#define _UIFOCUSDISPLAYLINKSCROLLANIMATOR_H

@class NSMapTable, CADisplayLink, NSTimer;

#import <Foundation/Foundation.h>

#import "UIScreen.h"
#import "_UIFocusEngineScrollableContainerOffsets.h"

@interface _UIFocusDisplayLinkScrollAnimator : NSObject {
    UIScreen *_screen;
    _UIFocusEngineScrollableContainerOffsets *_singleScrollableContainerEntry;
    NSMapTable *_scrollableContainers;
    CADisplayLink *_displayLink;
    NSTimer *_timer;
    CGFloat _lastTimerFireDate;
    CGFloat _defaultConvergenceRate;
}


@property (nonatomic) CGFloat defaultConvergenceRate;


-(BOOL)_canCreateDisplayLink;
-(BOOL)_shouldPushAndPopRunLoopModes;
-(BOOL)isAnimatingScrollableContainer:(id)arg0 ;
-(id)_entryForScrollableContainer:(id)arg0 createIfNeeded:(BOOL)arg1 ;
-(id)initWithScreen:(id)arg0 ;
-(struct CGPoint )_applyAccelerationLimitToAcceleration:(struct CGPoint )arg0 currentOffset:(struct CGPoint )arg1 targetOffset:(struct CGPoint )arg2 ;
-(struct CGPoint )currentVelocityForScrollableContainer:(id)arg0 ;
-(struct CGPoint )targetContentOffsetForScrollableContainer:(id)arg0 ;
-(struct CGPoint )velocityToScrollFromOffset:(struct CGPoint )arg0 toOffset:(struct CGPoint )arg1 ;
-(void)_commonHeartbeat:(CGFloat)arg0 ;
-(void)_displayLinkHeartbeat:(id)arg0 ;
-(void)_processEntry:(id)arg0 timeDelta:(NSInteger)arg1 completed:(id)arg2 ;
-(void)_switchToTimerScrolling;
-(void)_timerHeartbeat:(id)arg0 ;
-(void)_updateHeartbeatConfiguration;
-(void)cancelScrollingForScrollableContainer:(id)arg0 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)setTargetContentOffset:(struct CGPoint )arg0 forScrollableContainer:(id)arg1 convergenceRate:(CGFloat)arg2 completion:(id)arg3 ;


@end


#endif