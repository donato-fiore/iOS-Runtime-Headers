// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AXSSRATELIMITINGLOGGER_H
#define AXSSRATELIMITINGLOGGER_H

@class NSDate;
@protocol OS_os_log;

#import <Foundation/Foundation.h>


@interface AXSSRateLimitingLogger : NSObject

@property (retain, nonatomic) NSDate *_dateSinceLastLog; // ivar: __dateSinceLastLog
@property (retain, nonatomic) NSObject<OS_os_log> *categoryLog; // ivar: _categoryLog
@property (readonly, nonatomic) unsigned char logLevel; // ivar: _logLevel
@property (readonly, nonatomic) CGFloat timeInterval; // ivar: _timeInterval


-(BOOL)logString:(id)arg0 ;
-(id)initWithLogLevel:(unsigned char)arg0 categoryLog:(id)arg1 timeInterval:(CGFloat)arg2 ;
-(void)_logStringAtProperLevel:(id)arg0 ;


@end


#endif