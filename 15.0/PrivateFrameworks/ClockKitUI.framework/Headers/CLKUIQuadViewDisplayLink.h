// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLKUIQUADVIEWDISPLAYLINK_H
#define CLKUIQUADVIEWDISPLAYLINK_H

@class CADisplayLink, CLKClockTimerToken;

#import <Foundation/Foundation.h>

#import "CLKUIQuadView.h"

@interface CLKUIQuadViewDisplayLink : NSObject {
    CLKUIQuadView *_quadView;
    CADisplayLink *_displayLink;
    BOOL _synchronizeWithClockTimer;
    CLKClockTimerToken *_timerToken;
    NSInteger _preferredFramesPerSecond;
    BOOL _paused;
}




-(BOOL)isPaused;
-(CGFloat)timestamp;
-(NSInteger)updateFrequencyForFPS:(NSInteger)arg0 ;
-(NSUInteger)preferredFramesPerSecond;
-(id)initWithTarget:(id)arg0 synchronizeWithClockTimer:(BOOL)arg1 ;
-(void)_displayLinkFired:(id)arg0 ;
-(void)_updatePausedState;
-(void)invalidate;
-(void)setPaused:(BOOL)arg0 ;
-(void)setPreferredFramesPerSecond:(NSInteger)arg0 ;


@end


#endif