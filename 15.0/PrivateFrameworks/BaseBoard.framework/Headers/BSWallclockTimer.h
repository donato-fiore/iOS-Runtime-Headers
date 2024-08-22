// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BSWALLCLOCKTIMER_H
#define BSWALLCLOCKTIMER_H

@class NSString;
@protocol BSTimerScheduleQuerying, BSCancellable, BSInvalidatable;

#import <Foundation/Foundation.h>

#import "BSDispatchTimer.h"

@interface BSWallclockTimer : NSObject <BSTimerScheduleQuerying, BSCancellable, BSInvalidatable>

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
-(void)scheduleForDate:(id)arg0 leewayInterval:(CGFloat)arg1 queue:(id)arg2 handler:(id)arg3 ;


@end


#endif