// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TIMEANDLATENCYABM_H
#define TIMEANDLATENCYABM_H

@class NSDate;

#import <Foundation/Foundation.h>


@interface TimeAndLatencyAbm : NSObject

@property CGFloat latency; // ivar: _latency
@property (retain) NSDate *time; // ivar: _time


-(id)initWithTime:(id)arg0 andLatency:(CGFloat)arg1 ;


@end


#endif