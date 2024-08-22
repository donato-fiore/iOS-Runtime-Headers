// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _CDPERFMETRIC_H
#define _CDPERFMETRIC_H

@class NSDate, NSString;

#import <Foundation/Foundation.h>

#import "_CDPerfMetricFamily.h"

@interface _CDPerfMetric : NSObject {
    os_unfair_lock_s _lock;
    NSUInteger _count;
    CGFloat _lastElapsedTime;
    CGFloat _minimumElapsedTime;
    CGFloat _maximumElapsedTime;
    CGFloat _lastUpdateTime;
    NSUInteger _lastResultCount;
    NSUInteger _errorCount;
}


@property (readonly) CGFloat averageElapsedTime;
@property (readonly) NSUInteger count;
@property (readonly) NSUInteger errorCount;
@property (readonly, weak) _CDPerfMetricFamily *family; // ivar: _family
@property (readonly) CGFloat lastElapsedTime;
@property (readonly) NSUInteger lastResultCount;
@property (readonly) NSDate *lastUpdate;
@property (readonly) CGFloat maximumElapsedTime;
@property (readonly) CGFloat minimumElapsedTime;
@property (readonly) NSString *name; // ivar: _name
@property (readonly) NSString *string; // ivar: _string
@property (readonly) CGFloat totalElapsedTime; // ivar: _totalElapsedTime


-(id)initWithName:(id)arg0 string:(id)arg1 family:(id)arg2 ;


@end


#endif