// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCLOCKPULSER_H
#define TSCLOCKPULSER_H

@class NSString;
@protocol TSClockClient;

#import <Foundation/Foundation.h>

#import "TSClock.h"

@interface TSClockPulser : NSObject <TSClockClient>

 {
    TSClock *_pulseClock;
    BOOL _hasLastTimestamp;
    BOOL _holdoverMode;
    int _lastLockState;
    BOOL _threadIsRunning;
    BOOL _threadShouldBeRunning;
    unsigned int _startSemaphore;
    unsigned int _stopSemaphore;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *pulseHandler; // ivar: _pulseHandler
@property (nonatomic) int pulseOffset; // ivar: _pulseOffset
@property (nonatomic) NSUInteger pulsePeriod; // ivar: _pulsePeriod
@property (readonly) Class superclass;
@property (nonatomic) BOOL useRealtimePriority; // ivar: _useRealtimePriority


-(BOOL)startPulsing;
-(BOOL)stopPulsing;
-(id)init;
-(id)initWithPulseClock:(id)arg0 ;
-(void)dealloc;
-(void)didBeginClockGrandmasterChangeForClock:(id)arg0 ;
-(void)didChangeClockMasterForClock:(id)arg0 ;
-(void)didChangeLockStateTo:(int)arg0 forClock:(id)arg1 ;
-(void)didEndClockGrandmasterChangeForClock:(id)arg0 ;
-(void)pulseThread;


@end


#endif