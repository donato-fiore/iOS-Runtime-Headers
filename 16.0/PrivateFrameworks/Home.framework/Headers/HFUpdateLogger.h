// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFUPDATELOGGER_H
#define HFUPDATELOGGER_H

@class NSString, NSTimer, NSDate;
@protocol OS_os_activity;

#import <Foundation/Foundation.h>


@interface HFUpdateLogger : NSObject

@property (retain, nonatomic) NSString *clientDescription; // ivar: _clientDescription
@property (nonatomic) BOOL didReachSoftTimeout; // ivar: _didReachSoftTimeout
@property (retain, nonatomic) NSObject<OS_os_activity> *loggerActivity; // ivar: _loggerActivity
@property (nonatomic) CGFloat softTimeoutInterval; // ivar: _softTimeoutInterval
@property (retain, nonatomic) NSTimer *softTimeoutTimer; // ivar: _softTimeoutTimer
@property (retain, nonatomic) NSDate *startDate; // ivar: _startDate


+(id)history;
+(id)runningLoggers;
-(id)description;
-(id)initWithTimeout:(CGFloat)arg0 description:(id)arg1 ;
-(void)_handleTimeout:(id)arg0 ;
-(void)finish;


@end


#endif