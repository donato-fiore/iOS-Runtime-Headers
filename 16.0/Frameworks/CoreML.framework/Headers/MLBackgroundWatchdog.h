// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MLBACKGROUNDWATCHDOG_H
#define MLBACKGROUNDWATCHDOG_H

@protocol OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface MLBackgroundWatchdog : NSObject

@property (retain) NSObject<OS_dispatch_source> *timer; // ivar: _timer


+(id)watchdogWithTimeout:(CGFloat)arg0 label:(id)arg1 queue:(id)arg2 ;
+(id)watchdogWithTimeout:(CGFloat)arg0 queue:(id)arg1 ;
-(void)dealloc;
-(void)invalidate;


@end


#endif