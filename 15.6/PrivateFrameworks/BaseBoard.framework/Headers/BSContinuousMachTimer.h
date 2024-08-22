// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BSCONTINUOUSMACHTIMER_H
#define BSCONTINUOUSMACHTIMER_H

@class NSString;
@protocol BSTimerScheduleQuerying, BSCancellable, BSInvalidatable;

#import <Foundation/Foundation.h>

#import "BSDispatchTimer.h"

@interface BSContinuousMachTimer : NSObject <BSTimerScheduleQuerying, BSCancellable, BSInvalidatable>

 {
    BSDispatchTimer *_timer;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic, getter=isScheduled) BOOL scheduled;
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGFloat timeRemaining;


-(id)initWithIdentifier:(id)arg0 ;
-(void)cancel;
-(void)invalidate;
-(void)scheduleRepeatingWithFireInterval:(CGFloat)arg0 repeatInterval:(CGFloat)arg1 leewayInterval:(CGFloat)arg2 queue:(id)arg3 handler:(id)arg4 ;
-(void)scheduleWithFireInterval:(CGFloat)arg0 leewayInterval:(CGFloat)arg1 queue:(id)arg2 handler:(id)arg3 ;


@end


#endif