// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIAUTOSCROLL_H
#define UIAUTOSCROLL_H

@class NSTimer, UIView<UIAutoscrollContainer>;

#import <Foundation/Foundation.h>


@interface UIAutoscroll : NSObject {
    id *m_target;
    NSTimer *m_timer;
}


@property (nonatomic) BOOL active; // ivar: m_active
@property (nonatomic) NSUInteger count; // ivar: m_count
@property (nonatomic) int directions; // ivar: m_directions
@property (nonatomic) BOOL disabled; // ivar: m_disabled
@property (nonatomic) CGPoint point; // ivar: m_point
@property (nonatomic) CGFloat repeatInterval; // ivar: m_repeatInterval
@property (retain, nonatomic) UIView<UIAutoscrollContainer> *scrollContainer; // ivar: m_scrollContainer
@property (weak, nonatomic) id *target; // ivar: _target


-(BOOL)startAutoscroll:(id)arg0 scrollContainer:(id)arg1 point:(struct CGPoint )arg2 directions:(int)arg3 repeatInterval:(CGFloat)arg4 ;
-(void)dealloc;
-(void)invalidate;
-(void)timerFired:(id)arg0 ;


@end


#endif