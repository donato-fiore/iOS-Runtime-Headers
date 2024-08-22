// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIDELAYEDACTION_H
#define UIDELAYEDACTION_H

@class NSTimer, NSString, NSDate;

#import <Foundation/Foundation.h>


@interface UIDelayedAction : NSObject {
    SEL m_action;
    CGFloat m_delay;
    NSTimer *m_timer;
    NSString *m_runLoopMode;
}


@property (readonly) BOOL _canceled; // ivar: m_canceled
@property (readonly) NSDate *_startDate; // ivar: m_startDate
@property (retain) id *target; // ivar: m_target
@property (retain) id *userInfo; // ivar: m_userInfo


-(BOOL)scheduled;
-(CGFloat)delay;
-(id)init;
-(id)initWithTarget:(id)arg0 action:(SEL)arg1 userInfo:(id)arg2 delay:(CGFloat)arg3 ;
-(id)initWithTarget:(id)arg0 action:(SEL)arg1 userInfo:(id)arg2 delay:(CGFloat)arg3 mode:(id)arg4 ;
-(void)cancel;
-(void)dealloc;
-(void)timerFired:(id)arg0 ;
-(void)touch;
-(void)touchWithDelay:(CGFloat)arg0 ;
-(void)unschedule;


@end


#endif