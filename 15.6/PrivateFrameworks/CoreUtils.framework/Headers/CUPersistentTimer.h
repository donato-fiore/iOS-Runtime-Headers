// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CUPERSISTENTTIMER_H
#define CUPERSISTENTTIMER_H

@class NSDate, NSString, PCPersistentTimer;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CUPersistentTimer : NSObject {
    NSDate *_cachedDate;
    CGFloat _cachedInterval;
    CGFloat _cachedLeeway;
    BOOL _cachedRepeating;
    BOOL _cachedUseXPC;
    BOOL _cachedWakeSystem;
    NSString *_identifier;
    BOOL _invalidateCalled;
    PCPersistentTimer *_pcPersistentTimer;
    *LogCategory _ucat;
    BOOL _xpcRegistered;
}


@property (copy, nonatomic) NSDate *date; // ivar: _date
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (nonatomic) CGFloat interval; // ivar: _interval
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (nonatomic) CGFloat leeway; // ivar: _leeway
@property (nonatomic) BOOL repeating; // ivar: _repeating
@property (copy, nonatomic) id *timerHandler; // ivar: _timerHandler
@property (nonatomic) BOOL useXPC; // ivar: _useXPC
@property (nonatomic) BOOL wakeSystem; // ivar: _wakeSystem


-(id)initWithIdentifier:(id)arg0 ;
-(void)_pcTimerFired:(id)arg0 ;
-(void)_start;
-(void)_startPCPersistentTimer;
-(void)_startXPCActivity;
-(void)_xpcTimerFired:(id)arg0 ;
-(void)dealloc;
-(void)start;


@end


#endif