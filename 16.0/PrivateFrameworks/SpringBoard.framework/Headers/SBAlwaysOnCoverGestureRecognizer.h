// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBALWAYSONCOVERGESTURERECOGNIZER_H
#define SBALWAYSONCOVERGESTURERECOGNIZER_H

@class BSContinuousMachTimer;

#import <Foundation/Foundation.h>


@interface SBAlwaysOnCoverGestureRecognizer : NSObject {
    id *_target;
    SEL _action;
    NSInteger _state;
    BSContinuousMachTimer *_timer;
}


@property (nonatomic) CGFloat maximumCoverDuration; // ivar: _maximumCoverDuration
@property (nonatomic) float minimumScreenCoverage; // ivar: _minimumScreenCoverage


-(id)initWithTarget:(id)arg0 action:(SEL)arg1 ;
-(void)_gestureBeganWithEvent:(struct __IOHIDEvent *)arg0 ;
-(void)_gestureCanceledWithEvent:(struct __IOHIDEvent *)arg0 ;
-(void)_gestureEndedWithEvent:(struct __IOHIDEvent *)arg0 ;
-(void)_setState:(NSInteger)arg0 ;
-(void)dealloc;
-(void)processHIDEvent:(struct __IOHIDEvent *)arg0 ;


@end


#endif