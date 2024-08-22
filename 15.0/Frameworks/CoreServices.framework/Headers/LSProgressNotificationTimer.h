// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef LSPROGRESSNOTIFICATIONTIMER_H
#define LSPROGRESSNOTIFICATIONTIMER_H

@class NSMutableSet, NSDate, NSTimer;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface LSProgressNotificationTimer : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}


@property SEL appObserverSelector; // ivar: _appObserverSelector
@property (retain, nonatomic) NSMutableSet *applications; // ivar: _applications
@property (retain, nonatomic) NSDate *lastFiredDate; // ivar: _lastFiredDate
@property (readonly, nonatomic) CGFloat latency; // ivar: _latency
@property (readonly, nonatomic) CGFloat minInterval; // ivar: _minInterval
@property (retain, nonatomic) NSTimer *timer; // ivar: _timer


-(id)description;
-(id)initWithQueue:(id)arg0 ;
-(void)addApplication:(id)arg0 ;
-(void)clear;
-(void)dealloc;
-(void)notifyObservers:(id)arg0 withApplications:(id)arg1 ;
-(void)removeApplication:(id)arg0 ;
-(void)sendMessage:(id)arg0 ;
-(void)stopTimer;


@end


#endif