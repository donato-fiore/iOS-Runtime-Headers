// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ABVCARDWATCHDOGTIMER_H
#define ABVCARDWATCHDOGTIMER_H

@class NSDate;
@protocol ABVCardTimeProvider;

#import <Foundation/Foundation.h>


@interface ABVCardWatchdogTimer : NSObject

@property (retain, nonatomic) NSDate *startTime; // ivar: _startTime
@property (nonatomic) NSUInteger ticks; // ivar: _ticks
@property (readonly, nonatomic) NSObject<ABVCardTimeProvider> *timeProvider; // ivar: _timeProvider
@property (nonatomic) BOOL valid; // ivar: _valid


+(BOOL)shouldCheckTime;
+(id)timerWithTimeProvider:(id)arg0 ;
-(BOOL)isStarted;
-(BOOL)isValid;
-(id)initWithTimeProvider:(id)arg0 ;
-(void)checkValidity;
-(void)dealloc;
-(void)start;


@end


#endif