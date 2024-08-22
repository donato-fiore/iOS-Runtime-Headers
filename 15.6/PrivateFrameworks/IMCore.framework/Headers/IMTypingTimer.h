// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMTYPINGTIMER_H
#define IMTYPINGTIMER_H

@class NSDate, NSTimer;
@protocol IMTypingTimerDelegate;

#import <Foundation/Foundation.h>

#import "IMHandle.h"

@interface IMTypingTimer : NSObject

@property (readonly, nonatomic) NSDate *beginDate; // ivar: _beginDate
@property (weak, nonatomic) NSObject<IMTypingTimerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy, nonatomic) IMHandle *handle; // ivar: _handle
@property (readonly, nonatomic) CGFloat timeoutInterval; // ivar: _timeoutInterval
@property (retain, nonatomic) NSTimer *timer; // ivar: _timer
@property (readonly, nonatomic, getter=isValid) BOOL valid;


+(BOOL)shouldAdjustTimeoutIntervalForBeginDate;
-(id)initWithHandle:(id)arg0 beginDate:(id)arg1 timeoutInterval:(CGFloat)arg2 delegate:(id)arg3 ;
-(void)invalidate;
-(void)triggerTimeout;


@end


#endif