// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBWAKELOGGER_H
#define SBWAKELOGGER_H

@class NSString, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface SBWakeLogger : NSObject {
    os_unfair_lock_s _lock;
}


@property (nonatomic) NSInteger activeWakeLoggerSource; // ivar: _activeWakeLoggerSource
@property (readonly, copy, nonatomic) NSString *activeWakeSourceDescription;
@property (nonatomic) unsigned int backlightService; // ivar: _backlightService
@property (nonatomic) NSInteger homeButtonType; // ivar: _homeButtonType
@property (nonatomic) unsigned int timesyncService; // ivar: _timesyncService
@property (nonatomic) BOOL trackingWake; // ivar: _trackingWake
@property (retain, nonatomic) NSMutableDictionary *wakeSouceToEventDict; // ivar: _wakeSouceToEventDict


+(id)sharedInstance;
-(id)init;
-(void)_lock_wakeDidBegin:(NSInteger)arg0 ;
-(void)dealloc;
-(void)lockDidBegin;
-(void)wakeDidBegin:(NSInteger)arg0 ;
-(void)wakeDidEnd;
-(void)wakeMayBegin:(NSInteger)arg0 withTimestamp:(NSUInteger)arg1 ;


@end


#endif